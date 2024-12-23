#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_MatchStartPopup

#include "Basic.hpp"

#include "PyWidget_LeaguePopup_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_MatchStartPopup.WBP_League_MatchStartPopup_C
// 0x0040 (0x0628 - 0x05E8)
class UWBP_League_MatchStartPopup_C final : public UPyWidget_LeaguePopupItem
{
public:
	class UWBP_Common_Btn_Lv3_Dark_C*             Btn_Close;                                         // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv3_C*                  Btn_Ensure;                                        // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_KeyWidget_C*                KeyWidgetBP_PSLeft;                                // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_KeyWidget_C*                KeyWidgetBP_PSRight;                               // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_PSBtns;                                    // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelRichTextBlock*                   Text_Content;                                      // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_MatchName;                                    // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InvitePopup_Press_C*               WBP_InvitePopup_Press;                             // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_MatchStartPopup_C">();
	}
	static class UWBP_League_MatchStartPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_MatchStartPopup_C>();
	}
};
static_assert(alignof(UWBP_League_MatchStartPopup_C) == 0x000008, "Wrong alignment on UWBP_League_MatchStartPopup_C");
static_assert(sizeof(UWBP_League_MatchStartPopup_C) == 0x000628, "Wrong size on UWBP_League_MatchStartPopup_C");
static_assert(offsetof(UWBP_League_MatchStartPopup_C, Btn_Close) == 0x0005E8, "Member 'UWBP_League_MatchStartPopup_C::Btn_Close' has a wrong offset!");
static_assert(offsetof(UWBP_League_MatchStartPopup_C, Btn_Ensure) == 0x0005F0, "Member 'UWBP_League_MatchStartPopup_C::Btn_Ensure' has a wrong offset!");
static_assert(offsetof(UWBP_League_MatchStartPopup_C, KeyWidgetBP_PSLeft) == 0x0005F8, "Member 'UWBP_League_MatchStartPopup_C::KeyWidgetBP_PSLeft' has a wrong offset!");
static_assert(offsetof(UWBP_League_MatchStartPopup_C, KeyWidgetBP_PSRight) == 0x000600, "Member 'UWBP_League_MatchStartPopup_C::KeyWidgetBP_PSRight' has a wrong offset!");
static_assert(offsetof(UWBP_League_MatchStartPopup_C, Overlay_PSBtns) == 0x000608, "Member 'UWBP_League_MatchStartPopup_C::Overlay_PSBtns' has a wrong offset!");
static_assert(offsetof(UWBP_League_MatchStartPopup_C, Text_Content) == 0x000610, "Member 'UWBP_League_MatchStartPopup_C::Text_Content' has a wrong offset!");
static_assert(offsetof(UWBP_League_MatchStartPopup_C, Text_MatchName) == 0x000618, "Member 'UWBP_League_MatchStartPopup_C::Text_MatchName' has a wrong offset!");
static_assert(offsetof(UWBP_League_MatchStartPopup_C, WBP_InvitePopup_Press) == 0x000620, "Member 'UWBP_League_MatchStartPopup_C::WBP_InvitePopup_Press' has a wrong offset!");

}

