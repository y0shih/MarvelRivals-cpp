#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIMoveControl_StarLordSkating

#include "Basic.hpp"

#include "Ability_move_logic_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIMoveControl_StarLordSkating.AIMoveControl_StarLordSkating_C
// 0x0000 (0x00C8 - 0x00C8)
class UAIMoveControl_StarLordSkating_C final : public UPyAIMoveControl_MoveByForce
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIMoveControl_StarLordSkating_C">();
	}
	static class UAIMoveControl_StarLordSkating_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIMoveControl_StarLordSkating_C>();
	}
};
static_assert(alignof(UAIMoveControl_StarLordSkating_C) == 0x000008, "Wrong alignment on UAIMoveControl_StarLordSkating_C");
static_assert(sizeof(UAIMoveControl_StarLordSkating_C) == 0x0000C8, "Wrong size on UAIMoveControl_StarLordSkating_C");

}
