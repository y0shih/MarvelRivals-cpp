#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102361

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_102361.PyBondEnhanceSourceResolver_102361.GetEnhanceSource
// 0x00A0 (0x00A0 - 0x0000)
struct PyBondEnhanceSourceResolver_102361_GetEnhanceSource final
{
public:
	class AMarvelBaseCharacter*                   InOwnerCharacter;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         InOwnerAbilityID;                                  // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBondInstance                          InBondInstance;                                    // 0x0010(0x0088)(ConstParm, Parm, OutParm, ReferenceParm)
	class AMarvelBaseCharacter*                   ReturnValue;                                       // 0x0098(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyBondEnhanceSourceResolver_102361_GetEnhanceSource) == 0x000008, "Wrong alignment on PyBondEnhanceSourceResolver_102361_GetEnhanceSource");
static_assert(sizeof(PyBondEnhanceSourceResolver_102361_GetEnhanceSource) == 0x0000A0, "Wrong size on PyBondEnhanceSourceResolver_102361_GetEnhanceSource");
static_assert(offsetof(PyBondEnhanceSourceResolver_102361_GetEnhanceSource, InOwnerCharacter) == 0x000000, "Member 'PyBondEnhanceSourceResolver_102361_GetEnhanceSource::InOwnerCharacter' has a wrong offset!");
static_assert(offsetof(PyBondEnhanceSourceResolver_102361_GetEnhanceSource, InOwnerAbilityID) == 0x000008, "Member 'PyBondEnhanceSourceResolver_102361_GetEnhanceSource::InOwnerAbilityID' has a wrong offset!");
static_assert(offsetof(PyBondEnhanceSourceResolver_102361_GetEnhanceSource, InBondInstance) == 0x000010, "Member 'PyBondEnhanceSourceResolver_102361_GetEnhanceSource::InBondInstance' has a wrong offset!");
static_assert(offsetof(PyBondEnhanceSourceResolver_102361_GetEnhanceSource, ReturnValue) == 0x000098, "Member 'PyBondEnhanceSourceResolver_102361_GetEnhanceSource::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_102361.PyAbility_102361.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102361_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102361_CanActivate) == 0x000001, "Wrong alignment on PyAbility_102361_CanActivate");
static_assert(sizeof(PyAbility_102361_CanActivate) == 0x000001, "Wrong size on PyAbility_102361_CanActivate");
static_assert(offsetof(PyAbility_102361_CanActivate, ReturnValue) == 0x000000, "Member 'PyAbility_102361_CanActivate::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_102361.PyAbility_102361.K2_ActivateAbilityFromEvent
// 0x0290 (0x0290 - 0x0000)
struct PyAbility_102361_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0290)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_102361_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on PyAbility_102361_K2_ActivateAbilityFromEvent");
static_assert(sizeof(PyAbility_102361_K2_ActivateAbilityFromEvent) == 0x000290, "Wrong size on PyAbility_102361_K2_ActivateAbilityFromEvent");
static_assert(offsetof(PyAbility_102361_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'PyAbility_102361_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// PythonFunction PyAbility_102361.PyAbility_102361.CheckViewportTarget
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102361_CheckViewportTarget final
{
public:
	const class AActor*                           InTarget;                                          // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102361_CheckViewportTarget) == 0x000008, "Wrong alignment on PyAbility_102361_CheckViewportTarget");
static_assert(sizeof(PyAbility_102361_CheckViewportTarget) == 0x000010, "Wrong size on PyAbility_102361_CheckViewportTarget");
static_assert(offsetof(PyAbility_102361_CheckViewportTarget, InTarget) == 0x000000, "Member 'PyAbility_102361_CheckViewportTarget::InTarget' has a wrong offset!");
static_assert(offsetof(PyAbility_102361_CheckViewportTarget, ReturnValue) == 0x000008, "Member 'PyAbility_102361_CheckViewportTarget::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_102361.PyAbility_102361.OnDashTaskFinish
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102361_OnDashTaskFinish final
{
public:
	EDashStopReason                               Reason;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102361_OnDashTaskFinish) == 0x000001, "Wrong alignment on PyAbility_102361_OnDashTaskFinish");
static_assert(sizeof(PyAbility_102361_OnDashTaskFinish) == 0x000001, "Wrong size on PyAbility_102361_OnDashTaskFinish");
static_assert(offsetof(PyAbility_102361_OnDashTaskFinish, Reason) == 0x000000, "Member 'PyAbility_102361_OnDashTaskFinish::Reason' has a wrong offset!");

// PythonFunction PyAbility_102361.PyAbility_102361.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102361_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102361_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_102361_K2_OnEndAbility");
static_assert(sizeof(PyAbility_102361_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_102361_K2_OnEndAbility");
static_assert(offsetof(PyAbility_102361_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_102361_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// PythonFunction PyAbility_102361.PyUIC_SelectTarget_102361.GetTargets
// 0x0010 (0x0010 - 0x0000)
struct PyUIC_SelectTarget_102361_GetTargets final
{
public:
	TArray<class AActor*>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(PyUIC_SelectTarget_102361_GetTargets) == 0x000008, "Wrong alignment on PyUIC_SelectTarget_102361_GetTargets");
static_assert(sizeof(PyUIC_SelectTarget_102361_GetTargets) == 0x000010, "Wrong size on PyUIC_SelectTarget_102361_GetTargets");
static_assert(offsetof(PyUIC_SelectTarget_102361_GetTargets, ReturnValue) == 0x000000, "Member 'PyUIC_SelectTarget_102361_GetTargets::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_102361.PyUIC_SelectTarget_102361.GetTaskResults
// 0x0010 (0x0010 - 0x0000)
struct PyUIC_SelectTarget_102361_GetTaskResults final
{
public:
	TArray<struct FSelectTaskResult>              ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(PyUIC_SelectTarget_102361_GetTaskResults) == 0x000008, "Wrong alignment on PyUIC_SelectTarget_102361_GetTaskResults");
static_assert(sizeof(PyUIC_SelectTarget_102361_GetTaskResults) == 0x000010, "Wrong size on PyUIC_SelectTarget_102361_GetTaskResults");
static_assert(offsetof(PyUIC_SelectTarget_102361_GetTaskResults, ReturnValue) == 0x000000, "Member 'PyUIC_SelectTarget_102361_GetTaskResults::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_102361.PyUIC_SelectTarget_102361.ShouldTrace
// 0x0001 (0x0001 - 0x0000)
struct PyUIC_SelectTarget_102361_ShouldTrace final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIC_SelectTarget_102361_ShouldTrace) == 0x000001, "Wrong alignment on PyUIC_SelectTarget_102361_ShouldTrace");
static_assert(sizeof(PyUIC_SelectTarget_102361_ShouldTrace) == 0x000001, "Wrong size on PyUIC_SelectTarget_102361_ShouldTrace");
static_assert(offsetof(PyUIC_SelectTarget_102361_ShouldTrace, ReturnValue) == 0x000000, "Member 'PyUIC_SelectTarget_102361_ShouldTrace::ReturnValue' has a wrong offset!");

}
