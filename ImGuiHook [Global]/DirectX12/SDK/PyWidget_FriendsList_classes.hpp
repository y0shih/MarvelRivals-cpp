#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_FriendsList

#include "Basic.hpp"

#include "PyWidget_Button_classes.hpp"
#include "Python_enums_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_FriendsList.PyWidget_Friends_List
// 0x0028 (0x0610 - 0x05E8)
class UPyWidget_Friends_List : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DelayTime;                                         // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FactionLoopTime;                                   // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FactionUpdateCdTime;                               // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   TitleText;                                         // 0x05F0(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EFriendsListType                              FriendsListType;                                   // 0x0608(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);
	void SetFocusingWidget(class UWidget* Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Friends_List">();
	}
	static class UPyWidget_Friends_List* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Friends_List>();
	}
};
static_assert(alignof(UPyWidget_Friends_List) == 0x000008, "Wrong alignment on UPyWidget_Friends_List");
static_assert(sizeof(UPyWidget_Friends_List) == 0x000610, "Wrong size on UPyWidget_Friends_List");
static_assert(offsetof(UPyWidget_Friends_List, DelayTime) == 0x0005E4, "Member 'UPyWidget_Friends_List::DelayTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_List, FactionLoopTime) == 0x0005E8, "Member 'UPyWidget_Friends_List::FactionLoopTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_List, FactionUpdateCdTime) == 0x0005EC, "Member 'UPyWidget_Friends_List::FactionUpdateCdTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_List, TitleText) == 0x0005F0, "Member 'UPyWidget_Friends_List::TitleText' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_List, FriendsListType) == 0x000608, "Member 'UPyWidget_Friends_List::FriendsListType' has a wrong offset!");

// PythonClass PyWidget_FriendsList.PyWidget_Friends_ListTitle
// 0x0028 (0x0770 - 0x0748)
class UPyWidget_Friends_ListTitle : public UPyWidget_Button
{
public:
	struct FSlateColor                            NormalColor;                                       // 0x0748(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            HoveredColor;                                      // 0x075C(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void SetIsHover(bool IsHover_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Friends_ListTitle">();
	}
	static class UPyWidget_Friends_ListTitle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Friends_ListTitle>();
	}
};
static_assert(alignof(UPyWidget_Friends_ListTitle) == 0x000008, "Wrong alignment on UPyWidget_Friends_ListTitle");
static_assert(sizeof(UPyWidget_Friends_ListTitle) == 0x000770, "Wrong size on UPyWidget_Friends_ListTitle");
static_assert(offsetof(UPyWidget_Friends_ListTitle, NormalColor) == 0x000748, "Member 'UPyWidget_Friends_ListTitle::NormalColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_ListTitle, HoveredColor) == 0x00075C, "Member 'UPyWidget_Friends_ListTitle::HoveredColor' has a wrong offset!");

}

