#include "DirectX12.h"
#include "DirectX12Demo.h"
#include "Objects.h"
#include "ZeroGui.hpp"
#include "../Directories/ImGui/imgui.h"
#include "../Directories/ImGui/imgui_impl_dx12.h"
#include "../Directories/ImGui/imgui_impl_win32.h"
#include <cmath>
#include "SDK/Engine_classes.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK.hpp"
#include <fstream>  

#include <locale>
#include <codecvt>
#include <string>
#include <vector>
#pragma comment(lib,"libMinHook.x64.lib")

#include <MinHook.h>
#include "detours.h"


#pragma comment(lib, "detours.lib")
#include "includes.h"




inline SDK::FName StrToName(std::string str)
{
    std::wstring wstr(str.begin(), str.end());
    const wchar_t* wstr_cstr = wstr.c_str();

    return SDK::UKismetStringLibrary::Conv_StringToName(SDK::FString(TEXT(wstr_cstr)));
}
inline SDK::FName StrCToName(const wchar_t* str)
{
    return SDK::UKismetStringLibrary::Conv_StringToName(SDK::FString(TEXT(str)));
}





bool bShowESP = false;

template <typename To, typename From>
To* SafeCast(From* source)
{
    return source && source->IsA(To::StaticClass()) ? static_cast<To*>(source) : nullptr;
}
bool WorldToScreen(const SDK::FVector& worldLoc, SDK::FVector2D* screenPos)
{
    return Objects::LocalPlayer->PlayerController->ProjectWorldLocationToScreen(worldLoc, screenPos, true);
}





void LogMessage(const char* format, ...) {
    std::ostringstream oss;

    va_list args;
    va_start(args, format);

    char buffer[256];
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    oss << buffer;

    std::filesystem::path log_file_path = "C:\\aimbot_log.txt"; 

    std::ofstream log_file(log_file_path, std::ios::app);
    if (log_file.is_open()) {
        log_file << oss.str() << std::endl;
    }
    else {
        std::cerr << "Failed to open log file at C:\\" << std::endl;
    }
}







float AimbotFov = 50.0f;
float cfg_AimbotSmoothing = 2.0f;
static int currentTargetID;
static int Aimbot_BoneIndex;



inline std::vector<SDK::AActor*> PlayerList{};
inline std::vector<SDK::AActor*> WorldActors{};


namespace gl {
    namespace Aimbot {
        bool Aimbot = false;
     

    }

    namespace Exploits {
        bool cacheBones = false;
       
    }
}




#include <chrono>
std::vector<SDK::AActor*> PlayerSet;
std::chrono::steady_clock::time_point LastUpdateTime;
const std::chrono::duration<float> UpdateInterval = std::chrono::seconds(1); 

void UpdatePlayerList()
{
    auto CurrentTime = std::chrono::steady_clock::now();
    if (CurrentTime - LastUpdateTime < UpdateInterval)
    {
        return; 
    }

    LastUpdateTime = CurrentTime;
    PlayerSet.clear();

    SDK::TArray<SDK::AActor*>& actors = World->PersistentLevel->Actors;
    for (int i = 0; i < actors.Num(); i++)
    {
        SDK::AActor* actor = actors[i];
        if (actor && actor->IsA(SDK::AMarvelBaseCharacter::StaticClass()))
        {
            PlayerSet.push_back(actor);
        }
    }
}



void SmoothAim(SDK::FRotator currentRotation, SDK::FRotator targetRotation, float smoothFactor)
{
    const float deltaTime = 1.0f / 60.0f;
    SDK::FRotator smoothedRotation = SDK::UKismetMathLibrary::RInterpTo(currentRotation, targetRotation, deltaTime, smoothFactor);

    MyController->SetControlRotation(smoothedRotation);
}


