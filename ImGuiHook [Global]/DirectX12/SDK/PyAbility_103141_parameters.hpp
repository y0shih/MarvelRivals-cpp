#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103141

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_103141.PyUIController_103142.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_103142_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_103142_SetAbility) == 0x000008, "Wrong alignment on PyUIController_103142_SetAbility");
static_assert(sizeof(PyUIController_103142_SetAbility) == 0x000010, "Wrong size on PyUIController_103142_SetAbility");
static_assert(offsetof(PyUIController_103142_SetAbility, InAbilityId) == 0x000000, "Member 'PyUIController_103142_SetAbility::InAbilityId' has a wrong offset!");
static_assert(offsetof(PyUIController_103142_SetAbility, InAbility) == 0x000008, "Member 'PyUIController_103142_SetAbility::InAbility' has a wrong offset!");

// PythonFunction PyAbility_103141.PyUIController_103141.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_103141_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_103141_SetAbility) == 0x000008, "Wrong alignment on PyUIController_103141_SetAbility");
static_assert(sizeof(PyUIController_103141_SetAbility) == 0x000010, "Wrong size on PyUIController_103141_SetAbility");
static_assert(offsetof(PyUIController_103141_SetAbility, InAbilityId) == 0x000000, "Member 'PyUIController_103141_SetAbility::InAbilityId' has a wrong offset!");
static_assert(offsetof(PyUIController_103141_SetAbility, InAbility) == 0x000008, "Member 'PyUIController_103141_SetAbility::InAbility' has a wrong offset!");

// PythonFunction PyAbility_103141.PyCue_Scope_HitImpact_10314201.OnNiagaraSpawned
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Scope_HitImpact_10314201_OnNiagaraSpawned final
{
public:
	class UNiagaraComponent*                      InFXComponent;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 MyTarget;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Scope_HitImpact_10314201_OnNiagaraSpawned) == 0x000008, "Wrong alignment on PyCue_Scope_HitImpact_10314201_OnNiagaraSpawned");
static_assert(sizeof(PyCue_Scope_HitImpact_10314201_OnNiagaraSpawned) == 0x0001C8, "Wrong size on PyCue_Scope_HitImpact_10314201_OnNiagaraSpawned");
static_assert(offsetof(PyCue_Scope_HitImpact_10314201_OnNiagaraSpawned, InFXComponent) == 0x000000, "Member 'PyCue_Scope_HitImpact_10314201_OnNiagaraSpawned::InFXComponent' has a wrong offset!");
static_assert(offsetof(PyCue_Scope_HitImpact_10314201_OnNiagaraSpawned, MyTarget) == 0x000008, "Member 'PyCue_Scope_HitImpact_10314201_OnNiagaraSpawned::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Scope_HitImpact_10314201_OnNiagaraSpawned, Parameters) == 0x000010, "Member 'PyCue_Scope_HitImpact_10314201_OnNiagaraSpawned::Parameters' has a wrong offset!");

}
