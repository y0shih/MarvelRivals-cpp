#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102741

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Hero_1027_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_102741.PyAbility_102741.NativeOnWallBuildingModeChanged
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102741_NativeOnWallBuildingModeChanged final
{
public:
	EWallBuildingMode                             InMode;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102741_NativeOnWallBuildingModeChanged) == 0x000001, "Wrong alignment on PyAbility_102741_NativeOnWallBuildingModeChanged");
static_assert(sizeof(PyAbility_102741_NativeOnWallBuildingModeChanged) == 0x000001, "Wrong size on PyAbility_102741_NativeOnWallBuildingModeChanged");
static_assert(offsetof(PyAbility_102741_NativeOnWallBuildingModeChanged, InMode) == 0x000000, "Member 'PyAbility_102741_NativeOnWallBuildingModeChanged::InMode' has a wrong offset!");

// PythonFunction PyAbility_102741.PyAbility_102741.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102741_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102741_CanActivate) == 0x000001, "Wrong alignment on PyAbility_102741_CanActivate");
static_assert(sizeof(PyAbility_102741_CanActivate) == 0x000001, "Wrong size on PyAbility_102741_CanActivate");
static_assert(offsetof(PyAbility_102741_CanActivate, ReturnValue) == 0x000000, "Member 'PyAbility_102741_CanActivate::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_102741.PyAbility_102741.IsConfirmTaskPressAllowed
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102741_IsConfirmTaskPressAllowed final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102741_IsConfirmTaskPressAllowed) == 0x000001, "Wrong alignment on PyAbility_102741_IsConfirmTaskPressAllowed");
static_assert(sizeof(PyAbility_102741_IsConfirmTaskPressAllowed) == 0x000001, "Wrong size on PyAbility_102741_IsConfirmTaskPressAllowed");
static_assert(offsetof(PyAbility_102741_IsConfirmTaskPressAllowed, ReturnValue) == 0x000000, "Member 'PyAbility_102741_IsConfirmTaskPressAllowed::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_102741.PyAbility_102741.OnConfirmTaskPressAction
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_102741_OnConfirmTaskPressAction final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102741_OnConfirmTaskPressAction) == 0x000004, "Wrong alignment on PyAbility_102741_OnConfirmTaskPressAction");
static_assert(sizeof(PyAbility_102741_OnConfirmTaskPressAction) == 0x000004, "Wrong size on PyAbility_102741_OnConfirmTaskPressAction");
static_assert(offsetof(PyAbility_102741_OnConfirmTaskPressAction, TimeWaited) == 0x000000, "Member 'PyAbility_102741_OnConfirmTaskPressAction::TimeWaited' has a wrong offset!");

// PythonFunction PyAbility_102741.PyAbility_102741.OnConfirmTaskReleaseAction
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_102741_OnConfirmTaskReleaseAction final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102741_OnConfirmTaskReleaseAction) == 0x000004, "Wrong alignment on PyAbility_102741_OnConfirmTaskReleaseAction");
static_assert(sizeof(PyAbility_102741_OnConfirmTaskReleaseAction) == 0x000004, "Wrong size on PyAbility_102741_OnConfirmTaskReleaseAction");
static_assert(offsetof(PyAbility_102741_OnConfirmTaskReleaseAction, TimeWaited) == 0x000000, "Member 'PyAbility_102741_OnConfirmTaskReleaseAction::TimeWaited' has a wrong offset!");

// PythonFunction PyAbility_102741.PyAbility_102741.OnTargetTaskValidData
// 0x0168 (0x0168 - 0x0000)
struct PyAbility_102741_OnTargetTaskValidData final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_102741_OnTargetTaskValidData) == 0x000008, "Wrong alignment on PyAbility_102741_OnTargetTaskValidData");
static_assert(sizeof(PyAbility_102741_OnTargetTaskValidData) == 0x000168, "Wrong size on PyAbility_102741_OnTargetTaskValidData");
static_assert(offsetof(PyAbility_102741_OnTargetTaskValidData, Data) == 0x000000, "Member 'PyAbility_102741_OnTargetTaskValidData::Data' has a wrong offset!");

// PythonFunction PyAbility_102741.PyAbility_102741.OnSummonTaskSuccess
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_102741_OnSummonTaskSuccess final
{
public:
	class AActor*                                 SpawnActor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102741_OnSummonTaskSuccess) == 0x000008, "Wrong alignment on PyAbility_102741_OnSummonTaskSuccess");
