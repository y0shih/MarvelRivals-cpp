#pragma once
#include <windows.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <map>
#include <TlHelp32.h>
#include "SDK.hpp"

#include <fstream>
#include <sstream>
#include <iostream>
#include <filesystem>
#include <cstdarg>
#include <cstring>

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
SDK::AMarvelBaseCharacter* BaseClass; 
SDK::UKismetMathLibrary* MathLib;
SDK::FVector2D cfg_ESPBox = { 20, 40 };
float cfg_DistanceScale = 2324.0f;
SDK::AActor* Aimbot_Target;


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


std::unordered_map<int, std::vector<int>> IDBoneMap = { };
bool BonesChanged = false;


std::unordered_map<int, std::string> IDNameMap =
{};

float cfg_AimbotFOV = 360.0f;

SDK::AActor* GetClosestEnemy(int& ID);

