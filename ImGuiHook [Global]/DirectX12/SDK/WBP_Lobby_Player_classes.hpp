#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Lobby_Player

#include "Basic.hpp"

#include "PyWidget_FriendsEntry_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Lobby_Player.WBP_Lobby_Player_C
// 0x0020 (0x0638 - 0x0618)
class UWBP_Lobby_Player_C final : public UPyWidget_FriendsEntry
{
public:
	class UMarvelButton*                          Btn_Card_Entry;                                    // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Head_Icon_C*                Friends_Head;                                      // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_KeyWidget_C*                KeyWidgetBP_PlayerHead;                            // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Content;                                   // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Lobby_Player_C">();
	}
	static class UWBP_Lobby_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Lobby_Player_C>();
	}
};
static_assert(alignof(UWBP_Lobby_Player_C) == 0x000008, "Wrong alignment on UWBP_Lobby_Player_C");
static_assert(sizeof(UWBP_Lobby_Player_C) == 0x000638, "Wrong size on UWBP_Lobby_Player_C");
static_assert(offsetof(UWBP_Lobby_Player_C, Btn_Card_Entry) == 0x000618, "Member 'UWBP_Lobby_Player_C::Btn_Card_Entry' has a wrong offset!");
static_assert(offsetof(UWBP_Lobby_Player_C, Friends_Head) == 0x000620, "Member 'UWBP_Lobby_Player_C::Friends_Head' has a wrong offset!");
static_assert(offsetof(UWBP_Lobby_Player_C, KeyWidgetBP_PlayerHead) == 0x000628, "Member 'UWBP_Lobby_Player_C::KeyWidgetBP_PlayerHead' has a wrong offset!");
static_assert(offsetof(UWBP_Lobby_Player_C, Overlay_Content) == 0x000630, "Member 'UWBP_Lobby_Player_C::Overlay_Content' has a wrong offset!");

}
