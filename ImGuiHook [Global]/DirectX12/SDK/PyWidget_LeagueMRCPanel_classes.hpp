#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LeagueMRCPanel

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_LeagueMRCPanel.PyWidget_LeagueMRCPanel
// 0x00F8 (0x06E0 - 0x05E8)
class UPyWidget_LeagueMRCPanel : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            TextColorRankMeetStandard;                         // 0x05E4(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColorRankNotMeetStandard;                      // 0x05F8(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColorSignUpSuccess;                            // 0x060C(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColorSignUpCanceling;                          // 0x0620(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColorSignUpConfirming;                         // 0x0634(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColorPreliminaryMatching;                      // 0x0648(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColorPreliminaryFinish;                        // 0x065C(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColorKnockoutEarlyStart;                       // 0x0670(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColorWalkover;                                 // 0x0684(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColorPromoted;                                 // 0x0698(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMargin                                SignUpCardMargin;                                  // 0x06AC(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                ObserveCardMargin;                                 // 0x06BC(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_6CC[0x4];                                      // 0x06CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuideTipsStyle>                GuideActions;                                      // 0x06D0(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LeagueMRCPanel">();
	}
	static class UPyWidget_LeagueMRCPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LeagueMRCPanel>();
	}
};
static_assert(alignof(UPyWidget_LeagueMRCPanel) == 0x000008, "Wrong alignment on UPyWidget_LeagueMRCPanel");
static_assert(sizeof(UPyWidget_LeagueMRCPanel) == 0x0006E0, "Wrong size on UPyWidget_LeagueMRCPanel");
static_assert(offsetof(UPyWidget_LeagueMRCPanel, TextColorRankMeetStandard) == 0x0005E4, "Member 'UPyWidget_LeagueMRCPanel::TextColorRankMeetStandard' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCPanel, TextColorRankNotMeetStandard) == 0x0005F8, "Member 'UPyWidget_LeagueMRCPanel::TextColorRankNotMeetStandard' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCPanel, TextColorSignUpSuccess) == 0x00060C, "Member 'UPyWidget_LeagueMRCPanel::TextColorSignUpSuccess' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCPanel, TextColorSignUpCanceling) == 0x000620, "Member 'UPyWidget_LeagueMRCPanel::TextColorSignUpCanceling' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCPanel, TextColorSignUpConfirming) == 0x000634, "Member 'UPyWidget_LeagueMRCPanel::TextColorSignUpConfirming' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCPanel, TextColorPreliminaryMatching) == 0x000648, "Member 'UPyWidget_LeagueMRCPanel::TextColorPreliminaryMatching' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCPanel, TextColorPreliminaryFinish) == 0x00065C, "Member 'UPyWidget_LeagueMRCPanel::TextColorPreliminaryFinish' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCPanel, TextColorKnockoutEarlyStart) == 0x000670, "Member 'UPyWidget_LeagueMRCPanel::TextColorKnockoutEarlyStart' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCPanel, TextColorWalkover) == 0x000684, "Member 'UPyWidget_LeagueMRCPanel::TextColorWalkover' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCPanel, TextColorPromoted) == 0x000698, "Member 'UPyWidget_LeagueMRCPanel::TextColorPromoted' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCPanel, SignUpCardMargin) == 0x0006AC, "Member 'UPyWidget_LeagueMRCPanel::SignUpCardMargin' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCPanel, ObserveCardMargin) == 0x0006BC, "Member 'UPyWidget_LeagueMRCPanel::ObserveCardMargin' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCPanel, GuideActions) == 0x0006D0, "Member 'UPyWidget_LeagueMRCPanel::GuideActions' has a wrong offset!");

}

