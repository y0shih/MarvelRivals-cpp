#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mall_Skin_Discount

#include "Basic.hpp"

#include "PyWidget_Mall_Bundle_Discount_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mall_Skin_Discount.WBP_Mall_Skin_Discount_C
// 0x0028 (0x0610 - 0x05E8)
class UWBP_Mall_Skin_Discount_C final : public UPyWidget_Mall_Bundle_Discount
{
public:
	class UWidgetAnimation*                       Anim_Enlarge;                                      // 0x05E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelOverlay*                         MarvelOverlay;                                     // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Minus;                                        // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelRichTextBlock*                   Text_Percent;                                      // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Unit;                                         // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mall_Skin_Discount_C">();
	}
	static class UWBP_Mall_Skin_Discount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mall_Skin_Discount_C>();
	}
};
static_assert(alignof(UWBP_Mall_Skin_Discount_C) == 0x000008, "Wrong alignment on UWBP_Mall_Skin_Discount_C");
static_assert(sizeof(UWBP_Mall_Skin_Discount_C) == 0x000610, "Wrong size on UWBP_Mall_Skin_Discount_C");
static_assert(offsetof(UWBP_Mall_Skin_Discount_C, Anim_Enlarge) == 0x0005E8, "Member 'UWBP_Mall_Skin_Discount_C::Anim_Enlarge' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Skin_Discount_C, MarvelOverlay) == 0x0005F0, "Member 'UWBP_Mall_Skin_Discount_C::MarvelOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Skin_Discount_C, Text_Minus) == 0x0005F8, "Member 'UWBP_Mall_Skin_Discount_C::Text_Minus' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Skin_Discount_C, Text_Percent) == 0x000600, "Member 'UWBP_Mall_Skin_Discount_C::Text_Percent' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Skin_Discount_C, Text_Unit) == 0x000608, "Member 'UWBP_Mall_Skin_Discount_C::Text_Unit' has a wrong offset!");

}
