#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102431

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102431.PyConfig_102431
// 0x0008 (0x00D0 - 0x00C8)
class UPyConfig_102431 final : public UConfig_106
{
public:
	int32                                         ReloadAmmoAbilityID;                               // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnAmmoWhenCritHit;                             // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102431">();
	}
	static class UPyConfig_102431* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102431>();
	}
};
static_assert(alignof(UPyConfig_102431) == 0x000008, "Wrong alignment on UPyConfig_102431");
static_assert(sizeof(UPyConfig_102431) == 0x0000D0, "Wrong size on UPyConfig_102431");
static_assert(offsetof(UPyConfig_102431, ReloadAmmoAbilityID) == 0x0000C8, "Member 'UPyConfig_102431::ReloadAmmoAbilityID' has a wrong offset!");
static_assert(offsetof(UPyConfig_102431, ReturnAmmoWhenCritHit) == 0x0000CC, "Member 'UPyConfig_102431::ReturnAmmoWhenCritHit' has a wrong offset!");

// PythonClass PyAbility_102431.PyAbility_102431
// 0x0000 (0x2668 - 0x2668)
class UPyAbility_102431 : public UAbility_106
{
public:
	void BeginPlay();
	void OnAbilityApplyDamage(class AActor* InSourceAvatar, class AActor* InTargetAvatar, const struct FAttributeModifierHandle& ParameterHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102431">();
	}
	static class UPyAbility_102431* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102431>();
	}
};
static_assert(alignof(UPyAbility_102431) == 0x000008, "Wrong alignment on UPyAbility_102431");
static_assert(sizeof(UPyAbility_102431) == 0x002668, "Wrong size on UPyAbility_102431");

}
