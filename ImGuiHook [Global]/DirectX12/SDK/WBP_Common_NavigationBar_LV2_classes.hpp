#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Common_NavigationBar_LV2

#include "Basic.hpp"

#include "PyWidget_Common_NavigationBar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Common_NavigationBar_LV2.WBP_Common_NavigationBar_LV2_C
// 0x0038 (0x07B0 - 0x0778)
class UWBP_Common_NavigationBar_LV2_C final : public UPyWidget_Common_NavigationBar
{
public:
	class UMarvelImage*                           Img_Title_Bg;                                      // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Top_Bg;                                        // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_NavigationBar_FirstInfo_C*  NavigationBar_FirstInfo;                           // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NavigationBar_RightArea_C*         NavigationBar_RightArea;                           // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_NavigationBar_SecondInfo_C* NavigationBar_SecondInfo;                          // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_PlayerHead_Ps;                             // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   Overlay_Title;                                     // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Common_NavigationBar_LV2_C">();
	}
	static class UWBP_Common_NavigationBar_LV2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Common_NavigationBar_LV2_C>();
	}
};
static_assert(alignof(UWBP_Common_NavigationBar_LV2_C) == 0x000008, "Wrong alignment on UWBP_Common_NavigationBar_LV2_C");
static_assert(sizeof(UWBP_Common_NavigationBar_LV2_C) == 0x0007B0, "Wrong size on UWBP_Common_NavigationBar_LV2_C");
static_assert(offsetof(UWBP_Common_NavigationBar_LV2_C, Img_Title_Bg) == 0x000778, "Member 'UWBP_Common_NavigationBar_LV2_C::Img_Title_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Common_NavigationBar_LV2_C, Img_Top_Bg) == 0x000780, "Member 'UWBP_Common_NavigationBar_LV2_C::Img_Top_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Common_NavigationBar_LV2_C, NavigationBar_FirstInfo) == 0x000788, "Member 'UWBP_Common_NavigationBar_LV2_C::NavigationBar_FirstInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Common_NavigationBar_LV2_C, NavigationBar_RightArea) == 0x000790, "Member 'UWBP_Common_NavigationBar_LV2_C::NavigationBar_RightArea' has a wrong offset!");
static_assert(offsetof(UWBP_Common_NavigationBar_LV2_C, NavigationBar_SecondInfo) == 0x000798, "Member 'UWBP_Common_NavigationBar_LV2_C::NavigationBar_SecondInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Common_NavigationBar_LV2_C, Overlay_PlayerHead_Ps) == 0x0007A0, "Member 'UWBP_Common_NavigationBar_LV2_C::Overlay_PlayerHead_Ps' has a wrong offset!");
static_assert(offsetof(UWBP_Common_NavigationBar_LV2_C, Overlay_Title) == 0x0007A8, "Member 'UWBP_Common_NavigationBar_LV2_C::Overlay_Title' has a wrong offset!");

}
