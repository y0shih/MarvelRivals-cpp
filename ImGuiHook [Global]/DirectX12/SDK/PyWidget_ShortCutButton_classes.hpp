#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_ShortCutButton

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"
#include "PyWidget_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_ShortCutButton.PyWidget_ShortCutButton
// 0x02F8 (0x08E0 - 0x05E8)
class UPyWidget_ShortCutButton final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   BtnName;                                           // 0x05E8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                          IsTwoBtn;                                          // 0x0600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsEnabled;                                         // 0x0601(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_602[0x6];                                      // 0x0602(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonSounds                          Sound;                                             // 0x0608(0x0018)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FUIActionData                          HotKey_Left;                                       // 0x0620(0x0058)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FUIActionData                          HotKey_Right;                                      // 0x0678(0x0058)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                DefTexMargin;                                      // 0x06D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FMargin                                TowTexMargin;                                      // 0x06E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FSlateBrush                            IconBrush_Left;                                    // 0x06F0(0x00D0)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FSlateBrush                            IconBrush_Right;                                   // 0x07C0(0x00D0)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	float                                         RenderAngle_Left;                                  // 0x0890(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RenderAngle_Right;                                 // 0x0894(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Left_Btn_Width_Override;                           // 0x0898(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Left_Btn_Height_Override;                          // 0x089C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Right_Btn_Width_Override;                          // 0x08A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Right_Btn_Height_Override;                         // 0x08A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x08A8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnLeftBtnClicked;                                  // 0x08B8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnRightBtnClicked;                                 // 0x08C8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnClicked__DelegateSignature();
	void OnLeftBtnClicked__DelegateSignature();
	void OnRightBtnClicked__DelegateSignature();
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void DefaultStyle();
	void PressedStyle();
	void HoveredStyle();
	void DisabledStyle();
	void SetBtnIsEnabled(bool Enabled);
	void SetIsPlaySound(bool IsPlaySound);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_ShortCutButton">();
	}
	static class UPyWidget_ShortCutButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_ShortCutButton>();
	}
};
static_assert(alignof(UPyWidget_ShortCutButton) == 0x000010, "Wrong alignment on UPyWidget_ShortCutButton");
static_assert(sizeof(UPyWidget_ShortCutButton) == 0x0008E0, "Wrong size on UPyWidget_ShortCutButton");
static_assert(offsetof(UPyWidget_ShortCutButton, BtnName) == 0x0005E8, "Member 'UPyWidget_ShortCutButton::BtnName' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, IsTwoBtn) == 0x000600, "Member 'UPyWidget_ShortCutButton::IsTwoBtn' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, IsEnabled) == 0x000601, "Member 'UPyWidget_ShortCutButton::IsEnabled' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, Sound) == 0x000608, "Member 'UPyWidget_ShortCutButton::Sound' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, HotKey_Left) == 0x000620, "Member 'UPyWidget_ShortCutButton::HotKey_Left' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, HotKey_Right) == 0x000678, "Member 'UPyWidget_ShortCutButton::HotKey_Right' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, DefTexMargin) == 0x0006D0, "Member 'UPyWidget_ShortCutButton::DefTexMargin' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, TowTexMargin) == 0x0006E0, "Member 'UPyWidget_ShortCutButton::TowTexMargin' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, IconBrush_Left) == 0x0006F0, "Member 'UPyWidget_ShortCutButton::IconBrush_Left' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, IconBrush_Right) == 0x0007C0, "Member 'UPyWidget_ShortCutButton::IconBrush_Right' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, RenderAngle_Left) == 0x000890, "Member 'UPyWidget_ShortCutButton::RenderAngle_Left' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, RenderAngle_Right) == 0x000894, "Member 'UPyWidget_ShortCutButton::RenderAngle_Right' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, Left_Btn_Width_Override) == 0x000898, "Member 'UPyWidget_ShortCutButton::Left_Btn_Width_Override' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, Left_Btn_Height_Override) == 0x00089C, "Member 'UPyWidget_ShortCutButton::Left_Btn_Height_Override' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, Right_Btn_Width_Override) == 0x0008A0, "Member 'UPyWidget_ShortCutButton::Right_Btn_Width_Override' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, Right_Btn_Height_Override) == 0x0008A4, "Member 'UPyWidget_ShortCutButton::Right_Btn_Height_Override' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, OnClicked) == 0x0008A8, "Member 'UPyWidget_ShortCutButton::OnClicked' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, OnLeftBtnClicked) == 0x0008B8, "Member 'UPyWidget_ShortCutButton::OnLeftBtnClicked' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutButton, OnRightBtnClicked) == 0x0008C8, "Member 'UPyWidget_ShortCutButton::OnRightBtnClicked' has a wrong offset!");

// PythonClass PyWidget_ShortCutButton.PyWidget_ShortCutInfoButton
// 0x0108 (0x0850 - 0x0748)
#pragma pack(push, 0x1)
class alignas(0x10) UPyWidget_ShortCutInfoButton : public UPyWidget_Button
{
public:
	uint8                                         Pad_748[0x8];                                      // 0x0748(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            ImageIconBrush;                                    // 0x0750(0x00D0)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                          IsRightBtn;                                        // 0x0820(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_821[0x3];                                      // 0x0821(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RenderAngle;                                       // 0x0824(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             KeyBtnNormal;                                      // 0x0828(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             KeyBtnPress;                                       // 0x0830(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             KeyBtnHover;                                       // 0x0838(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             KeyBtnDisable;                                     // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void SetBtnIsPressed(bool IsBtnPressed_0);
	void SetIsHover(bool IsHover_0);
	void SetBtnIsEnabled(bool Enabled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_ShortCutInfoButton">();
	}
	static class UPyWidget_ShortCutInfoButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_ShortCutInfoButton>();
	}
};
#pragma pack(pop)
static_assert(alignof(UPyWidget_ShortCutInfoButton) == 0x000010, "Wrong alignment on UPyWidget_ShortCutInfoButton");
static_assert(sizeof(UPyWidget_ShortCutInfoButton) == 0x000850, "Wrong size on UPyWidget_ShortCutInfoButton");
static_assert(offsetof(UPyWidget_ShortCutInfoButton, ImageIconBrush) == 0x000750, "Member 'UPyWidget_ShortCutInfoButton::ImageIconBrush' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutInfoButton, IsRightBtn) == 0x000820, "Member 'UPyWidget_ShortCutInfoButton::IsRightBtn' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutInfoButton, RenderAngle) == 0x000824, "Member 'UPyWidget_ShortCutInfoButton::RenderAngle' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutInfoButton, KeyBtnNormal) == 0x000828, "Member 'UPyWidget_ShortCutInfoButton::KeyBtnNormal' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutInfoButton, KeyBtnPress) == 0x000830, "Member 'UPyWidget_ShortCutInfoButton::KeyBtnPress' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutInfoButton, KeyBtnHover) == 0x000838, "Member 'UPyWidget_ShortCutInfoButton::KeyBtnHover' has a wrong offset!");
static_assert(offsetof(UPyWidget_ShortCutInfoButton, KeyBtnDisable) == 0x000840, "Member 'UPyWidget_ShortCutInfoButton::KeyBtnDisable' has a wrong offset!");

}
