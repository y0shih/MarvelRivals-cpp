#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103871

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103871.PyConfig_103871
// 0x0000 (0x10A0 - 0x10A0)
class UPyConfig_103871 final : public UConfig_AeroBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_103871">();
	}
	static class UPyConfig_103871* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_103871>();
	}
};
static_assert(alignof(UPyConfig_103871) == 0x000010, "Wrong alignment on UPyConfig_103871");
static_assert(sizeof(UPyConfig_103871) == 0x0010A0, "Wrong size on UPyConfig_103871");

// PythonClass PyAbility_103871.PyAbility_103871
// 0x0000 (0x5A90 - 0x5A90)
class UPyAbility_103871 : public UMarvelAeroBaseAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103871">();
	}
	static class UPyAbility_103871* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103871>();
	}
};
static_assert(alignof(UPyAbility_103871) == 0x000010, "Wrong alignment on UPyAbility_103871");
static_assert(sizeof(UPyAbility_103871) == 0x005A90, "Wrong size on UPyAbility_103871");

}
