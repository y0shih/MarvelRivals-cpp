#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Summoned_10165101_V2_BP

#include "Basic.hpp"

#include "PyAbility_101651_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Summoned_10165101_V2_BP.Summoned_10165101_V2_BP_C
// 0x0020 (0x0F90 - 0x0F70)
class ASummoned_10165101_V2_BP_C final : public APySummoned_10165101
{
public:
	class UPhysicalInteractionComponent*          PhysicalInteraction;                               // 0x0F70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x0F78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0F80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Summoned_10165101_V2_BP_C">();
	}
	static class ASummoned_10165101_V2_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASummoned_10165101_V2_BP_C>();
	}
};
static_assert(alignof(ASummoned_10165101_V2_BP_C) == 0x000010, "Wrong alignment on ASummoned_10165101_V2_BP_C");
static_assert(sizeof(ASummoned_10165101_V2_BP_C) == 0x000F90, "Wrong size on ASummoned_10165101_V2_BP_C");
static_assert(offsetof(ASummoned_10165101_V2_BP_C, PhysicalInteraction) == 0x000F70, "Member 'ASummoned_10165101_V2_BP_C::PhysicalInteraction' has a wrong offset!");
static_assert(offsetof(ASummoned_10165101_V2_BP_C, Camera) == 0x000F78, "Member 'ASummoned_10165101_V2_BP_C::Camera' has a wrong offset!");
static_assert(offsetof(ASummoned_10165101_V2_BP_C, SpringArm) == 0x000F80, "Member 'ASummoned_10165101_V2_BP_C::SpringArm' has a wrong offset!");

}
