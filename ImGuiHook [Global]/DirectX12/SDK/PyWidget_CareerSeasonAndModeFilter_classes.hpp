#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_CareerSeasonAndModeFilter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_CareerSeasonAndModeFilter.PyWidget_CareerSeasonAndModeFilter
// 0x0010 (0x05F8 - 0x05E8)
class UPyWidget_CareerSeasonAndModeFilter : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ListSize;                                          // 0x05E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CareerSeasonAndModeFilter">();
	}
	static class UPyWidget_CareerSeasonAndModeFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CareerSeasonAndModeFilter>();
	}
};
static_assert(alignof(UPyWidget_CareerSeasonAndModeFilter) == 0x000008, "Wrong alignment on UPyWidget_CareerSeasonAndModeFilter");
static_assert(sizeof(UPyWidget_CareerSeasonAndModeFilter) == 0x0005F8, "Wrong size on UPyWidget_CareerSeasonAndModeFilter");
static_assert(offsetof(UPyWidget_CareerSeasonAndModeFilter, ListSize) == 0x0005E8, "Member 'UPyWidget_CareerSeasonAndModeFilter::ListSize' has a wrong offset!");

}
