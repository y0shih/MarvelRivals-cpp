#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104561

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104561.PyAbility_104561.OnWaitTaskConfirm
// 0x0168 (0x0168 - 0x0000)
struct PyAbility_104561_OnWaitTaskConfirm final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_104561_OnWaitTaskConfirm) == 0x000008, "Wrong alignment on PyAbility_104561_OnWaitTaskConfirm");
static_assert(sizeof(PyAbility_104561_OnWaitTaskConfirm) == 0x000168, "Wrong size on PyAbility_104561_OnWaitTaskConfirm");
static_assert(offsetof(PyAbility_104561_OnWaitTaskConfirm, Data) == 0x000000, "Member 'PyAbility_104561_OnWaitTaskConfirm::Data' has a wrong offset!");

// PythonFunction PyAbility_104561.PyAbility_104561.OnWaitTaskCancel
// 0x0168 (0x0168 - 0x0000)
struct PyAbility_104561_OnWaitTaskCancel final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_104561_OnWaitTaskCancel) == 0x000008, "Wrong alignment on PyAbility_104561_OnWaitTaskCancel");
static_assert(sizeof(PyAbility_104561_OnWaitTaskCancel) == 0x000168, "Wrong size on PyAbility_104561_OnWaitTaskCancel");
static_assert(offsetof(PyAbility_104561_OnWaitTaskCancel, Data) == 0x000000, "Member 'PyAbility_104561_OnWaitTaskCancel::Data' has a wrong offset!");

// PythonFunction PyAbility_104561.PyAbility_104561.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104561_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104561_NativeOnMontageCompleted) == 0x000008, "Wrong alignment on PyAbility_104561_NativeOnMontageCompleted");
static_assert(sizeof(PyAbility_104561_NativeOnMontageCompleted) == 0x000010, "Wrong size on PyAbility_104561_NativeOnMontageCompleted");
static_assert(offsetof(PyAbility_104561_NativeOnMontageCompleted, Tag) == 0x000000, "Member 'PyAbility_104561_NativeOnMontageCompleted::Tag' has a wrong offset!");

// PythonFunction PyAbility_104561.PyAbility_104561.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104561_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_104561_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_104561_K2_OnEndAbility");
static_assert(sizeof(PyAbility_104561_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_104561_K2_OnEndAbility");
static_assert(offsetof(PyAbility_104561_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_104561_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// PythonFunction PyAbility_104561.PyCue_ProjectileLoop_10456101.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_ProjectileLoop_10456101_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_ProjectileLoop_10456101_WhileActive) == 0x000008, "Wrong alignment on PyCue_ProjectileLoop_10456101_WhileActive");
static_assert(sizeof(PyCue_ProjectileLoop_10456101_WhileActive) == 0x0001C8, "Wrong size on PyCue_ProjectileLoop_10456101_WhileActive");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_WhileActive, MyTarget) == 0x000000, "Member 'PyCue_ProjectileLoop_10456101_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_WhileActive, Parameters) == 0x000008, "Member 'PyCue_ProjectileLoop_10456101_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_WhileActive, ReturnValue) == 0x0001C0, "Member 'PyCue_ProjectileLoop_10456101_WhileActive::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_104561.PyCue_ProjectileLoop_10456101.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_ProjectileLoop_10456101_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_ProjectileLoop_10456101_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_ProjectileLoop_10456101_WhileActiveFX");
static_assert(sizeof(PyCue_ProjectileLoop_10456101_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_ProjectileLoop_10456101_WhileActiveFX");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_ProjectileLoop_10456101_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_ProjectileLoop_10456101_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_104561.PyCue_ProjectileLoop_10456101.OnActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_ProjectileLoop_10456101_OnActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_ProjectileLoop_10456101_OnActiveFX) == 0x000008, "Wrong alignment on PyCue_ProjectileLoop_10456101_OnActiveFX");
static_assert(sizeof(PyCue_ProjectileLoop_10456101_OnActiveFX) == 0x0001C0, "Wrong size on PyCue_ProjectileLoop_10456101_OnActiveFX");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_OnActiveFX, MyTarget) == 0x000000, "Member 'PyCue_ProjectileLoop_10456101_OnActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_OnActiveFX, Parameters) == 0x000008, "Member 'PyCue_ProjectileLoop_10456101_OnActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_104561.PyCue_ProjectileLoop_10456101.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_ProjectileLoop_10456101_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_ProjectileLoop_10456101_OnExecuteFX) == 0x000008, "Wrong alignment on PyCue_ProjectileLoop_10456101_OnExecuteFX");
static_assert(sizeof(PyCue_ProjectileLoop_10456101_OnExecuteFX) == 0x0001C0, "Wrong size on PyCue_ProjectileLoop_10456101_OnExecuteFX");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_OnExecuteFX, MyTarget) == 0x000000, "Member 'PyCue_ProjectileLoop_10456101_OnExecuteFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_OnExecuteFX, Parameters) == 0x000008, "Member 'PyCue_ProjectileLoop_10456101_OnExecuteFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_104561.PyCue_ProjectileLoop_10456101.OnExecuteAudio
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_ProjectileLoop_10456101_OnExecuteAudio final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_ProjectileLoop_10456101_OnExecuteAudio) == 0x000008, "Wrong alignment on PyCue_ProjectileLoop_10456101_OnExecuteAudio");
static_assert(sizeof(PyCue_ProjectileLoop_10456101_OnExecuteAudio) == 0x0001C0, "Wrong size on PyCue_ProjectileLoop_10456101_OnExecuteAudio");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_OnExecuteAudio, MyTarget) == 0x000000, "Member 'PyCue_ProjectileLoop_10456101_OnExecuteAudio::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_OnExecuteAudio, Parameters) == 0x000008, "Member 'PyCue_ProjectileLoop_10456101_OnExecuteAudio::Parameters' has a wrong offset!");

// PythonFunction PyAbility_104561.PyCue_ProjectileLoop_10456101.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_ProjectileLoop_10456101_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_ProjectileLoop_10456101_OnRemove) == 0x000008, "Wrong alignment on PyCue_ProjectileLoop_10456101_OnRemove");
static_assert(sizeof(PyCue_ProjectileLoop_10456101_OnRemove) == 0x0001C8, "Wrong size on PyCue_ProjectileLoop_10456101_OnRemove");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_OnRemove, MyTarget) == 0x000000, "Member 'PyCue_ProjectileLoop_10456101_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_OnRemove, Parameters) == 0x000008, "Member 'PyCue_ProjectileLoop_10456101_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_ProjectileLoop_10456101_OnRemove, ReturnValue) == 0x0001C0, "Member 'PyCue_ProjectileLoop_10456101_OnRemove::ReturnValue' has a wrong offset!");

}
