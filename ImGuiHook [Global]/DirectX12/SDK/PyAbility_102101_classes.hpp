#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102101

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102101.PyAbility_102101
// 0x0000 (0x2648 - 0x2648)
class UPyAbility_102101 : public UMarvelAbility_DoubleJump
{
public:
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool Cancel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102101">();
	}
	static class UPyAbility_102101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102101>();
	}
};
static_assert(alignof(UPyAbility_102101) == 0x000008, "Wrong alignment on UPyAbility_102101");
static_assert(sizeof(UPyAbility_102101) == 0x002648, "Wrong size on UPyAbility_102101");

// PythonClass PyAbility_102101.PyCue_Ability_Loop_10210101
// 0x0000 (0x0E00 - 0x0E00)
class APyCue_Ability_Loop_10210101 final : public AMarvelCueNotify_Ability
{
public:
	void OnWidgetShowUp(class AMarvelBaseCharacter* TargetCharacter, class UUserWidget* DisplayWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10210101">();
	}
	static class APyCue_Ability_Loop_10210101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10210101>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_10210101) == 0x000008, "Wrong alignment on APyCue_Ability_Loop_10210101");
static_assert(sizeof(APyCue_Ability_Loop_10210101) == 0x000E00, "Wrong size on APyCue_Ability_Loop_10210101");

// PythonClass PyAbility_102101.PyWidget_10210101
// 0x0000 (0x05A0 - 0x05A0)
class UPyWidget_10210101 final : public UMarvelUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_10210101">();
	}
	static class UPyWidget_10210101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_10210101>();
	}
};
static_assert(alignof(UPyWidget_10210101) == 0x000008, "Wrong alignment on UPyWidget_10210101");
static_assert(sizeof(UPyWidget_10210101) == 0x0005A0, "Wrong size on UPyWidget_10210101");

}