void GameLoop()
{

    SDK::UWorld* gWorld = SDK::UWorld::GetWorld();

    if (!gWorld) return;

    OwningGameInstance = gWorld->OwningGameInstance;
    if (!OwningGameInstance) return;

    LocalPlayer = OwningGameInstance->LocalPlayers[0];
    if (!LocalPlayer) return;

    GameViewportClient = LocalPlayer->ViewportClient;
    if (!GameViewportClient) return;

    PlayerController = LocalPlayer->PlayerController;
    if (!PlayerController) return;


    MyPlayer = PlayerController->K2_GetPawn();
    if (!MyPlayer) return;


    constexpr auto HeadSocketName = "Head";
    constexpr auto RootSocketName = "root";

    // Retrieve World
    World = SDK::UWorld::GetWorld();
    if (!World)
    {
        LogMessage("World is null. Exiting GameLoop.");
        return;
    }

    // Initialize PlayerSet is removed, since we are using the player iteration method directly
    if (!World->OwningGameInstance || World->OwningGameInstance->LocalPlayers.Num() == 0)
    {
        LogMessage("Invalid OwningGameInstance or no LocalPlayers. Exiting GameLoop.");
        return;
    }

    MyController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
    if (!MyController)
    {
        LogMessage("MyController is null. Exiting GameLoop.");
        return;
    }

    // Prepare for aimbot calculations
    SDK::AActor* closest_actor = nullptr;
    SDK::FRotator closest_actor_rotation{};
    SDK::FVector closest_actor_head{};
    float MaxDistance = FLT_MAX;

    // Fetch all players from the world
    SDK::TArray<SDK::AActor*> Player;
    UGStatics = (SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass();
    if (!UGStatics)
    {
        LogMessage("UGameplayStatics is null. Exiting GameLoop.");
        return;
    }

    UGStatics->GetAllActorsOfClass(World, SDK::AMarvelBaseCharacter::StaticClass(), &Player);
    if (Player.Num() == 0)
    {
        LogMessage("No players found. Exiting GameLoop.");
        return;
    }

    // Loop through all the players
    for (int i = 0; i < Player.Num(); i++)
    {
        if (!Player.IsValidIndex(i)) continue;

        SDK::AActor* obj = Player[i];
        if (!obj) continue;

        SDK::AMarvelBaseCharacter* BaseClass = (SDK::AMarvelBaseCharacter*)obj;
        if (!BaseClass) continue;

        auto Mesh = BaseClass->GetMesh();
        if (!Mesh) continue;

        if (!Mesh->DoesSocketExist(StrToName(HeadSocketName)) || !Mesh->DoesSocketExist(StrToName(RootSocketName))) continue;

        // Get bone positions
        SDK::FVector head_bone_pos = Mesh->GetSocketLocation(StrToName(HeadSocketName));
        SDK::FVector feet_bone_pos = Mesh->GetSocketLocation(StrToName(RootSocketName));
        SDK::FVector feet_middle_pos = { feet_bone_pos.X, feet_bone_pos.Y, head_bone_pos.Z };

        // Project to screen
        SDK::FVector2D Bottom{}, Top{};
        if (MyController->ProjectWorldLocationToScreen(feet_middle_pos, &Bottom, true) &&
            MyController->ProjectWorldLocationToScreen(head_bone_pos, &Top, true))
        {
            // Calculate dimensions
            const float h = std::abs(Top.Y - Bottom.Y);
            const float w = h * 0.2f;

            // Aimbot logic
            if (gl::Aimbot::Aimbot)
            {
                SDK::FVector CameraLocation = MyController->PlayerCameraManager->GetCameraLocation();
                SDK::FRotator rot = SDK::UKismetMathLibrary::FindLookAtRotation(CameraLocation, head_bone_pos);

                SDK::FVector2D screen_middle = { 1920 / 2, 1080 / 2 };
                float aimbot_distance = SDK::UKismetMathLibrary::Distance2D(Top, screen_middle);

                if (aimbot_distance < MaxDistance)
                {
                    MaxDistance = aimbot_distance;
                    closest_actor = obj;
                    closest_actor_rotation = rot;
                    closest_actor_head = head_bone_pos;
                }
            }
        }
    }

    // Execute aimbot on closest actor
    if (closest_actor && gl::Aimbot::Aimbot)
    {
        if (GetAsyncKeyState(VK_RBUTTON))
        {
            if (!MyController->PlayerCameraManager)
            {
                LogMessage("PlayerCameraManager is null. Exiting aimbot logic.");
                return;
            }

            LogMessage("Right mouse button is pressed.");
            SmoothAim(MyController->GetControlRotation(), closest_actor_rotation, 20.0f);
        }
    }

    // Local character processing
    SDK::AMarvelBaseCharacter* LocalCharacter = MyController
        ? reinterpret_cast<SDK::AMarvelBaseCharacter*>(MyController->Character)
        : nullptr;
    if (!LocalCharacter)
    {
        LogMessage("LocalCharacter is null.");
    }
}


inline drawings* draw;


//CRASHSES on get socket lcoation?!!!
void DrawESP()
{

    int x, y = 0;

        auto& io = ImGui::GetIO();

        SDK::UWorld* gWorld = SDK::UWorld::GetWorld();

        if (!gWorld) return;

        OwningGameInstance = gWorld->OwningGameInstance;
        if (!OwningGameInstance) return;

        LocalPlayer = OwningGameInstance->LocalPlayers[0];
        if (!LocalPlayer) return;

        GameViewportClient = LocalPlayer->ViewportClient;
        if (!GameViewportClient) return;

        PlayerController = LocalPlayer->PlayerController;
        if (!PlayerController) return;

        PlayerController->GetViewportSize(&x, &y);

        MyPlayer = PlayerController->K2_GetPawn();
        if (!MyPlayer) return;

        SDK::TArray<SDK::AActor*> Player;

        UGStatics = (SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass();
        if (!UGStatics) return;

        UGStatics->GetAllActorsOfClass(gWorld, SDK::AMarvelBaseCharacter::StaticClass(), &Player);

        MathLib = (SDK::UKismetMathLibrary*)SDK::UKismetMathLibrary::StaticClass();
        if (!MathLib) return;

        for (int i = 0; i < Player.Num(); i++)
        {
            if (!Player.IsValidIndex(i)) continue;

            obj = Player[i];
            if (!obj) continue;

            BaseClass = (SDK::AMarvelBaseCharacter*)obj;
            if (!BaseClass ) continue;

            auto Mesh = BaseClass->GetMesh();
            if (!Mesh) continue;

            if (!Mesh->DoesSocketExist(StrToName("Head")) || !Mesh->DoesSocketExist(StrToName("root"))) continue;

            SDK::FVector HeadLoc = Mesh->GetSocketLocation(StrToName("Head"));
            SDK::FVector RootLoc = Mesh->GetSocketLocation(StrToName("root"));

            
            SDK::FVector Location = BaseClass->K2_GetActorLocation();


            auto PlayerName = BaseClass->PlayerState->GetPlayerName();
            bool IsVisible = PlayerController->LineOfSightTo(obj, { 0,0,0 }, false);

            SDK::FVector2D head, Bottom;

            if (PlayerController->ProjectWorldLocationToScreen(RootLoc, &Bottom, false) && PlayerController->ProjectWorldLocationToScreen(HeadLoc, &head, false))
            {
         

                float CornerHeight = abs(head.Y - Bottom.Y);
                float CornerWidth = CornerHeight * 0.6f;

               
                    draw->DrawBox(head.X - (CornerWidth / 2), head.Y, CornerWidth, CornerHeight, IsVisible ? ImColor(0, 255, 0) : ImColor(255, 0, 0), 1.0f);
                   
                    ImGui::GetOverlayDrawList()->AddText(ImVec2(head.X, head.Y), IsVisible ? ImColor(0, 255, 0) : ImColor(255, 0, 0), PlayerName.IsValid() ? PlayerName.ToString().c_str() : " ");
            }

            SDK::FVector2D Screen;
            if (PlayerController->ProjectWorldLocationToScreen(Location, &Screen, false))
            {
                ImVec2 Pos(Screen.X, Screen.Y);

               
                    ImGui::GetOverlayDrawList()->AddLine(ImVec2(static_cast<float>(io.DisplaySize.x / 2), static_cast<float>(io.DisplaySize.y)), Pos, ImColor(255, 255, 255), 0.7);
            }
        }

 
}




//try uit? or mayne read/w



void WriteEnemyBonesData() {
    std::ofstream outFile("BoneCache.dat", std::ios::binary);

    if (!outFile) {
        //std::cerr << "Error opening file for writing!" << std::endl;
        return;
    }
    outFile.clear();
    // Write the size of the map first
    size_t mapSize = IDBoneMap.size();
    outFile.write(reinterpret_cast<const char*>(&mapSize), sizeof(mapSize));

    // Write each key-vector pair
    for (const auto& pair : IDBoneMap) {
        // Write the key
        outFile.write(reinterpret_cast<const char*>(&pair.first), sizeof(pair.first));

        // Write the size of the vector
        size_t vectorSize = pair.second.size();
        outFile.write(reinterpret_cast<const char*>(&vectorSize), sizeof(vectorSize));

        // Write the vector elements
        outFile.write(reinterpret_cast<const char*>(pair.second.data()), vectorSize * sizeof(int));
    }

    outFile.close();
}


std::unordered_map<int, std::vector<int>> ReadEnemyBonesData() {
    std::unordered_map<int, std::vector<int>> map;
    std::ifstream inFile("BoneCache.dat", std::ios::binary);

    if (!inFile) {
        return map;
    }

    size_t mapSize = 0;
    inFile.read(reinterpret_cast<char*>(&mapSize), sizeof(mapSize));

    for (size_t i = 0; i < mapSize; ++i) {
        int key;
        size_t vectorSize;
        std::vector<int> value;

        inFile.read(reinterpret_cast<char*>(&key), sizeof(key));

        inFile.read(reinterpret_cast<char*>(&vectorSize), sizeof(vectorSize));

        value.resize(vectorSize);

        inFile.read(reinterpret_cast<char*>(value.data()), vectorSize * sizeof(int));

        map[key] = value;
    }

    inFile.close();
    return map;
}




int init = 1;



bool cfg_InstantReload = false;

void RenderESP()
{
    ImGui::Checkbox("Aimbot", &gl::Aimbot::Aimbot);
    ImGui::Checkbox("Esp", &bShowESP);


}






bool ShowMenu = false;
bool ImGui_Initialised = false;

void UnloadDLL(HMODULE Module) {

    fclose(stdout);
    fclose(stdin);
    FreeConsole();

    FreeLibraryAndExitThread(Module, 0);
}
namespace Process {
    DWORD ID;
    HANDLE Handle;
    HWND Hwnd;
    HMODULE Module;
    WNDPROC WndProc;
    int WindowWidth;
    int WindowHeight;
    LPCSTR Title;
    LPCSTR ClassName;
    LPCSTR Path;
}


namespace DirectX12Interface {
    ID3D12Device* Device = nullptr;
    ID3D12DescriptorHeap* DescriptorHeapBackBuffers;
    ID3D12DescriptorHeap* DescriptorHeapImGuiRender;
    ID3D12GraphicsCommandList* CommandList;
    ID3D12CommandQueue* CommandQueue;

    struct _FrameContext {
        ID3D12CommandAllocator* CommandAllocator;
        ID3D12Resource* Resource;
        D3D12_CPU_DESCRIPTOR_HANDLE DescriptorHandle;
    };

    uintx_t BuffersCounts = -1;
    _FrameContext* FrameContext;
}


extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT APIENTRY WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    if (ShowMenu) {
        ImGui_ImplWin32_WndProcHandler(hwnd, uMsg, wParam, lParam);
        return true;
    }
    return CallWindowProc(Process::WndProc, hwnd, uMsg, wParam, lParam);
}

HRESULT APIENTRY MJPresent(IDXGISwapChain3* pSwapChain, UINT SyncInterval, UINT Flags) {
    if (!ImGui_Initialised) {
        if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D12Device), (void**)&DirectX12Interface::Device))) {
            ImGui::CreateContext();

            ImGuiIO& io = ImGui::GetIO(); (void)io;
            ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantTextInput || ImGui::GetIO().WantCaptureKeyboard;
            io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
            ImGui::GetIO().MouseDrawCursor = ShowMenu;


            DXGI_SWAP_CHAIN_DESC Desc;
            pSwapChain->GetDesc(&Desc);
            Desc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
            Desc.OutputWindow = Process::Hwnd;
            Desc.Windowed = ((GetWindowLongPtr(Process::Hwnd, GWL_STYLE) & WS_POPUP) != 0) ? false : true;

            DirectX12Interface::BuffersCounts = Desc.BufferCount;
            DirectX12Interface::FrameContext = new DirectX12Interface::_FrameContext[DirectX12Interface::BuffersCounts];

            D3D12_DESCRIPTOR_HEAP_DESC DescriptorImGuiRender = {};
            DescriptorImGuiRender.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
            DescriptorImGuiRender.NumDescriptors = DirectX12Interface::BuffersCounts;
            DescriptorImGuiRender.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;

            if (DirectX12Interface::Device->CreateDescriptorHeap(&DescriptorImGuiRender, IID_PPV_ARGS(&DirectX12Interface::DescriptorHeapImGuiRender)) != S_OK)
                return oPresent(pSwapChain, SyncInterval, Flags);

            ID3D12CommandAllocator* Allocator;
            if (DirectX12Interface::Device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&Allocator)) != S_OK)
                return oPresent(pSwapChain, SyncInterval, Flags);

            for (size_t i = 0; i < DirectX12Interface::BuffersCounts; i++) {
                DirectX12Interface::FrameContext[i].CommandAllocator = Allocator;
            }

            if (DirectX12Interface::Device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, Allocator, NULL, IID_PPV_ARGS(&DirectX12Interface::CommandList)) != S_OK ||
                DirectX12Interface::CommandList->Close() != S_OK)
                return oPresent(pSwapChain, SyncInterval, Flags);

            D3D12_DESCRIPTOR_HEAP_DESC DescriptorBackBuffers;
            DescriptorBackBuffers.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
            DescriptorBackBuffers.NumDescriptors = DirectX12Interface::BuffersCounts;
            DescriptorBackBuffers.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
            DescriptorBackBuffers.NodeMask = 1;

            if (DirectX12Interface::Device->CreateDescriptorHeap(&DescriptorBackBuffers, IID_PPV_ARGS(&DirectX12Interface::DescriptorHeapBackBuffers)) != S_OK)
                return oPresent(pSwapChain, SyncInterval, Flags);

            const auto RTVDescriptorSize = DirectX12Interface::Device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
            D3D12_CPU_DESCRIPTOR_HANDLE RTVHandle = DirectX12Interface::DescriptorHeapBackBuffers->GetCPUDescriptorHandleForHeapStart();

            for (size_t i = 0; i < DirectX12Interface::BuffersCounts; i++) {
                ID3D12Resource* pBackBuffer = nullptr;
                DirectX12Interface::FrameContext[i].DescriptorHandle = RTVHandle;
                pSwapChain->GetBuffer(i, IID_PPV_ARGS(&pBackBuffer));
                DirectX12Interface::Device->CreateRenderTargetView(pBackBuffer, nullptr, RTVHandle);
                DirectX12Interface::FrameContext[i].Resource = pBackBuffer;
                RTVHandle.ptr += RTVDescriptorSize;
            }

            ImGui_ImplWin32_Init(Process::Hwnd);
            ImGui_ImplDX12_Init(DirectX12Interface::Device, DirectX12Interface::BuffersCounts, DXGI_FORMAT_R8G8B8A8_UNORM, DirectX12Interface::DescriptorHeapImGuiRender, DirectX12Interface::DescriptorHeapImGuiRender->GetCPUDescriptorHandleForHeapStart(), DirectX12Interface::DescriptorHeapImGuiRender->GetGPUDescriptorHandleForHeapStart());
            ImGui_ImplDX12_CreateDeviceObjects();
            ImGui::GetIO().ImeWindowHandle = Process::Hwnd;
            Process::WndProc = (WNDPROC)SetWindowLongPtr(Process::Hwnd, GWLP_WNDPROC, (__int3264)(LONG_PTR)WndProc);
        }
        ImGui_Initialised = true;
    }

    if (DirectX12Interface::CommandQueue == nullptr)
        return oPresent(pSwapChain, SyncInterval, Flags);

    ImGui_ImplDX12_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();



    ImGui::SetNextWindowPos(ImVec2(100, 100), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(ImVec2(1920, 1080), ImGuiCond_FirstUseEver);

    ImGui::Begin("Overlay", nullptr,
        ImGuiWindowFlags_NoTitleBar |
        ImGuiWindowFlags_NoResize |
        ImGuiWindowFlags_NoMove |
        ImGuiWindowFlags_NoScrollbar |
        ImGuiWindowFlags_NoBackground |
        ImGuiWindowFlags_NoFocusOnAppearing |
        ImGuiWindowFlags_NoBringToFrontOnFocus);

    if (bShowESP)
    {
        DrawESP();
    }

    if (gl::Aimbot::Aimbot)
    {
        GameLoop();
    }
    

    if (GetAsyncKeyState(VK_INSERT) & 1) ShowMenu = !ShowMenu;
    ImGui::GetIO().MouseDrawCursor = ShowMenu; // Show cursor when menu is open

    if (ShowMenu)
    {

        if (GetAsyncKeyState(VK_END) & 1)
        {
            UnloadDLL(Process::Module);
        }

        ImGui::SetNextWindowPos(ImVec2(100, 100), ImGuiCond_FirstUseEver); 
        ImGui::SetNextWindowSize(ImVec2(400, 300), ImGuiCond_FirstUseEver); 
        ImGui::SetNextWindowBgAlpha(0.5f);  

        ImGui::Begin(" Internal [DEV]", nullptr, ImGuiWindowFlags_NoCollapse);
   

        if (ImGui::BeginTabBar("MainTabs"))
        {
            if (ImGui::BeginTabItem("Misc"))
            {
                RenderESP(); 
                ImGui::EndTabItem();
            }
            ImGui::EndTabBar();
        }

        ImGui::End();
    }

    ImGui::End();
    ImGui::EndFrame();



    DirectX12Interface::_FrameContext& CurrentFrameContext = DirectX12Interface::FrameContext[pSwapChain->GetCurrentBackBufferIndex()];
    CurrentFrameContext.CommandAllocator->Reset();

    D3D12_RESOURCE_BARRIER Barrier;
    Barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    Barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
    Barrier.Transition.pResource = CurrentFrameContext.Resource;
    Barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    Barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
    Barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;

    DirectX12Interface::CommandList->Reset(CurrentFrameContext.CommandAllocator, nullptr);
    DirectX12Interface::CommandList->ResourceBarrier(1, &Barrier);
    DirectX12Interface::CommandList->OMSetRenderTargets(1, &CurrentFrameContext.DescriptorHandle, FALSE, nullptr);
    DirectX12Interface::CommandList->SetDescriptorHeaps(1, &DirectX12Interface::DescriptorHeapImGuiRender);

    ImGui::Render();
    ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData(), DirectX12Interface::CommandList);
    Barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
    Barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_PRESENT;
    DirectX12Interface::CommandList->ResourceBarrier(1, &Barrier);
    DirectX12Interface::CommandList->Close();
    DirectX12Interface::CommandQueue->ExecuteCommandLists(1, reinterpret_cast<ID3D12CommandList* const*>(&DirectX12Interface::CommandList));
    return oPresent(pSwapChain, SyncInterval, Flags);
}


