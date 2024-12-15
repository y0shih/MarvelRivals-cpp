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

// Link the appropriate Detours library (.lib file)
#pragma comment(lib, "detours.lib")


bool bDrawFov = false;


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
struct Colors {
    static const ImColor Black;
    static const ImColor Green;
};

const ImColor Colors::Black = ImColor(0, 0, 0);
const ImColor Colors::Green = ImColor(0, 255, 0, 255);

static bool drawBones = false;


inline void DrawLine(ImVec2 A, ImVec2 B, ImColor color, bool outline = true, float t = 1.f)
{
    ImDrawList* draw_list = ImGui::GetForegroundDrawList();
    if (!outline)
        draw_list->AddLine(A, B, color, t);
    else
    {
        draw_list->AddLine(A, B, Colors::Black, t + 1);
        draw_list->AddLine(A, B, color, t);
    }
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




#include <sstream>
#include <fstream>  
#include <cstdarg>  
#include <filesystem>

#include <fstream>
#include <sstream>
#include <iostream>
#include <filesystem>
#include <cstdarg>
#include <cstring>

void LogMessage(const char* format, ...) {
    std::ostringstream oss;

    va_list args;
    va_start(args, format);

    char buffer[256];
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    oss << buffer;

    std::filesystem::path log_file_path = "C:\\aimbot_log.txt"; // Set log file name and path

    std::ofstream log_file(log_file_path, std::ios::app);
    if (log_file.is_open()) {
        log_file << oss.str() << std::endl;
    }
    else {
        std::cerr << "Failed to open log file at C:\\" << std::endl;
    }
}




SDK::AActor* closest_actor = nullptr;
float aimbot_distance = 100.0f;
SDK::FVector closest_actor_head;
SDK::FRotator closest_actor_rotation;
float MaxDistance = 100.00f;
SDK::UWorld* World = SDK::UWorld::GetWorld();
SDK::ULevel* Level = World->PersistentLevel;
SDK::APlayerController* MyController = World->OwningGameInstance->LocalPlayers.Num() > 0 ?
World->OwningGameInstance->LocalPlayers[0]->PlayerController : nullptr;
SDK::USkinnedMeshComponent* mesh = nullptr;
bool bAim = false;
bool bAimbotEnabled = false;
bool bVisCheck = false;

bool bTpToEnemies = false;
float AimbotFov = 50.0f;
float cfg_AimbotSmoothing = 2.0f;
static int currentTargetID;
static int Aimbot_BoneIndex;



inline std::vector<SDK::AActor*> PlayerList{};
inline std::vector<SDK::AActor*> WorldActors{};


namespace gl {
    namespace Aimbot {
        bool Aimbot = false;
        float Fov = 50.0f;

    }

    namespace Exploits {
        bool SuperSpeed = false;
        bool FastFly = false;
        bool FastAcceleration = false;
        bool GodModee = false;
        bool GodMode = false;
        bool Ammo = false;
        float MaxSpeed = 10000.0f;
        bool AddHealth = false;
        bool AddFood = false;
        bool bMagicBullet = false;
        bool WeaponSkin = false;
    }
}

std::string VectorToString(const SDK::FVector& vec)
{
    return "X: " + std::to_string(vec.X) + ", Y: " + std::to_string(vec.Y) + ", Z: " + std::to_string(vec.Z);
}

std::string Vector2DToString(const SDK::FVector2D& vec)
{
    return "X: " + std::to_string(vec.X) + ", Y: " + std::to_string(vec.Y);
}

std::string RotatorToString(const SDK::FRotator& rot)
{
    return "Pitch: " + std::to_string(rot.Pitch) + ", Yaw: " + std::to_string(rot.Yaw) + ", Roll: " + std::to_string(rot.Roll);
}
#include <algorithm>

#include <chrono>
std::vector<SDK::AActor*> PlayerSet;
std::chrono::steady_clock::time_point LastUpdateTime;
const std::chrono::duration<float> UpdateInterval = std::chrono::seconds(10); 

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
    const float deltaTime = 1.0f / 60.0f; // Assuming 60 FPS for now
    SDK::FRotator smoothedRotation = SDK::UKismetMathLibrary::RInterpTo(currentRotation, targetRotation, deltaTime, smoothFactor);

    MyController->SetControlRotation(smoothedRotation);
}







void DrawESP();

