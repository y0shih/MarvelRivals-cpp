#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102931

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102931.PyConfig_102931
// 0x0008 (0x00A0 - 0x0098)
class UPyConfig_102931 final : public UMarvelAbilityConfig
{
public:
	int32                                         BuffID;                                            // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102931">();
	}
	static class UPyConfig_102931* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102931>();
	}
};
static_assert(alignof(UPyConfig_102931) == 0x000008, "Wrong alignment on UPyConfig_102931");
static_assert(sizeof(UPyConfig_102931) == 0x0000A0, "Wrong size on UPyConfig_102931");
static_assert(offsetof(UPyConfig_102931, BuffID) == 0x000098, "Member 'UPyConfig_102931::BuffID' has a wrong offset!");

// PythonClass PyAbility_102931.PyAbility_102931
// 0x0000 (0x2550 - 0x2550)
class UPyAbility_102931 : public UMarvelGameplayAbility
{
public:
	void BeginPlay();
	void K2_ActivateAbility();
	void K2_OnAvatarReborn();
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102931">();
	}
	static class UPyAbility_102931* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102931>();
	}
};
static_assert(alignof(UPyAbility_102931) == 0x000008, "Wrong alignment on UPyAbility_102931");
static_assert(sizeof(UPyAbility_102931) == 0x002550, "Wrong size on UPyAbility_102931");

}
