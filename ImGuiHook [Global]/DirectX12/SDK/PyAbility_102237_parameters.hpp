#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102237

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_102237.PyAbility_102237.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102237_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102237_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_102237_K2_OnEndAbility");
static_assert(sizeof(PyAbility_102237_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_102237_K2_OnEndAbility");
static_assert(offsetof(PyAbility_102237_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_102237_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// PythonFunction PyAbility_102237.PyAbility_102237.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102237_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102237_NativeOnMontageCompleted) == 0x000008, "Wrong alignment on PyAbility_102237_NativeOnMontageCompleted");
static_assert(sizeof(PyAbility_102237_NativeOnMontageCompleted) == 0x000010, "Wrong size on PyAbility_102237_NativeOnMontageCompleted");
static_assert(offsetof(PyAbility_102237_NativeOnMontageCompleted, Tag) == 0x000000, "Member 'PyAbility_102237_NativeOnMontageCompleted::Tag' has a wrong offset!");

// PythonFunction PyAbility_102237.PyAbility_102237.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102237_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102237_NativeOnMontageInterrupted) == 0x000008, "Wrong alignment on PyAbility_102237_NativeOnMontageInterrupted");
static_assert(sizeof(PyAbility_102237_NativeOnMontageInterrupted) == 0x000010, "Wrong size on PyAbility_102237_NativeOnMontageInterrupted");
static_assert(offsetof(PyAbility_102237_NativeOnMontageInterrupted, Tag) == 0x000000, "Member 'PyAbility_102237_NativeOnMontageInterrupted::Tag' has a wrong offset!");

// PythonFunction PyAbility_102237.PyAbility_102237.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102237_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102237_NativeOnMontageCancelled) == 0x000008, "Wrong alignment on PyAbility_102237_NativeOnMontageCancelled");
static_assert(sizeof(PyAbility_102237_NativeOnMontageCancelled) == 0x000010, "Wrong size on PyAbility_102237_NativeOnMontageCancelled");
static_assert(offsetof(PyAbility_102237_NativeOnMontageCancelled, Tag) == 0x000000, "Member 'PyAbility_102237_NativeOnMontageCancelled::Tag' has a wrong offset!");

}
