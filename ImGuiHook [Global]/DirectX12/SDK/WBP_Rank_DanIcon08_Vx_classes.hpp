#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Rank_DanIcon08_Vx

#include "Basic.hpp"

#include "PyWidget_RankInfo_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Rank_DanIcon08_Vx.WBP_Rank_DanIcon08_Vx_C
// 0x0050 (0x0638 - 0x05E8)
class UWBP_Rank_DanIcon08_Vx_C final : public UPyWidget_Settlement_RankUp_Icon_VX
{
public:
	class UWidgetAnimation*                       Anim_FadeIn_SeasonSettle;                          // 0x05E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FadeIn_Tier_Down;                             // 0x05F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FadeOut_Tier_Down;                            // 0x05F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FadeIn_Dissolve;                              // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           Img_LowerRankBg;                                   // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   Niagara_Triangle;                                  // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   Niagara_Triangle_Dissolve;                         // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_LowerRank;                                 // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Rank_DanIcon;                              // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_LowerRank;                                    // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Rank_DanIcon08_Vx_C">();
	}
	static class UWBP_Rank_DanIcon08_Vx_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Rank_DanIcon08_Vx_C>();
	}
};
static_assert(alignof(UWBP_Rank_DanIcon08_Vx_C) == 0x000008, "Wrong alignment on UWBP_Rank_DanIcon08_Vx_C");
static_assert(sizeof(UWBP_Rank_DanIcon08_Vx_C) == 0x000638, "Wrong size on UWBP_Rank_DanIcon08_Vx_C");
static_assert(offsetof(UWBP_Rank_DanIcon08_Vx_C, Anim_FadeIn_SeasonSettle) == 0x0005E8, "Member 'UWBP_Rank_DanIcon08_Vx_C::Anim_FadeIn_SeasonSettle' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon08_Vx_C, Anim_FadeIn_Tier_Down) == 0x0005F0, "Member 'UWBP_Rank_DanIcon08_Vx_C::Anim_FadeIn_Tier_Down' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon08_Vx_C, Anim_FadeOut_Tier_Down) == 0x0005F8, "Member 'UWBP_Rank_DanIcon08_Vx_C::Anim_FadeOut_Tier_Down' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon08_Vx_C, Anim_FadeIn_Dissolve) == 0x000600, "Member 'UWBP_Rank_DanIcon08_Vx_C::Anim_FadeIn_Dissolve' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon08_Vx_C, Img_LowerRankBg) == 0x000608, "Member 'UWBP_Rank_DanIcon08_Vx_C::Img_LowerRankBg' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon08_Vx_C, Niagara_Triangle) == 0x000610, "Member 'UWBP_Rank_DanIcon08_Vx_C::Niagara_Triangle' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon08_Vx_C, Niagara_Triangle_Dissolve) == 0x000618, "Member 'UWBP_Rank_DanIcon08_Vx_C::Niagara_Triangle_Dissolve' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon08_Vx_C, Overlay_LowerRank) == 0x000620, "Member 'UWBP_Rank_DanIcon08_Vx_C::Overlay_LowerRank' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon08_Vx_C, SizeBox_Rank_DanIcon) == 0x000628, "Member 'UWBP_Rank_DanIcon08_Vx_C::SizeBox_Rank_DanIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon08_Vx_C, Text_LowerRank) == 0x000630, "Member 'UWBP_Rank_DanIcon08_Vx_C::Text_LowerRank' has a wrong offset!");

}
