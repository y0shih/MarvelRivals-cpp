#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1036

#include "Basic.hpp"


namespace SDK
{

// Enum Hero_1036.EAbilityState103614
// NumValues: 0x0005
enum class EAbilityState103614 : uint8
{
	Default                                  = 0,
	Start                                    = 1,
	Set                                      = 2,
	Recovery                                 = 3,
	EAbilityState103614_MAX                  = 4,
};

// Enum Hero_1036.EDecreaseCDMoment
// NumValues: 0x0006
enum class EDecreaseCDMoment : uint8
{
	Active                                   = 0,
	Missile                                  = 1,
	Break                                    = 2,
	End                                      = 3,
	Damage                                   = 4,
	EDecreaseCDMoment_MAX                    = 5,
};

// ScriptStruct Hero_1036.ReduceCDItem
// 0x000C (0x000C - 0x0000)
struct FReduceCDItem final
{
public:
	int32                                         AbilityID;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDecreaseCDMoment                             Moment;                                            // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DecreaseValue;                                     // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FReduceCDItem) == 0x000004, "Wrong alignment on FReduceCDItem");
static_assert(sizeof(FReduceCDItem) == 0x00000C, "Wrong size on FReduceCDItem");
static_assert(offsetof(FReduceCDItem, AbilityID) == 0x000000, "Member 'FReduceCDItem::AbilityID' has a wrong offset!");
static_assert(offsetof(FReduceCDItem, Moment) == 0x000004, "Member 'FReduceCDItem::Moment' has a wrong offset!");
static_assert(offsetof(FReduceCDItem, DecreaseValue) == 0x000008, "Member 'FReduceCDItem::DecreaseValue' has a wrong offset!");

}
