#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KnockUp_104531

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass KnockUp_104531.KnockUp_104531_C
// 0x0000 (0x1D50 - 0x1D50)
class UKnockUp_104531_C final : public UMarvelKnockUpAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KnockUp_104531_C">();
	}
	static class UKnockUp_104531_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKnockUp_104531_C>();
	}
};
static_assert(alignof(UKnockUp_104531_C) == 0x000008, "Wrong alignment on UKnockUp_104531_C");
static_assert(sizeof(UKnockUp_104531_C) == 0x001D50, "Wrong size on UKnockUp_104531_C");

}
