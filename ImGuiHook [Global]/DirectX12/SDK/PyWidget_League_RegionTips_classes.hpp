#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_League_RegionTips

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "PyWidget_CommonTipsBase_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_League_RegionTips.PyWidget_League_RegionTips
// 0x00F8 (0x06F8 - 0x0600)
class UPyWidget_League_RegionTips : public UPyWidget_CommonTipsBase
{
public:
	struct FSlateColor                            TextColor_Normal;                                  // 0x05FC(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColor_Selected;                                // 0x0610(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_624[0x4];                                      // 0x0624(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         TextFont_Normal;                                   // 0x0628(0x0068)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         TextFont_Selected;                                 // 0x0690(0x0068)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_RegionTips">();
	}
	static class UPyWidget_League_RegionTips* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_RegionTips>();
	}
};
static_assert(alignof(UPyWidget_League_RegionTips) == 0x000008, "Wrong alignment on UPyWidget_League_RegionTips");
static_assert(sizeof(UPyWidget_League_RegionTips) == 0x0006F8, "Wrong size on UPyWidget_League_RegionTips");
static_assert(offsetof(UPyWidget_League_RegionTips, TextColor_Normal) == 0x0005FC, "Member 'UPyWidget_League_RegionTips::TextColor_Normal' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_RegionTips, TextColor_Selected) == 0x000610, "Member 'UPyWidget_League_RegionTips::TextColor_Selected' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_RegionTips, TextFont_Normal) == 0x000628, "Member 'UPyWidget_League_RegionTips::TextFont_Normal' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_RegionTips, TextFont_Selected) == 0x000690, "Member 'UPyWidget_League_RegionTips::TextFont_Selected' has a wrong offset!");

}
