#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LogoVideoTableStruct

#include "Basic.hpp"

#include "LogoVideoRegionStruct_structs.hpp"


namespace SDK
{

// UserDefinedStruct LogoVideoTableStruct.LogoVideoTableStruct
// 0x0020 (0x0020 - 0x0000)
struct FLogoVideoTableStruct final
{
public:
	int32                                         Index_3_7A27168B4E42028C59B1249ED7C062B8;          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaSource*                           Video_12_1E958F924EFC10DC407581AACD4D3CD3;         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        SkipTime_16_A940D8D94B00DD132668E298CA93B6AE;      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLogoVideoRegionStruct                 Region_21_BEE82B894F87184543FCCCB069B60570;        // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLogoVideoTableStruct) == 0x000008, "Wrong alignment on FLogoVideoTableStruct");
static_assert(sizeof(FLogoVideoTableStruct) == 0x000020, "Wrong size on FLogoVideoTableStruct");
static_assert(offsetof(FLogoVideoTableStruct, Index_3_7A27168B4E42028C59B1249ED7C062B8) == 0x000000, "Member 'FLogoVideoTableStruct::Index_3_7A27168B4E42028C59B1249ED7C062B8' has a wrong offset!");
static_assert(offsetof(FLogoVideoTableStruct, Video_12_1E958F924EFC10DC407581AACD4D3CD3) == 0x000008, "Member 'FLogoVideoTableStruct::Video_12_1E958F924EFC10DC407581AACD4D3CD3' has a wrong offset!");
static_assert(offsetof(FLogoVideoTableStruct, SkipTime_16_A940D8D94B00DD132668E298CA93B6AE) == 0x000010, "Member 'FLogoVideoTableStruct::SkipTime_16_A940D8D94B00DD132668E298CA93B6AE' has a wrong offset!");
static_assert(offsetof(FLogoVideoTableStruct, Region_21_BEE82B894F87184543FCCCB069B60570) == 0x000018, "Member 'FLogoVideoTableStruct::Region_21_BEE82B894F87184543FCCCB069B60570' has a wrong offset!");

}
