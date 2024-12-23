#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImgMedia

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MediaAssets_classes.hpp"


namespace SDK
{

// Class ImgMedia.ImgMediaSource
// 0x0048 (0x00E0 - 0x0098)
class UImgMediaSource final : public UBaseMediaSource
{
public:
	bool                                          IsPathRelativeToProjectRoot;                       // 0x0098(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameRate                             FrameRateOverride;                                 // 0x009C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ProxyOverride;                                     // 0x00A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFillGapsInSequence;                               // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDirectoryPath                         SequencePath;                                      // 0x00C0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_D0[0x10];                                      // 0x00D0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddGlobalCamera(class AActor* InActor);
	void AddTargetObject(class AActor* InActor);
	void RemoveGlobalCamera(class AActor* InActor);
	void RemoveTargetObject(class AActor* InActor);
	void SetMipLevelDistance(float Distance);
	void SetSequencePath(const class FString& Path);
	void SetTokenizedSequencePath(const class FString& Path);

	void GetProxies(TArray<class FString>* OutProxies) const;
	const class FString GetSequencePath() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImgMediaSource">();
	}
	static class UImgMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImgMediaSource>();
	}
};
static_assert(alignof(UImgMediaSource) == 0x000008, "Wrong alignment on UImgMediaSource");
static_assert(sizeof(UImgMediaSource) == 0x0000E0, "Wrong size on UImgMediaSource");
static_assert(offsetof(UImgMediaSource, IsPathRelativeToProjectRoot) == 0x000098, "Member 'UImgMediaSource::IsPathRelativeToProjectRoot' has a wrong offset!");
static_assert(offsetof(UImgMediaSource, FrameRateOverride) == 0x00009C, "Member 'UImgMediaSource::FrameRateOverride' has a wrong offset!");
static_assert(offsetof(UImgMediaSource, ProxyOverride) == 0x0000A8, "Member 'UImgMediaSource::ProxyOverride' has a wrong offset!");
static_assert(offsetof(UImgMediaSource, bFillGapsInSequence) == 0x0000B8, "Member 'UImgMediaSource::bFillGapsInSequence' has a wrong offset!");
static_assert(offsetof(UImgMediaSource, SequencePath) == 0x0000C0, "Member 'UImgMediaSource::SequencePath' has a wrong offset!");

}

