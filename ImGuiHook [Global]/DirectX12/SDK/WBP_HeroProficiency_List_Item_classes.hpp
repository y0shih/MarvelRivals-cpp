#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeroProficiency_List_Item

#include "Basic.hpp"

#include "PyWidget_HeroSystem_Proficiency_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HeroProficiency_List_Item.WBP_HeroProficiency_List_Item_C
// 0x0040 (0x0628 - 0x05E8)
class UWBP_HeroProficiency_List_Item_C final : public UPyWidget_HeroProficiency_TaskItem
{
public:
	class UMarvelButton*                          Focus_Btn;                                         // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Icon_Cycle;                                        // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_ItemLine;                                      // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_CurrentNum;                                   // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Cycle;                                        // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_ItemProficiencyEXP;                           // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_MaxNum;                                       // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelRichTextBlock*                   Text_ProficiencyCondition;                         // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HeroProficiency_List_Item_C">();
	}
	static class UWBP_HeroProficiency_List_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HeroProficiency_List_Item_C>();
	}
};
static_assert(alignof(UWBP_HeroProficiency_List_Item_C) == 0x000008, "Wrong alignment on UWBP_HeroProficiency_List_Item_C");
static_assert(sizeof(UWBP_HeroProficiency_List_Item_C) == 0x000628, "Wrong size on UWBP_HeroProficiency_List_Item_C");
static_assert(offsetof(UWBP_HeroProficiency_List_Item_C, Focus_Btn) == 0x0005E8, "Member 'UWBP_HeroProficiency_List_Item_C::Focus_Btn' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_List_Item_C, Icon_Cycle) == 0x0005F0, "Member 'UWBP_HeroProficiency_List_Item_C::Icon_Cycle' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_List_Item_C, Img_ItemLine) == 0x0005F8, "Member 'UWBP_HeroProficiency_List_Item_C::Img_ItemLine' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_List_Item_C, Text_CurrentNum) == 0x000600, "Member 'UWBP_HeroProficiency_List_Item_C::Text_CurrentNum' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_List_Item_C, Text_Cycle) == 0x000608, "Member 'UWBP_HeroProficiency_List_Item_C::Text_Cycle' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_List_Item_C, Text_ItemProficiencyEXP) == 0x000610, "Member 'UWBP_HeroProficiency_List_Item_C::Text_ItemProficiencyEXP' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_List_Item_C, Text_MaxNum) == 0x000618, "Member 'UWBP_HeroProficiency_List_Item_C::Text_MaxNum' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_List_Item_C, Text_ProficiencyCondition) == 0x000620, "Member 'UWBP_HeroProficiency_List_Item_C::Text_ProficiencyCondition' has a wrong offset!");

}
