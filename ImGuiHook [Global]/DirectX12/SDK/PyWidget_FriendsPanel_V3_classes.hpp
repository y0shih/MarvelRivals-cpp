#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_FriendsPanel_V3

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PyWidget_ModuleMainPanel_classes.hpp"
#include "UMG_classes.hpp"
#include "PyWidget_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_FriendsPanel_V3.PyWidget_FriendsPanel_V3
// 0x0248 (0x0858 - 0x0610)
class UPyWidget_FriendsPanel_V3 : public UPyWidget_ModuleMainPanel
{
public:
	bool                                          IsOpen;                                            // 0x0609(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_60A[0x6];                                      // 0x060A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CardOffset;                                        // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              SelectBoxOffset;                                   // 0x0620(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LeaveTime;                                         // 0x0630(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CheckTime;                                         // 0x0634(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ShortTimeThreshold;                                // 0x0638(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HoldTimeThreshold;                                 // 0x063C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, class FText>                      TabPlayerState;                                    // 0x0640(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                   TabStateColor;                                     // 0x0690(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FText>                           ChangeStateText;                                   // 0x06A0(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   SearchNullText;                                    // 0x06B0(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   LastGameNullText;                                  // 0x06C8(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   FriendsNullText;                                   // 0x06E0(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   PSFriendsNullText;                                 // 0x06F8(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   ApplyNullText;                                     // 0x0710(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   SearchApplyNullText;                               // 0x0728(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   SearchSelfText;                                    // 0x0740(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   SearchFriendBoxText;                               // 0x0758(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   SearchLenFailText;                                 // 0x0770(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_StateClick;                                // 0x0788(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_SmallBtnHovering;                          // 0x0790(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_SmallBtnClicked;                           // 0x0798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_SearchFriend;                              // 0x07A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                           ThirdPartyPlatformText;                            // 0x07A8(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FSlateBrush>                    ThirdPartyPlatformImage;                           // 0x07B8(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                ListScrollStyle;                                   // 0x07C8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                MenuStyle;                                         // 0x07D8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                ShareStyle;                                        // 0x07E8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                TeamUpStyle;                                       // 0x07F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                AcceptStyle;                                       // 0x0808(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                RejectStyle;                                       // 0x0818(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                AddFriendStyle;                                    // 0x0828(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UInputAction*                           AddFriendOrRejectInvitationAction;                 // 0x0838(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           AcceptInvitationAction;                            // 0x0840(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           LeftShoulderAction;                                // 0x0848(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           RightShoulderAction;                               // 0x0850(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void OnAnimationStarted(const class UWidgetAnimation* Animation);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void SetIsOpen(bool IsOpen_0);
	void SetFocusingWidget(class UWidget* Widget);
	void OnReceiveAnyInputInThisFrame();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_FriendsPanel_V3">();
	}
	static class UPyWidget_FriendsPanel_V3* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_FriendsPanel_V3>();
	}
};
static_assert(alignof(UPyWidget_FriendsPanel_V3) == 0x000008, "Wrong alignment on UPyWidget_FriendsPanel_V3");
static_assert(sizeof(UPyWidget_FriendsPanel_V3) == 0x000858, "Wrong size on UPyWidget_FriendsPanel_V3");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, IsOpen) == 0x000609, "Member 'UPyWidget_FriendsPanel_V3::IsOpen' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, CardOffset) == 0x000610, "Member 'UPyWidget_FriendsPanel_V3::CardOffset' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, SelectBoxOffset) == 0x000620, "Member 'UPyWidget_FriendsPanel_V3::SelectBoxOffset' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, LeaveTime) == 0x000630, "Member 'UPyWidget_FriendsPanel_V3::LeaveTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, CheckTime) == 0x000634, "Member 'UPyWidget_FriendsPanel_V3::CheckTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, ShortTimeThreshold) == 0x000638, "Member 'UPyWidget_FriendsPanel_V3::ShortTimeThreshold' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, HoldTimeThreshold) == 0x00063C, "Member 'UPyWidget_FriendsPanel_V3::HoldTimeThreshold' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, TabPlayerState) == 0x000640, "Member 'UPyWidget_FriendsPanel_V3::TabPlayerState' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, TabStateColor) == 0x000690, "Member 'UPyWidget_FriendsPanel_V3::TabStateColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, ChangeStateText) == 0x0006A0, "Member 'UPyWidget_FriendsPanel_V3::ChangeStateText' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, SearchNullText) == 0x0006B0, "Member 'UPyWidget_FriendsPanel_V3::SearchNullText' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, LastGameNullText) == 0x0006C8, "Member 'UPyWidget_FriendsPanel_V3::LastGameNullText' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, FriendsNullText) == 0x0006E0, "Member 'UPyWidget_FriendsPanel_V3::FriendsNullText' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, PSFriendsNullText) == 0x0006F8, "Member 'UPyWidget_FriendsPanel_V3::PSFriendsNullText' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, ApplyNullText) == 0x000710, "Member 'UPyWidget_FriendsPanel_V3::ApplyNullText' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, SearchApplyNullText) == 0x000728, "Member 'UPyWidget_FriendsPanel_V3::SearchApplyNullText' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, SearchSelfText) == 0x000740, "Member 'UPyWidget_FriendsPanel_V3::SearchSelfText' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, SearchFriendBoxText) == 0x000758, "Member 'UPyWidget_FriendsPanel_V3::SearchFriendBoxText' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, SearchLenFailText) == 0x000770, "Member 'UPyWidget_FriendsPanel_V3::SearchLenFailText' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, AkEvent_StateClick) == 0x000788, "Member 'UPyWidget_FriendsPanel_V3::AkEvent_StateClick' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, AkEvent_SmallBtnHovering) == 0x000790, "Member 'UPyWidget_FriendsPanel_V3::AkEvent_SmallBtnHovering' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, AkEvent_SmallBtnClicked) == 0x000798, "Member 'UPyWidget_FriendsPanel_V3::AkEvent_SmallBtnClicked' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, AkEvent_SearchFriend) == 0x0007A0, "Member 'UPyWidget_FriendsPanel_V3::AkEvent_SearchFriend' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, ThirdPartyPlatformText) == 0x0007A8, "Member 'UPyWidget_FriendsPanel_V3::ThirdPartyPlatformText' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, ThirdPartyPlatformImage) == 0x0007B8, "Member 'UPyWidget_FriendsPanel_V3::ThirdPartyPlatformImage' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, ListScrollStyle) == 0x0007C8, "Member 'UPyWidget_FriendsPanel_V3::ListScrollStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, MenuStyle) == 0x0007D8, "Member 'UPyWidget_FriendsPanel_V3::MenuStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, ShareStyle) == 0x0007E8, "Member 'UPyWidget_FriendsPanel_V3::ShareStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, TeamUpStyle) == 0x0007F8, "Member 'UPyWidget_FriendsPanel_V3::TeamUpStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, AcceptStyle) == 0x000808, "Member 'UPyWidget_FriendsPanel_V3::AcceptStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, RejectStyle) == 0x000818, "Member 'UPyWidget_FriendsPanel_V3::RejectStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, AddFriendStyle) == 0x000828, "Member 'UPyWidget_FriendsPanel_V3::AddFriendStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, AddFriendOrRejectInvitationAction) == 0x000838, "Member 'UPyWidget_FriendsPanel_V3::AddFriendOrRejectInvitationAction' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, AcceptInvitationAction) == 0x000840, "Member 'UPyWidget_FriendsPanel_V3::AcceptInvitationAction' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, LeftShoulderAction) == 0x000848, "Member 'UPyWidget_FriendsPanel_V3::LeftShoulderAction' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsPanel_V3, RightShoulderAction) == 0x000850, "Member 'UPyWidget_FriendsPanel_V3::RightShoulderAction' has a wrong offset!");

