#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104601

#include "Basic.hpp"

#include "PyAbility_134_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104601.PyConfig_104601
// 0x0000 (0x0190 - 0x0190)
class UPyConfig_104601 final : public UPyConfig_134
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104601">();
	}
	static class UPyConfig_104601* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104601>();
	}
};
static_assert(alignof(UPyConfig_104601) == 0x000008, "Wrong alignment on UPyConfig_104601");
static_assert(sizeof(UPyConfig_104601) == 0x000190, "Wrong size on UPyConfig_104601");

// PythonClass PyAbility_104601.PyAbility_104601
// 0x0000 (0x27F8 - 0x27F8)
class UPyAbility_104601 : public UPyAbility_134
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104601">();
	}
	static class UPyAbility_104601* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104601>();
	}
};
static_assert(alignof(UPyAbility_104601) == 0x000008, "Wrong alignment on UPyAbility_104601");
static_assert(sizeof(UPyAbility_104601) == 0x0027F8, "Wrong size on UPyAbility_104601");

// PythonClass PyAbility_104601.PyCue_Death_104601
// 0x0058 (0x15B8 - 0x1560)
class APyCue_Death_104601 final : public APyCue_Death_134
{
public:
	TMap<class FString, class UCurveFloat*>       CurveSoulCocoonChangeCloak;                        // 0x1560(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         CloakSlotIndex;                                    // 0x15B0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Death_104601">();
	}
	static class APyCue_Death_104601* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Death_104601>();
	}
};
static_assert(alignof(APyCue_Death_104601) == 0x000008, "Wrong alignment on APyCue_Death_104601");
static_assert(sizeof(APyCue_Death_104601) == 0x0015B8, "Wrong size on APyCue_Death_104601");
static_assert(offsetof(APyCue_Death_104601, CurveSoulCocoonChangeCloak) == 0x001560, "Member 'APyCue_Death_104601::CurveSoulCocoonChangeCloak' has a wrong offset!");
static_assert(offsetof(APyCue_Death_104601, CloakSlotIndex) == 0x0015B0, "Member 'APyCue_Death_104601::CloakSlotIndex' has a wrong offset!");

}
