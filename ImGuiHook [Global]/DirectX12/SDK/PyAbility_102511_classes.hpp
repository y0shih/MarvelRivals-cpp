#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102511

#include "Basic.hpp"

#include "Hero_1025_classes.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102511.PyProjectile_10251101
// 0x0010 (0x2F80 - 0x2F70)
class APyProjectile_10251101 : public AProjectile_10251101
{
public:
	FMulticastInlineDelegateProperty_             OnProjectileBounce;                                // 0x2F70(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnProjectileBounce__DelegateSignature();
	void K2_OnProcessHit(const struct FHitResult& ImpactResult);
	void K2_OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyProjectile_10251101">();
	}
	static class APyProjectile_10251101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyProjectile_10251101>();
	}
};
static_assert(alignof(APyProjectile_10251101) == 0x000010, "Wrong alignment on APyProjectile_10251101");
static_assert(sizeof(APyProjectile_10251101) == 0x002F80, "Wrong size on APyProjectile_10251101");
static_assert(offsetof(APyProjectile_10251101, OnProjectileBounce) == 0x002F70, "Member 'APyProjectile_10251101::OnProjectileBounce' has a wrong offset!");

// PythonClass PyAbility_102511.PyConfig_102511
// 0x0008 (0x05A0 - 0x0598)
class UPyConfig_102511 final : public UConfig_102511
{
public:
	int32                                         TreatScopeID;                                      // 0x0598(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102511">();
	}
	static class UPyConfig_102511* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102511>();
	}
};
static_assert(alignof(UPyConfig_102511) == 0x000008, "Wrong alignment on UPyConfig_102511");
static_assert(sizeof(UPyConfig_102511) == 0x0005A0, "Wrong size on UPyConfig_102511");
static_assert(offsetof(UPyConfig_102511, TreatScopeID) == 0x000598, "Member 'UPyConfig_102511::TreatScopeID' has a wrong offset!");

// PythonClass PyAbility_102511.PyCue_Projectile_Loop_10251101
// 0x0008 (0x0D68 - 0x0D60)
class APyCue_Projectile_Loop_10251101 final : public AMarvelCueNotify_Projectile
{
public:
	int32                                         TrajectoryAudioIDAfterBounce;                      // 0x0D60(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void WhileActiveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRemoveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Projectile_Loop_10251101">();
	}
	static class APyCue_Projectile_Loop_10251101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Projectile_Loop_10251101>();
	}
};
static_assert(alignof(APyCue_Projectile_Loop_10251101) == 0x000008, "Wrong alignment on APyCue_Projectile_Loop_10251101");
static_assert(sizeof(APyCue_Projectile_Loop_10251101) == 0x000D68, "Wrong size on APyCue_Projectile_Loop_10251101");
static_assert(offsetof(APyCue_Projectile_Loop_10251101, TrajectoryAudioIDAfterBounce) == 0x000D60, "Member 'APyCue_Projectile_Loop_10251101::TrajectoryAudioIDAfterBounce' has a wrong offset!");

}
