#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_Ranking

#include "Basic.hpp"

#include "PyWidget_League_Ranking_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_Ranking.WBP_League_Ranking_C
// 0x0168 (0x0788 - 0x0620)
class UWBP_League_Ranking_C final : public UPyWidget_League_Ranking
{
public:
	class UMarvelImage*                           Img_Down_Placeholder;                              // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Down_Pos;                                      // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Icon_OnlyTitle;                                // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Ranking_TitleBg;                               // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_RankingList_Bg;                                // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Schedule_Bg;                                   // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_SplitLineDown;                                 // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_SplitLineTop;                                  // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Title_Bg;                                      // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Title_Line;                                    // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Title_Line_1;                                  // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Title_Line_2;                                  // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Top_Pos;                                       // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelListView*                        ListView_Ranking;                                  // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Lmg_Bg;                                            // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           MarvelImage;                                       // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           MarvelImage_1;                                     // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           MarvelImage_54;                                    // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Down;                                      // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Top;                                       // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Top_OnlyTitle;                             // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RankingItem_Dark_C*         RankingItemDown;                                   // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RankingItem_C*              RankingItemTop;                                    // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RankingLine_C*              RankingLineDown1;                                  // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RankingLine_C*              RankingLineDown2;                                  // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RankingLine_C*              RankingLineTop1;                                   // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RankingLine_C*              RankingLineTop2;                                   // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_LockIcon_OnlyTitle;                       // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_LeagueName_Title;                          // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Leagus_AllTime;                               // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Ranking_Rule;                                 // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Ranking_Rule1;                                // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Ranking_Rule2;                                // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Ranking_Title01;                              // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Ranking_Title02;                              // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Ranking_Title03;                              // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Ranking_Title04;                              // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Title;                                        // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_Down;                                         // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_Top;                                          // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Chat_C*                     WBP_Common_Chat;                                   // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Check_Text_C*               WBP_Common_Check;                                  // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Empty_Light_C*              WBP_Common_Empty;                                  // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_NavigationBar_LV2_C*        WBP_LeagueName_Title;                              // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Search_C*                   WBP_SearchBar;                                     // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_Ranking_C">();
	}
	static class UWBP_League_Ranking_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_Ranking_C>();
	}
};
static_assert(alignof(UWBP_League_Ranking_C) == 0x000008, "Wrong alignment on UWBP_League_Ranking_C");
static_assert(sizeof(UWBP_League_Ranking_C) == 0x000788, "Wrong size on UWBP_League_Ranking_C");
static_assert(offsetof(UWBP_League_Ranking_C, Img_Down_Placeholder) == 0x000620, "Member 'UWBP_League_Ranking_C::Img_Down_Placeholder' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Img_Down_Pos) == 0x000628, "Member 'UWBP_League_Ranking_C::Img_Down_Pos' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Img_Icon_OnlyTitle) == 0x000630, "Member 'UWBP_League_Ranking_C::Img_Icon_OnlyTitle' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Img_Ranking_TitleBg) == 0x000638, "Member 'UWBP_League_Ranking_C::Img_Ranking_TitleBg' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Img_RankingList_Bg) == 0x000640, "Member 'UWBP_League_Ranking_C::Img_RankingList_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Img_Schedule_Bg) == 0x000648, "Member 'UWBP_League_Ranking_C::Img_Schedule_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Img_SplitLineDown) == 0x000650, "Member 'UWBP_League_Ranking_C::Img_SplitLineDown' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Img_SplitLineTop) == 0x000658, "Member 'UWBP_League_Ranking_C::Img_SplitLineTop' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Img_Title_Bg) == 0x000660, "Member 'UWBP_League_Ranking_C::Img_Title_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Img_Title_Line) == 0x000668, "Member 'UWBP_League_Ranking_C::Img_Title_Line' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Img_Title_Line_1) == 0x000670, "Member 'UWBP_League_Ranking_C::Img_Title_Line_1' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Img_Title_Line_2) == 0x000678, "Member 'UWBP_League_Ranking_C::Img_Title_Line_2' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Img_Top_Pos) == 0x000680, "Member 'UWBP_League_Ranking_C::Img_Top_Pos' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, ListView_Ranking) == 0x000688, "Member 'UWBP_League_Ranking_C::ListView_Ranking' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Lmg_Bg) == 0x000690, "Member 'UWBP_League_Ranking_C::Lmg_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, MarvelImage) == 0x000698, "Member 'UWBP_League_Ranking_C::MarvelImage' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, MarvelImage_1) == 0x0006A0, "Member 'UWBP_League_Ranking_C::MarvelImage_1' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, MarvelImage_54) == 0x0006A8, "Member 'UWBP_League_Ranking_C::MarvelImage_54' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Overlay_Down) == 0x0006B0, "Member 'UWBP_League_Ranking_C::Overlay_Down' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Overlay_Top) == 0x0006B8, "Member 'UWBP_League_Ranking_C::Overlay_Top' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Overlay_Top_OnlyTitle) == 0x0006C0, "Member 'UWBP_League_Ranking_C::Overlay_Top_OnlyTitle' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, RankingItemDown) == 0x0006C8, "Member 'UWBP_League_Ranking_C::RankingItemDown' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, RankingItemTop) == 0x0006D0, "Member 'UWBP_League_Ranking_C::RankingItemTop' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, RankingLineDown1) == 0x0006D8, "Member 'UWBP_League_Ranking_C::RankingLineDown1' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, RankingLineDown2) == 0x0006E0, "Member 'UWBP_League_Ranking_C::RankingLineDown2' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, RankingLineTop1) == 0x0006E8, "Member 'UWBP_League_Ranking_C::RankingLineTop1' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, RankingLineTop2) == 0x0006F0, "Member 'UWBP_League_Ranking_C::RankingLineTop2' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, ScaleBox_LockIcon_OnlyTitle) == 0x0006F8, "Member 'UWBP_League_Ranking_C::ScaleBox_LockIcon_OnlyTitle' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, SizeBox_LeagueName_Title) == 0x000700, "Member 'UWBP_League_Ranking_C::SizeBox_LeagueName_Title' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Text_Leagus_AllTime) == 0x000708, "Member 'UWBP_League_Ranking_C::Text_Leagus_AllTime' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Text_Ranking_Rule) == 0x000710, "Member 'UWBP_League_Ranking_C::Text_Ranking_Rule' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Text_Ranking_Rule1) == 0x000718, "Member 'UWBP_League_Ranking_C::Text_Ranking_Rule1' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Text_Ranking_Rule2) == 0x000720, "Member 'UWBP_League_Ranking_C::Text_Ranking_Rule2' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Text_Ranking_Title01) == 0x000728, "Member 'UWBP_League_Ranking_C::Text_Ranking_Title01' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Text_Ranking_Title02) == 0x000730, "Member 'UWBP_League_Ranking_C::Text_Ranking_Title02' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Text_Ranking_Title03) == 0x000738, "Member 'UWBP_League_Ranking_C::Text_Ranking_Title03' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Text_Ranking_Title04) == 0x000740, "Member 'UWBP_League_Ranking_C::Text_Ranking_Title04' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, Text_Title) == 0x000748, "Member 'UWBP_League_Ranking_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, VBox_Down) == 0x000750, "Member 'UWBP_League_Ranking_C::VBox_Down' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, VBox_Top) == 0x000758, "Member 'UWBP_League_Ranking_C::VBox_Top' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, WBP_Common_Chat) == 0x000760, "Member 'UWBP_League_Ranking_C::WBP_Common_Chat' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, WBP_Common_Check) == 0x000768, "Member 'UWBP_League_Ranking_C::WBP_Common_Check' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, WBP_Common_Empty) == 0x000770, "Member 'UWBP_League_Ranking_C::WBP_Common_Empty' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, WBP_LeagueName_Title) == 0x000778, "Member 'UWBP_League_Ranking_C::WBP_LeagueName_Title' has a wrong offset!");
static_assert(offsetof(UWBP_League_Ranking_C, WBP_SearchBar) == 0x000780, "Member 'UWBP_League_Ranking_C::WBP_SearchBar' has a wrong offset!");

}

