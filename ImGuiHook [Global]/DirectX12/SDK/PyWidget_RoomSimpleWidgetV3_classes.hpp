#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_RoomSimpleWidgetV3

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_RoomSimpleWidgetV3.PyWidget_SearchGameListTitleV3
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_SearchGameListTitleV3 : public UPyMarvelUserWidget
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SearchGameListTitleV3">();
	}
	static class UPyWidget_SearchGameListTitleV3* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SearchGameListTitleV3>();
	}
};
static_assert(alignof(UPyWidget_SearchGameListTitleV3) == 0x000008, "Wrong alignment on UPyWidget_SearchGameListTitleV3");
static_assert(sizeof(UPyWidget_SearchGameListTitleV3) == 0x0005E8, "Wrong size on UPyWidget_SearchGameListTitleV3");

// PythonClass PyWidget_RoomSimpleWidgetV3.PyWidget_InviteTips
// 0x0020 (0x0608 - 0x05E8)
class UPyWidget_InviteTips : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          AkEvent_OnShow;                                    // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AKEvent_OnRejectOrCancel;                          // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnCancelExchange;                                  // 0x05F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnCancelExchange__DelegateSignature();
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_InviteTips">();
	}
	static class UPyWidget_InviteTips* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_InviteTips>();
	}
};
static_assert(alignof(UPyWidget_InviteTips) == 0x000008, "Wrong alignment on UPyWidget_InviteTips");
static_assert(sizeof(UPyWidget_InviteTips) == 0x000608, "Wrong size on UPyWidget_InviteTips");
static_assert(offsetof(UPyWidget_InviteTips, AkEvent_OnShow) == 0x0005E8, "Member 'UPyWidget_InviteTips::AkEvent_OnShow' has a wrong offset!");
static_assert(offsetof(UPyWidget_InviteTips, AKEvent_OnRejectOrCancel) == 0x0005F0, "Member 'UPyWidget_InviteTips::AKEvent_OnRejectOrCancel' has a wrong offset!");
static_assert(offsetof(UPyWidget_InviteTips, OnCancelExchange) == 0x0005F8, "Member 'UPyWidget_InviteTips::OnCancelExchange' has a wrong offset!");

// PythonClass PyWidget_RoomSimpleWidgetV3.PyWidgetListTitleBtn
// 0x0038 (0x0620 - 0x05E8)
class UPyWidgetListTitleBtn : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   BtnTitleText;                                      // 0x05E8(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                              SpacerLeftSize;                                    // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              SpacerRightSize;                                   // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidgetListTitleBtn">();
	}
	static class UPyWidgetListTitleBtn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidgetListTitleBtn>();
	}
};
static_assert(alignof(UPyWidgetListTitleBtn) == 0x000008, "Wrong alignment on UPyWidgetListTitleBtn");
static_assert(sizeof(UPyWidgetListTitleBtn) == 0x000620, "Wrong size on UPyWidgetListTitleBtn");
static_assert(offsetof(UPyWidgetListTitleBtn, BtnTitleText) == 0x0005E8, "Member 'UPyWidgetListTitleBtn::BtnTitleText' has a wrong offset!");
static_assert(offsetof(UPyWidgetListTitleBtn, SpacerLeftSize) == 0x000600, "Member 'UPyWidgetListTitleBtn::SpacerLeftSize' has a wrong offset!");
static_assert(offsetof(UPyWidgetListTitleBtn, SpacerRightSize) == 0x000610, "Member 'UPyWidgetListTitleBtn::SpacerRightSize' has a wrong offset!");

// PythonClass PyWidget_RoomSimpleWidgetV3.PyWidgetRoomInfoMapName
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidgetRoomInfoMapName : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LengthLimit;                                       // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidgetRoomInfoMapName">();
	}
	static class UPyWidgetRoomInfoMapName* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidgetRoomInfoMapName>();
	}
};
static_assert(alignof(UPyWidgetRoomInfoMapName) == 0x000008, "Wrong alignment on UPyWidgetRoomInfoMapName");
static_assert(sizeof(UPyWidgetRoomInfoMapName) == 0x0005E8, "Wrong size on UPyWidgetRoomInfoMapName");
static_assert(offsetof(UPyWidgetRoomInfoMapName, LengthLimit) == 0x0005E4, "Member 'UPyWidgetRoomInfoMapName::LengthLimit' has a wrong offset!");

}
