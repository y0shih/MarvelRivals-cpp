#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103361

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103361.PyAbility_103361
// 0x0008 (0x2558 - 0x2550)
class UPyAbility_103361 : public UMarvelGameplayAbility
{
public:
	bool                                          IsAmmoReady;                                       // 0x2550(0x0001)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OpenDetectionState;                                // 0x2551(0x0001)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool CanActivate();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnUserCancelInputPressed(float TimeWaited);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103361">();
	}
	static class UPyAbility_103361* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103361>();
	}
};
static_assert(alignof(UPyAbility_103361) == 0x000008, "Wrong alignment on UPyAbility_103361");
static_assert(sizeof(UPyAbility_103361) == 0x002558, "Wrong size on UPyAbility_103361");
static_assert(offsetof(UPyAbility_103361, IsAmmoReady) == 0x002550, "Member 'UPyAbility_103361::IsAmmoReady' has a wrong offset!");
static_assert(offsetof(UPyAbility_103361, OpenDetectionState) == 0x002551, "Member 'UPyAbility_103361::OpenDetectionState' has a wrong offset!");

}
