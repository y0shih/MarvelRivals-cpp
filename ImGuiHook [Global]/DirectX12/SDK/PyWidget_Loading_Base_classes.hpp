#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Loading_Base

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Loading_Base.PyWidget_Loading_Base
// 0x0000 (0x05A0 - 0x05A0)
class UPyWidget_Loading_Base : public UMarvelUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Loading_Base">();
	}
	static class UPyWidget_Loading_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Loading_Base>();
	}
};
static_assert(alignof(UPyWidget_Loading_Base) == 0x000008, "Wrong alignment on UPyWidget_Loading_Base");
static_assert(sizeof(UPyWidget_Loading_Base) == 0x0005A0, "Wrong size on UPyWidget_Loading_Base");

}
