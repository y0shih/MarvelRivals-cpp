#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pigment

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Pigment.BP_Pigment_C
// 0x0030 (0x04A0 - 0x0470)
class ABP_Pigment_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube;                                              // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        TempScale;                                         // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FinalScale;                                        // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinScale;                                          // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxScale;                                          // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Pigment(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Pigment_C">();
	}
	static class ABP_Pigment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Pigment_C>();
	}
};
static_assert(alignof(ABP_Pigment_C) == 0x000008, "Wrong alignment on ABP_Pigment_C");
static_assert(sizeof(ABP_Pigment_C) == 0x0004A0, "Wrong size on ABP_Pigment_C");
static_assert(offsetof(ABP_Pigment_C, UberGraphFrame) == 0x000470, "Member 'ABP_Pigment_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Pigment_C, Cube) == 0x000478, "Member 'ABP_Pigment_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_Pigment_C, TempScale) == 0x000480, "Member 'ABP_Pigment_C::TempScale' has a wrong offset!");
static_assert(offsetof(ABP_Pigment_C, FinalScale) == 0x000488, "Member 'ABP_Pigment_C::FinalScale' has a wrong offset!");
static_assert(offsetof(ABP_Pigment_C, MinScale) == 0x000490, "Member 'ABP_Pigment_C::MinScale' has a wrong offset!");
static_assert(offsetof(ABP_Pigment_C, MaxScale) == 0x000498, "Member 'ABP_Pigment_C::MaxScale' has a wrong offset!");

}
