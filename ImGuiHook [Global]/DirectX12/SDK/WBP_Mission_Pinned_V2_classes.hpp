#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mission_Pinned_V2

#include "Basic.hpp"

#include "PyWidget_MissionUnit_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mission_Pinned_V2.WBP_Mission_Pinned_V2_C
// 0x0050 (0x0650 - 0x0600)
class UWBP_Mission_Pinned_V2_C final : public UPyWidget_Mission_PinMark
{
public:
	class UWidgetAnimation*                       Anim_Unpin_FadeIn;                                 // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Unpin_HoverToNormal;                          // 0x0608(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Unpin_Hover_L;                                // 0x0610(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Unpin_Hover;                                  // 0x0618(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Hover;                                        // 0x0620(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_Pinned;                                        // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Pinned;                                        // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Unpin_Icon;                                    // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Pinned_Hover;                              // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Unpin;                                     // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mission_Pinned_V2_C">();
	}
	static class UWBP_Mission_Pinned_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mission_Pinned_V2_C>();
	}
};
static_assert(alignof(UWBP_Mission_Pinned_V2_C) == 0x000008, "Wrong alignment on UWBP_Mission_Pinned_V2_C");
static_assert(sizeof(UWBP_Mission_Pinned_V2_C) == 0x000650, "Wrong size on UWBP_Mission_Pinned_V2_C");
static_assert(offsetof(UWBP_Mission_Pinned_V2_C, Anim_Unpin_FadeIn) == 0x000600, "Member 'UWBP_Mission_Pinned_V2_C::Anim_Unpin_FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_Pinned_V2_C, Anim_Unpin_HoverToNormal) == 0x000608, "Member 'UWBP_Mission_Pinned_V2_C::Anim_Unpin_HoverToNormal' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_Pinned_V2_C, Anim_Unpin_Hover_L) == 0x000610, "Member 'UWBP_Mission_Pinned_V2_C::Anim_Unpin_Hover_L' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_Pinned_V2_C, Anim_Unpin_Hover) == 0x000618, "Member 'UWBP_Mission_Pinned_V2_C::Anim_Unpin_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_Pinned_V2_C, Anim_Hover) == 0x000620, "Member 'UWBP_Mission_Pinned_V2_C::Anim_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_Pinned_V2_C, Btn_Pinned) == 0x000628, "Member 'UWBP_Mission_Pinned_V2_C::Btn_Pinned' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_Pinned_V2_C, Img_Pinned) == 0x000630, "Member 'UWBP_Mission_Pinned_V2_C::Img_Pinned' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_Pinned_V2_C, Img_Unpin_Icon) == 0x000638, "Member 'UWBP_Mission_Pinned_V2_C::Img_Unpin_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_Pinned_V2_C, Overlay_Pinned_Hover) == 0x000640, "Member 'UWBP_Mission_Pinned_V2_C::Overlay_Pinned_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_Pinned_V2_C, Overlay_Unpin) == 0x000648, "Member 'UWBP_Mission_Pinned_V2_C::Overlay_Unpin' has a wrong offset!");

}
