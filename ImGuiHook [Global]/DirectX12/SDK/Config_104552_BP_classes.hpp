#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Config_104552_BP

#include "Basic.hpp"

#include "PyAbility_104552_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Config_104552_BP.Config_104552_BP_C
// 0x0000 (0x0FD0 - 0x0FD0)
class UConfig_104552_BP_C final : public UPyConfig_104552
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Config_104552_BP_C">();
	}
	static class UConfig_104552_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfig_104552_BP_C>();
	}
};
static_assert(alignof(UConfig_104552_BP_C) == 0x000010, "Wrong alignment on UConfig_104552_BP_C");
static_assert(sizeof(UConfig_104552_BP_C) == 0x000FD0, "Wrong size on UConfig_104552_BP_C");

}