static_assert(sizeof(PyAbility_102741_OnSummonTaskSuccess) == 0x000008, "Wrong size on PyAbility_102741_OnSummonTaskSuccess");
static_assert(offsetof(PyAbility_102741_OnSummonTaskSuccess, SpawnActor) == 0x000000, "Member 'PyAbility_102741_OnSummonTaskSuccess::SpawnActor' has a wrong offset!");

// PythonFunction PyAbility_102741.PyAbility_102741.OnUserSwitchTaskPressAction
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_102741_OnUserSwitchTaskPressAction final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102741_OnUserSwitchTaskPressAction) == 0x000004, "Wrong alignment on PyAbility_102741_OnUserSwitchTaskPressAction");
static_assert(sizeof(PyAbility_102741_OnUserSwitchTaskPressAction) == 0x000004, "Wrong size on PyAbility_102741_OnUserSwitchTaskPressAction");
static_assert(offsetof(PyAbility_102741_OnUserSwitchTaskPressAction, TimeWaited) == 0x000000, "Member 'PyAbility_102741_OnUserSwitchTaskPressAction::TimeWaited' has a wrong offset!");

// PythonFunction PyAbility_102741.PyAbility_102741.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102741_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102741_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_102741_K2_OnEndAbility");
static_assert(sizeof(PyAbility_102741_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_102741_K2_OnEndAbility");
static_assert(offsetof(PyAbility_102741_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_102741_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// PythonFunction PyAbility_102741.PyAbility_102741.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102741_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102741_NativeOnMontageCompleted) == 0x000008, "Wrong alignment on PyAbility_102741_NativeOnMontageCompleted");
static_assert(sizeof(PyAbility_102741_NativeOnMontageCompleted) == 0x000010, "Wrong size on PyAbility_102741_NativeOnMontageCompleted");
static_assert(offsetof(PyAbility_102741_NativeOnMontageCompleted, Tag) == 0x000000, "Member 'PyAbility_102741_NativeOnMontageCompleted::Tag' has a wrong offset!");

// PythonFunction PyAbility_102741.PyAbility_102741.NativeOnMontageBlendOut
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102741_NativeOnMontageBlendOut final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102741_NativeOnMontageBlendOut) == 0x000008, "Wrong alignment on PyAbility_102741_NativeOnMontageBlendOut");
static_assert(sizeof(PyAbility_102741_NativeOnMontageBlendOut) == 0x000010, "Wrong size on PyAbility_102741_NativeOnMontageBlendOut");
static_assert(offsetof(PyAbility_102741_NativeOnMontageBlendOut, Tag) == 0x000000, "Member 'PyAbility_102741_NativeOnMontageBlendOut::Tag' has a wrong offset!");

// PythonFunction PyAbility_102741.PyAbility_102741.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102741_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102741_NativeOnMontageInterrupted) == 0x000008, "Wrong alignment on PyAbility_102741_NativeOnMontageInterrupted");
static_assert(sizeof(PyAbility_102741_NativeOnMontageInterrupted) == 0x000010, "Wrong size on PyAbility_102741_NativeOnMontageInterrupted");
static_assert(offsetof(PyAbility_102741_NativeOnMontageInterrupted, Tag) == 0x000000, "Member 'PyAbility_102741_NativeOnMontageInterrupted::Tag' has a wrong offset!");

// PythonFunction PyAbility_102741.PyAbility_102741.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102741_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102741_NativeOnMontageCancelled) == 0x000008, "Wrong alignment on PyAbility_102741_NativeOnMontageCancelled");
static_assert(sizeof(PyAbility_102741_NativeOnMontageCancelled) == 0x000010, "Wrong size on PyAbility_102741_NativeOnMontageCancelled");
static_assert(offsetof(PyAbility_102741_NativeOnMontageCancelled, Tag) == 0x000000, "Member 'PyAbility_102741_NativeOnMontageCancelled::Tag' has a wrong offset!");

// PythonFunction PyAbility_102741.PyAbility_102741.NativeOnMontageEvent
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102741_NativeOnMontageEvent final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102741_NativeOnMontageEvent) == 0x000008, "Wrong alignment on PyAbility_102741_NativeOnMontageEvent");
static_assert(sizeof(PyAbility_102741_NativeOnMontageEvent) == 0x000010, "Wrong size on PyAbility_102741_NativeOnMontageEvent");
static_assert(offsetof(PyAbility_102741_NativeOnMontageEvent, Tag) == 0x000000, "Member 'PyAbility_102741_NativeOnMontageEvent::Tag' has a wrong offset!");