void GameLoop()
{
    SDK::AActor* actor_list{};
    SDK::TArray<SDK::AActor*> actors{};

    World = SDK::UWorld::GetWorld();
    SDK::UEngine* gEngine = SDK::UEngine::GetEngine();
    

    if (!World)
    {
        LogMessage("World is null.");
        return;
    }

    if (LastUpdateTime.time_since_epoch().count() == 0)
    {
        LastUpdateTime = std::chrono::steady_clock::now();
    }

    UpdatePlayerList();

    if (PlayerSet.size() == 0)
    {
        LogMessage("No players in PlayerSet");
        return;
    }

    MyController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
    if (!MyController)
    {
        LogMessage("MyController is null.");
        return;
    }

    SDK::AActor* closest_actor = nullptr;
    SDK::FRotator closest_actor_rotation{};
    SDK::FVector closest_actor_head{};
    float MaxDistance = FLT_MAX;

    // Iterate through all players
    for (SDK::AActor* actor : PlayerSet)
    {
        if (!actor || !actor->RootComponent) continue;

        SDK::AMarvelBaseCharacter* humanCharacter = static_cast<SDK::AMarvelBaseCharacter*>(actor);
        if (!humanCharacter) continue;

        auto mesh = humanCharacter->GetMesh();
        SDK::FVector head_bone_pos = mesh->GetSocketLocation(StrToName("Head"));
        SDK::FVector feet_bone_pos = mesh->GetSocketLocation(StrToName("Leg"));
        SDK::FVector feet_middle_pos = { feet_bone_pos.X, feet_bone_pos.Y, head_bone_pos.Z };

        SDK::FVector2D Bottom{}, Top{};
        if (MyController->ProjectWorldLocationToScreen(feet_middle_pos, &Bottom, true) &&
            MyController->ProjectWorldLocationToScreen(head_bone_pos, &Top,true ))
        {
            const float h = std::abs(Top.Y - Bottom.Y);
            const float w = h * 0.2f;

            if (gl::Aimbot::Aimbot)
            {
                SDK::FVector CameraLocation = MyController->PlayerCameraManager->GetCameraLocation();
                SDK::FRotator rot = SDK::UKismetMathLibrary::FindLookAtRotation(CameraLocation, head_bone_pos);

                SDK::FVector2D screen_middle = { 1920 / 2, 1080 / 2 };
                float aimbot_distance = SDK::UKismetMathLibrary::Distance2D(Top, screen_middle);

                if (aimbot_distance < MaxDistance)
                {
                    MaxDistance = aimbot_distance;
                    closest_actor = actor;
                    closest_actor_rotation = rot;
                    closest_actor_head = head_bone_pos;
                }
            }
        }
    }

    if (closest_actor && gl::Aimbot::Aimbot)
    {
        if (GetAsyncKeyState(VK_RBUTTON)) // If the right mouse button is pressed
        {
            LogMessage("Right mouse button is pressed");

            SmoothAim(MyController->GetControlRotation(), closest_actor_rotation, 20.0f);

           
        }
    }


    SDK::AMarvelBaseCharacter* LocalCharacter = MyController ? reinterpret_cast<SDK::AMarvelBaseCharacter*>(MyController->Character) : nullptr;

    

    
}




void DrawTextAt(const char* text, ImVec2 position, ImColor color, bool center)
{
    ImDrawList* drawList = ImGui::GetForegroundDrawList();
    ImFont* font = ImGui::GetFont();

    if (font == nullptr || drawList == nullptr) return;

    if (center)
    {
        ImVec2 textSize = font->CalcTextSizeA(ImGui::GetFontSize(), FLT_MAX, 0.0f, text);
        position.x -= textSize.x * 0.5f;
        position.y -= textSize.y * 0.5f;
    }

    drawList->AddText(position, color, text);
}

class drawings
{
public:
    void DrawBox(int X, int Y, int W, int H, const ImU32& color, int thickness);
};

void drawings::DrawBox(int X, int Y, int W, int H, const ImU32& color, int thickness)
{
    float lineW = (W / 1);
    float lineH = (H / 1);
    ImDrawList* Drawlist = ImGui::GetForegroundDrawList();
    //black outlines
    Drawlist->AddLine(ImVec2(X, Y), ImVec2(X, Y + lineH), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), 3);
    Drawlist->AddLine(ImVec2(X, Y), ImVec2(X + lineW, Y), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), 3);
    Drawlist->AddLine(ImVec2(X + W - lineW, Y), ImVec2(X + W, Y), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), 3);
    Drawlist->AddLine(ImVec2(X + W, Y), ImVec2(X + W, Y + lineH), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), 3);
    Drawlist->AddLine(ImVec2(X, Y + H - lineH), ImVec2(X, Y + H), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), 3);
    Drawlist->AddLine(ImVec2(X, Y + H), ImVec2(X + lineW, Y + H), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), 3);
    Drawlist->AddLine(ImVec2(X + W - lineW, Y + H), ImVec2(X + W, Y + H), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), 3);
    Drawlist->AddLine(ImVec2(X + W, Y + H - lineH), ImVec2(X + W, Y + H), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), 3);
    //corners
    Drawlist->AddLine(ImVec2(X, Y), ImVec2(X, Y + lineH), ImGui::GetColorU32(color), thickness);
    Drawlist->AddLine(ImVec2(X, Y), ImVec2(X + lineW, Y), ImGui::GetColorU32(color), thickness);
    Drawlist->AddLine(ImVec2(X + W - lineW, Y), ImVec2(X + W, Y), ImGui::GetColorU32(color), thickness);
    Drawlist->AddLine(ImVec2(X + W, Y), ImVec2(X + W, Y + lineH), ImGui::GetColorU32(color), thickness);
    Drawlist->AddLine(ImVec2(X, Y + H - lineH), ImVec2(X, Y + H), ImGui::GetColorU32(color), thickness);
    Drawlist->AddLine(ImVec2(X, Y + H), ImVec2(X + lineW, Y + H), ImGui::GetColorU32(color), thickness);
    Drawlist->AddLine(ImVec2(X + W - lineW, Y + H), ImVec2(X + W, Y + H), ImGui::GetColorU32(color), thickness);
    Drawlist->AddLine(ImVec2(X + W, Y + H - lineH), ImVec2(X + W, Y + H), ImGui::GetColorU32(color), thickness);
}



