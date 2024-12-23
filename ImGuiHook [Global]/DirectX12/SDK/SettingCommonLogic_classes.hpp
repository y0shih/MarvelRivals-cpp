#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingCommonLogic

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass SettingCommonLogic.UISettingEntryCommonTriggerHandler
// 0x0008 (0x0038 - 0x0030)
class UUISettingEntryCommonTriggerHandler final : public UUISettingEntrySettingHandler
{
public:
	bool                                          Trigger_state;                                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	float BP_GetCurrentValue(class UObject* Obj, const class FString& Setting_key, const TMap<class FString, class FString>& P, const TMap<int32, class FText>& O);
	TMap<class FString, int32> BP_OnChanged(class UObject* Obj, const class FString& Setting_key, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value, const TMap<class FString, int32>& Tags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UISettingEntryCommonTriggerHandler">();
	}
	static class UUISettingEntryCommonTriggerHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUISettingEntryCommonTriggerHandler>();
	}
};
static_assert(alignof(UUISettingEntryCommonTriggerHandler) == 0x000008, "Wrong alignment on UUISettingEntryCommonTriggerHandler");
static_assert(sizeof(UUISettingEntryCommonTriggerHandler) == 0x000038, "Wrong size on UUISettingEntryCommonTriggerHandler");
static_assert(offsetof(UUISettingEntryCommonTriggerHandler, Trigger_state) == 0x000030, "Member 'UUISettingEntryCommonTriggerHandler::Trigger_state' has a wrong offset!");

}