// PythonFunction PyAbility_102741.PyUIController_102741.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_102741_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_102741_SetAbility) == 0x000008, "Wrong alignment on PyUIController_102741_SetAbility");
static_assert(sizeof(PyUIController_102741_SetAbility) == 0x000010, "Wrong size on PyUIController_102741_SetAbility");
static_assert(offsetof(PyUIController_102741_SetAbility, InAbilityId) == 0x000000, "Member 'PyUIController_102741_SetAbility::InAbilityId' has a wrong offset!");
static_assert(offsetof(PyUIController_102741_SetAbility, InAbility) == 0x000008, "Member 'PyUIController_102741_SetAbility::InAbility' has a wrong offset!");

// PythonFunction PyAbility_102741.PyUIController_102741.OnSummonedChange
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_102741_OnSummonedChange final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsAdd;                                            // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_102741_OnSummonedChange) == 0x000008, "Wrong alignment on PyUIController_102741_OnSummonedChange");
static_assert(sizeof(PyUIController_102741_OnSummonedChange) == 0x000010, "Wrong size on PyUIController_102741_OnSummonedChange");
static_assert(offsetof(PyUIController_102741_OnSummonedChange, InActor) == 0x000000, "Member 'PyUIController_102741_OnSummonedChange::InActor' has a wrong offset!");
static_assert(offsetof(PyUIController_102741_OnSummonedChange, bIsAdd) == 0x000008, "Member 'PyUIController_102741_OnSummonedChange::bIsAdd' has a wrong offset!");

// PythonFunction PyAbility_102741.PyUIController_102741.OnWallActivateStateChange
// 0x0001 (0x0001 - 0x0000)
struct PyUIController_102741_OnWallActivateStateChange final
{
public:
	bool                                          bNewState;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_102741_OnWallActivateStateChange) == 0x000001, "Wrong alignment on PyUIController_102741_OnWallActivateStateChange");
static_assert(sizeof(PyUIController_102741_OnWallActivateStateChange) == 0x000001, "Wrong size on PyUIController_102741_OnWallActivateStateChange");
static_assert(offsetof(PyUIController_102741_OnWallActivateStateChange, bNewState) == 0x000000, "Member 'PyUIController_102741_OnWallActivateStateChange::bNewState' has a wrong offset!");

// PythonFunction PyAbility_102741.PyUIController_102741.OnWallAttackStart
// 0x0001 (0x0001 - 0x0000)
struct PyUIController_102741_OnWallAttackStart final
{
public:
	bool                                          bAttackFront;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_102741_OnWallAttackStart) == 0x000001, "Wrong alignment on PyUIController_102741_OnWallAttackStart");
static_assert(sizeof(PyUIController_102741_OnWallAttackStart) == 0x000001, "Wrong size on PyUIController_102741_OnWallAttackStart");
static_assert(offsetof(PyUIController_102741_OnWallAttackStart, bAttackFront) == 0x000000, "Member 'PyUIController_102741_OnWallAttackStart::bAttackFront' has a wrong offset!");

// PythonFunction PyAbility_102741.PyUIController_102741.OnWallActivateStateChangeForWidgetUpdate
// 0x0001 (0x0001 - 0x0000)
struct PyUIController_102741_OnWallActivateStateChangeForWidgetUpdate final
{
public:
	bool                                          bActivate;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_102741_OnWallActivateStateChangeForWidgetUpdate) == 0x000001, "Wrong alignment on PyUIController_102741_OnWallActivateStateChangeForWidgetUpdate");
static_assert(sizeof(PyUIController_102741_OnWallActivateStateChangeForWidgetUpdate) == 0x000001, "Wrong size on PyUIController_102741_OnWallActivateStateChangeForWidgetUpdate");
static_assert(offsetof(PyUIController_102741_OnWallActivateStateChangeForWidgetUpdate, bActivate) == 0x000000, "Member 'PyUIController_102741_OnWallActivateStateChangeForWidgetUpdate::bActivate' has a wrong offset!");

}
