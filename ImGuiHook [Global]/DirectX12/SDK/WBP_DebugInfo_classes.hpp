#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DebugInfo

#include "Basic.hpp"

#include "PyWidget_DebugInfo_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DebugInfo.WBP_DebugInfo_C
// 0x0008 (0x03C8 - 0x03C0)
class UWBP_DebugInfo_C final : public UPyWidget_DebugInfo
{
public:
	class UMarvelVerticalBox*                     VBox;                                              // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DebugInfo_C">();
	}
	static class UWBP_DebugInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DebugInfo_C>();
	}
};
static_assert(alignof(UWBP_DebugInfo_C) == 0x000008, "Wrong alignment on UWBP_DebugInfo_C");
static_assert(sizeof(UWBP_DebugInfo_C) == 0x0003C8, "Wrong size on UWBP_DebugInfo_C");
static_assert(offsetof(UWBP_DebugInfo_C, VBox) == 0x0003C0, "Member 'UWBP_DebugInfo_C::VBox' has a wrong offset!");

}
