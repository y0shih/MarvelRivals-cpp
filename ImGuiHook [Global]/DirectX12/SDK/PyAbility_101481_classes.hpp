#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101481

#include "Basic.hpp"

#include "Hero_1014_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_101481.PyConfig_101481
// 0x0018 (0x00B0 - 0x0098)
class UPyConfig_101481 final : public UMarvelAbilityConfig
{
public:
	struct FGameplayTag                           GatlingFireTag;                                    // 0x0098(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           EndGaltingEquipTag;                                // 0x00A4(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_101481">();
	}
	static class UPyConfig_101481* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_101481>();
	}
};
static_assert(alignof(UPyConfig_101481) == 0x000008, "Wrong alignment on UPyConfig_101481");
static_assert(sizeof(UPyConfig_101481) == 0x0000B0, "Wrong size on UPyConfig_101481");
static_assert(offsetof(UPyConfig_101481, GatlingFireTag) == 0x000098, "Member 'UPyConfig_101481::GatlingFireTag' has a wrong offset!");
static_assert(offsetof(UPyConfig_101481, EndGaltingEquipTag) == 0x0000A4, "Member 'UPyConfig_101481::EndGaltingEquipTag' has a wrong offset!");

// PythonClass PyAbility_101481.PyAbility_101481
// 0x0018 (0x2568 - 0x2550)
class UPyAbility_101481 : public UMarvelGameplayAbility
{
public:
	EState_101481                                 AbilityState;                                      // 0x2550(0x0001)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2551[0x7];                                     // 0x2551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAbilityStateChangedDelegate;                     // 0x2558(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnAbilityStateChangedDelegate__DelegateSignature(EState_101481 NewState);
	void BeginPlay();
	void K2_ActivateAbility();
	void MissileEventNotify();
	void BreakEventNotify();
	void K2_OnEndAbility(bool Cancel);
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);
	void NativeOnMontageEvent(const class FString& Tag);
	void OnRep_AbilityState();
	void OnAbilityStateChanged();
	void OnDurationEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_101481">();
	}
	static class UPyAbility_101481* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_101481>();
	}
};
static_assert(alignof(UPyAbility_101481) == 0x000008, "Wrong alignment on UPyAbility_101481");
static_assert(sizeof(UPyAbility_101481) == 0x002568, "Wrong size on UPyAbility_101481");
static_assert(offsetof(UPyAbility_101481, AbilityState) == 0x002550, "Member 'UPyAbility_101481::AbilityState' has a wrong offset!");
static_assert(offsetof(UPyAbility_101481, OnAbilityStateChangedDelegate) == 0x002558, "Member 'UPyAbility_101481::OnAbilityStateChangedDelegate' has a wrong offset!");

// PythonClass PyAbility_101481.PyCue_Ability_Loop_10148101
// 0x0028 (0x0E28 - 0x0E00)
class APyCue_Ability_Loop_10148101 final : public AMarvelCueNotify_Ability
{
public:
	float                                         ShowCurveTime;                                     // 0x0E00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HideCurveTime;                                     // 0x0E04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            ShowDissolveCurve0;                                // 0x0E08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            ShowDissolveCurve1;                                // 0x0E10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            HideDissolveCurve0;                                // 0x0E18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            HideDissolveCurve1;                                // 0x0E20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnBegin();
	void OnEnd();
	void OnUpdateState(EState_101481 NewState);
	void PostShowGatling(bool IsShow);
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void WhileActiveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRemoveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10148101">();
	}
	static class APyCue_Ability_Loop_10148101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10148101>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_10148101) == 0x000008, "Wrong alignment on APyCue_Ability_Loop_10148101");
static_assert(sizeof(APyCue_Ability_Loop_10148101) == 0x000E28, "Wrong size on APyCue_Ability_Loop_10148101");
static_assert(offsetof(APyCue_Ability_Loop_10148101, ShowCurveTime) == 0x000E00, "Member 'APyCue_Ability_Loop_10148101::ShowCurveTime' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10148101, HideCurveTime) == 0x000E04, "Member 'APyCue_Ability_Loop_10148101::HideCurveTime' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10148101, ShowDissolveCurve0) == 0x000E08, "Member 'APyCue_Ability_Loop_10148101::ShowDissolveCurve0' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10148101, ShowDissolveCurve1) == 0x000E10, "Member 'APyCue_Ability_Loop_10148101::ShowDissolveCurve1' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10148101, HideDissolveCurve0) == 0x000E18, "Member 'APyCue_Ability_Loop_10148101::HideDissolveCurve0' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10148101, HideDissolveCurve1) == 0x000E20, "Member 'APyCue_Ability_Loop_10148101::HideDissolveCurve1' has a wrong offset!");

}
