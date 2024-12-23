#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Career_Overview

#include "Basic.hpp"

#include "PyWidget_CareerOverviewPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Career_Overview.WBP_Career_Overview_C
// 0x0148 (0x0958 - 0x0810)
class UWBP_Career_Overview_C final : public UPyWidget_CareerOverviewPanel
{
public:
	class UMarvelButton*                          Btn_Rotate;                                        // 0x0810(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Career_Data_Item_C*                Career_Data_BestContinueKill;                      // 0x0818(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Career_Data_Item_C*                Career_Data_Games;                                 // 0x0820(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Career_Data_Item_C*                Career_Data_GameTime;                              // 0x0828(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Career_Data_Item_C*                Career_Data_TotalAssist;                           // 0x0830(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Career_Data_Item_C*                Career_Data_TotalElimination;                      // 0x0838(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Career_Data_Item_C*                Career_Data_Victory;                               // 0x0840(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_EmptyBg;                                       // 0x0848(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Info_Data_Bg;                                  // 0x0850(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Info_Title_Bg;                                 // 0x0858(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_NoDanIcon;                                     // 0x0860(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Rank_EmptyBg;                                  // 0x0868(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Season_TipsBg;                                 // 0x0870(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_SeasonHigh_Line;                               // 0x0878(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Empty;                                     // 0x0880(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Left_Info;                                 // 0x0888(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_PlayerInfo_Data;                           // 0x0890(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Rank_Content;                              // 0x0898(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Rank_Empty;                                // 0x08A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Rank_Info;                                 // 0x08A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Right_Info;                                // 0x08B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Empty;                                     // 0x08B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_DanIcon;                                      // 0x08C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Collection_Title;                             // 0x08C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_High;                                         // 0x08D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Rank;                                         // 0x08D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_RankScore;                                    // 0x08E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Season_Name;                                  // 0x08E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_SeasonHigh;                                   // 0x08F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_SeasonHighScore;                              // 0x08F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_SeasonHigh;                                   // 0x0900(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Career_CollectionData_Item_C*      WBP_Career_CollectionData_GalleryCard;             // 0x0908(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Career_CollectionData_Item_C*      WBP_Career_CollectionData_TotalAchievement;        // 0x0910(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Career_OverviewPlayerInfo_C*       WBP_Career_PlayerInfo;                             // 0x0918(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Career_OverviewPlayerInfo_C*       WBP_Career_PlayerInfo_Empty;                       // 0x0920(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_BgAngle_V2_C*               WBP_Common_BgAngle;                                // 0x0928(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_BgAngle_V2_C*               WBP_Common_BgAngle2;                               // 0x0930(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Empty_Light_C*              WBP_Common_Empty_Light;                            // 0x0938(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Rank_DanIcon08_Vx_C*               WBP_Rank_DanIcon08_Vx;                             // 0x0940(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SeasonAndModeFilter_C*             WBP_SeasonAndModeFilter;                           // 0x0948(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Squad_SwitchHeroBtn_C*             WBP_Squad_Match_SwitchHero;                        // 0x0950(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Career_Overview_C">();
	}
	static class UWBP_Career_Overview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Career_Overview_C>();
	}
};
static_assert(alignof(UWBP_Career_Overview_C) == 0x000008, "Wrong alignment on UWBP_Career_Overview_C");
static_assert(sizeof(UWBP_Career_Overview_C) == 0x000958, "Wrong size on UWBP_Career_Overview_C");
static_assert(offsetof(UWBP_Career_Overview_C, Btn_Rotate) == 0x000810, "Member 'UWBP_Career_Overview_C::Btn_Rotate' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Career_Data_BestContinueKill) == 0x000818, "Member 'UWBP_Career_Overview_C::Career_Data_BestContinueKill' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Career_Data_Games) == 0x000820, "Member 'UWBP_Career_Overview_C::Career_Data_Games' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Career_Data_GameTime) == 0x000828, "Member 'UWBP_Career_Overview_C::Career_Data_GameTime' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Career_Data_TotalAssist) == 0x000830, "Member 'UWBP_Career_Overview_C::Career_Data_TotalAssist' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Career_Data_TotalElimination) == 0x000838, "Member 'UWBP_Career_Overview_C::Career_Data_TotalElimination' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Career_Data_Victory) == 0x000840, "Member 'UWBP_Career_Overview_C::Career_Data_Victory' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Img_EmptyBg) == 0x000848, "Member 'UWBP_Career_Overview_C::Img_EmptyBg' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Img_Info_Data_Bg) == 0x000850, "Member 'UWBP_Career_Overview_C::Img_Info_Data_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Img_Info_Title_Bg) == 0x000858, "Member 'UWBP_Career_Overview_C::Img_Info_Title_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Img_NoDanIcon) == 0x000860, "Member 'UWBP_Career_Overview_C::Img_NoDanIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Img_Rank_EmptyBg) == 0x000868, "Member 'UWBP_Career_Overview_C::Img_Rank_EmptyBg' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Img_Season_TipsBg) == 0x000870, "Member 'UWBP_Career_Overview_C::Img_Season_TipsBg' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Img_SeasonHigh_Line) == 0x000878, "Member 'UWBP_Career_Overview_C::Img_SeasonHigh_Line' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Overlay_Empty) == 0x000880, "Member 'UWBP_Career_Overview_C::Overlay_Empty' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Overlay_Left_Info) == 0x000888, "Member 'UWBP_Career_Overview_C::Overlay_Left_Info' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Overlay_PlayerInfo_Data) == 0x000890, "Member 'UWBP_Career_Overview_C::Overlay_PlayerInfo_Data' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Overlay_Rank_Content) == 0x000898, "Member 'UWBP_Career_Overview_C::Overlay_Rank_Content' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Overlay_Rank_Empty) == 0x0008A0, "Member 'UWBP_Career_Overview_C::Overlay_Rank_Empty' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Overlay_Rank_Info) == 0x0008A8, "Member 'UWBP_Career_Overview_C::Overlay_Rank_Info' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Overlay_Right_Info) == 0x0008B0, "Member 'UWBP_Career_Overview_C::Overlay_Right_Info' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, SizeBox_Empty) == 0x0008B8, "Member 'UWBP_Career_Overview_C::SizeBox_Empty' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Slot_DanIcon) == 0x0008C0, "Member 'UWBP_Career_Overview_C::Slot_DanIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Text_Collection_Title) == 0x0008C8, "Member 'UWBP_Career_Overview_C::Text_Collection_Title' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Text_High) == 0x0008D0, "Member 'UWBP_Career_Overview_C::Text_High' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Text_Rank) == 0x0008D8, "Member 'UWBP_Career_Overview_C::Text_Rank' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Text_RankScore) == 0x0008E0, "Member 'UWBP_Career_Overview_C::Text_RankScore' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Text_Season_Name) == 0x0008E8, "Member 'UWBP_Career_Overview_C::Text_Season_Name' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Text_SeasonHigh) == 0x0008F0, "Member 'UWBP_Career_Overview_C::Text_SeasonHigh' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, Text_SeasonHighScore) == 0x0008F8, "Member 'UWBP_Career_Overview_C::Text_SeasonHighScore' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, VBox_SeasonHigh) == 0x000900, "Member 'UWBP_Career_Overview_C::VBox_SeasonHigh' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, WBP_Career_CollectionData_GalleryCard) == 0x000908, "Member 'UWBP_Career_Overview_C::WBP_Career_CollectionData_GalleryCard' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, WBP_Career_CollectionData_TotalAchievement) == 0x000910, "Member 'UWBP_Career_Overview_C::WBP_Career_CollectionData_TotalAchievement' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, WBP_Career_PlayerInfo) == 0x000918, "Member 'UWBP_Career_Overview_C::WBP_Career_PlayerInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, WBP_Career_PlayerInfo_Empty) == 0x000920, "Member 'UWBP_Career_Overview_C::WBP_Career_PlayerInfo_Empty' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, WBP_Common_BgAngle) == 0x000928, "Member 'UWBP_Career_Overview_C::WBP_Common_BgAngle' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, WBP_Common_BgAngle2) == 0x000930, "Member 'UWBP_Career_Overview_C::WBP_Common_BgAngle2' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, WBP_Common_Empty_Light) == 0x000938, "Member 'UWBP_Career_Overview_C::WBP_Common_Empty_Light' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, WBP_Rank_DanIcon08_Vx) == 0x000940, "Member 'UWBP_Career_Overview_C::WBP_Rank_DanIcon08_Vx' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, WBP_SeasonAndModeFilter) == 0x000948, "Member 'UWBP_Career_Overview_C::WBP_SeasonAndModeFilter' has a wrong offset!");
static_assert(offsetof(UWBP_Career_Overview_C, WBP_Squad_Match_SwitchHero) == 0x000950, "Member 'UWBP_Career_Overview_C::WBP_Squad_Match_SwitchHero' has a wrong offset!");

}