// PythonClass PyWidget_FriendsPanel_V3.PyWidget_Friends_StateBtnList
// 0x00A8 (0x0460 - 0x03B8)
class UPyWidget_Friends_StateBtnList : public UUserWidget
{
public:
	class UAkAudioEvent*                          AkEvent_StateClick;                                // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_StateHover;                                // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_FriendStateClick;                          // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_FriendStateHover;                          // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                           ChangeStateText;                                   // 0x03D8(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   InviteTeam;                                        // 0x03E8(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   InviteJoinTeam;                                    // 0x0400(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   InviteRoom;                                        // 0x0418(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   ApplyTeam;                                         // 0x0430(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   ApplyRoom;                                         // 0x0448(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void SetVisible(bool IsVisible_0, int32 I_state);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Friends_StateBtnList">();
	}
	static class UPyWidget_Friends_StateBtnList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Friends_StateBtnList>();
	}
};
static_assert(alignof(UPyWidget_Friends_StateBtnList) == 0x000008, "Wrong alignment on UPyWidget_Friends_StateBtnList");
static_assert(sizeof(UPyWidget_Friends_StateBtnList) == 0x000460, "Wrong size on UPyWidget_Friends_StateBtnList");
static_assert(offsetof(UPyWidget_Friends_StateBtnList, AkEvent_StateClick) == 0x0003B8, "Member 'UPyWidget_Friends_StateBtnList::AkEvent_StateClick' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_StateBtnList, AkEvent_StateHover) == 0x0003C0, "Member 'UPyWidget_Friends_StateBtnList::AkEvent_StateHover' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_StateBtnList, AkEvent_FriendStateClick) == 0x0003C8, "Member 'UPyWidget_Friends_StateBtnList::AkEvent_FriendStateClick' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_StateBtnList, AkEvent_FriendStateHover) == 0x0003D0, "Member 'UPyWidget_Friends_StateBtnList::AkEvent_FriendStateHover' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_StateBtnList, ChangeStateText) == 0x0003D8, "Member 'UPyWidget_Friends_StateBtnList::ChangeStateText' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_StateBtnList, InviteTeam) == 0x0003E8, "Member 'UPyWidget_Friends_StateBtnList::InviteTeam' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_StateBtnList, InviteJoinTeam) == 0x000400, "Member 'UPyWidget_Friends_StateBtnList::InviteJoinTeam' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_StateBtnList, InviteRoom) == 0x000418, "Member 'UPyWidget_Friends_StateBtnList::InviteRoom' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_StateBtnList, ApplyTeam) == 0x000430, "Member 'UPyWidget_Friends_StateBtnList::ApplyTeam' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_StateBtnList, ApplyRoom) == 0x000448, "Member 'UPyWidget_Friends_StateBtnList::ApplyRoom' has a wrong offset!");

