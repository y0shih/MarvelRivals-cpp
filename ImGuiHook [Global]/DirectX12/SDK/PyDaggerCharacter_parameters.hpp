#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyDaggerCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hero_1025_structs.hpp"
#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyDaggerCharacter.PyCloakAndDaggerCharacter.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct PyCloakAndDaggerCharacter_ReceiveEndPlay final
{
public:
	EEndPlayReason                                Reason;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCloakAndDaggerCharacter_ReceiveEndPlay) == 0x000001, "Wrong alignment on PyCloakAndDaggerCharacter_ReceiveEndPlay");
static_assert(sizeof(PyCloakAndDaggerCharacter_ReceiveEndPlay) == 0x000001, "Wrong size on PyCloakAndDaggerCharacter_ReceiveEndPlay");
static_assert(offsetof(PyCloakAndDaggerCharacter_ReceiveEndPlay, Reason) == 0x000000, "Member 'PyCloakAndDaggerCharacter_ReceiveEndPlay::Reason' has a wrong offset!");

// PythonFunction PyDaggerCharacter.PyCloakAndDaggerCharacter.OnMarvelSculptChanged
// 0x0004 (0x0004 - 0x0000)
struct PyCloakAndDaggerCharacter_OnMarvelSculptChanged final
{
public:
	int32                                         SculptID;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCloakAndDaggerCharacter_OnMarvelSculptChanged) == 0x000004, "Wrong alignment on PyCloakAndDaggerCharacter_OnMarvelSculptChanged");
static_assert(sizeof(PyCloakAndDaggerCharacter_OnMarvelSculptChanged) == 0x000004, "Wrong size on PyCloakAndDaggerCharacter_OnMarvelSculptChanged");
static_assert(offsetof(PyCloakAndDaggerCharacter_OnMarvelSculptChanged, SculptID) == 0x000000, "Member 'PyCloakAndDaggerCharacter_OnMarvelSculptChanged::SculptID' has a wrong offset!");

// PythonFunction PyDaggerCharacter.PyCloakAndDaggerCharacter.OnReborn
// 0x0720 (0x0720 - 0x0000)
struct PyCloakAndDaggerCharacter_OnReborn final
{
public:
	struct FCharacterRebornParam                  RebornParameter;                                   // 0x0000(0x0720)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCloakAndDaggerCharacter_OnReborn) == 0x000010, "Wrong alignment on PyCloakAndDaggerCharacter_OnReborn");
static_assert(sizeof(PyCloakAndDaggerCharacter_OnReborn) == 0x000720, "Wrong size on PyCloakAndDaggerCharacter_OnReborn");
static_assert(offsetof(PyCloakAndDaggerCharacter_OnReborn, RebornParameter) == 0x000000, "Member 'PyCloakAndDaggerCharacter_OnReborn::RebornParameter' has a wrong offset!");

// PythonFunction PyDaggerCharacter.PyCloakAndDaggerCharacter.ClientSetCharacterType
// 0x0001 (0x0001 - 0x0000)
struct PyCloakAndDaggerCharacter_ClientSetCharacterType final
{
public:
	EDaggerCharacterType                          InType;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCloakAndDaggerCharacter_ClientSetCharacterType) == 0x000001, "Wrong alignment on PyCloakAndDaggerCharacter_ClientSetCharacterType");
static_assert(sizeof(PyCloakAndDaggerCharacter_ClientSetCharacterType) == 0x000001, "Wrong size on PyCloakAndDaggerCharacter_ClientSetCharacterType");
static_assert(offsetof(PyCloakAndDaggerCharacter_ClientSetCharacterType, InType) == 0x000000, "Member 'PyCloakAndDaggerCharacter_ClientSetCharacterType::InType' has a wrong offset!");

// PythonFunction PyDaggerCharacter.PyUIController_CloakAndDaggerAbilities.OnMarvelSculptChanged
// 0x0004 (0x0004 - 0x0000)
struct PyUIController_CloakAndDaggerAbilities_OnMarvelSculptChanged final
{
public:
	int32                                         Sculpt_id;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_CloakAndDaggerAbilities_OnMarvelSculptChanged) == 0x000004, "Wrong alignment on PyUIController_CloakAndDaggerAbilities_OnMarvelSculptChanged");
static_assert(sizeof(PyUIController_CloakAndDaggerAbilities_OnMarvelSculptChanged) == 0x000004, "Wrong size on PyUIController_CloakAndDaggerAbilities_OnMarvelSculptChanged");
static_assert(offsetof(PyUIController_CloakAndDaggerAbilities_OnMarvelSculptChanged, Sculpt_id) == 0x000000, "Member 'PyUIController_CloakAndDaggerAbilities_OnMarvelSculptChanged::Sculpt_id' has a wrong offset!");

}
