#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Video

#include "Basic.hpp"

#include "PyWidget_Video_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Video.WBP_Video_C
// 0x0048 (0x0758 - 0x0710)
class UWBP_Video_C final : public UPyWidget_Video
{
public:
	class UWidgetAnimation*                       Anim_VideoSwitch;                                  // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Loading;                                      // 0x0718(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_Main;                                          // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Interact;                                      // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_loading;                                       // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_mask;                                          // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Video;                                         // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Disconnected;                              // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Tips;                                         // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Video_C">();
	}
	static class UWBP_Video_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Video_C>();
	}
};
static_assert(alignof(UWBP_Video_C) == 0x000008, "Wrong alignment on UWBP_Video_C");
static_assert(sizeof(UWBP_Video_C) == 0x000758, "Wrong size on UWBP_Video_C");
static_assert(offsetof(UWBP_Video_C, Anim_VideoSwitch) == 0x000710, "Member 'UWBP_Video_C::Anim_VideoSwitch' has a wrong offset!");
static_assert(offsetof(UWBP_Video_C, Anim_Loading) == 0x000718, "Member 'UWBP_Video_C::Anim_Loading' has a wrong offset!");
static_assert(offsetof(UWBP_Video_C, Btn_Main) == 0x000720, "Member 'UWBP_Video_C::Btn_Main' has a wrong offset!");
static_assert(offsetof(UWBP_Video_C, Img_Interact) == 0x000728, "Member 'UWBP_Video_C::Img_Interact' has a wrong offset!");
static_assert(offsetof(UWBP_Video_C, Img_loading) == 0x000730, "Member 'UWBP_Video_C::Img_loading' has a wrong offset!");
static_assert(offsetof(UWBP_Video_C, Img_mask) == 0x000738, "Member 'UWBP_Video_C::Img_mask' has a wrong offset!");
static_assert(offsetof(UWBP_Video_C, Img_Video) == 0x000740, "Member 'UWBP_Video_C::Img_Video' has a wrong offset!");
static_assert(offsetof(UWBP_Video_C, Overlay_Disconnected) == 0x000748, "Member 'UWBP_Video_C::Overlay_Disconnected' has a wrong offset!");
static_assert(offsetof(UWBP_Video_C, Text_Tips) == 0x000750, "Member 'UWBP_Video_C::Text_Tips' has a wrong offset!");

}