// PythonClass PyWidget_FriendsPanel_V3.PyWidget_Friends_SelectBoxBtn_V3
// 0x0058 (0x07A0 - 0x0748)
class UPyWidget_Friends_SelectBoxBtn_V3 : public UPyWidget_Button
{
public:
	class FText                                   BtnName;                                           // 0x0748(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            HoveredColor;                                      // 0x0760(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            NormalColor;                                       // 0x0774(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            DisableColor;                                      // 0x0788(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Friends_SelectBoxBtn_V3">();
	}
	static class UPyWidget_Friends_SelectBoxBtn_V3* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Friends_SelectBoxBtn_V3>();
	}
};
static_assert(alignof(UPyWidget_Friends_SelectBoxBtn_V3) == 0x000008, "Wrong alignment on UPyWidget_Friends_SelectBoxBtn_V3");
static_assert(sizeof(UPyWidget_Friends_SelectBoxBtn_V3) == 0x0007A0, "Wrong size on UPyWidget_Friends_SelectBoxBtn_V3");
static_assert(offsetof(UPyWidget_Friends_SelectBoxBtn_V3, BtnName) == 0x000748, "Member 'UPyWidget_Friends_SelectBoxBtn_V3::BtnName' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_SelectBoxBtn_V3, HoveredColor) == 0x000760, "Member 'UPyWidget_Friends_SelectBoxBtn_V3::HoveredColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_SelectBoxBtn_V3, NormalColor) == 0x000774, "Member 'UPyWidget_Friends_SelectBoxBtn_V3::NormalColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_SelectBoxBtn_V3, DisableColor) == 0x000788, "Member 'UPyWidget_Friends_SelectBoxBtn_V3::DisableColor' has a wrong offset!");

// PythonClass PyWidget_FriendsPanel_V3.PyWidget_Friends_TabBtn_V2
// 0x00E8 (0x0830 - 0x0748)
class UPyWidget_Friends_TabBtn_V2 : public UPyWidget_Button
{
public:
	class FText                                   TipsText;                                          // 0x0748(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            ThirdPartyTabIcon;                                 // 0x0760(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Friends_TabBtn_V2">();
	}
	static class UPyWidget_Friends_TabBtn_V2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Friends_TabBtn_V2>();
	}
};
static_assert(alignof(UPyWidget_Friends_TabBtn_V2) == 0x000010, "Wrong alignment on UPyWidget_Friends_TabBtn_V2");
static_assert(sizeof(UPyWidget_Friends_TabBtn_V2) == 0x000830, "Wrong size on UPyWidget_Friends_TabBtn_V2");
static_assert(offsetof(UPyWidget_Friends_TabBtn_V2, TipsText) == 0x000748, "Member 'UPyWidget_Friends_TabBtn_V2::TipsText' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_TabBtn_V2, ThirdPartyTabIcon) == 0x000760, "Member 'UPyWidget_Friends_TabBtn_V2::ThirdPartyTabIcon' has a wrong offset!");

}
