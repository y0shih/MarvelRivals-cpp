#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaIOCore

#include "Basic.hpp"

#include "ImageWriteQueue_structs.hpp"
#include "MediaIOCore_structs.hpp"
#include "OpenColorIO_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MediaAssets_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MediaIOCore.CaptureCardMediaSource
// 0x00B0 (0x0160 - 0x00B0)
class UCaptureCardMediaSource final : public UTimeSynchronizableMediaSource
{
public:
	bool                                          bRenderJIT;                                        // 0x00B0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFramelock;                                        // 0x00B1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMediaIOSampleEvaluationType                  EvaluationType;                                    // 0x00B2(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B3[0x5];                                       // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UVideoDeinterlacer*                     Deinterlacer;                                      // 0x00B8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMediaIOInterlaceFieldOrder                   InterlaceFieldOrder;                               // 0x00C0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideSourceEncoding;                           // 0x00C1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMediaIOCoreSourceEncoding                    OverrideSourceEncoding;                            // 0x00C2(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideSourceColorSpace;                         // 0x00C3(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureColorSpace                            OverrideSourceColorSpace;                          // 0x00C4(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOpenColorIOColorConversionSettings    ColorConversionSettings;                           // 0x00C8(0x0098)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CaptureCardMediaSource">();
	}
	static class UCaptureCardMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCaptureCardMediaSource>();
	}
};
static_assert(alignof(UCaptureCardMediaSource) == 0x000008, "Wrong alignment on UCaptureCardMediaSource");
static_assert(sizeof(UCaptureCardMediaSource) == 0x000160, "Wrong size on UCaptureCardMediaSource");
static_assert(offsetof(UCaptureCardMediaSource, bRenderJIT) == 0x0000B0, "Member 'UCaptureCardMediaSource::bRenderJIT' has a wrong offset!");
static_assert(offsetof(UCaptureCardMediaSource, bFramelock) == 0x0000B1, "Member 'UCaptureCardMediaSource::bFramelock' has a wrong offset!");
static_assert(offsetof(UCaptureCardMediaSource, EvaluationType) == 0x0000B2, "Member 'UCaptureCardMediaSource::EvaluationType' has a wrong offset!");
static_assert(offsetof(UCaptureCardMediaSource, Deinterlacer) == 0x0000B8, "Member 'UCaptureCardMediaSource::Deinterlacer' has a wrong offset!");
static_assert(offsetof(UCaptureCardMediaSource, InterlaceFieldOrder) == 0x0000C0, "Member 'UCaptureCardMediaSource::InterlaceFieldOrder' has a wrong offset!");
static_assert(offsetof(UCaptureCardMediaSource, bOverrideSourceEncoding) == 0x0000C1, "Member 'UCaptureCardMediaSource::bOverrideSourceEncoding' has a wrong offset!");
static_assert(offsetof(UCaptureCardMediaSource, OverrideSourceEncoding) == 0x0000C2, "Member 'UCaptureCardMediaSource::OverrideSourceEncoding' has a wrong offset!");
static_assert(offsetof(UCaptureCardMediaSource, bOverrideSourceColorSpace) == 0x0000C3, "Member 'UCaptureCardMediaSource::bOverrideSourceColorSpace' has a wrong offset!");
static_assert(offsetof(UCaptureCardMediaSource, OverrideSourceColorSpace) == 0x0000C4, "Member 'UCaptureCardMediaSource::OverrideSourceColorSpace' has a wrong offset!");
static_assert(offsetof(UCaptureCardMediaSource, ColorConversionSettings) == 0x0000C8, "Member 'UCaptureCardMediaSource::ColorConversionSettings' has a wrong offset!");

// Class MediaIOCore.VideoDeinterlacer
// 0x0000 (0x0030 - 0x0030)
class UVideoDeinterlacer : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VideoDeinterlacer">();
	}
	static class UVideoDeinterlacer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVideoDeinterlacer>();
	}
};
static_assert(alignof(UVideoDeinterlacer) == 0x000008, "Wrong alignment on UVideoDeinterlacer");
static_assert(sizeof(UVideoDeinterlacer) == 0x000030, "Wrong size on UVideoDeinterlacer");

// Class MediaIOCore.BobDeinterlacer
// 0x0000 (0x0030 - 0x0030)
class UBobDeinterlacer final : public UVideoDeinterlacer
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BobDeinterlacer">();
	}
	static class UBobDeinterlacer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBobDeinterlacer>();
	}
};
static_assert(alignof(UBobDeinterlacer) == 0x000008, "Wrong alignment on UBobDeinterlacer");
static_assert(sizeof(UBobDeinterlacer) == 0x000030, "Wrong size on UBobDeinterlacer");

// Class MediaIOCore.BlendDeinterlacer
// 0x0000 (0x0030 - 0x0030)
class UBlendDeinterlacer final : public UVideoDeinterlacer
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlendDeinterlacer">();
	}
	static class UBlendDeinterlacer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlendDeinterlacer>();
	}
};
static_assert(alignof(UBlendDeinterlacer) == 0x000008, "Wrong alignment on UBlendDeinterlacer");
static_assert(sizeof(UBlendDeinterlacer) == 0x000030, "Wrong size on UBlendDeinterlacer");

