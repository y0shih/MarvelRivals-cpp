#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyBirthCheckRuleComponent

#include "Basic.hpp"

#include "PyRuleComponent_classes.hpp"


namespace SDK
{

// PythonClass PyBirthCheckRuleComponent.PyBirthCheckRuleComponent
// 0x0000 (0x00F0 - 0x00F0)
class UPyBirthCheckRuleComponent final : public UPyRuleComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyBirthCheckRuleComponent">();
	}
	static class UPyBirthCheckRuleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyBirthCheckRuleComponent>();
	}
};
static_assert(alignof(UPyBirthCheckRuleComponent) == 0x000008, "Wrong alignment on UPyBirthCheckRuleComponent");
static_assert(sizeof(UPyBirthCheckRuleComponent) == 0x0000F0, "Wrong size on UPyBirthCheckRuleComponent");

}
