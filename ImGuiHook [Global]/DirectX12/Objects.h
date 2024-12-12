#pragma once

#include "SDK.hpp"
namespace Objects
{
    SDK::UWorld* gWorld = nullptr;
    SDK::UEngine* gEngine = nullptr;
    SDK::ULocalPlayer* LocalPlayer = nullptr;
    SDK::APlayerController* PlayerController = nullptr;
    SDK::ULocalPlayer* LocalCharacter = nullptr;
    SDK::AActor* Actors = nullptr;  // Correct definition for Actors
    SDK::AHUD* PlayerHUD = nullptr;
    SDK::UGameInstance* GameInstance = nullptr;
    SDK::APlayerCameraManager* PlayerCameraManager = nullptr;
    SDK::AMarvelPlayerController* PlayerIngameController = nullptr;
}


namespace objectsINIT
{
    void SetgWorld()
    {
        SDK::UWorld* gWorld = SDK::UWorld::GetWorld();
        if (gWorld)
            Objects::gWorld = gWorld;
    }

    void SetGEngine()
    {
        SDK::UEngine* gEngine = SDK::UEngine::GetEngine();
        if (gEngine)
            Objects::gEngine = gEngine;
    }

    void SetLocalPlayer()
    {
        if (Objects::gWorld && Objects::gWorld->OwningGameInstance && Objects::gWorld->OwningGameInstance->LocalPlayers)
        {
            SDK::ULocalPlayer* localPlayer = Objects::gWorld->OwningGameInstance->LocalPlayers[0];
            if (localPlayer)
                Objects::LocalPlayer = localPlayer;
        }
    }

    void SetPlayerController()
    {
        if (Objects::LocalPlayer && Objects::LocalPlayer->PlayerController)
        {
            Objects::PlayerController = Objects::LocalPlayer->PlayerController;
        }
    }





    void SetHUD()
    {
        if (Objects::PlayerController && Objects::PlayerController->MyHUD)
        {
            Objects::PlayerHUD = Objects::PlayerController->MyHUD;
        }
    }

    void SetGameInstance()
    {
        if (Objects::gWorld && Objects::gWorld->OwningGameInstance)
        {
            Objects::GameInstance = Objects::gWorld->OwningGameInstance;
        }
    }

    void SetPlayerCameraManager()
    {
        if (Objects::PlayerController && Objects::PlayerController->PlayerCameraManager)
        {
            Objects::PlayerCameraManager = Objects::PlayerController->PlayerCameraManager;
        }
    }

    void InitializeAll()
    {
        SetgWorld();
        SetGEngine();
        SetLocalPlayer();
        SetPlayerController();
        SetHUD();
        SetGameInstance();
        SetPlayerCameraManager();
    }




    bool CheckAllPointers()
    {
        InitializeAll();

        return Objects::gWorld && Objects::gEngine && Objects::LocalPlayer && Objects::PlayerController &&
            Objects::LocalCharacter && Objects::Actors && Objects::PlayerHUD && Objects::GameInstance && Objects::PlayerCameraManager;
    }




    // Get the camera's current rotation
    SDK::FRotator GetCameraRotation()
    {
        if (Objects::PlayerCameraManager)
            return Objects::PlayerCameraManager->GetCameraRotation();
        return SDK::FRotator{ 0, 0, 0 };
    }

    // Get the camera's current location
    SDK::FVector GetCameraLocation()
    {
        if (Objects::PlayerCameraManager)
            return Objects::PlayerCameraManager->GetCameraLocation();
        return SDK::FVector{ 0, 0, 0 };
    }


    // Set the player's control rotation
    void SetControlRotation(const SDK::FRotator& rotation)
    {
        if (Objects::PlayerController)
        {
            Objects::PlayerController->SetControlRotation(rotation);
        }
    }






}
