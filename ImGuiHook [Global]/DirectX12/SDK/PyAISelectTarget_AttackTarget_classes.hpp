#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAISelectTarget_AttackTarget

#include "Basic.hpp"

#include "PyAISelectTargetLogicBase_classes.hpp"


namespace SDK
{

// PythonClass PyAISelectTarget_AttackTarget.PyAISelectTarget_AttackTarget
// 0x0000 (0x0070 - 0x0070)
class UPyAISelectTarget_AttackTarget : public UPyAISelectTargetLogicBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_AttackTarget">();
	}
	static class UPyAISelectTarget_AttackTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_AttackTarget>();
	}
};
static_assert(alignof(UPyAISelectTarget_AttackTarget) == 0x000008, "Wrong alignment on UPyAISelectTarget_AttackTarget");
static_assert(sizeof(UPyAISelectTarget_AttackTarget) == 0x000070, "Wrong size on UPyAISelectTarget_AttackTarget");

}
