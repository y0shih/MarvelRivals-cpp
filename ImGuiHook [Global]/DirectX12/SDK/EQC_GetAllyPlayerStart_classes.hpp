#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EQC_GetAllyPlayerStart

#include "Basic.hpp"

#include "MarvelAI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EQC_GetAllyPlayerStart.EQC_GetAllyPlayerStart_C
// 0x0000 (0x0040 - 0x0040)
class UEQC_GetAllyPlayerStart_C final : public UEnvQueryContext_BlackboardActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EQC_GetAllyPlayerStart_C">();
	}
	static class UEQC_GetAllyPlayerStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEQC_GetAllyPlayerStart_C>();
	}
};
static_assert(alignof(UEQC_GetAllyPlayerStart_C) == 0x000008, "Wrong alignment on UEQC_GetAllyPlayerStart_C");
static_assert(sizeof(UEQC_GetAllyPlayerStart_C) == 0x000040, "Wrong size on UEQC_GetAllyPlayerStart_C");

}
