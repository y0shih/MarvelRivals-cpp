#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelGroupMoveComponent

#include "Basic.hpp"

#include "PyLevelActorMoveComponent_classes.hpp"


namespace SDK
{

// PythonClass PyLevelGroupMoveComponent.PyLevelGroupMoveComponent
// 0x0000 (0x05F0 - 0x05F0)
class UPyLevelGroupMoveComponent final : public UPyLevelActorMoveComponent
{
public:
	bool                                          IsRotation;                                        // 0x05E8(0x0001)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsInitRotation;                                    // 0x05E9(0x0001)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5EA[0x2];                                      // 0x05EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DeltaDegree;                                       // 0x05EC(0x0004)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnRep_CurProgress();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelGroupMoveComponent">();
	}
	static class UPyLevelGroupMoveComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyLevelGroupMoveComponent>();
	}
};
static_assert(alignof(UPyLevelGroupMoveComponent) == 0x000010, "Wrong alignment on UPyLevelGroupMoveComponent");
static_assert(sizeof(UPyLevelGroupMoveComponent) == 0x0005F0, "Wrong size on UPyLevelGroupMoveComponent");
static_assert(offsetof(UPyLevelGroupMoveComponent, IsRotation) == 0x0005E8, "Member 'UPyLevelGroupMoveComponent::IsRotation' has a wrong offset!");
static_assert(offsetof(UPyLevelGroupMoveComponent, IsInitRotation) == 0x0005E9, "Member 'UPyLevelGroupMoveComponent::IsInitRotation' has a wrong offset!");
static_assert(offsetof(UPyLevelGroupMoveComponent, DeltaDegree) == 0x0005EC, "Member 'UPyLevelGroupMoveComponent::DeltaDegree' has a wrong offset!");

}
