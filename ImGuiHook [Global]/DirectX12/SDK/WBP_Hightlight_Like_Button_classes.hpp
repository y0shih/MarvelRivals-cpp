#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hightlight_Like_Button

#include "Basic.hpp"

#include "PyWidget_SettlementPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hightlight_Like_Button.WBP_Hightlight_Like_Button_C
// 0x00B0 (0x06F0 - 0x0640)
class UWBP_Hightlight_Like_Button_C final : public UPyWidget_Settlement_Like_Button
{
public:
	class UWidgetAnimation*                       Anim_ChangeText_Effect;                            // 0x0640(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_PressToLiked;                                 // 0x0648(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_PressToNormal;                                // 0x0650(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_PressToHover;                                 // 0x0658(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_HoverToPress;                                 // 0x0660(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_HoverToNormal;                                // 0x0668(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_NormalToHover;                                // 0x0670(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Color;                                        // 0x0678(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_Like;                                          // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Hover;                                      // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Liked;                                      // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Normal;                                     // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Press;                                      // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Hover_Line;                                    // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Icon_Like;                                     // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Icon_Like_Vx;                                  // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Likked_Line;                                   // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Normal_Line;                                   // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Text_Light_Vx;                                 // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Text_Light_VxGlow;                             // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_LikeNum;                                   // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_LikeNum;                                      // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hightlight_Like_Button_C">();
	}
	static class UWBP_Hightlight_Like_Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hightlight_Like_Button_C>();
	}
};
static_assert(alignof(UWBP_Hightlight_Like_Button_C) == 0x000008, "Wrong alignment on UWBP_Hightlight_Like_Button_C");
static_assert(sizeof(UWBP_Hightlight_Like_Button_C) == 0x0006F0, "Wrong size on UWBP_Hightlight_Like_Button_C");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Anim_ChangeText_Effect) == 0x000640, "Member 'UWBP_Hightlight_Like_Button_C::Anim_ChangeText_Effect' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Anim_PressToLiked) == 0x000648, "Member 'UWBP_Hightlight_Like_Button_C::Anim_PressToLiked' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Anim_PressToNormal) == 0x000650, "Member 'UWBP_Hightlight_Like_Button_C::Anim_PressToNormal' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Anim_PressToHover) == 0x000658, "Member 'UWBP_Hightlight_Like_Button_C::Anim_PressToHover' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Anim_HoverToPress) == 0x000660, "Member 'UWBP_Hightlight_Like_Button_C::Anim_HoverToPress' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Anim_HoverToNormal) == 0x000668, "Member 'UWBP_Hightlight_Like_Button_C::Anim_HoverToNormal' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Anim_NormalToHover) == 0x000670, "Member 'UWBP_Hightlight_Like_Button_C::Anim_NormalToHover' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Anim_Color) == 0x000678, "Member 'UWBP_Hightlight_Like_Button_C::Anim_Color' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Btn_Like) == 0x000680, "Member 'UWBP_Hightlight_Like_Button_C::Btn_Like' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Img_Bg_Hover) == 0x000688, "Member 'UWBP_Hightlight_Like_Button_C::Img_Bg_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Img_Bg_Liked) == 0x000690, "Member 'UWBP_Hightlight_Like_Button_C::Img_Bg_Liked' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Img_Bg_Normal) == 0x000698, "Member 'UWBP_Hightlight_Like_Button_C::Img_Bg_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Img_Bg_Press) == 0x0006A0, "Member 'UWBP_Hightlight_Like_Button_C::Img_Bg_Press' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Img_Hover_Line) == 0x0006A8, "Member 'UWBP_Hightlight_Like_Button_C::Img_Hover_Line' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Img_Icon_Like) == 0x0006B0, "Member 'UWBP_Hightlight_Like_Button_C::Img_Icon_Like' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Img_Icon_Like_Vx) == 0x0006B8, "Member 'UWBP_Hightlight_Like_Button_C::Img_Icon_Like_Vx' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Img_Likked_Line) == 0x0006C0, "Member 'UWBP_Hightlight_Like_Button_C::Img_Likked_Line' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Img_Normal_Line) == 0x0006C8, "Member 'UWBP_Hightlight_Like_Button_C::Img_Normal_Line' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Img_Text_Light_Vx) == 0x0006D0, "Member 'UWBP_Hightlight_Like_Button_C::Img_Text_Light_Vx' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Img_Text_Light_VxGlow) == 0x0006D8, "Member 'UWBP_Hightlight_Like_Button_C::Img_Text_Light_VxGlow' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, SizeBox_LikeNum) == 0x0006E0, "Member 'UWBP_Hightlight_Like_Button_C::SizeBox_LikeNum' has a wrong offset!");
static_assert(offsetof(UWBP_Hightlight_Like_Button_C, Text_LikeNum) == 0x0006E8, "Member 'UWBP_Hightlight_Like_Button_C::Text_LikeNum' has a wrong offset!");

}
