#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_Schedule_Cup

#include "Basic.hpp"

#include "PyWidget_LeagueSchedule_Common_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_Schedule_Cup.WBP_League_Schedule_Cup_C
// 0x0010 (0x05F8 - 0x05E8)
class UWBP_League_Schedule_Cup_C final : public UPyWidget_LeagueSchedule_Cup
{
public:
	class UWidgetSwitcher*                        WidgetSwitcher_Cup;                                // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Cup;                                               // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_Schedule_Cup_C">();
	}
	static class UWBP_League_Schedule_Cup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_Schedule_Cup_C>();
	}
};
static_assert(alignof(UWBP_League_Schedule_Cup_C) == 0x000008, "Wrong alignment on UWBP_League_Schedule_Cup_C");
static_assert(sizeof(UWBP_League_Schedule_Cup_C) == 0x0005F8, "Wrong size on UWBP_League_Schedule_Cup_C");
static_assert(offsetof(UWBP_League_Schedule_Cup_C, WidgetSwitcher_Cup) == 0x0005E8, "Member 'UWBP_League_Schedule_Cup_C::WidgetSwitcher_Cup' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Cup_C, Cup) == 0x0005F0, "Member 'UWBP_League_Schedule_Cup_C::Cup' has a wrong offset!");

}
