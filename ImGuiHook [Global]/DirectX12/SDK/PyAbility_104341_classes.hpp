#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104341

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// PythonClass PyAbility_104341.PyConfig_104341
// 0x0BE8 (0x0C80 - 0x0098)
class UPyConfig_104341 final : public UMarvelAbilityConfig
{
public:
	int32                                         KillOtherAddDuration;                              // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         KillOtherMaxDuration;                              // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PlayReloadAudioID;                                 // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDashAbilityInfo                       DashInfo;                                          // 0x00A8(0x0B70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  ControlTags;                                       // 0x0C18(0x0068)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104341">();
	}
	static class UPyConfig_104341* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104341>();
	}
};
static_assert(alignof(UPyConfig_104341) == 0x000008, "Wrong alignment on UPyConfig_104341");
static_assert(sizeof(UPyConfig_104341) == 0x000C80, "Wrong size on UPyConfig_104341");
static_assert(offsetof(UPyConfig_104341, KillOtherAddDuration) == 0x000098, "Member 'UPyConfig_104341::KillOtherAddDuration' has a wrong offset!");
static_assert(offsetof(UPyConfig_104341, KillOtherMaxDuration) == 0x00009C, "Member 'UPyConfig_104341::KillOtherMaxDuration' has a wrong offset!");
static_assert(offsetof(UPyConfig_104341, PlayReloadAudioID) == 0x0000A0, "Member 'UPyConfig_104341::PlayReloadAudioID' has a wrong offset!");
static_assert(offsetof(UPyConfig_104341, DashInfo) == 0x0000A8, "Member 'UPyConfig_104341::DashInfo' has a wrong offset!");
static_assert(offsetof(UPyConfig_104341, ControlTags) == 0x000C18, "Member 'UPyConfig_104341::ControlTags' has a wrong offset!");

// PythonClass PyAbility_104341.PyCue_Weapon_Loop_10434101
// 0x0000 (0x1058 - 0x1058)
class APyCue_Weapon_Loop_10434101 final : public AMarvelCueNotify_Weapon_Loop_DualMesh
{
public:
	void HandleWeaponOnEquipEvent();
	void HandleWeaponUnEquipEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Weapon_Loop_10434101">();
	}
	static class APyCue_Weapon_Loop_10434101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Weapon_Loop_10434101>();
	}
};
static_assert(alignof(APyCue_Weapon_Loop_10434101) == 0x000008, "Wrong alignment on APyCue_Weapon_Loop_10434101");
static_assert(sizeof(APyCue_Weapon_Loop_10434101) == 0x001058, "Wrong size on APyCue_Weapon_Loop_10434101");

// PythonClass PyAbility_104341.PyAbility_104341
// 0x0008 (0x2558 - 0x2550)
class UPyAbility_104341 : public UMarvelGameplayAbility
{
public:
	float                                         MaxDurationTime;                                   // 0x2550(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void BeginPlay();
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);
	void K2_ActivateAbility();
	void NativeOnMontageEvent(const class FString& Tag);
	void OnDashFinish(EDashStopReason Reason);
	void OnCharacterDeath(class AActor* DamageCauser, class AActor* TargetActor, const struct FAttributeModifierHandle& ParamHandle);
	void OnKillOther(class AActor* InSourceAvatar, class AActor* InTargetAvatar, const struct FAttributeModifierHandle& ParamHandle);
	void OnDurationEnd();
	void K2_OnEndAbility(bool bWasCancelled);
	void DelayRemoveAbilityCue();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104341">();
	}
	static class UPyAbility_104341* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104341>();
	}
};
static_assert(alignof(UPyAbility_104341) == 0x000008, "Wrong alignment on UPyAbility_104341");
static_assert(sizeof(UPyAbility_104341) == 0x002558, "Wrong size on UPyAbility_104341");
static_assert(offsetof(UPyAbility_104341, MaxDurationTime) == 0x002550, "Member 'UPyAbility_104341::MaxDurationTime' has a wrong offset!");

}
