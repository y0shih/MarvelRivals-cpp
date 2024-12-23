#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyActorComponent_CrystalHoverState

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyActorComponent_CrystalHoverState.PyActorComponent_CrystalHoverState.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct PyActorComponent_CrystalHoverState_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyActorComponent_CrystalHoverState_ReceiveTick) == 0x000004, "Wrong alignment on PyActorComponent_CrystalHoverState_ReceiveTick");
static_assert(sizeof(PyActorComponent_CrystalHoverState_ReceiveTick) == 0x000004, "Wrong size on PyActorComponent_CrystalHoverState_ReceiveTick");
static_assert(offsetof(PyActorComponent_CrystalHoverState_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'PyActorComponent_CrystalHoverState_ReceiveTick::DeltaSeconds' has a wrong offset!");

// PythonFunction PyActorComponent_CrystalHoverState.PyActorComponent_CrystalHoverState.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct PyActorComponent_CrystalHoverState_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyActorComponent_CrystalHoverState_ReceiveEndPlay) == 0x000001, "Wrong alignment on PyActorComponent_CrystalHoverState_ReceiveEndPlay");
static_assert(sizeof(PyActorComponent_CrystalHoverState_ReceiveEndPlay) == 0x000001, "Wrong size on PyActorComponent_CrystalHoverState_ReceiveEndPlay");
static_assert(offsetof(PyActorComponent_CrystalHoverState_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'PyActorComponent_CrystalHoverState_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}

