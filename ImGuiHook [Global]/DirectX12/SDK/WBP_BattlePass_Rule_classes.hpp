#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BattlePass_Rule

#include "Basic.hpp"

#include "PyWidget_BattlePass_Rule_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BattlePass_Rule.WBP_BattlePass_Rule_C
// 0x0020 (0x0608 - 0x05E8)
class UWBP_BattlePass_Rule_C final : public UPyWidget_BattlePass_Rule
{
public:
	class UMarvelButton*                          Btn_Focus;                                         // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Rule;                                      // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Title;                                        // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroStory_Content_Unit_C*          WBP_Content;                                       // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BattlePass_Rule_C">();
	}
	static class UWBP_BattlePass_Rule_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BattlePass_Rule_C>();
	}
};
static_assert(alignof(UWBP_BattlePass_Rule_C) == 0x000008, "Wrong alignment on UWBP_BattlePass_Rule_C");
static_assert(sizeof(UWBP_BattlePass_Rule_C) == 0x000608, "Wrong size on UWBP_BattlePass_Rule_C");
static_assert(offsetof(UWBP_BattlePass_Rule_C, Btn_Focus) == 0x0005E8, "Member 'UWBP_BattlePass_Rule_C::Btn_Focus' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Rule_C, Overlay_Rule) == 0x0005F0, "Member 'UWBP_BattlePass_Rule_C::Overlay_Rule' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Rule_C, Text_Title) == 0x0005F8, "Member 'UWBP_BattlePass_Rule_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Rule_C, WBP_Content) == 0x000600, "Member 'UWBP_BattlePass_Rule_C::WBP_Content' has a wrong offset!");

}