// Class MediaIOCore.DiscardDeinterlacer
// 0x0000 (0x0030 - 0x0030)
class UDiscardDeinterlacer final : public UVideoDeinterlacer
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DiscardDeinterlacer">();
	}
	static class UDiscardDeinterlacer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDiscardDeinterlacer>();
	}
};
static_assert(alignof(UDiscardDeinterlacer) == 0x000008, "Wrong alignment on UDiscardDeinterlacer");
static_assert(sizeof(UDiscardDeinterlacer) == 0x000030, "Wrong size on UDiscardDeinterlacer");

// Class MediaIOCore.MediaCapture
// 0x0278 (0x02A8 - 0x0030)
class UMediaCapture : public UObject
{
public:
	FMulticastInlineDelegateProperty_             OnStateChanged;                                    // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_40[0x28];                                      // 0x0040(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaOutput*                           MediaOutput;                                       // 0x0068(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_70[0x238];                                     // 0x0070(0x0238)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions);
	bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions);
	void SetMediaOutput(class UMediaOutput* InMediaOutput);
	void StopCapture(bool bAllowPendingFrameToBeProcess);
	bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget);

	EPixelFormat GetDesiredPixelFormat() const;
	struct FIntPoint GetDesiredSize() const;
	EMediaCaptureState GetState() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaCapture">();
	}
	static class UMediaCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaCapture>();
	}
};
static_assert(alignof(UMediaCapture) == 0x000008, "Wrong alignment on UMediaCapture");
static_assert(sizeof(UMediaCapture) == 0x0002A8, "Wrong size on UMediaCapture");
static_assert(offsetof(UMediaCapture, OnStateChanged) == 0x000030, "Member 'UMediaCapture::OnStateChanged' has a wrong offset!");
static_assert(offsetof(UMediaCapture, MediaOutput) == 0x000068, "Member 'UMediaCapture::MediaOutput' has a wrong offset!");

// Class MediaIOCore.FileMediaCapture
// 0x0068 (0x0310 - 0x02A8)
class UFileMediaCapture final : public UMediaCapture
{
public:
	uint8                                         Pad_2A8[0x68];                                     // 0x02A8(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FileMediaCapture">();
	}
	static class UFileMediaCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFileMediaCapture>();
	}
};
static_assert(alignof(UFileMediaCapture) == 0x000008, "Wrong alignment on UFileMediaCapture");
static_assert(sizeof(UFileMediaCapture) == 0x000310, "Wrong size on UFileMediaCapture");

// Class MediaIOCore.MediaOutput
// 0x0008 (0x0038 - 0x0030)
class UMediaOutput : public UObject
{
public:
	int32                                         NumberOfTextureBuffers;                            // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UMediaCapture* CreateMediaCapture();

	bool Validate(class FString* OutFailureReason) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaOutput">();
	}
	static class UMediaOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaOutput>();
	}
};
static_assert(alignof(UMediaOutput) == 0x000008, "Wrong alignment on UMediaOutput");
static_assert(sizeof(UMediaOutput) == 0x000038, "Wrong size on UMediaOutput");
static_assert(offsetof(UMediaOutput, NumberOfTextureBuffers) == 0x000030, "Member 'UMediaOutput::NumberOfTextureBuffers' has a wrong offset!");

// Class MediaIOCore.FileMediaOutput
// 0x00A8 (0x00E0 - 0x0038)
class UFileMediaOutput final : public UMediaOutput
{
public:
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FImageWriteOptions                     WriteOptions;                                      // 0x0040(0x0060)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FDirectoryPath                         FilePath;                                          // 0x00A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 BaseFileName;                                      // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideDesiredSize;                              // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntPoint                              DesiredSize;                                       // 0x00C4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverridePixelFormat;                              // 0x00CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EFileMediaOutputPixelFormat                   DesiredPixelFormat;                                // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInvertAlpha;                                      // 0x00D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D5[0xB];                                       // 0x00D5(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FileMediaOutput">();
	}
	static class UFileMediaOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFileMediaOutput>();
	}
};
static_assert(alignof(UFileMediaOutput) == 0x000010, "Wrong alignment on UFileMediaOutput");
static_assert(sizeof(UFileMediaOutput) == 0x0000E0, "Wrong size on UFileMediaOutput");
static_assert(offsetof(UFileMediaOutput, WriteOptions) == 0x000040, "Member 'UFileMediaOutput::WriteOptions' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, FilePath) == 0x0000A0, "Member 'UFileMediaOutput::FilePath' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, BaseFileName) == 0x0000B0, "Member 'UFileMediaOutput::BaseFileName' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, bOverrideDesiredSize) == 0x0000C0, "Member 'UFileMediaOutput::bOverrideDesiredSize' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, DesiredSize) == 0x0000C4, "Member 'UFileMediaOutput::DesiredSize' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, bOverridePixelFormat) == 0x0000CC, "Member 'UFileMediaOutput::bOverridePixelFormat' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, DesiredPixelFormat) == 0x0000D0, "Member 'UFileMediaOutput::DesiredPixelFormat' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, bInvertAlpha) == 0x0000D4, "Member 'UFileMediaOutput::bInvertAlpha' has a wrong offset!");

// Class MediaIOCore.MediaIOCoreSubsystem
// 0x0078 (0x00B0 - 0x0038)
class UMediaIOCoreSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_38[0x78];                                      // 0x0038(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaIOCoreSubsystem">();
	}
	static class UMediaIOCoreSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaIOCoreSubsystem>();
	}
};
static_assert(alignof(UMediaIOCoreSubsystem) == 0x000008, "Wrong alignment on UMediaIOCoreSubsystem");
static_assert(sizeof(UMediaIOCoreSubsystem) == 0x0000B0, "Wrong size on UMediaIOCoreSubsystem");

}
