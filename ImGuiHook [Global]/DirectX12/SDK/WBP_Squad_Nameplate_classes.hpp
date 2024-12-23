#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Squad_Nameplate

#include "Basic.hpp"

#include "PyWidget_Squad_MainPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Squad_Nameplate.WBP_Squad_Nameplate_C
// 0x0070 (0x09D0 - 0x0960)
class UWBP_Squad_Nameplate_C final : public UPyWidget_Squad_Nameplate
{
public:
	class UMarvelButton*                          Btn_QuitTeam;                                      // 0x0958(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Add_Hover;                                     // 0x0960(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Add_Normal;                                    // 0x0968(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Add_Press;                                     // 0x0970(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Hover;                                      // 0x0978(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Normal;                                     // 0x0980(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Press;                                      // 0x0988(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Press01;                                    // 0x0990(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Hover;                                         // 0x0998(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Normal;                                        // 0x09A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Press;                                         // 0x09A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Btn_QuitTeam;                              // 0x09B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Hover;                                     // 0x09B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Press;                                     // 0x09C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Squad_Nameplate_C">();
	}
	static class UWBP_Squad_Nameplate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Squad_Nameplate_C>();
	}
};
static_assert(alignof(UWBP_Squad_Nameplate_C) == 0x000010, "Wrong alignment on UWBP_Squad_Nameplate_C");
static_assert(sizeof(UWBP_Squad_Nameplate_C) == 0x0009D0, "Wrong size on UWBP_Squad_Nameplate_C");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Btn_QuitTeam) == 0x000958, "Member 'UWBP_Squad_Nameplate_C::Btn_QuitTeam' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Img_Add_Hover) == 0x000960, "Member 'UWBP_Squad_Nameplate_C::Img_Add_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Img_Add_Normal) == 0x000968, "Member 'UWBP_Squad_Nameplate_C::Img_Add_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Img_Add_Press) == 0x000970, "Member 'UWBP_Squad_Nameplate_C::Img_Add_Press' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Img_Bg_Hover) == 0x000978, "Member 'UWBP_Squad_Nameplate_C::Img_Bg_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Img_Bg_Normal) == 0x000980, "Member 'UWBP_Squad_Nameplate_C::Img_Bg_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Img_Bg_Press) == 0x000988, "Member 'UWBP_Squad_Nameplate_C::Img_Bg_Press' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Img_Bg_Press01) == 0x000990, "Member 'UWBP_Squad_Nameplate_C::Img_Bg_Press01' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Img_Hover) == 0x000998, "Member 'UWBP_Squad_Nameplate_C::Img_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Img_Normal) == 0x0009A0, "Member 'UWBP_Squad_Nameplate_C::Img_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Img_Press) == 0x0009A8, "Member 'UWBP_Squad_Nameplate_C::Img_Press' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Overlay_Btn_QuitTeam) == 0x0009B0, "Member 'UWBP_Squad_Nameplate_C::Overlay_Btn_QuitTeam' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Overlay_Hover) == 0x0009B8, "Member 'UWBP_Squad_Nameplate_C::Overlay_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_Nameplate_C, Overlay_Press) == 0x0009C0, "Member 'UWBP_Squad_Nameplate_C::Overlay_Press' has a wrong offset!");

}

