#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Secondary_ClanApplyList

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Secondary_ClanApplyList.PyWidget_Secondary_ClanApplyList
// 0x0018 (0x0600 - 0x05E8)
class UPyWidget_Secondary_ClanApplyList : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UScrollBox*                             ScrollBox_List;                                    // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOverlay*                               Overlay_Empty;                                     // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOverlay*                               Overlay_List;                                      // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Secondary_ClanApplyList">();
	}
	static class UPyWidget_Secondary_ClanApplyList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Secondary_ClanApplyList>();
	}
};
static_assert(alignof(UPyWidget_Secondary_ClanApplyList) == 0x000008, "Wrong alignment on UPyWidget_Secondary_ClanApplyList");
static_assert(sizeof(UPyWidget_Secondary_ClanApplyList) == 0x000600, "Wrong size on UPyWidget_Secondary_ClanApplyList");
static_assert(offsetof(UPyWidget_Secondary_ClanApplyList, ScrollBox_List) == 0x0005E8, "Member 'UPyWidget_Secondary_ClanApplyList::ScrollBox_List' has a wrong offset!");
static_assert(offsetof(UPyWidget_Secondary_ClanApplyList, Overlay_Empty) == 0x0005F0, "Member 'UPyWidget_Secondary_ClanApplyList::Overlay_Empty' has a wrong offset!");
static_assert(offsetof(UPyWidget_Secondary_ClanApplyList, Overlay_List) == 0x0005F8, "Member 'UPyWidget_Secondary_ClanApplyList::Overlay_List' has a wrong offset!");

}
