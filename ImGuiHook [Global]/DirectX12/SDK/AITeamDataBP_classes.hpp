#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AITeamDataBP

#include "Basic.hpp"

#include "PyAITeamData_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AITeamDataBP.AITeamDataBP_C
// 0x0000 (0x0508 - 0x0508)
class AAITeamDataBP_C final : public APyAITeamData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AITeamDataBP_C">();
	}
	static class AAITeamDataBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAITeamDataBP_C>();
	}
};
static_assert(alignof(AAITeamDataBP_C) == 0x000008, "Wrong alignment on AAITeamDataBP_C");
static_assert(sizeof(AAITeamDataBP_C) == 0x000508, "Wrong size on AAITeamDataBP_C");

}
