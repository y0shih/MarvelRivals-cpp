#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Loading_Nameplate

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Loading_Nameplate.PyWidget_Loading_Nameplate
// 0x0050 (0x0638 - 0x05E8)
class UPyWidget_Loading_Nameplate : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            LoadingColor;                                      // 0x05E4(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            FinishColor;                                       // 0x05F8(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            PlayerNameColor_Self;                              // 0x060C(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            PlayerNameColor_Other;                             // 0x0620(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void Construct();
	void Destruct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Loading_Nameplate">();
	}
	static class UPyWidget_Loading_Nameplate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Loading_Nameplate>();
	}
};
static_assert(alignof(UPyWidget_Loading_Nameplate) == 0x000008, "Wrong alignment on UPyWidget_Loading_Nameplate");
static_assert(sizeof(UPyWidget_Loading_Nameplate) == 0x000638, "Wrong size on UPyWidget_Loading_Nameplate");
static_assert(offsetof(UPyWidget_Loading_Nameplate, LoadingColor) == 0x0005E4, "Member 'UPyWidget_Loading_Nameplate::LoadingColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_Loading_Nameplate, FinishColor) == 0x0005F8, "Member 'UPyWidget_Loading_Nameplate::FinishColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_Loading_Nameplate, PlayerNameColor_Self) == 0x00060C, "Member 'UPyWidget_Loading_Nameplate::PlayerNameColor_Self' has a wrong offset!");
static_assert(offsetof(UPyWidget_Loading_Nameplate, PlayerNameColor_Other) == 0x000620, "Member 'UPyWidget_Loading_Nameplate::PlayerNameColor_Other' has a wrong offset!");

}
