#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMarvelAudioAdmin

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyMarvelAudioAdmin.PyMarvelAudioAdmin
// 0x0018 (0x0158 - 0x0140)
class UPyMarvelAudioAdmin : public UMarvelAudioAdmin
{
public:
	class FText                                   OutputDeviceChangeInfo;                            // 0x0140(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	void K2_Init();
	void K2_DeInit();
	void OnGetSoundOutputDeviceName(const class FString& DeviceName);
	void RefreshSoundOutputDevice();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyMarvelAudioAdmin">();
	}
	static class UPyMarvelAudioAdmin* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyMarvelAudioAdmin>();
	}
};
static_assert(alignof(UPyMarvelAudioAdmin) == 0x000008, "Wrong alignment on UPyMarvelAudioAdmin");
static_assert(sizeof(UPyMarvelAudioAdmin) == 0x000158, "Wrong size on UPyMarvelAudioAdmin");
static_assert(offsetof(UPyMarvelAudioAdmin, OutputDeviceChangeInfo) == 0x000140, "Member 'UPyMarvelAudioAdmin::OutputDeviceChangeInfo' has a wrong offset!");

}
