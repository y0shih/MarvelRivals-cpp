#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ComTips_OnlyText

#include "Basic.hpp"

#include "PyWidget_Common_Tips_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ComTips_OnlyText.WBP_ComTips_OnlyText_C
// 0x0028 (0x0628 - 0x0600)
class UWBP_ComTips_OnlyText_C final : public UPyWidget_Common_Tips
{
public:
	class UMarvelImage*                           Img_Decorate;                                      // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScBox_Title;                                       // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelRichTextBlock*                   Text_Tips;                                         // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Tips_Name;                                    // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ComTips_Bg_C*                      WBP_ComTips_Bg;                                    // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ComTips_OnlyText_C">();
	}
	static class UWBP_ComTips_OnlyText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ComTips_OnlyText_C>();
	}
};
static_assert(alignof(UWBP_ComTips_OnlyText_C) == 0x000008, "Wrong alignment on UWBP_ComTips_OnlyText_C");
static_assert(sizeof(UWBP_ComTips_OnlyText_C) == 0x000628, "Wrong size on UWBP_ComTips_OnlyText_C");
static_assert(offsetof(UWBP_ComTips_OnlyText_C, Img_Decorate) == 0x000600, "Member 'UWBP_ComTips_OnlyText_C::Img_Decorate' has a wrong offset!");
static_assert(offsetof(UWBP_ComTips_OnlyText_C, ScBox_Title) == 0x000608, "Member 'UWBP_ComTips_OnlyText_C::ScBox_Title' has a wrong offset!");
static_assert(offsetof(UWBP_ComTips_OnlyText_C, Text_Tips) == 0x000610, "Member 'UWBP_ComTips_OnlyText_C::Text_Tips' has a wrong offset!");
static_assert(offsetof(UWBP_ComTips_OnlyText_C, Text_Tips_Name) == 0x000618, "Member 'UWBP_ComTips_OnlyText_C::Text_Tips_Name' has a wrong offset!");
static_assert(offsetof(UWBP_ComTips_OnlyText_C, WBP_ComTips_Bg) == 0x000620, "Member 'UWBP_ComTips_OnlyText_C::WBP_ComTips_Bg' has a wrong offset!");

}
