#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_League_Room_CountDown

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_League_Room_CountDown.PyWidget_League_Room_CountDown
// 0x0060 (0x0648 - 0x05E8)
class UPyWidget_League_Room_CountDown : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            TextColor_Normal;                                  // 0x05E4(0x0014)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColor_Final;                                   // 0x05F8(0x0014)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                            TipsColor_Normal;                                  // 0x060C(0x0014)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                           IconColor_Normal;                                  // 0x0620(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           IconColor_Final;                                   // 0x0630(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Need_Animation_Time;                               // 0x0640(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_Room_CountDown">();
	}
	static class UPyWidget_League_Room_CountDown* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_Room_CountDown>();
	}
};
static_assert(alignof(UPyWidget_League_Room_CountDown) == 0x000008, "Wrong alignment on UPyWidget_League_Room_CountDown");
static_assert(sizeof(UPyWidget_League_Room_CountDown) == 0x000648, "Wrong size on UPyWidget_League_Room_CountDown");
static_assert(offsetof(UPyWidget_League_Room_CountDown, TextColor_Normal) == 0x0005E4, "Member 'UPyWidget_League_Room_CountDown::TextColor_Normal' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_Room_CountDown, TextColor_Final) == 0x0005F8, "Member 'UPyWidget_League_Room_CountDown::TextColor_Final' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_Room_CountDown, TipsColor_Normal) == 0x00060C, "Member 'UPyWidget_League_Room_CountDown::TipsColor_Normal' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_Room_CountDown, IconColor_Normal) == 0x000620, "Member 'UPyWidget_League_Room_CountDown::IconColor_Normal' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_Room_CountDown, IconColor_Final) == 0x000630, "Member 'UPyWidget_League_Room_CountDown::IconColor_Final' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_Room_CountDown, Need_Animation_Time) == 0x000640, "Member 'UPyWidget_League_Room_CountDown::Need_Animation_Time' has a wrong offset!");

}
