#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SelectHero_HeroDifficulty

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_SelectHero_HeroDifficulty.PyWidget_SelectHero_HeroDifficulty
// 0x0010 (0x05F8 - 0x05E8)
class UPyWidget_SelectHero_HeroDifficulty : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             StarEmpty;                                         // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             StarFull;                                          // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SelectHero_HeroDifficulty">();
	}
	static class UPyWidget_SelectHero_HeroDifficulty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SelectHero_HeroDifficulty>();
	}
};
static_assert(alignof(UPyWidget_SelectHero_HeroDifficulty) == 0x000008, "Wrong alignment on UPyWidget_SelectHero_HeroDifficulty");
static_assert(sizeof(UPyWidget_SelectHero_HeroDifficulty) == 0x0005F8, "Wrong size on UPyWidget_SelectHero_HeroDifficulty");
static_assert(offsetof(UPyWidget_SelectHero_HeroDifficulty, StarEmpty) == 0x0005E8, "Member 'UPyWidget_SelectHero_HeroDifficulty::StarEmpty' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_HeroDifficulty, StarFull) == 0x0005F0, "Member 'UPyWidget_SelectHero_HeroDifficulty::StarFull' has a wrong offset!");

}