inline drawings* draw;
void DrawESP()
{
    SDK::UWorld** _UWorld;
    SDK::APlayerController* PlayerController;
    SDK::ULocalPlayer* LocalPlayer;
    SDK::UGameInstance* OwningGameInstance;
    SDK::UGameViewportClient* GameViewportClient;
    SDK::AGameStateBase* GameState;
    SDK::AActor* obj;
    SDK::UGameplayStatics* UGStatics;
    SDK::UKismetSystemLibrary* KismetSystemLib;
    SDK::APawn* MyPlayer;
    SDK::AMarvelBaseCharacter* BaseClass; //change a class for each game
    SDK::UKismetMathLibrary* MathLib;
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
            if (!BaseClass) continue;

            SDK::FVector Location = BaseClass->K2_GetActorLocation();


            auto PlayerName = BaseClass->PlayerState->GetPlayerName();
            bool IsVisible = PlayerController->LineOfSightTo(obj, { 0,0,0 }, false); //visible check

         
            SDK::FVector HeadLoc = BaseClass->GetMesh()->GetSocketLocation(StrToName("Head"));
            SDK::FVector RootLoc = BaseClass->GetMesh()->GetSocketLocation(StrToName("root"));



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



int init = 1;



bool cfg_InstantReload = false;

void RenderESP()
{


    ImGui::Checkbox("Aimbot", &gl::Aimbot::Aimbot);
    ImGui::Checkbox("Esp", &bShowESP);



}


#include <cmath>





bool ShowMenu = false;
bool ImGui_Initialised = false;

void UnloadDLL(HMODULE Module) {
    // Clean up DirectX resources

    // Free the console if it was allocated
    fclose(stdout);
    fclose(stdin);
    FreeConsole();

    // Unload the DLL and exit the thread
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
    // Scale all sizes by 50% or adjust as needed

    ImGui_ImplDX12_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();



    // Main Overlay and Menu
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

    // Draw ESP if enabled
    if (bShowESP)
    {
        DrawESP();
    }

    // Check for adding health in the game loop
    if (gl::Aimbot::Aimbot)
    {
        GameLoop(); 
    }

    // Toggle menu visibility with INSERT key
    if (GetAsyncKeyState(VK_INSERT) & 1) ShowMenu = !ShowMenu;
    ImGui::GetIO().MouseDrawCursor = ShowMenu; // Show cursor when menu is open

    // Main menu content
    if (ShowMenu)
    {
        // Unload DLL with END key
        if (GetAsyncKeyState(VK_END) & 1)
        {
            UnloadDLL(Process::Module);
        }

        // Create the menu UI
        ImGui::SetNextWindowPos(ImVec2(100, 100), ImGuiCond_FirstUseEver); // Adjust position as necessary
        ImGui::SetNextWindowSize(ImVec2(400, 300), ImGuiCond_FirstUseEver); // Adjust size as necessary
        ImGui::SetNextWindowBgAlpha(0.5f);  // Semi-transparent background to make it visible if something else overlaps

        ImGui::Begin(" Internal [DEV]", nullptr, ImGuiWindowFlags_NoCollapse);
   

        // Main tabs
        if (ImGui::BeginTabBar("MainTabs"))
        {
            // Misc Tab
            if (ImGui::BeginTabItem("Misc"))
            {
                RenderESP(); // Render ESP settings and options
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
        UnloadDLL(hModule); // Call your unload function here

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
extern "C" __declspec(dllexport) int NextHook(int code, WPARAM wParam, LPARAM lParam) {
    return CallNextHookEx(NULL, code, wParam, lParam);
}













