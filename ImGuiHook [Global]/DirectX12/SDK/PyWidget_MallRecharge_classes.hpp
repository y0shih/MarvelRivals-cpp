#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_MallRecharge

#include "Basic.hpp"

#include "PyWidget_MallChildPanel_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_MallRecharge.PyWidget_MallRecharge
// 0x0000 (0x0610 - 0x0610)
class UPyWidget_MallRecharge : public UPyWidget_MallChildPanel
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_MallRecharge">();
	}
	static class UPyWidget_MallRecharge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_MallRecharge>();
	}
};
static_assert(alignof(UPyWidget_MallRecharge) == 0x000008, "Wrong alignment on UPyWidget_MallRecharge");
static_assert(sizeof(UPyWidget_MallRecharge) == 0x000610, "Wrong size on UPyWidget_MallRecharge");

// PythonClass PyWidget_MallRecharge.PyWidget_MallRecharge_SmallItem
// 0x0010 (0x05F8 - 0x05E8)
class UPyWidget_MallRecharge_SmallItem : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           BtnPressColor;                                     // 0x05E4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_MallRecharge_SmallItem">();
	}
	static class UPyWidget_MallRecharge_SmallItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_MallRecharge_SmallItem>();
	}
};
static_assert(alignof(UPyWidget_MallRecharge_SmallItem) == 0x000008, "Wrong alignment on UPyWidget_MallRecharge_SmallItem");
static_assert(sizeof(UPyWidget_MallRecharge_SmallItem) == 0x0005F8, "Wrong size on UPyWidget_MallRecharge_SmallItem");
static_assert(offsetof(UPyWidget_MallRecharge_SmallItem, BtnPressColor) == 0x0005E4, "Member 'UPyWidget_MallRecharge_SmallItem::BtnPressColor' has a wrong offset!");

// PythonClass PyWidget_MallRecharge.PyWidget_MallRecharge_BigItem
// 0x0010 (0x05F8 - 0x05E8)
class UPyWidget_MallRecharge_BigItem : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           BtnPressColor;                                     // 0x05E4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_MallRecharge_BigItem">();
	}
	static class UPyWidget_MallRecharge_BigItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_MallRecharge_BigItem>();
	}
};
static_assert(alignof(UPyWidget_MallRecharge_BigItem) == 0x000008, "Wrong alignment on UPyWidget_MallRecharge_BigItem");
static_assert(sizeof(UPyWidget_MallRecharge_BigItem) == 0x0005F8, "Wrong size on UPyWidget_MallRecharge_BigItem");
static_assert(offsetof(UPyWidget_MallRecharge_BigItem, BtnPressColor) == 0x0005E4, "Member 'UPyWidget_MallRecharge_BigItem::BtnPressColor' has a wrong offset!");

// PythonClass PyWidget_MallRecharge.PyWidget_MallRecharge_RightTop
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_MallRecharge_RightTop : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_MallRecharge_RightTop">();
	}
	static class UPyWidget_MallRecharge_RightTop* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_MallRecharge_RightTop>();
	}
};
static_assert(alignof(UPyWidget_MallRecharge_RightTop) == 0x000008, "Wrong alignment on UPyWidget_MallRecharge_RightTop");
static_assert(sizeof(UPyWidget_MallRecharge_RightTop) == 0x0005E8, "Wrong size on UPyWidget_MallRecharge_RightTop");

}

