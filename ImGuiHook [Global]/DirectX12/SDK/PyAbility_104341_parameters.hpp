#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104341

#include "Basic.hpp"

#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104341.PyAbility_104341.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104341_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104341_NativeOnMontageCompleted) == 0x000008, "Wrong alignment on PyAbility_104341_NativeOnMontageCompleted");
static_assert(sizeof(PyAbility_104341_NativeOnMontageCompleted) == 0x000010, "Wrong size on PyAbility_104341_NativeOnMontageCompleted");
static_assert(offsetof(PyAbility_104341_NativeOnMontageCompleted, Tag) == 0x000000, "Member 'PyAbility_104341_NativeOnMontageCompleted::Tag' has a wrong offset!");

// PythonFunction PyAbility_104341.PyAbility_104341.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104341_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104341_NativeOnMontageInterrupted) == 0x000008, "Wrong alignment on PyAbility_104341_NativeOnMontageInterrupted");
static_assert(sizeof(PyAbility_104341_NativeOnMontageInterrupted) == 0x000010, "Wrong size on PyAbility_104341_NativeOnMontageInterrupted");
static_assert(offsetof(PyAbility_104341_NativeOnMontageInterrupted, Tag) == 0x000000, "Member 'PyAbility_104341_NativeOnMontageInterrupted::Tag' has a wrong offset!");

// PythonFunction PyAbility_104341.PyAbility_104341.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104341_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104341_NativeOnMontageCancelled) == 0x000008, "Wrong alignment on PyAbility_104341_NativeOnMontageCancelled");
static_assert(sizeof(PyAbility_104341_NativeOnMontageCancelled) == 0x000010, "Wrong size on PyAbility_104341_NativeOnMontageCancelled");
static_assert(offsetof(PyAbility_104341_NativeOnMontageCancelled, Tag) == 0x000000, "Member 'PyAbility_104341_NativeOnMontageCancelled::Tag' has a wrong offset!");

// PythonFunction PyAbility_104341.PyAbility_104341.NativeOnMontageEvent
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104341_NativeOnMontageEvent final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104341_NativeOnMontageEvent) == 0x000008, "Wrong alignment on PyAbility_104341_NativeOnMontageEvent");
static_assert(sizeof(PyAbility_104341_NativeOnMontageEvent) == 0x000010, "Wrong size on PyAbility_104341_NativeOnMontageEvent");
static_assert(offsetof(PyAbility_104341_NativeOnMontageEvent, Tag) == 0x000000, "Member 'PyAbility_104341_NativeOnMontageEvent::Tag' has a wrong offset!");

// PythonFunction PyAbility_104341.PyAbility_104341.OnDashFinish
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104341_OnDashFinish final
{
public:
	EDashStopReason                               Reason;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104341_OnDashFinish) == 0x000001, "Wrong alignment on PyAbility_104341_OnDashFinish");
static_assert(sizeof(PyAbility_104341_OnDashFinish) == 0x000001, "Wrong size on PyAbility_104341_OnDashFinish");
static_assert(offsetof(PyAbility_104341_OnDashFinish, Reason) == 0x000000, "Member 'PyAbility_104341_OnDashFinish::Reason' has a wrong offset!");

// PythonFunction PyAbility_104341.PyAbility_104341.OnCharacterDeath
// 0x0028 (0x0028 - 0x0000)
struct PyAbility_104341_OnCharacterDeath final
{
public:
	class AActor*                                 DamageCauser;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ParamHandle;                                       // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104341_OnCharacterDeath) == 0x000008, "Wrong alignment on PyAbility_104341_OnCharacterDeath");
static_assert(sizeof(PyAbility_104341_OnCharacterDeath) == 0x000028, "Wrong size on PyAbility_104341_OnCharacterDeath");
static_assert(offsetof(PyAbility_104341_OnCharacterDeath, DamageCauser) == 0x000000, "Member 'PyAbility_104341_OnCharacterDeath::DamageCauser' has a wrong offset!");
static_assert(offsetof(PyAbility_104341_OnCharacterDeath, TargetActor) == 0x000008, "Member 'PyAbility_104341_OnCharacterDeath::TargetActor' has a wrong offset!");
static_assert(offsetof(PyAbility_104341_OnCharacterDeath, ParamHandle) == 0x000010, "Member 'PyAbility_104341_OnCharacterDeath::ParamHandle' has a wrong offset!");

// PythonFunction PyAbility_104341.PyAbility_104341.OnKillOther
// 0x0028 (0x0028 - 0x0000)
struct PyAbility_104341_OnKillOther final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ParamHandle;                                       // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104341_OnKillOther) == 0x000008, "Wrong alignment on PyAbility_104341_OnKillOther");
static_assert(sizeof(PyAbility_104341_OnKillOther) == 0x000028, "Wrong size on PyAbility_104341_OnKillOther");
static_assert(offsetof(PyAbility_104341_OnKillOther, InSourceAvatar) == 0x000000, "Member 'PyAbility_104341_OnKillOther::InSourceAvatar' has a wrong offset!");
static_assert(offsetof(PyAbility_104341_OnKillOther, InTargetAvatar) == 0x000008, "Member 'PyAbility_104341_OnKillOther::InTargetAvatar' has a wrong offset!");
static_assert(offsetof(PyAbility_104341_OnKillOther, ParamHandle) == 0x000010, "Member 'PyAbility_104341_OnKillOther::ParamHandle' has a wrong offset!");

// PythonFunction PyAbility_104341.PyAbility_104341.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104341_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104341_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_104341_K2_OnEndAbility");
static_assert(sizeof(PyAbility_104341_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_104341_K2_OnEndAbility");
static_assert(offsetof(PyAbility_104341_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_104341_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
