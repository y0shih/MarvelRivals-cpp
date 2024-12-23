#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Com_VX_PressSmall

#include "Basic.hpp"

#include "PyWidget_Common_Press_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Com_VX_PressSmall.WBP_Com_VX_PressSmall_C
// 0x0028 (0x05D0 - 0x05A8)
class UWBP_Com_VX_PressSmall_C final : public UPyWidget_Common_Press
{
public:
	class UWidgetAnimation*                       Anim_Press_Gray;                                   // 0x05A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Press_Orange;                                 // 0x05B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Press_Yellow;                                 // 0x05B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Press_White;                                  // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_DynamicCore;                                  // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Com_VX_PressSmall_C">();
	}
	static class UWBP_Com_VX_PressSmall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Com_VX_PressSmall_C>();
	}
};
static_assert(alignof(UWBP_Com_VX_PressSmall_C) == 0x000008, "Wrong alignment on UWBP_Com_VX_PressSmall_C");
static_assert(sizeof(UWBP_Com_VX_PressSmall_C) == 0x0005D0, "Wrong size on UWBP_Com_VX_PressSmall_C");
static_assert(offsetof(UWBP_Com_VX_PressSmall_C, Anim_Press_Gray) == 0x0005A8, "Member 'UWBP_Com_VX_PressSmall_C::Anim_Press_Gray' has a wrong offset!");
static_assert(offsetof(UWBP_Com_VX_PressSmall_C, Anim_Press_Orange) == 0x0005B0, "Member 'UWBP_Com_VX_PressSmall_C::Anim_Press_Orange' has a wrong offset!");
static_assert(offsetof(UWBP_Com_VX_PressSmall_C, Anim_Press_Yellow) == 0x0005B8, "Member 'UWBP_Com_VX_PressSmall_C::Anim_Press_Yellow' has a wrong offset!");
static_assert(offsetof(UWBP_Com_VX_PressSmall_C, Anim_Press_White) == 0x0005C0, "Member 'UWBP_Com_VX_PressSmall_C::Anim_Press_White' has a wrong offset!");
static_assert(offsetof(UWBP_Com_VX_PressSmall_C, Slot_DynamicCore) == 0x0005C8, "Member 'UWBP_Com_VX_PressSmall_C::Slot_DynamicCore' has a wrong offset!");

}

