#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP3D_Dying

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "PyWidget3D_Dying_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP3D_Dying.WBP3D_Dying_C
// 0x0040 (0x08E0 - 0x08A0)
class UWBP3D_Dying_C final : public UPyWidget3D_Dying
{
public:
	class UMarvelImage*                           Img_bg;                                            // 0x08A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Up;                                         // 0x08A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Cycle_Vx;                                      // 0x08B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Flow_Vx;                                       // 0x08B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Icon;                                          // 0x08C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              Widget_Distance;                                   // 0x08C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP3D_Dying_C">();
	}
	static class UWBP3D_Dying_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP3D_Dying_C>();
	}
};
static_assert(alignof(UWBP3D_Dying_C) == 0x000010, "Wrong alignment on UWBP3D_Dying_C");
static_assert(sizeof(UWBP3D_Dying_C) == 0x0008E0, "Wrong size on UWBP3D_Dying_C");
static_assert(offsetof(UWBP3D_Dying_C, Img_bg) == 0x0008A0, "Member 'UWBP3D_Dying_C::Img_bg' has a wrong offset!");
static_assert(offsetof(UWBP3D_Dying_C, Img_Bg_Up) == 0x0008A8, "Member 'UWBP3D_Dying_C::Img_Bg_Up' has a wrong offset!");
static_assert(offsetof(UWBP3D_Dying_C, Img_Cycle_Vx) == 0x0008B0, "Member 'UWBP3D_Dying_C::Img_Cycle_Vx' has a wrong offset!");
static_assert(offsetof(UWBP3D_Dying_C, Img_Flow_Vx) == 0x0008B8, "Member 'UWBP3D_Dying_C::Img_Flow_Vx' has a wrong offset!");
static_assert(offsetof(UWBP3D_Dying_C, Img_Icon) == 0x0008C0, "Member 'UWBP3D_Dying_C::Img_Icon' has a wrong offset!");
static_assert(offsetof(UWBP3D_Dying_C, Widget_Distance) == 0x0008C8, "Member 'UWBP3D_Dying_C::Widget_Distance' has a wrong offset!");

}
