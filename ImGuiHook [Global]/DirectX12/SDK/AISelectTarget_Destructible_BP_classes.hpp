#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AISelectTarget_Destructible_BP

#include "Basic.hpp"

#include "MarvelAI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AISelectTarget_Destructible_BP.AISelectTarget_Destructible_BP_C
// 0x0000 (0x0088 - 0x0088)
class UAISelectTarget_Destructible_BP_C final : public UAISelectTargetLogic_Destructible
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AISelectTarget_Destructible_BP_C">();
	}
	static class UAISelectTarget_Destructible_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISelectTarget_Destructible_BP_C>();
	}
};
static_assert(alignof(UAISelectTarget_Destructible_BP_C) == 0x000008, "Wrong alignment on UAISelectTarget_Destructible_BP_C");
static_assert(sizeof(UAISelectTarget_Destructible_BP_C) == 0x000088, "Wrong size on UAISelectTarget_Destructible_BP_C");

}
