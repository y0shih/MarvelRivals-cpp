#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeagueIconTable

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct LeagueIconTable.LeagueIconTable
// 0x0038 (0x0038 - 0x0000)
struct FLeagueIconTable final
{
public:
	int32                                         IconId_2_023090414A7DF6BF2B334B82BF34B086;         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture>                Image_16_FBC36C6645784DC418B66091F022F71E;         // 0x0008(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FLeagueIconTable) == 0x000008, "Wrong alignment on FLeagueIconTable");
static_assert(sizeof(FLeagueIconTable) == 0x000038, "Wrong size on FLeagueIconTable");
static_assert(offsetof(FLeagueIconTable, IconId_2_023090414A7DF6BF2B334B82BF34B086) == 0x000000, "Member 'FLeagueIconTable::IconId_2_023090414A7DF6BF2B334B82BF34B086' has a wrong offset!");
static_assert(offsetof(FLeagueIconTable, Image_16_FBC36C6645784DC418B66091F022F71E) == 0x000008, "Member 'FLeagueIconTable::Image_16_FBC36C6645784DC418B66091F022F71E' has a wrong offset!");

}
