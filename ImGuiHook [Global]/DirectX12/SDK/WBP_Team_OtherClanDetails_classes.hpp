#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Team_OtherClanDetails

#include "Basic.hpp"

#include "PyWidget_Clan_ClanDetails_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Team_OtherClanDetails.WBP_Team_OtherClanDetails_C
// 0x0010 (0x0620 - 0x0610)
class UWBP_Team_OtherClanDetails_C final : public UPyWidget_Clan_OtherClanDetails
{
public:
	class UWBP_Team_ClanDetails_V2_C*             WBP_ClanDetails;                                   // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_NavigationBar_LV2_C*        WBP_NavigationBar_Lv2;                             // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Team_OtherClanDetails_C">();
	}
	static class UWBP_Team_OtherClanDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Team_OtherClanDetails_C>();
	}
};
static_assert(alignof(UWBP_Team_OtherClanDetails_C) == 0x000008, "Wrong alignment on UWBP_Team_OtherClanDetails_C");
static_assert(sizeof(UWBP_Team_OtherClanDetails_C) == 0x000620, "Wrong size on UWBP_Team_OtherClanDetails_C");
static_assert(offsetof(UWBP_Team_OtherClanDetails_C, WBP_ClanDetails) == 0x000610, "Member 'UWBP_Team_OtherClanDetails_C::WBP_ClanDetails' has a wrong offset!");
static_assert(offsetof(UWBP_Team_OtherClanDetails_C, WBP_NavigationBar_Lv2) == 0x000618, "Member 'UWBP_Team_OtherClanDetails_C::WBP_NavigationBar_Lv2' has a wrong offset!");

}

