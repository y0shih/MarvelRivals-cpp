#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyExtension_VisibleControl

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyExtension_VisibleControl.PyExtension_VisibleControl
// 0x0000 (0x0030 - 0x0030)
class UPyExtension_VisibleControl final : public UMarvelUserWidgetExtension
{
public:
	void BP_Construct();
	void BP_Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyExtension_VisibleControl">();
	}
	static class UPyExtension_VisibleControl* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyExtension_VisibleControl>();
	}
};
static_assert(alignof(UPyExtension_VisibleControl) == 0x000008, "Wrong alignment on UPyExtension_VisibleControl");
static_assert(sizeof(UPyExtension_VisibleControl) == 0x000030, "Wrong size on UPyExtension_VisibleControl");

}
