#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelCustomEventSubsystem

#include "Basic.hpp"

#include "MarvelLevel_classes.hpp"


namespace SDK
{

// PythonClass PyLevelCustomEventSubsystem.PyLevelCustomEventSubsystem
// 0x0000 (0x0038 - 0x0038)
class UPyLevelCustomEventSubsystem : public ULevelCustomEventSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelCustomEventSubsystem">();
	}
	static class UPyLevelCustomEventSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyLevelCustomEventSubsystem>();
	}
};
static_assert(alignof(UPyLevelCustomEventSubsystem) == 0x000008, "Wrong alignment on UPyLevelCustomEventSubsystem");
static_assert(sizeof(UPyLevelCustomEventSubsystem) == 0x000038, "Wrong size on UPyLevelCustomEventSubsystem");

}
