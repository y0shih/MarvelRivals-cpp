#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102252

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102252.PyConfig_102252
// 0x0018 (0x00B0 - 0x0098)
class UPyConfig_102252 final : public UMarvelAbilityConfig
{
public:
	float                                         JumpForwardSpeed;                                  // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JumpUpSpeed;                                       // 0x009C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           SpJumpCueTag;                                      // 0x00A0(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102252">();
	}
	static class UPyConfig_102252* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102252>();
	}
};
static_assert(alignof(UPyConfig_102252) == 0x000008, "Wrong alignment on UPyConfig_102252");
static_assert(sizeof(UPyConfig_102252) == 0x0000B0, "Wrong size on UPyConfig_102252");
static_assert(offsetof(UPyConfig_102252, JumpForwardSpeed) == 0x000098, "Member 'UPyConfig_102252::JumpForwardSpeed' has a wrong offset!");
static_assert(offsetof(UPyConfig_102252, JumpUpSpeed) == 0x00009C, "Member 'UPyConfig_102252::JumpUpSpeed' has a wrong offset!");
static_assert(offsetof(UPyConfig_102252, SpJumpCueTag) == 0x0000A0, "Member 'UPyConfig_102252::SpJumpCueTag' has a wrong offset!");

// PythonClass PyAbility_102252.PyAbility_102252
// 0x0000 (0x2550 - 0x2550)
class UPyAbility_102252 : public UMarvelGameplayAbility
{
public:
	void BeginPlay();
	bool CanActivate();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnOwnerLand(const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102252">();
	}
	static class UPyAbility_102252* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102252>();
	}
};
static_assert(alignof(UPyAbility_102252) == 0x000008, "Wrong alignment on UPyAbility_102252");
static_assert(sizeof(UPyAbility_102252) == 0x002550, "Wrong size on UPyAbility_102252");

}
