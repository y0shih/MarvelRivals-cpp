#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Summoned_V2_10455101_BP

#include "Basic.hpp"

#include "PyAbility_104551_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Summoned_V2_10455101_BP.Summoned_V2_10455101_BP_C
// 0x0010 (0x1010 - 0x1000)
class ASummoned_V2_10455101_BP_C : public APySummoned_10455101
{
public:
	class UMarvelHitShape_Capsule*                HitBody;                                           // 0x1000(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USummonedMovementComponent*             SummonedMovement;                                  // 0x1008(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Summoned_V2_10455101_BP_C">();
	}
	static class ASummoned_V2_10455101_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASummoned_V2_10455101_BP_C>();
	}
};
static_assert(alignof(ASummoned_V2_10455101_BP_C) == 0x000010, "Wrong alignment on ASummoned_V2_10455101_BP_C");
static_assert(sizeof(ASummoned_V2_10455101_BP_C) == 0x001010, "Wrong size on ASummoned_V2_10455101_BP_C");
static_assert(offsetof(ASummoned_V2_10455101_BP_C, HitBody) == 0x001000, "Member 'ASummoned_V2_10455101_BP_C::HitBody' has a wrong offset!");
static_assert(offsetof(ASummoned_V2_10455101_BP_C, SummonedMovement) == 0x001008, "Member 'ASummoned_V2_10455101_BP_C::SummonedMovement' has a wrong offset!");

}
