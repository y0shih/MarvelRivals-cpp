#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_MesgList_Item

#include "Basic.hpp"

#include "PyWidget_LeagueMainItems_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_MesgList_Item.WBP_League_MesgList_Item_C
// 0x0010 (0x0620 - 0x0610)
class UWBP_League_MesgList_Item_C final : public UPyWidget_LeagueMain_MessageCenterItem
{
public:
	class USizeBox*                               SizeBox_text;                                      // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_ClanIcon_C*                   WBP_League_Icon;                                   // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_MesgList_Item_C">();
	}
	static class UWBP_League_MesgList_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_MesgList_Item_C>();
	}
};
static_assert(alignof(UWBP_League_MesgList_Item_C) == 0x000008, "Wrong alignment on UWBP_League_MesgList_Item_C");
static_assert(sizeof(UWBP_League_MesgList_Item_C) == 0x000620, "Wrong size on UWBP_League_MesgList_Item_C");
static_assert(offsetof(UWBP_League_MesgList_Item_C, SizeBox_text) == 0x000610, "Member 'UWBP_League_MesgList_Item_C::SizeBox_text' has a wrong offset!");
static_assert(offsetof(UWBP_League_MesgList_Item_C, WBP_League_Icon) == 0x000618, "Member 'UWBP_League_MesgList_Item_C::WBP_League_Icon' has a wrong offset!");

}

