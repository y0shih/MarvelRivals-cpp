#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Recruit_Tag

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Recruit_Tag.PyWidget_Recruit_Tag
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_Recruit_Tag : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Recruit_Tag">();
	}
	static class UPyWidget_Recruit_Tag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Recruit_Tag>();
	}
};
static_assert(alignof(UPyWidget_Recruit_Tag) == 0x000008, "Wrong alignment on UPyWidget_Recruit_Tag");
static_assert(sizeof(UPyWidget_Recruit_Tag) == 0x0005E8, "Wrong size on UPyWidget_Recruit_Tag");

}
