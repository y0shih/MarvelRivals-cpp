#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Clan_ApplyEntry

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Clan_ApplyEntry.PyWidget_Clan_ApplyEntry
// 0x0050 (0x0638 - 0x05E8)
class UPyWidget_Clan_ApplyEntry : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 Img_Bg_Normal;                                     // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Bg_Hover;                                      // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Name;                                         // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Level;                                        // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Msg;                                          // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Rank;                                         // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                            WBP_DanIcon;                                       // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                            WBP_PlayerHead;                                    // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                MenuGuideTips;                                     // 0x0628(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Clan_ApplyEntry">();
	}
	static class UPyWidget_Clan_ApplyEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Clan_ApplyEntry>();
	}
};
static_assert(alignof(UPyWidget_Clan_ApplyEntry) == 0x000008, "Wrong alignment on UPyWidget_Clan_ApplyEntry");
static_assert(sizeof(UPyWidget_Clan_ApplyEntry) == 0x000638, "Wrong size on UPyWidget_Clan_ApplyEntry");
static_assert(offsetof(UPyWidget_Clan_ApplyEntry, Img_Bg_Normal) == 0x0005E8, "Member 'UPyWidget_Clan_ApplyEntry::Img_Bg_Normal' has a wrong offset!");
static_assert(offsetof(UPyWidget_Clan_ApplyEntry, Img_Bg_Hover) == 0x0005F0, "Member 'UPyWidget_Clan_ApplyEntry::Img_Bg_Hover' has a wrong offset!");
static_assert(offsetof(UPyWidget_Clan_ApplyEntry, Text_Name) == 0x0005F8, "Member 'UPyWidget_Clan_ApplyEntry::Text_Name' has a wrong offset!");
static_assert(offsetof(UPyWidget_Clan_ApplyEntry, Text_Level) == 0x000600, "Member 'UPyWidget_Clan_ApplyEntry::Text_Level' has a wrong offset!");
static_assert(offsetof(UPyWidget_Clan_ApplyEntry, Text_Msg) == 0x000608, "Member 'UPyWidget_Clan_ApplyEntry::Text_Msg' has a wrong offset!");
static_assert(offsetof(UPyWidget_Clan_ApplyEntry, Text_Rank) == 0x000610, "Member 'UPyWidget_Clan_ApplyEntry::Text_Rank' has a wrong offset!");
static_assert(offsetof(UPyWidget_Clan_ApplyEntry, WBP_DanIcon) == 0x000618, "Member 'UPyWidget_Clan_ApplyEntry::WBP_DanIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_Clan_ApplyEntry, WBP_PlayerHead) == 0x000620, "Member 'UPyWidget_Clan_ApplyEntry::WBP_PlayerHead' has a wrong offset!");
static_assert(offsetof(UPyWidget_Clan_ApplyEntry, MenuGuideTips) == 0x000628, "Member 'UPyWidget_Clan_ApplyEntry::MenuGuideTips' has a wrong offset!");

}
