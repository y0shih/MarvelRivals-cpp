#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIMoveControl_PsylockeUltimate

#include "Basic.hpp"

#include "Ability_move_logic_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIMoveControl_PsylockeUltimate.AIMoveControl_PsylockeUltimate_C
// 0x0000 (0x00C0 - 0x00C0)
class UAIMoveControl_PsylockeUltimate_C final : public UPyAIMoveControl_MoveThroughEnemy
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIMoveControl_PsylockeUltimate_C">();
	}
	static class UAIMoveControl_PsylockeUltimate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIMoveControl_PsylockeUltimate_C>();
	}
};
static_assert(alignof(UAIMoveControl_PsylockeUltimate_C) == 0x000008, "Wrong alignment on UAIMoveControl_PsylockeUltimate_C");
static_assert(sizeof(UAIMoveControl_PsylockeUltimate_C) == 0x0000C0, "Wrong size on UAIMoveControl_PsylockeUltimate_C");

}
