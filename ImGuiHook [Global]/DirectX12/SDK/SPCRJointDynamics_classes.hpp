#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SPCRJointDynamics

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class SPCRJointDynamics.SPCRJointDynamicsComponent
// 0x0008 (0x00F8 - 0x00F0)
class USPCRJointDynamicsComponent final : public UActorComponent
{
public:
	bool                                          IsReset;                                           // 0x00F0(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SPCRJointDynamicsComponent">();
	}
	static class USPCRJointDynamicsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USPCRJointDynamicsComponent>();
	}
};
static_assert(alignof(USPCRJointDynamicsComponent) == 0x000008, "Wrong alignment on USPCRJointDynamicsComponent");
static_assert(sizeof(USPCRJointDynamicsComponent) == 0x0000F8, "Wrong size on USPCRJointDynamicsComponent");
static_assert(offsetof(USPCRJointDynamicsComponent, IsReset) == 0x0000F0, "Member 'USPCRJointDynamicsComponent::IsReset' has a wrong offset!");

// Class SPCRJointDynamics.SPCRJointDynamicsMngComponent
// 0x0010 (0x0100 - 0x00F0)
class USPCRJointDynamicsMngComponent final : public UActorComponent
{
public:
	uint8                                         Pad_F0[0x10];                                      // 0x00F0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnReset();
	void SetActors();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SPCRJointDynamicsMngComponent">();
	}
	static class USPCRJointDynamicsMngComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USPCRJointDynamicsMngComponent>();
	}
};
static_assert(alignof(USPCRJointDynamicsMngComponent) == 0x000008, "Wrong alignment on USPCRJointDynamicsMngComponent");
static_assert(sizeof(USPCRJointDynamicsMngComponent) == 0x000100, "Wrong size on USPCRJointDynamicsMngComponent");

// Class SPCRJointDynamics.SPCRJointDynamicsRuntimeSettings
// 0x0000 (0x0030 - 0x0030)
class USPCRJointDynamicsRuntimeSettings final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SPCRJointDynamicsRuntimeSettings">();
	}
	static class USPCRJointDynamicsRuntimeSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USPCRJointDynamicsRuntimeSettings>();
	}
};
static_assert(alignof(USPCRJointDynamicsRuntimeSettings) == 0x000008, "Wrong alignment on USPCRJointDynamicsRuntimeSettings");
static_assert(sizeof(USPCRJointDynamicsRuntimeSettings) == 0x000030, "Wrong size on USPCRJointDynamicsRuntimeSettings");

// Class SPCRJointDynamics.SPCRJointDynamicsStaticFunctions
// 0x0000 (0x0030 - 0x0030)
class USPCRJointDynamicsStaticFunctions final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SPCRJointDynamicsStaticFunctions">();
	}
	static class USPCRJointDynamicsStaticFunctions* GetDefaultObj()
	{
		return GetDefaultObjImpl<USPCRJointDynamicsStaticFunctions>();
	}
};
static_assert(alignof(USPCRJointDynamicsStaticFunctions) == 0x000008, "Wrong alignment on USPCRJointDynamicsStaticFunctions");
static_assert(sizeof(USPCRJointDynamicsStaticFunctions) == 0x000030, "Wrong size on USPCRJointDynamicsStaticFunctions");

}
