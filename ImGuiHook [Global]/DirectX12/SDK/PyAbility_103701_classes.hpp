#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103701

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Hero_1037_classes.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "PyWidget_AbilityCharge_V5_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103701.PyAbility_103701
// 0x0038 (0x2608 - 0x25D0)
class UPyAbility_103701 : public UAbility_103701
{
public:
	class AActor*                                 ShootingTarget;                                    // 0x25D0(0x0008)(Net, ZeroConstructor, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnAddIronByValue;                                  // 0x25D8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnShieldSummonHit;                                 // 0x25E8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnShootingTargetChangeDelegate;                    // 0x25F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnAddIronByValue__DelegateSignature(float Value);
	void OnShieldSummonHit__DelegateSignature();
	void BeginPlay();
	bool CanActivate();
	bool CheckViewportTarget(class AActor* InTarget);
	void OnTraceViewportTarget();
	bool ShouldStopTrace();
	void OnRep_ShootingTarget();
	void OnShootingTargetChangeDelegate__DelegateSignature(class AActor* NewTarget);
	int32 GetFireIronIndex();
	void K2_OnEndAbility(bool bCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103701">();
	}
	static class UPyAbility_103701* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103701>();
	}
};
static_assert(alignof(UPyAbility_103701) == 0x000008, "Wrong alignment on UPyAbility_103701");
static_assert(sizeof(UPyAbility_103701) == 0x002608, "Wrong size on UPyAbility_103701");
static_assert(offsetof(UPyAbility_103701, ShootingTarget) == 0x0025D0, "Member 'UPyAbility_103701::ShootingTarget' has a wrong offset!");
static_assert(offsetof(UPyAbility_103701, OnAddIronByValue) == 0x0025D8, "Member 'UPyAbility_103701::OnAddIronByValue' has a wrong offset!");
static_assert(offsetof(UPyAbility_103701, OnShieldSummonHit) == 0x0025E8, "Member 'UPyAbility_103701::OnShieldSummonHit' has a wrong offset!");
static_assert(offsetof(UPyAbility_103701, OnShootingTargetChangeDelegate) == 0x0025F8, "Member 'UPyAbility_103701::OnShootingTargetChangeDelegate' has a wrong offset!");

// PythonClass PyAbility_103701.PyUIController_103701
// 0x0000 (0x0C58 - 0x0C58)
class UPyUIController_103701 final : public UUIC_Ability
{
public:
	void SetAbility(int32 InAbilityId, class UGameplayAbility* InAbility);
	void OnDestruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_103701">();
	}
	static class UPyUIController_103701* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_103701>();
	}
};
static_assert(alignof(UPyUIController_103701) == 0x000008, "Wrong alignment on UPyUIController_103701");
static_assert(sizeof(UPyUIController_103701) == 0x000C58, "Wrong size on UPyUIController_103701");

// PythonClass PyAbility_103701.PyCue_Ability_Loop_10370100
// 0x0068 (0x0E68 - 0x0E00)
class APyCue_Ability_Loop_10370100 final : public AMarvelCueNotify_Ability
{
public:
	int32                                         IronAudio1;                                        // 0x0E00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         IronAudio2;                                        // 0x0E04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         IronAudio3;                                        // 0x0E08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RAudio1;                                           // 0x0E0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RAudio2;                                           // 0x0E10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RAudio3;                                           // 0x0E14(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             WeaponFXDisappear;                                 // 0x0E18(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             WeaponFXAppear;                                    // 0x0E28(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSynergyActivated;                                // 0x0E38(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSynergyRemoved;                                  // 0x0E48(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             StopWeaponFXAppear;                                // 0x0E58(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void WeaponFXDisappear__DelegateSignature();
	void WeaponFXAppear__DelegateSignature();
	void OnSynergyActivated__DelegateSignature();
	void OnSynergyRemoved__DelegateSignature();
	void StopWeaponFXAppear__DelegateSignature();
	void IronCountChanged(int32 IronCount);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnTagUpdate(const struct FGameplayTag& TagUpdated, bool TagExists);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10370100">();
	}
	static class APyCue_Ability_Loop_10370100* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10370100>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_10370100) == 0x000008, "Wrong alignment on APyCue_Ability_Loop_10370100");
static_assert(sizeof(APyCue_Ability_Loop_10370100) == 0x000E68, "Wrong size on APyCue_Ability_Loop_10370100");
static_assert(offsetof(APyCue_Ability_Loop_10370100, IronAudio1) == 0x000E00, "Member 'APyCue_Ability_Loop_10370100::IronAudio1' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10370100, IronAudio2) == 0x000E04, "Member 'APyCue_Ability_Loop_10370100::IronAudio2' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10370100, IronAudio3) == 0x000E08, "Member 'APyCue_Ability_Loop_10370100::IronAudio3' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10370100, RAudio1) == 0x000E0C, "Member 'APyCue_Ability_Loop_10370100::RAudio1' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10370100, RAudio2) == 0x000E10, "Member 'APyCue_Ability_Loop_10370100::RAudio2' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10370100, RAudio3) == 0x000E14, "Member 'APyCue_Ability_Loop_10370100::RAudio3' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10370100, WeaponFXDisappear) == 0x000E18, "Member 'APyCue_Ability_Loop_10370100::WeaponFXDisappear' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10370100, WeaponFXAppear) == 0x000E28, "Member 'APyCue_Ability_Loop_10370100::WeaponFXAppear' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10370100, OnSynergyActivated) == 0x000E38, "Member 'APyCue_Ability_Loop_10370100::OnSynergyActivated' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10370100, OnSynergyRemoved) == 0x000E48, "Member 'APyCue_Ability_Loop_10370100::OnSynergyRemoved' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10370100, StopWeaponFXAppear) == 0x000E58, "Member 'APyCue_Ability_Loop_10370100::StopWeaponFXAppear' has a wrong offset!");

