#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_Live_News

#include "Basic.hpp"

#include "PyWidget_LeagueSchedule_Common_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_Live_News.WBP_League_Live_News_C
// 0x0020 (0x0608 - 0x05E8)
class UWBP_League_Live_News_C final : public UPyWidget_League_LiveIcon
{
public:
	class UMarvelImage*                           Vx_Loop1;                                          // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Vx_Loop2;                                          // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Vx_Loop3;                                          // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Vx_Loop4;                                          // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_Live_News_C">();
	}
	static class UWBP_League_Live_News_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_Live_News_C>();
	}
};
static_assert(alignof(UWBP_League_Live_News_C) == 0x000008, "Wrong alignment on UWBP_League_Live_News_C");
static_assert(sizeof(UWBP_League_Live_News_C) == 0x000608, "Wrong size on UWBP_League_Live_News_C");
static_assert(offsetof(UWBP_League_Live_News_C, Vx_Loop1) == 0x0005E8, "Member 'UWBP_League_Live_News_C::Vx_Loop1' has a wrong offset!");
static_assert(offsetof(UWBP_League_Live_News_C, Vx_Loop2) == 0x0005F0, "Member 'UWBP_League_Live_News_C::Vx_Loop2' has a wrong offset!");
static_assert(offsetof(UWBP_League_Live_News_C, Vx_Loop3) == 0x0005F8, "Member 'UWBP_League_Live_News_C::Vx_Loop3' has a wrong offset!");
static_assert(offsetof(UWBP_League_Live_News_C, Vx_Loop4) == 0x000600, "Member 'UWBP_League_Live_News_C::Vx_Loop4' has a wrong offset!");

}
