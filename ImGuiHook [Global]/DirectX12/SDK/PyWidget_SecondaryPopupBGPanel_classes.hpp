#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SecondaryPopupBGPanel

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel
// 0x0050 (0x0638 - 0x05E8)
class UPyWidget_SecondaryPopupBGPanel : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   TitleText;                                         // 0x05E8(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   LeftBtnText;                                       // 0x0600(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   RightBtnText;                                      // 0x0618(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	ECommonBGType                                 CommonBGType;                                      // 0x0630(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void SetTitleText(const class FText& TitleText_0);
	void SetBtnsText(const class FText& LeftBtnText_0, const class FText& RightBtnText_0, const class FText& Close_text);
	void SetCloseBtnText(const class FText& BtnText);
	void SetBtnAboveTipsText(const class FText& LeftTips, const class FText& RightTips);
	void SetTitleVisible(bool Visible);
	void SetBtnsVisible(bool Visible);
	void SetLeftBtnVisible(bool Visible);
	void SetLeftWhiteBtnVisible(bool Visible);
	void SetLeftBtnTipsVisible(bool Visible);
	void SetButtonEnabled(bool Enabled);
	void SetRightBtnVisible(bool Visible);
	void SetRightBtnTipsVisible(bool Visible);
	void SetBtnAboveTipsVisible(bool Visible);
	void SetRightBtn2Visible(bool Visible);
	void SetRightBtnYellowVisible(bool Visible);
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SecondaryPopupBGPanel">();
	}
	static class UPyWidget_SecondaryPopupBGPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SecondaryPopupBGPanel>();
	}
};
static_assert(alignof(UPyWidget_SecondaryPopupBGPanel) == 0x000008, "Wrong alignment on UPyWidget_SecondaryPopupBGPanel");
static_assert(sizeof(UPyWidget_SecondaryPopupBGPanel) == 0x000638, "Wrong size on UPyWidget_SecondaryPopupBGPanel");
static_assert(offsetof(UPyWidget_SecondaryPopupBGPanel, TitleText) == 0x0005E8, "Member 'UPyWidget_SecondaryPopupBGPanel::TitleText' has a wrong offset!");
static_assert(offsetof(UPyWidget_SecondaryPopupBGPanel, LeftBtnText) == 0x000600, "Member 'UPyWidget_SecondaryPopupBGPanel::LeftBtnText' has a wrong offset!");
static_assert(offsetof(UPyWidget_SecondaryPopupBGPanel, RightBtnText) == 0x000618, "Member 'UPyWidget_SecondaryPopupBGPanel::RightBtnText' has a wrong offset!");
static_assert(offsetof(UPyWidget_SecondaryPopupBGPanel, CommonBGType) == 0x000630, "Member 'UPyWidget_SecondaryPopupBGPanel::CommonBGType' has a wrong offset!");

// PythonClass PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGUnit
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_SecondaryPopupBGUnit : public UPyMarvelUserWidget
{
public:
	ECommonBGType                                 CommonBGType;                                      // 0x05E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void SetVisible(bool IsVisible_0);
	bool ShouldEnableInput();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SecondaryPopupBGUnit">();
	}
	static class UPyWidget_SecondaryPopupBGUnit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SecondaryPopupBGUnit>();
	}
};
static_assert(alignof(UPyWidget_SecondaryPopupBGUnit) == 0x000008, "Wrong alignment on UPyWidget_SecondaryPopupBGUnit");
static_assert(sizeof(UPyWidget_SecondaryPopupBGUnit) == 0x0005E8, "Wrong size on UPyWidget_SecondaryPopupBGUnit");
static_assert(offsetof(UPyWidget_SecondaryPopupBGUnit, CommonBGType) == 0x0005E1, "Member 'UPyWidget_SecondaryPopupBGUnit::CommonBGType' has a wrong offset!");

// PythonClass PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGUnit_V2
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_SecondaryPopupBGUnit_V2 : public UPyWidget_SecondaryPopupBGUnit
{
public:
	void OnInitialized();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void SetVisible(bool IsVisible_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SecondaryPopupBGUnit_V2">();
	}
	static class UPyWidget_SecondaryPopupBGUnit_V2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SecondaryPopupBGUnit_V2>();
	}
};
static_assert(alignof(UPyWidget_SecondaryPopupBGUnit_V2) == 0x000008, "Wrong alignment on UPyWidget_SecondaryPopupBGUnit_V2");
static_assert(sizeof(UPyWidget_SecondaryPopupBGUnit_V2) == 0x0005E8, "Wrong size on UPyWidget_SecondaryPopupBGUnit_V2");

}
