#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Squad_RankPBar

#include "Basic.hpp"

#include "PyWidget_Squad_MatchPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Squad_RankPBar.WBP_Squad_RankPBar_C
// 0x0040 (0x0628 - 0x05E8)
class UWBP_Squad_RankPBar_C final : public UPyWidget_Squad_ModeSelectionBtn_RankScoreBar
{
public:
	class UMarvelHorizontalBox*                   HBox_RankNum;                                      // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           PBar_Protection;                                   // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           PBar_RankNum;                                      // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_PBar_Left;                                 // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider_Handle_Left;                                // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider_Handle_Right;                               // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_CurrNum;                                      // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_MaxNum;                                       // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Squad_RankPBar_C">();
	}
	static class UWBP_Squad_RankPBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Squad_RankPBar_C>();
	}
};
static_assert(alignof(UWBP_Squad_RankPBar_C) == 0x000008, "Wrong alignment on UWBP_Squad_RankPBar_C");
static_assert(sizeof(UWBP_Squad_RankPBar_C) == 0x000628, "Wrong size on UWBP_Squad_RankPBar_C");
static_assert(offsetof(UWBP_Squad_RankPBar_C, HBox_RankNum) == 0x0005E8, "Member 'UWBP_Squad_RankPBar_C::HBox_RankNum' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_RankPBar_C, PBar_Protection) == 0x0005F0, "Member 'UWBP_Squad_RankPBar_C::PBar_Protection' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_RankPBar_C, PBar_RankNum) == 0x0005F8, "Member 'UWBP_Squad_RankPBar_C::PBar_RankNum' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_RankPBar_C, SizeBox_PBar_Left) == 0x000600, "Member 'UWBP_Squad_RankPBar_C::SizeBox_PBar_Left' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_RankPBar_C, Slider_Handle_Left) == 0x000608, "Member 'UWBP_Squad_RankPBar_C::Slider_Handle_Left' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_RankPBar_C, Slider_Handle_Right) == 0x000610, "Member 'UWBP_Squad_RankPBar_C::Slider_Handle_Right' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_RankPBar_C, Text_CurrNum) == 0x000618, "Member 'UWBP_Squad_RankPBar_C::Text_CurrNum' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_RankPBar_C, Text_MaxNum) == 0x000620, "Member 'UWBP_Squad_RankPBar_C::Text_MaxNum' has a wrong offset!");

}
