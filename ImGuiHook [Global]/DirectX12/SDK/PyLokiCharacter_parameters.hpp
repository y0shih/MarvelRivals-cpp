#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLokiCharacter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyLokiCharacter.PyLokiChildActor.OnBattleStateChanged
// 0x0001 (0x0001 - 0x0000)
struct PyLokiChildActor_OnBattleStateChanged final
{
public:
	bool                                          IsBattling;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyLokiChildActor_OnBattleStateChanged) == 0x000001, "Wrong alignment on PyLokiChildActor_OnBattleStateChanged");
static_assert(sizeof(PyLokiChildActor_OnBattleStateChanged) == 0x000001, "Wrong size on PyLokiChildActor_OnBattleStateChanged");
static_assert(offsetof(PyLokiChildActor_OnBattleStateChanged, IsBattling) == 0x000000, "Member 'PyLokiChildActor_OnBattleStateChanged::IsBattling' has a wrong offset!");

// PythonFunction PyLokiCharacter.PyLokiCharacter.SpawnLokiPhantom
// 0x0070 (0x0070 - 0x0000)
struct PyLokiCharacter_SpawnLokiPhantom final
{
public:
	struct FTransform                             InTransform;                                       // 0x0000(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UMarvelGameplayAbility*           InAbility;                                         // 0x0060(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyLokiCharacter_SpawnLokiPhantom) == 0x000010, "Wrong alignment on PyLokiCharacter_SpawnLokiPhantom");
static_assert(sizeof(PyLokiCharacter_SpawnLokiPhantom) == 0x000070, "Wrong size on PyLokiCharacter_SpawnLokiPhantom");
static_assert(offsetof(PyLokiCharacter_SpawnLokiPhantom, InTransform) == 0x000000, "Member 'PyLokiCharacter_SpawnLokiPhantom::InTransform' has a wrong offset!");
static_assert(offsetof(PyLokiCharacter_SpawnLokiPhantom, InAbility) == 0x000060, "Member 'PyLokiCharacter_SpawnLokiPhantom::InAbility' has a wrong offset!");

}
