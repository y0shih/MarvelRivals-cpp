#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WebRemoteControl

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class WebRemoteControl.WebRCStructRegistry
// 0x0050 (0x0088 - 0x0038)
class UWebRCStructRegistry final : public UEngineSubsystem
{
public:
	TMap<class FName, class UScriptStruct*>       CachedStructs;                                     // 0x0038(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WebRCStructRegistry">();
	}
	static class UWebRCStructRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebRCStructRegistry>();
	}
};
static_assert(alignof(UWebRCStructRegistry) == 0x000008, "Wrong alignment on UWebRCStructRegistry");
static_assert(sizeof(UWebRCStructRegistry) == 0x000088, "Wrong size on UWebRCStructRegistry");
static_assert(offsetof(UWebRCStructRegistry, CachedStructs) == 0x000038, "Member 'UWebRCStructRegistry::CachedStructs' has a wrong offset!");

}
