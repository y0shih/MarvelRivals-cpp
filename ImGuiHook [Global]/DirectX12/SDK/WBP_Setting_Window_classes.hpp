#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Setting_Window

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Setting_Window.WBP_Setting_Window_C
// 0x00F0 (0x04A8 - 0x03B8)
class UWBP_Setting_Window_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_FadeIn;                                       // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg_MiniKeyBoard;                                   // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_Reset;                                         // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_SelectHero;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_SwitchHero;                                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Description_Bg;                              // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Change;                                        // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_HeroHeadBg;                                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_line;                                          // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_SelectHero_Hover;                              // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Tips;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_MiniKeyBoard;                              // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Reset;                                     // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_SwitchHero;                                // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelCanvasPanel*                     Panel_Mask;                                        // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelScrollBox*                       ScrollBox_List;                                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_SettingContent;                               // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_Top;                                        // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_HeroName;                                     // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_Describe_Tips_V2_C*        WBP_DescribeTips_V2;                               // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_HeroHead_Spuare_C*          WBP_HeroHead_Spuare;                               // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_HeroHead_Spuare_C*          WBP_Select_HeroHead;                               // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_Describe_C*                WBP_Setting_Describe;                              // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDownList_Light_C*              WBP_Setting_DropdownList;                          // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_Item_C*                    WBP_Setting_HightLight;                            // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_MiniKeyBoard_New_C*        WBP_Setting_MiniKeyBoard;                          // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_MiniKeyBoard_Mouse_Test_C* WBP_Setting_MiniKeyBoard_Mouse;                    // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             All_Icon;                                          // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Setting_Window(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Setting_Window_C">();
	}
	static class UWBP_Setting_Window_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Setting_Window_C>();
	}
};
static_assert(alignof(UWBP_Setting_Window_C) == 0x000008, "Wrong alignment on UWBP_Setting_Window_C");
static_assert(sizeof(UWBP_Setting_Window_C) == 0x0004A8, "Wrong size on UWBP_Setting_Window_C");
static_assert(offsetof(UWBP_Setting_Window_C, UberGraphFrame) == 0x0003B8, "Member 'UWBP_Setting_Window_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Anim_FadeIn) == 0x0003C0, "Member 'UWBP_Setting_Window_C::Anim_FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Bg_MiniKeyBoard) == 0x0003C8, "Member 'UWBP_Setting_Window_C::Bg_MiniKeyBoard' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Btn_Reset) == 0x0003D0, "Member 'UWBP_Setting_Window_C::Btn_Reset' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Btn_SelectHero) == 0x0003D8, "Member 'UWBP_Setting_Window_C::Btn_SelectHero' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Btn_SwitchHero) == 0x0003E0, "Member 'UWBP_Setting_Window_C::Btn_SwitchHero' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Image_1) == 0x0003E8, "Member 'UWBP_Setting_Window_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Image_Description_Bg) == 0x0003F0, "Member 'UWBP_Setting_Window_C::Image_Description_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Img_Change) == 0x0003F8, "Member 'UWBP_Setting_Window_C::Img_Change' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Img_HeroHeadBg) == 0x000400, "Member 'UWBP_Setting_Window_C::Img_HeroHeadBg' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Img_line) == 0x000408, "Member 'UWBP_Setting_Window_C::Img_line' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Img_SelectHero_Hover) == 0x000410, "Member 'UWBP_Setting_Window_C::Img_SelectHero_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Img_Tips) == 0x000418, "Member 'UWBP_Setting_Window_C::Img_Tips' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Overlay_MiniKeyBoard) == 0x000420, "Member 'UWBP_Setting_Window_C::Overlay_MiniKeyBoard' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Overlay_Reset) == 0x000428, "Member 'UWBP_Setting_Window_C::Overlay_Reset' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Overlay_SwitchHero) == 0x000430, "Member 'UWBP_Setting_Window_C::Overlay_SwitchHero' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Panel_Mask) == 0x000438, "Member 'UWBP_Setting_Window_C::Panel_Mask' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, ScrollBox_List) == 0x000440, "Member 'UWBP_Setting_Window_C::ScrollBox_List' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Slot_SettingContent) == 0x000448, "Member 'UWBP_Setting_Window_C::Slot_SettingContent' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Spacer_Top) == 0x000450, "Member 'UWBP_Setting_Window_C::Spacer_Top' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, Text_HeroName) == 0x000458, "Member 'UWBP_Setting_Window_C::Text_HeroName' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, WBP_DescribeTips_V2) == 0x000460, "Member 'UWBP_Setting_Window_C::WBP_DescribeTips_V2' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, WBP_HeroHead_Spuare) == 0x000468, "Member 'UWBP_Setting_Window_C::WBP_HeroHead_Spuare' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, WBP_Select_HeroHead) == 0x000470, "Member 'UWBP_Setting_Window_C::WBP_Select_HeroHead' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, WBP_Setting_Describe) == 0x000478, "Member 'UWBP_Setting_Window_C::WBP_Setting_Describe' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, WBP_Setting_DropdownList) == 0x000480, "Member 'UWBP_Setting_Window_C::WBP_Setting_DropdownList' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, WBP_Setting_HightLight) == 0x000488, "Member 'UWBP_Setting_Window_C::WBP_Setting_HightLight' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, WBP_Setting_MiniKeyBoard) == 0x000490, "Member 'UWBP_Setting_Window_C::WBP_Setting_MiniKeyBoard' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, WBP_Setting_MiniKeyBoard_Mouse) == 0x000498, "Member 'UWBP_Setting_Window_C::WBP_Setting_MiniKeyBoard_Mouse' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Window_C, All_Icon) == 0x0004A0, "Member 'UWBP_Setting_Window_C::All_Icon' has a wrong offset!");

}