// PythonClass PyAbility_103701.PyProjectile_103701
// 0x0010 (0x2F70 - 0x2F60)
class APyProjectile_103701 : public AMarvelAbilityTargetActor_Projectile
{
public:
	class UProjectileHomingComponent*             HomingComp;                                        // 0x2F60(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnAbilityShootingTargetChange(class AActor* NewTarget);
	void K2_OnInitializeData();
	void K2_OnBeginAgentTask();
	void K2_OnEndAgentTask();
	void OnHomingComponentEnd();
	void OnHomingTargetDeath(class AActor* InSourceAvatar, class AActor* InTargetAvatar, const struct FAttributeModifierHandle& ParamHandle);
	void OnHomingTargetEndPlay();
	void K2_OnProjectileInfoForceChanged_ThreadSafe(const struct FProjectileForceChangedInfo& InProjectileForceChangedInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyProjectile_103701">();
	}
	static class APyProjectile_103701* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyProjectile_103701>();
	}
};
static_assert(alignof(APyProjectile_103701) == 0x000010, "Wrong alignment on APyProjectile_103701");
static_assert(sizeof(APyProjectile_103701) == 0x002F70, "Wrong size on APyProjectile_103701");
static_assert(offsetof(APyProjectile_103701, HomingComp) == 0x002F60, "Member 'APyProjectile_103701::HomingComp' has a wrong offset!");

// PythonClass PyAbility_103701.PyWidget_AbilityChargeSingle_103701
// 0x0000 (0x0610 - 0x0610)
class UPyWidget_AbilityChargeSingle_103701 final : public UPyWidget_AbilityChargeSingle_v5
{
public:
	void Consume();
	void Restore();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_AbilityChargeSingle_103701">();
	}
	static class UPyWidget_AbilityChargeSingle_103701* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_AbilityChargeSingle_103701>();
	}
};
static_assert(alignof(UPyWidget_AbilityChargeSingle_103701) == 0x000008, "Wrong alignment on UPyWidget_AbilityChargeSingle_103701");
static_assert(sizeof(UPyWidget_AbilityChargeSingle_103701) == 0x000610, "Wrong size on UPyWidget_AbilityChargeSingle_103701");

// PythonClass PyAbility_103701.PyWidget_AbilityCharge_103701
// 0x0128 (0x06C8 - 0x05A0)
class UPyWidget_AbilityCharge_103701 final : public UWidget_AbilityEnergy_Charge
{
public:
	float                                         FadeInInterval;                                    // 0x05A0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5A4[0x4];                                      // 0x05A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWidgetStyle_AbilityCharge             DefaultStyle;                                      // 0x05A8(0x0110)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnCurSegmentChanged;                               // 0x06B8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnCurSegmentChanged__DelegateSignature(int32 InCurrentValue);
	void OnInitialized();
	void SetStyle(const struct FWidgetStyle_AbilityCharge& Style);
	void SetPercent(float InCurrentValue, float InMaxValue);
	void SetSpeed(float InMaxValue, float InSpeedValue);
	void UpdatePercentWithDebounce(float InCurrentValue, float InMaxValue);
	void SetSegmentCur(int32 SegmentCur);
	void CustomActivate();
	void CustomDeactivate();
	void SetVisible(bool Invisible);
	void SetVisibleImmediately(bool Invisible);
	void PlayUIAudio(int32 AudioID);
	void PostUIAudioCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_AbilityCharge_103701">();
	}
	static class UPyWidget_AbilityCharge_103701* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_AbilityCharge_103701>();
	}
};
static_assert(alignof(UPyWidget_AbilityCharge_103701) == 0x000008, "Wrong alignment on UPyWidget_AbilityCharge_103701");
static_assert(sizeof(UPyWidget_AbilityCharge_103701) == 0x0006C8, "Wrong size on UPyWidget_AbilityCharge_103701");
static_assert(offsetof(UPyWidget_AbilityCharge_103701, FadeInInterval) == 0x0005A0, "Member 'UPyWidget_AbilityCharge_103701::FadeInInterval' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityCharge_103701, DefaultStyle) == 0x0005A8, "Member 'UPyWidget_AbilityCharge_103701::DefaultStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityCharge_103701, OnCurSegmentChanged) == 0x0006B8, "Member 'UPyWidget_AbilityCharge_103701::OnCurSegmentChanged' has a wrong offset!");

}

