#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_PlayerBattleSide_BP

#include "Basic.hpp"

#include "BTD_PyCheckBattleSide_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_PlayerBattleSide_BP.BTD_PlayerBattleSide_BP_C
// 0x0000 (0x00C0 - 0x00C0)
class UBTD_PlayerBattleSide_BP_C final : public UBTD_PyCheckBattleSide
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_PlayerBattleSide_BP_C">();
	}
	static class UBTD_PlayerBattleSide_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_PlayerBattleSide_BP_C>();
	}
};
static_assert(alignof(UBTD_PlayerBattleSide_BP_C) == 0x000008, "Wrong alignment on UBTD_PlayerBattleSide_BP_C");
static_assert(sizeof(UBTD_PlayerBattleSide_BP_C) == 0x0000C0, "Wrong size on UBTD_PlayerBattleSide_BP_C");

}
