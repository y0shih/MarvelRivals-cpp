#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101122

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_101122.PyCue_Projectile_Loop_1011_floor_dust.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_Loop_1011_floor_dust_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Projectile_Loop_1011_floor_dust_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_Projectile_Loop_1011_floor_dust_WhileActiveFX");
static_assert(sizeof(PyCue_Projectile_Loop_1011_floor_dust_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_Projectile_Loop_1011_floor_dust_WhileActiveFX");
static_assert(offsetof(PyCue_Projectile_Loop_1011_floor_dust_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_Projectile_Loop_1011_floor_dust_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_1011_floor_dust_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_Projectile_Loop_1011_floor_dust_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_101122.PyCue_Projectile_Loop_1011_floor_dust.OnExecute
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Projectile_Loop_1011_floor_dust_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_Projectile_Loop_1011_floor_dust_OnExecute) == 0x000008, "Wrong alignment on PyCue_Projectile_Loop_1011_floor_dust_OnExecute");
static_assert(sizeof(PyCue_Projectile_Loop_1011_floor_dust_OnExecute) == 0x0001C8, "Wrong size on PyCue_Projectile_Loop_1011_floor_dust_OnExecute");
static_assert(offsetof(PyCue_Projectile_Loop_1011_floor_dust_OnExecute, MyTarget) == 0x000000, "Member 'PyCue_Projectile_Loop_1011_floor_dust_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_1011_floor_dust_OnExecute, Parameters) == 0x000008, "Member 'PyCue_Projectile_Loop_1011_floor_dust_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_1011_floor_dust_OnExecute, ReturnValue) == 0x0001C0, "Member 'PyCue_Projectile_Loop_1011_floor_dust_OnExecute::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_101122.PyCue_Projectile_Loop_1011_floor_dust.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_Loop_1011_floor_dust_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Projectile_Loop_1011_floor_dust_OnRemoveFX) == 0x000008, "Wrong alignment on PyCue_Projectile_Loop_1011_floor_dust_OnRemoveFX");
static_assert(sizeof(PyCue_Projectile_Loop_1011_floor_dust_OnRemoveFX) == 0x0001C0, "Wrong size on PyCue_Projectile_Loop_1011_floor_dust_OnRemoveFX");
static_assert(offsetof(PyCue_Projectile_Loop_1011_floor_dust_OnRemoveFX, MyTarget) == 0x000000, "Member 'PyCue_Projectile_Loop_1011_floor_dust_OnRemoveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_1011_floor_dust_OnRemoveFX, Parameters) == 0x000008, "Member 'PyCue_Projectile_Loop_1011_floor_dust_OnRemoveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_101122.PyProjectile_10112301.K2_OnProcessHit
// 0x0160 (0x0160 - 0x0000)
struct PyProjectile_10112301_K2_OnProcessHit final
{
public:
	struct FHitResult                             ImpactResult;                                      // 0x0000(0x0160)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PyProjectile_10112301_K2_OnProcessHit) == 0x000008, "Wrong alignment on PyProjectile_10112301_K2_OnProcessHit");
static_assert(sizeof(PyProjectile_10112301_K2_OnProcessHit) == 0x000160, "Wrong size on PyProjectile_10112301_K2_OnProcessHit");
static_assert(offsetof(PyProjectile_10112301_K2_OnProcessHit, ImpactResult) == 0x000000, "Member 'PyProjectile_10112301_K2_OnProcessHit::ImpactResult' has a wrong offset!");

// PythonFunction PyAbility_101122.PyProjectile_10112301.K2_OnPenetrate
// 0x0178 (0x0178 - 0x0000)
struct PyProjectile_10112301_K2_OnPenetrate final
{
public:
	struct FHitResult                             ImpactResult;                                      // 0x0000(0x0160)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                ImpactVelocity;                                    // 0x0160(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyProjectile_10112301_K2_OnPenetrate) == 0x000008, "Wrong alignment on PyProjectile_10112301_K2_OnPenetrate");
static_assert(sizeof(PyProjectile_10112301_K2_OnPenetrate) == 0x000178, "Wrong size on PyProjectile_10112301_K2_OnPenetrate");
static_assert(offsetof(PyProjectile_10112301_K2_OnPenetrate, ImpactResult) == 0x000000, "Member 'PyProjectile_10112301_K2_OnPenetrate::ImpactResult' has a wrong offset!");
static_assert(offsetof(PyProjectile_10112301_K2_OnPenetrate, ImpactVelocity) == 0x000160, "Member 'PyProjectile_10112301_K2_OnPenetrate::ImpactVelocity' has a wrong offset!");

// PythonFunction PyAbility_101122.PyCue_Ability_Loop_10112201.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10112201_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Ability_Loop_10112201_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_Ability_Loop_10112201_WhileActiveFX");
static_assert(sizeof(PyCue_Ability_Loop_10112201_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_Ability_Loop_10112201_WhileActiveFX");
static_assert(offsetof(PyCue_Ability_Loop_10112201_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_Ability_Loop_10112201_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_10112201_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_Ability_Loop_10112201_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_101122.PyEffectiveComponent_10112301.K2_OnPreApplyContainer
// 0x0020 (0x0020 - 0x0000)
struct PyEffectiveComponent_10112301_K2_OnPreApplyContainer final
{
public:
	TArray<struct FHitResult>                     HitResults;                                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                     ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(PyEffectiveComponent_10112301_K2_OnPreApplyContainer) == 0x000008, "Wrong alignment on PyEffectiveComponent_10112301_K2_OnPreApplyContainer");
static_assert(sizeof(PyEffectiveComponent_10112301_K2_OnPreApplyContainer) == 0x000020, "Wrong size on PyEffectiveComponent_10112301_K2_OnPreApplyContainer");
static_assert(offsetof(PyEffectiveComponent_10112301_K2_OnPreApplyContainer, HitResults) == 0x000000, "Member 'PyEffectiveComponent_10112301_K2_OnPreApplyContainer::HitResults' has a wrong offset!");
static_assert(offsetof(PyEffectiveComponent_10112301_K2_OnPreApplyContainer, ReturnValue) == 0x000010, "Member 'PyEffectiveComponent_10112301_K2_OnPreApplyContainer::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_101122.PyCue_Ability_Instant_10112201.OnExecuteAudio
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Instant_10112201_OnExecuteAudio final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Ability_Instant_10112201_OnExecuteAudio) == 0x000008, "Wrong alignment on PyCue_Ability_Instant_10112201_OnExecuteAudio");
static_assert(sizeof(PyCue_Ability_Instant_10112201_OnExecuteAudio) == 0x0001C0, "Wrong size on PyCue_Ability_Instant_10112201_OnExecuteAudio");
static_assert(offsetof(PyCue_Ability_Instant_10112201_OnExecuteAudio, MyTarget) == 0x000000, "Member 'PyCue_Ability_Instant_10112201_OnExecuteAudio::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Instant_10112201_OnExecuteAudio, Parameters) == 0x000008, "Member 'PyCue_Ability_Instant_10112201_OnExecuteAudio::Parameters' has a wrong offset!");

// PythonFunction PyAbility_101122.PyKnockUp_101122.CalcKnockUpDir
// 0x0018 (0x0018 - 0x0000)
struct PyKnockUp_101122_CalcKnockUpDir final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyKnockUp_101122_CalcKnockUpDir) == 0x000008, "Wrong alignment on PyKnockUp_101122_CalcKnockUpDir");
static_assert(sizeof(PyKnockUp_101122_CalcKnockUpDir) == 0x000018, "Wrong size on PyKnockUp_101122_CalcKnockUpDir");
static_assert(offsetof(PyKnockUp_101122_CalcKnockUpDir, ReturnValue) == 0x000000, "Member 'PyKnockUp_101122_CalcKnockUpDir::ReturnValue' has a wrong offset!");

}