void MJExecuteCommandLists(ID3D12CommandQueue* queue, UINT NumCommandLists, ID3D12CommandList* ppCommandLists) {
    if (!DirectX12Interface::CommandQueue)
        DirectX12Interface::CommandQueue = queue;

    oExecuteCommandLists(queue, NumCommandLists, ppCommandLists);
}

void APIENTRY MJDrawInstanced(ID3D12GraphicsCommandList* dCommandList, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation) {
    return oDrawInstanced(dCommandList, VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
}

void APIENTRY MJDrawIndexedInstanced(ID3D12GraphicsCommandList* dCommandList, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation) {
    return oDrawIndexedInstanced(dCommandList, IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
}

DWORD WINAPI MainThread(LPVOID lpParameter) {
    bool WindowFocus = false;

    while (WindowFocus == false) {

        DWORD ForegroundWindowProcessID;
        GetWindowThreadProcessId(GetForegroundWindow(), &ForegroundWindowProcessID);
        if (GetCurrentProcessId() == ForegroundWindowProcessID) {

            Process::ID = GetCurrentProcessId();
            Process::Handle = GetCurrentProcess();
            Process::Hwnd = GetForegroundWindow();

            RECT TempRect;
            GetWindowRect(Process::Hwnd, &TempRect);
            Process::WindowWidth = TempRect.right - TempRect.left;
            Process::WindowHeight = TempRect.bottom - TempRect.top;

            char TempTitle[MAX_PATH];
            GetWindowText(Process::Hwnd, TempTitle, sizeof(TempTitle));
            Process::Title = TempTitle;

            char TempClassName[MAX_PATH];
            GetClassName(Process::Hwnd, TempClassName, sizeof(TempClassName));
            Process::ClassName = TempClassName;

            char TempPath[MAX_PATH];
            GetModuleFileNameEx(Process::Handle, NULL, TempPath, sizeof(TempPath));
            Process::Path = TempPath;

            WindowFocus = true;
        }
    }
    bool InitHook = false;
    while (InitHook == false) {
        if (DirectX12::Init() == true) {
            CreateHook(54, (void**)&oExecuteCommandLists, MJExecuteCommandLists);
            CreateHook(140, (void**)&oPresent, MJPresent);
            CreateHook(84, (void**)&oDrawInstanced, MJDrawInstanced);
            CreateHook(85, (void**)&oDrawIndexedInstanced, MJDrawIndexedInstanced);
            InitHook = true;
        }
    }
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    switch (dwReason) {
    case DLL_PROCESS_ATTACH:
        Sleep(30);
        DisableThreadLibraryCalls(hModule);
        if (ChecktDirectXVersion(DirectXVersion.D3D12) == true) {
            Process::Module = hModule;
            CreateThread(0, 0, MainThread, 0, 0, 0);
            DisableThreadLibraryCalls(hModule);
        }
        break;
    case DLL_PROCESS_DETACH:
        DisableAll();
        UnloadDLL(hModule); 

        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    default:
        break;
    }
    return TRUE;

    
}

//for hooker
extern "C" __declspec(dllexport) int NextHook(int code, WPARAM wParam, LPARAM lParam) {
    return CallNextHookEx(NULL, code, wParam, lParam);
}













