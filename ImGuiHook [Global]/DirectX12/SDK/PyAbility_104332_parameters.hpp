#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104332

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104332.PyCue_Buff_10433201.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Buff_10433201_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Buff_10433201_WhileActive) == 0x000008, "Wrong alignment on PyCue_Buff_10433201_WhileActive");
static_assert(sizeof(PyCue_Buff_10433201_WhileActive) == 0x0001C8, "Wrong size on PyCue_Buff_10433201_WhileActive");
static_assert(offsetof(PyCue_Buff_10433201_WhileActive, MyTarget) == 0x000000, "Member 'PyCue_Buff_10433201_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Buff_10433201_WhileActive, Parameters) == 0x000008, "Member 'PyCue_Buff_10433201_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_Buff_10433201_WhileActive, ReturnValue) == 0x0001C0, "Member 'PyCue_Buff_10433201_WhileActive::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_104332.PyCue_Buff_10433201.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Buff_10433201_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Buff_10433201_OnRemove) == 0x000008, "Wrong alignment on PyCue_Buff_10433201_OnRemove");
static_assert(sizeof(PyCue_Buff_10433201_OnRemove) == 0x0001C8, "Wrong size on PyCue_Buff_10433201_OnRemove");
static_assert(offsetof(PyCue_Buff_10433201_OnRemove, MyTarget) == 0x000000, "Member 'PyCue_Buff_10433201_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Buff_10433201_OnRemove, Parameters) == 0x000008, "Member 'PyCue_Buff_10433201_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_Buff_10433201_OnRemove, ReturnValue) == 0x0001C0, "Member 'PyCue_Buff_10433201_OnRemove::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_104332.PyAbility_104332.OnTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104332_OnTagUpdate final
{
public:
	struct FGameplayTag                           TagUpdated;                                        // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          TagExists;                                         // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104332_OnTagUpdate) == 0x000004, "Wrong alignment on PyAbility_104332_OnTagUpdate");
static_assert(sizeof(PyAbility_104332_OnTagUpdate) == 0x000010, "Wrong size on PyAbility_104332_OnTagUpdate");
static_assert(offsetof(PyAbility_104332_OnTagUpdate, TagUpdated) == 0x000000, "Member 'PyAbility_104332_OnTagUpdate::TagUpdated' has a wrong offset!");
static_assert(offsetof(PyAbility_104332_OnTagUpdate, TagExists) == 0x00000C, "Member 'PyAbility_104332_OnTagUpdate::TagExists' has a wrong offset!");

// PythonFunction PyAbility_104332.PyAbility_104332.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104332_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104332_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_104332_K2_OnEndAbility");
static_assert(sizeof(PyAbility_104332_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_104332_K2_OnEndAbility");
static_assert(offsetof(PyAbility_104332_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_104332_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// PythonFunction PyAbility_104332.PyTraceComponent_10433201.OnTraceCompleted
// 0x0018 (0x0018 - 0x0000)
struct PyTraceComponent_10433201_OnTraceCompleted final
{
public:
	class UObject*                                TraceSource;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                     HitResults;                                        // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyTraceComponent_10433201_OnTraceCompleted) == 0x000008, "Wrong alignment on PyTraceComponent_10433201_OnTraceCompleted");
static_assert(sizeof(PyTraceComponent_10433201_OnTraceCompleted) == 0x000018, "Wrong size on PyTraceComponent_10433201_OnTraceCompleted");
static_assert(offsetof(PyTraceComponent_10433201_OnTraceCompleted, TraceSource) == 0x000000, "Member 'PyTraceComponent_10433201_OnTraceCompleted::TraceSource' has a wrong offset!");
static_assert(offsetof(PyTraceComponent_10433201_OnTraceCompleted, HitResults) == 0x000008, "Member 'PyTraceComponent_10433201_OnTraceCompleted::HitResults' has a wrong offset!");

}
