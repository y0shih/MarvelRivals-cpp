#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_AbilityTarget

#include "Basic.hpp"

#include "Marvel_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_AbilityTarget.PyWidget_AbilityTarget
// 0x0020 (0x08A0 - 0x0880)
class UPyWidget_AbilityTarget : public UWidget_AbilityTarget
{
public:
	struct FLinearColor                           Color_Default;                                     // 0x0880(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color_Enemy;                                       // 0x0890(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void AddTip(const int32 InTipID, const struct FUIActionData& InActionData);
	void RemoveTip(const int32 InTipID);
	int32 GetTipsNum();
	void Reset();
	void SetIsEnemy(bool bIsEnemy);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_AbilityTarget">();
	}
	static class UPyWidget_AbilityTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_AbilityTarget>();
	}
};
static_assert(alignof(UPyWidget_AbilityTarget) == 0x000010, "Wrong alignment on UPyWidget_AbilityTarget");
static_assert(sizeof(UPyWidget_AbilityTarget) == 0x0008A0, "Wrong size on UPyWidget_AbilityTarget");
static_assert(offsetof(UPyWidget_AbilityTarget, Color_Default) == 0x000880, "Member 'UPyWidget_AbilityTarget::Color_Default' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityTarget, Color_Enemy) == 0x000890, "Member 'UPyWidget_AbilityTarget::Color_Enemy' has a wrong offset!");

}
