#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_PyOverrideAIHeroConfig

#include "Basic.hpp"

#include "PyBTNodeBase_classes.hpp"


namespace SDK
{

// PythonClass BTS_PyOverrideAIHeroConfig.BTS_PyOverrideAIHeroConfig
// 0x0050 (0x00F8 - 0x00A8)
class UBTS_PyOverrideAIHeroConfig : public UBTService_PyBase
{
public:
	TMap<int32, float>                            OverrideKeepDistanceInBattleDict;                  // 0x00A8(0x0050)(Edit, NativeAccessSpecifierPublic)

public:
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTS_PyOverrideAIHeroConfig">();
	}
	static class UBTS_PyOverrideAIHeroConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_PyOverrideAIHeroConfig>();
	}
};
static_assert(alignof(UBTS_PyOverrideAIHeroConfig) == 0x000008, "Wrong alignment on UBTS_PyOverrideAIHeroConfig");
static_assert(sizeof(UBTS_PyOverrideAIHeroConfig) == 0x0000F8, "Wrong size on UBTS_PyOverrideAIHeroConfig");
static_assert(offsetof(UBTS_PyOverrideAIHeroConfig, OverrideKeepDistanceInBattleDict) == 0x0000A8, "Member 'UBTS_PyOverrideAIHeroConfig::OverrideKeepDistanceInBattleDict' has a wrong offset!");

}
