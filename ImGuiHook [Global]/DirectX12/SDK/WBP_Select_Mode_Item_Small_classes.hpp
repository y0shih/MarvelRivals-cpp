#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Select_Mode_Item_Small

#include "Basic.hpp"

#include "PyWidget_SelectModeItem_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Select_Mode_Item_Small.WBP_Select_Mode_Item_Small_C
// 0x0130 (0x0AA0 - 0x0970)
class UWBP_Select_Mode_Item_Small_C final : public UPyWidget_SelectModeItemV2
{
public:
	class UWidgetAnimation*                       Anim_NormalToLockHover;                            // 0x0970(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_AI_Difficulty;                                // 0x0978(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HorizontalBox_TeamNumber;                          // 0x0980(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Details_Bg;                                    // 0x0988(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Disable_Bg;                                    // 0x0990(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Disable_Lock;                                  // 0x0998(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Icon;                                          // 0x09A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Icon_Black;                                    // 0x09A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Icon_Hover;                                    // 0x09B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Item_BgYellow;                                 // 0x09B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Mode_Bg;                                       // 0x09C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Mode_Hover;                                    // 0x09C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Select_Box;                                    // 0x09D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Select_Icon;                                   // 0x09D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Tips_Bg;                                       // 0x09E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Tips_Bg2;                                      // 0x09E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_KeyWidget_C*                KeyWidget_Rules;                                   // 0x09F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_KeyWidget_C*                KeyWidgetBP_PSLeft;                                // 0x09F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_KeyWidget_C*                KeyWidgetBP_PSRight;                               // 0x0A00(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           MarvelImage;                                       // 0x0A08(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           MarvelImage_1;                                     // 0x0A10(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_AI_Difficulty;                             // 0x0A18(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Details;                                   // 0x0A20(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Item_Disable;                              // 0x0A28(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Select;                                    // 0x0A30(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Tips;                                      // 0x0A38(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Content;                                   // 0x0A40(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_Reddot;                                       // 0x0A48(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Disable_Describe;                             // 0x0A50(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_MaxNumber;                                    // 0x0A58(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Mode_Name;                                    // 0x0A60(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Number;                                       // 0x0A68(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Tips;                                         // 0x0A70(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Tips_Time;                                    // 0x0A78(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mode_ItemTab_V3_C*                 WBP_AI_Advance;                                    // 0x0A80(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mode_ItemTab_V3_C*                 WBP_AI_Beginner;                                   // 0x0A88(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mode_ItemTab_V3_C*                 WBP_AI_Challenge;                                  // 0x0A90(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Select_Mode_Item_Small_C">();
	}
	static class UWBP_Select_Mode_Item_Small_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Select_Mode_Item_Small_C>();
	}
};
static_assert(alignof(UWBP_Select_Mode_Item_Small_C) == 0x000010, "Wrong alignment on UWBP_Select_Mode_Item_Small_C");
static_assert(sizeof(UWBP_Select_Mode_Item_Small_C) == 0x000AA0, "Wrong size on UWBP_Select_Mode_Item_Small_C");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Anim_NormalToLockHover) == 0x000970, "Member 'UWBP_Select_Mode_Item_Small_C::Anim_NormalToLockHover' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, HBox_AI_Difficulty) == 0x000978, "Member 'UWBP_Select_Mode_Item_Small_C::HBox_AI_Difficulty' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, HorizontalBox_TeamNumber) == 0x000980, "Member 'UWBP_Select_Mode_Item_Small_C::HorizontalBox_TeamNumber' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Img_Details_Bg) == 0x000988, "Member 'UWBP_Select_Mode_Item_Small_C::Img_Details_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Img_Disable_Bg) == 0x000990, "Member 'UWBP_Select_Mode_Item_Small_C::Img_Disable_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Img_Disable_Lock) == 0x000998, "Member 'UWBP_Select_Mode_Item_Small_C::Img_Disable_Lock' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Img_Icon) == 0x0009A0, "Member 'UWBP_Select_Mode_Item_Small_C::Img_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Img_Icon_Black) == 0x0009A8, "Member 'UWBP_Select_Mode_Item_Small_C::Img_Icon_Black' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Img_Icon_Hover) == 0x0009B0, "Member 'UWBP_Select_Mode_Item_Small_C::Img_Icon_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Img_Item_BgYellow) == 0x0009B8, "Member 'UWBP_Select_Mode_Item_Small_C::Img_Item_BgYellow' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Img_Mode_Bg) == 0x0009C0, "Member 'UWBP_Select_Mode_Item_Small_C::Img_Mode_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Img_Mode_Hover) == 0x0009C8, "Member 'UWBP_Select_Mode_Item_Small_C::Img_Mode_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Img_Select_Box) == 0x0009D0, "Member 'UWBP_Select_Mode_Item_Small_C::Img_Select_Box' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Img_Select_Icon) == 0x0009D8, "Member 'UWBP_Select_Mode_Item_Small_C::Img_Select_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Img_Tips_Bg) == 0x0009E0, "Member 'UWBP_Select_Mode_Item_Small_C::Img_Tips_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Img_Tips_Bg2) == 0x0009E8, "Member 'UWBP_Select_Mode_Item_Small_C::Img_Tips_Bg2' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, KeyWidget_Rules) == 0x0009F0, "Member 'UWBP_Select_Mode_Item_Small_C::KeyWidget_Rules' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, KeyWidgetBP_PSLeft) == 0x0009F8, "Member 'UWBP_Select_Mode_Item_Small_C::KeyWidgetBP_PSLeft' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, KeyWidgetBP_PSRight) == 0x000A00, "Member 'UWBP_Select_Mode_Item_Small_C::KeyWidgetBP_PSRight' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, MarvelImage) == 0x000A08, "Member 'UWBP_Select_Mode_Item_Small_C::MarvelImage' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, MarvelImage_1) == 0x000A10, "Member 'UWBP_Select_Mode_Item_Small_C::MarvelImage_1' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Overlay_AI_Difficulty) == 0x000A18, "Member 'UWBP_Select_Mode_Item_Small_C::Overlay_AI_Difficulty' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Overlay_Details) == 0x000A20, "Member 'UWBP_Select_Mode_Item_Small_C::Overlay_Details' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Overlay_Item_Disable) == 0x000A28, "Member 'UWBP_Select_Mode_Item_Small_C::Overlay_Item_Disable' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Overlay_Select) == 0x000A30, "Member 'UWBP_Select_Mode_Item_Small_C::Overlay_Select' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Overlay_Tips) == 0x000A38, "Member 'UWBP_Select_Mode_Item_Small_C::Overlay_Tips' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, SizeBox_Content) == 0x000A40, "Member 'UWBP_Select_Mode_Item_Small_C::SizeBox_Content' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Slot_Reddot) == 0x000A48, "Member 'UWBP_Select_Mode_Item_Small_C::Slot_Reddot' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Text_Disable_Describe) == 0x000A50, "Member 'UWBP_Select_Mode_Item_Small_C::Text_Disable_Describe' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Text_MaxNumber) == 0x000A58, "Member 'UWBP_Select_Mode_Item_Small_C::Text_MaxNumber' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Text_Mode_Name) == 0x000A60, "Member 'UWBP_Select_Mode_Item_Small_C::Text_Mode_Name' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Text_Number) == 0x000A68, "Member 'UWBP_Select_Mode_Item_Small_C::Text_Number' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Text_Tips) == 0x000A70, "Member 'UWBP_Select_Mode_Item_Small_C::Text_Tips' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, Text_Tips_Time) == 0x000A78, "Member 'UWBP_Select_Mode_Item_Small_C::Text_Tips_Time' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, WBP_AI_Advance) == 0x000A80, "Member 'UWBP_Select_Mode_Item_Small_C::WBP_AI_Advance' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, WBP_AI_Beginner) == 0x000A88, "Member 'UWBP_Select_Mode_Item_Small_C::WBP_AI_Beginner' has a wrong offset!");
static_assert(offsetof(UWBP_Select_Mode_Item_Small_C, WBP_AI_Challenge) == 0x000A90, "Member 'UWBP_Select_Mode_Item_Small_C::WBP_AI_Challenge' has a wrong offset!");

}
