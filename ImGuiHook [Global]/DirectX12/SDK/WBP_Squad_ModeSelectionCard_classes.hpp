#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Squad_ModeSelectionCard

#include "Basic.hpp"

#include "PyWidget_Squad_MatchPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Squad_ModeSelectionCard.WBP_Squad_ModeSelectionCard_C
// 0x0110 (0x0788 - 0x0678)
class UWBP_Squad_ModeSelectionCard_C final : public UPyWidget_Squad_ModeSelectionBtn
{
public:
	class UWidgetAnimation*                       Anim_PressToNormal;                                // 0x0678(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_PressToHover;                                 // 0x0680(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_HoverToNormal;                                // 0x0688(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_HoverToPress;                                 // 0x0690(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_NormalToHover;                                // 0x0698(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Normal;                                       // 0x06A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_AIStars;                                      // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card;                                          // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card_Hover;                                    // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_CardFrame;                                     // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_CardFrame_Hover;                               // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_CardProjection;                                // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Details_Bg;                                    // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Icon;                                          // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Star0;                                         // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Star1;                                         // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Star2;                                         // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_TeamNumber_Bg;                                 // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_KeyWidget_C*                KeyWidget_Rules;                                   // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Card;                                      // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Details;                                   // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_LeagueTime;                                // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Main;                                      // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Rank;                                      // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_RightUp;                                   // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_DanIcon;                                      // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_ChangeMark;                                   // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_EndTitle;                                     // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_ModeName;                                     // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_RankScore;                                    // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_RemainTime;                                   // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Com_Platform_HList_C*              WBP_Platform_HList;                                // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Rank_DanIcon06_Vx_C*               WBP_Rank_DanIcon06_Vx_C_0;                         // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Squad_RankPBar_C*                  WBP_RankPBar;                                      // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Squad_ModeSelectionCard_C">();
	}
	static class UWBP_Squad_ModeSelectionCard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Squad_ModeSelectionCard_C>();
	}
};
static_assert(alignof(UWBP_Squad_ModeSelectionCard_C) == 0x000008, "Wrong alignment on UWBP_Squad_ModeSelectionCard_C");
static_assert(sizeof(UWBP_Squad_ModeSelectionCard_C) == 0x000788, "Wrong size on UWBP_Squad_ModeSelectionCard_C");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Anim_PressToNormal) == 0x000678, "Member 'UWBP_Squad_ModeSelectionCard_C::Anim_PressToNormal' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Anim_PressToHover) == 0x000680, "Member 'UWBP_Squad_ModeSelectionCard_C::Anim_PressToHover' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Anim_HoverToNormal) == 0x000688, "Member 'UWBP_Squad_ModeSelectionCard_C::Anim_HoverToNormal' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Anim_HoverToPress) == 0x000690, "Member 'UWBP_Squad_ModeSelectionCard_C::Anim_HoverToPress' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Anim_NormalToHover) == 0x000698, "Member 'UWBP_Squad_ModeSelectionCard_C::Anim_NormalToHover' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Anim_Normal) == 0x0006A0, "Member 'UWBP_Squad_ModeSelectionCard_C::Anim_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, HBox_AIStars) == 0x0006A8, "Member 'UWBP_Squad_ModeSelectionCard_C::HBox_AIStars' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Img_Card) == 0x0006B0, "Member 'UWBP_Squad_ModeSelectionCard_C::Img_Card' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Img_Card_Hover) == 0x0006B8, "Member 'UWBP_Squad_ModeSelectionCard_C::Img_Card_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Img_CardFrame) == 0x0006C0, "Member 'UWBP_Squad_ModeSelectionCard_C::Img_CardFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Img_CardFrame_Hover) == 0x0006C8, "Member 'UWBP_Squad_ModeSelectionCard_C::Img_CardFrame_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Img_CardProjection) == 0x0006D0, "Member 'UWBP_Squad_ModeSelectionCard_C::Img_CardProjection' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Img_Details_Bg) == 0x0006D8, "Member 'UWBP_Squad_ModeSelectionCard_C::Img_Details_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Img_Icon) == 0x0006E0, "Member 'UWBP_Squad_ModeSelectionCard_C::Img_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Img_Star0) == 0x0006E8, "Member 'UWBP_Squad_ModeSelectionCard_C::Img_Star0' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Img_Star1) == 0x0006F0, "Member 'UWBP_Squad_ModeSelectionCard_C::Img_Star1' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Img_Star2) == 0x0006F8, "Member 'UWBP_Squad_ModeSelectionCard_C::Img_Star2' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Img_TeamNumber_Bg) == 0x000700, "Member 'UWBP_Squad_ModeSelectionCard_C::Img_TeamNumber_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, KeyWidget_Rules) == 0x000708, "Member 'UWBP_Squad_ModeSelectionCard_C::KeyWidget_Rules' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Overlay_Card) == 0x000710, "Member 'UWBP_Squad_ModeSelectionCard_C::Overlay_Card' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Overlay_Details) == 0x000718, "Member 'UWBP_Squad_ModeSelectionCard_C::Overlay_Details' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Overlay_LeagueTime) == 0x000720, "Member 'UWBP_Squad_ModeSelectionCard_C::Overlay_LeagueTime' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Overlay_Main) == 0x000728, "Member 'UWBP_Squad_ModeSelectionCard_C::Overlay_Main' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Overlay_Rank) == 0x000730, "Member 'UWBP_Squad_ModeSelectionCard_C::Overlay_Rank' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Overlay_RightUp) == 0x000738, "Member 'UWBP_Squad_ModeSelectionCard_C::Overlay_RightUp' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Slot_DanIcon) == 0x000740, "Member 'UWBP_Squad_ModeSelectionCard_C::Slot_DanIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Text_ChangeMark) == 0x000748, "Member 'UWBP_Squad_ModeSelectionCard_C::Text_ChangeMark' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Text_EndTitle) == 0x000750, "Member 'UWBP_Squad_ModeSelectionCard_C::Text_EndTitle' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Text_ModeName) == 0x000758, "Member 'UWBP_Squad_ModeSelectionCard_C::Text_ModeName' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Text_RankScore) == 0x000760, "Member 'UWBP_Squad_ModeSelectionCard_C::Text_RankScore' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, Text_RemainTime) == 0x000768, "Member 'UWBP_Squad_ModeSelectionCard_C::Text_RemainTime' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, WBP_Platform_HList) == 0x000770, "Member 'UWBP_Squad_ModeSelectionCard_C::WBP_Platform_HList' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, WBP_Rank_DanIcon06_Vx_C_0) == 0x000778, "Member 'UWBP_Squad_ModeSelectionCard_C::WBP_Rank_DanIcon06_Vx_C_0' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_ModeSelectionCard_C, WBP_RankPBar) == 0x000780, "Member 'UWBP_Squad_ModeSelectionCard_C::WBP_RankPBar' has a wrong offset!");

}
