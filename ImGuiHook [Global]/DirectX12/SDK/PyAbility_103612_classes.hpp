#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103612

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Marvel_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// PythonClass PyAbility_103612.PyConfig_103612
// 0x0010 (0x00A8 - 0x0098)
class UPyConfig_103612 final : public UMarvelAbilityConfig
{
public:
	TArray<struct FGameplayTag>                   OtherAbilityTags;                                  // 0x0098(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_103612">();
	}
	static class UPyConfig_103612* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_103612>();
	}
};
static_assert(alignof(UPyConfig_103612) == 0x000008, "Wrong alignment on UPyConfig_103612");
static_assert(sizeof(UPyConfig_103612) == 0x0000A8, "Wrong size on UPyConfig_103612");
static_assert(offsetof(UPyConfig_103612, OtherAbilityTags) == 0x000098, "Member 'UPyConfig_103612::OtherAbilityTags' has a wrong offset!");

// PythonClass PyAbility_103612.PyAbility_103612
// 0x0000 (0x2558 - 0x2558)
class UPyAbility_103612 : public UAbility_108
{
public:
	void BeginPlay();
	void EndPlay();
	bool CanActivate();
	void NativeOnMontageEvent(const class FString& Tag);
	void OnOtherAbilityEnded(class UGameplayAbility* Ability);
	void OnAirAbilityActivated(class UGameplayAbility* Ability);
	void OnLandedCallback(const struct FHitResult& Hit);
	void OnMovementModeChanged(class ACharacter* MyCharacter, EMovementMode PrevMode, uint8 CustomMode);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103612">();
	}
	static class UPyAbility_103612* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103612>();
	}
};
static_assert(alignof(UPyAbility_103612) == 0x000008, "Wrong alignment on UPyAbility_103612");
static_assert(sizeof(UPyAbility_103612) == 0x002558, "Wrong size on UPyAbility_103612");

}
