#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyModuleUIComponent

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.ShowCommonText
// 0x0028 (0x0028 - 0x0000)
struct PyModuleUIComponent_ShowCommonText final
{
public:
	class FString                                 Str_content;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 UI_NAME;                                           // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         DurationTime;                                      // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_ShowCommonText) == 0x000008, "Wrong alignment on PyModuleUIComponent_ShowCommonText");
static_assert(sizeof(PyModuleUIComponent_ShowCommonText) == 0x000028, "Wrong size on PyModuleUIComponent_ShowCommonText");
static_assert(offsetof(PyModuleUIComponent_ShowCommonText, Str_content) == 0x000000, "Member 'PyModuleUIComponent_ShowCommonText::Str_content' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_ShowCommonText, UI_NAME) == 0x000010, "Member 'PyModuleUIComponent_ShowCommonText::UI_NAME' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_ShowCommonText, DurationTime) == 0x000020, "Member 'PyModuleUIComponent_ShowCommonText::DurationTime' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.ShowUI
// 0x0018 (0x0018 - 0x0000)
struct PyModuleUIComponent_ShowUI final
{
public:
	class FString                                 UI_NAME;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         DurationTime;                                      // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerUID;                                         // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_ShowUI) == 0x000008, "Wrong alignment on PyModuleUIComponent_ShowUI");
static_assert(sizeof(PyModuleUIComponent_ShowUI) == 0x000018, "Wrong size on PyModuleUIComponent_ShowUI");
static_assert(offsetof(PyModuleUIComponent_ShowUI, UI_NAME) == 0x000000, "Member 'PyModuleUIComponent_ShowUI::UI_NAME' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_ShowUI, DurationTime) == 0x000010, "Member 'PyModuleUIComponent_ShowUI::DurationTime' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_ShowUI, PlayerUID) == 0x000014, "Member 'PyModuleUIComponent_ShowUI::PlayerUID' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.HideUI
// 0x0018 (0x0018 - 0x0000)
struct PyModuleUIComponent_HideUI final
{
public:
	class FString                                 UI_NAME;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         PlayerUID;                                         // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_HideUI) == 0x000008, "Wrong alignment on PyModuleUIComponent_HideUI");
static_assert(sizeof(PyModuleUIComponent_HideUI) == 0x000018, "Wrong size on PyModuleUIComponent_HideUI");
static_assert(offsetof(PyModuleUIComponent_HideUI, UI_NAME) == 0x000000, "Member 'PyModuleUIComponent_HideUI::UI_NAME' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_HideUI, PlayerUID) == 0x000010, "Member 'PyModuleUIComponent_HideUI::PlayerUID' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.UpdateBarUI
// 0x0018 (0x0018 - 0x0000)
struct PyModuleUIComponent_UpdateBarUI final
{
public:
	float                                         Percent;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UI_NAME;                                           // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_UpdateBarUI) == 0x000008, "Wrong alignment on PyModuleUIComponent_UpdateBarUI");
static_assert(sizeof(PyModuleUIComponent_UpdateBarUI) == 0x000018, "Wrong size on PyModuleUIComponent_UpdateBarUI");
static_assert(offsetof(PyModuleUIComponent_UpdateBarUI, Percent) == 0x000000, "Member 'PyModuleUIComponent_UpdateBarUI::Percent' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_UpdateBarUI, UI_NAME) == 0x000008, "Member 'PyModuleUIComponent_UpdateBarUI::UI_NAME' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.UpdatePieUI
// 0x0018 (0x0018 - 0x0000)
struct PyModuleUIComponent_UpdatePieUI final
{
public:
	float                                         Percent;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UI_NAME;                                           // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_UpdatePieUI) == 0x000008, "Wrong alignment on PyModuleUIComponent_UpdatePieUI");
static_assert(sizeof(PyModuleUIComponent_UpdatePieUI) == 0x000018, "Wrong size on PyModuleUIComponent_UpdatePieUI");
static_assert(offsetof(PyModuleUIComponent_UpdatePieUI, Percent) == 0x000000, "Member 'PyModuleUIComponent_UpdatePieUI::Percent' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_UpdatePieUI, UI_NAME) == 0x000008, "Member 'PyModuleUIComponent_UpdatePieUI::UI_NAME' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.UpdateCampStateUI
// 0x0018 (0x0018 - 0x0000)
struct PyModuleUIComponent_UpdateCampStateUI final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UI_NAME;                                           // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_UpdateCampStateUI) == 0x000008, "Wrong alignment on PyModuleUIComponent_UpdateCampStateUI");
static_assert(sizeof(PyModuleUIComponent_UpdateCampStateUI) == 0x000018, "Wrong size on PyModuleUIComponent_UpdateCampStateUI");
static_assert(offsetof(PyModuleUIComponent_UpdateCampStateUI, Index_0) == 0x000000, "Member 'PyModuleUIComponent_UpdateCampStateUI::Index_0' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_UpdateCampStateUI, UI_NAME) == 0x000008, "Member 'PyModuleUIComponent_UpdateCampStateUI::UI_NAME' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.UpdateVictoryProgressText
// 0x0018 (0x0018 - 0x0000)
struct PyModuleUIComponent_UpdateVictoryProgressText final
{
public:
	float                                         Percent;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UI_NAME;                                           // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_UpdateVictoryProgressText) == 0x000008, "Wrong alignment on PyModuleUIComponent_UpdateVictoryProgressText");
static_assert(sizeof(PyModuleUIComponent_UpdateVictoryProgressText) == 0x000018, "Wrong size on PyModuleUIComponent_UpdateVictoryProgressText");
static_assert(offsetof(PyModuleUIComponent_UpdateVictoryProgressText, Percent) == 0x000000, "Member 'PyModuleUIComponent_UpdateVictoryProgressText::Percent' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_UpdateVictoryProgressText, UI_NAME) == 0x000008, "Member 'PyModuleUIComponent_UpdateVictoryProgressText::UI_NAME' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.AssaultHint
// 0x0030 (0x0030 - 0x0000)
struct PyModuleUIComponent_AssaultHint final
{
public:
	class FString                                 UI_NAME;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 RedSideHint;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 BlueSideHint;                                      // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_AssaultHint) == 0x000008, "Wrong alignment on PyModuleUIComponent_AssaultHint");
static_assert(sizeof(PyModuleUIComponent_AssaultHint) == 0x000030, "Wrong size on PyModuleUIComponent_AssaultHint");
static_assert(offsetof(PyModuleUIComponent_AssaultHint, UI_NAME) == 0x000000, "Member 'PyModuleUIComponent_AssaultHint::UI_NAME' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_AssaultHint, RedSideHint) == 0x000010, "Member 'PyModuleUIComponent_AssaultHint::RedSideHint' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_AssaultHint, BlueSideHint) == 0x000020, "Member 'PyModuleUIComponent_AssaultHint::BlueSideHint' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.AssaultObjectiveUnlock
// 0x0020 (0x0020 - 0x0000)
struct PyModuleUIComponent_AssaultObjectiveUnlock final
{
public:
	class FString                                 CampName;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 UI_NAME;                                           // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_AssaultObjectiveUnlock) == 0x000008, "Wrong alignment on PyModuleUIComponent_AssaultObjectiveUnlock");
static_assert(sizeof(PyModuleUIComponent_AssaultObjectiveUnlock) == 0x000020, "Wrong size on PyModuleUIComponent_AssaultObjectiveUnlock");
static_assert(offsetof(PyModuleUIComponent_AssaultObjectiveUnlock, CampName) == 0x000000, "Member 'PyModuleUIComponent_AssaultObjectiveUnlock::CampName' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_AssaultObjectiveUnlock, UI_NAME) == 0x000010, "Member 'PyModuleUIComponent_AssaultObjectiveUnlock::UI_NAME' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.UpdateAssaultPieOccupy
// 0x0028 (0x0028 - 0x0000)
struct PyModuleUIComponent_UpdateAssaultPieOccupy final
{
public:
	float                                         CurrentProgress;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalProgress;                                     // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CampName;                                          // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 UI_NAME;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_UpdateAssaultPieOccupy) == 0x000008, "Wrong alignment on PyModuleUIComponent_UpdateAssaultPieOccupy");
static_assert(sizeof(PyModuleUIComponent_UpdateAssaultPieOccupy) == 0x000028, "Wrong size on PyModuleUIComponent_UpdateAssaultPieOccupy");
static_assert(offsetof(PyModuleUIComponent_UpdateAssaultPieOccupy, CurrentProgress) == 0x000000, "Member 'PyModuleUIComponent_UpdateAssaultPieOccupy::CurrentProgress' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_UpdateAssaultPieOccupy, TotalProgress) == 0x000004, "Member 'PyModuleUIComponent_UpdateAssaultPieOccupy::TotalProgress' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_UpdateAssaultPieOccupy, CampName) == 0x000008, "Member 'PyModuleUIComponent_UpdateAssaultPieOccupy::CampName' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_UpdateAssaultPieOccupy, UI_NAME) == 0x000018, "Member 'PyModuleUIComponent_UpdateAssaultPieOccupy::UI_NAME' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.UpdateAssaultBarProcess
// 0x0028 (0x0028 - 0x0000)
struct PyModuleUIComponent_UpdateAssaultBarProcess final
{
public:
	float                                         CurrentProgress;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 OccupyProgressStage;                               // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                 UI_NAME;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_UpdateAssaultBarProcess) == 0x000008, "Wrong alignment on PyModuleUIComponent_UpdateAssaultBarProcess");
static_assert(sizeof(PyModuleUIComponent_UpdateAssaultBarProcess) == 0x000028, "Wrong size on PyModuleUIComponent_UpdateAssaultBarProcess");
static_assert(offsetof(PyModuleUIComponent_UpdateAssaultBarProcess, CurrentProgress) == 0x000000, "Member 'PyModuleUIComponent_UpdateAssaultBarProcess::CurrentProgress' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_UpdateAssaultBarProcess, OccupyProgressStage) == 0x000008, "Member 'PyModuleUIComponent_UpdateAssaultBarProcess::OccupyProgressStage' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_UpdateAssaultBarProcess, UI_NAME) == 0x000018, "Member 'PyModuleUIComponent_UpdateAssaultBarProcess::UI_NAME' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.AssaultObjectiveClose
// 0x0020 (0x0020 - 0x0000)
struct PyModuleUIComponent_AssaultObjectiveClose final
{
public:
	class FString                                 CampName;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 UI_NAME;                                           // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_AssaultObjectiveClose) == 0x000008, "Wrong alignment on PyModuleUIComponent_AssaultObjectiveClose");
static_assert(sizeof(PyModuleUIComponent_AssaultObjectiveClose) == 0x000020, "Wrong size on PyModuleUIComponent_AssaultObjectiveClose");
static_assert(offsetof(PyModuleUIComponent_AssaultObjectiveClose, CampName) == 0x000000, "Member 'PyModuleUIComponent_AssaultObjectiveClose::CampName' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_AssaultObjectiveClose, UI_NAME) == 0x000010, "Member 'PyModuleUIComponent_AssaultObjectiveClose::UI_NAME' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.SetRoute
// 0x0010 (0x0010 - 0x0000)
struct PyModuleUIComponent_SetRoute final
{
public:
	TArray<float>                                 RouteLength;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyModuleUIComponent_SetRoute) == 0x000008, "Wrong alignment on PyModuleUIComponent_SetRoute");
static_assert(sizeof(PyModuleUIComponent_SetRoute) == 0x000010, "Wrong size on PyModuleUIComponent_SetRoute");
static_assert(offsetof(PyModuleUIComponent_SetRoute, RouteLength) == 0x000000, "Member 'PyModuleUIComponent_SetRoute::RouteLength' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.ChangeControlColor
// 0x0018 (0x0018 - 0x0000)
struct PyModuleUIComponent_ChangeControlColor final
{
public:
	class FString                                 UI_NAME;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	EOwnershipType                                OwnerSide;                                         // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_ChangeControlColor) == 0x000008, "Wrong alignment on PyModuleUIComponent_ChangeControlColor");
static_assert(sizeof(PyModuleUIComponent_ChangeControlColor) == 0x000018, "Wrong size on PyModuleUIComponent_ChangeControlColor");
static_assert(offsetof(PyModuleUIComponent_ChangeControlColor, UI_NAME) == 0x000000, "Member 'PyModuleUIComponent_ChangeControlColor::UI_NAME' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_ChangeControlColor, OwnerSide) == 0x000010, "Member 'PyModuleUIComponent_ChangeControlColor::OwnerSide' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.SetSplineColor
// 0x0020 (0x0020 - 0x0000)
struct PyModuleUIComponent_SetSplineColor final
{
public:
	class UMarvelSplineComponent*                 MarvelSpline;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Color;                                             // 0x0008(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_SetSplineColor) == 0x000008, "Wrong alignment on PyModuleUIComponent_SetSplineColor");
static_assert(sizeof(PyModuleUIComponent_SetSplineColor) == 0x000020, "Wrong size on PyModuleUIComponent_SetSplineColor");
static_assert(offsetof(PyModuleUIComponent_SetSplineColor, MarvelSpline) == 0x000000, "Member 'PyModuleUIComponent_SetSplineColor::MarvelSpline' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_SetSplineColor, Color) == 0x000008, "Member 'PyModuleUIComponent_SetSplineColor::Color' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.ControlActorIndicator
// 0x0018 (0x0018 - 0x0000)
struct PyModuleUIComponent_ControlActorIndicator final
{
public:
	class FString                                 ActorName;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Hiddden;                                           // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_ControlActorIndicator) == 0x000008, "Wrong alignment on PyModuleUIComponent_ControlActorIndicator");
static_assert(sizeof(PyModuleUIComponent_ControlActorIndicator) == 0x000018, "Wrong size on PyModuleUIComponent_ControlActorIndicator");
static_assert(offsetof(PyModuleUIComponent_ControlActorIndicator, ActorName) == 0x000000, "Member 'PyModuleUIComponent_ControlActorIndicator::ActorName' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_ControlActorIndicator, Hiddden) == 0x000010, "Member 'PyModuleUIComponent_ControlActorIndicator::Hiddden' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyModuleUIComponent.SetOvertime
// 0x0008 (0x0008 - 0x0000)
struct PyModuleUIComponent_SetOvertime final
{
public:
	float                                         OvertimeRemaining;                                 // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OvertimeDuration;                                  // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyModuleUIComponent_SetOvertime) == 0x000004, "Wrong alignment on PyModuleUIComponent_SetOvertime");
static_assert(sizeof(PyModuleUIComponent_SetOvertime) == 0x000008, "Wrong size on PyModuleUIComponent_SetOvertime");
static_assert(offsetof(PyModuleUIComponent_SetOvertime, OvertimeRemaining) == 0x000000, "Member 'PyModuleUIComponent_SetOvertime::OvertimeRemaining' has a wrong offset!");
static_assert(offsetof(PyModuleUIComponent_SetOvertime, OvertimeDuration) == 0x000004, "Member 'PyModuleUIComponent_SetOvertime::OvertimeDuration' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyWC_Module.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct PyWC_Module_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWC_Module_ReceiveTick) == 0x000004, "Wrong alignment on PyWC_Module_ReceiveTick");
static_assert(sizeof(PyWC_Module_ReceiveTick) == 0x000004, "Wrong size on PyWC_Module_ReceiveTick");
static_assert(offsetof(PyWC_Module_ReceiveTick, DeltaTime) == 0x000000, "Member 'PyWC_Module_ReceiveTick::DeltaTime' has a wrong offset!");

// PythonFunction PyModuleUIComponent.PyWC_Module.SetIndicatorVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWC_Module_SetIndicatorVisible final
{
public:
	bool                                          Visibility;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWC_Module_SetIndicatorVisible) == 0x000001, "Wrong alignment on PyWC_Module_SetIndicatorVisible");
static_assert(sizeof(PyWC_Module_SetIndicatorVisible) == 0x000001, "Wrong size on PyWC_Module_SetIndicatorVisible");
static_assert(offsetof(PyWC_Module_SetIndicatorVisible, Visibility) == 0x000000, "Member 'PyWC_Module_SetIndicatorVisible::Visibility' has a wrong offset!");

}
