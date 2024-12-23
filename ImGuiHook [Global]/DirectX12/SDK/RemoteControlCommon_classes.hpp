#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RemoteControlCommon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "RemoteControlCommon_structs.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class RemoteControlCommon.RCPropertyContainerBase
// 0x0028 (0x0058 - 0x0030)
class URCPropertyContainerBase final : public UObject
{
public:
	uint8                                         Pad_30[0x28];                                      // 0x0030(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RCPropertyContainerBase">();
	}
	static class URCPropertyContainerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<URCPropertyContainerBase>();
	}
};
static_assert(alignof(URCPropertyContainerBase) == 0x000008, "Wrong alignment on URCPropertyContainerBase");
static_assert(sizeof(URCPropertyContainerBase) == 0x000058, "Wrong size on URCPropertyContainerBase");

// Class RemoteControlCommon.RCPropertyContainerRegistry
// 0x0050 (0x0088 - 0x0038)
class URCPropertyContainerRegistry final : public UEngineSubsystem
{
public:
	TMap<struct FRCPropertyContainerKey, TSubclassOf<class URCPropertyContainerBase>> CachedContainerClasses;                            // 0x0038(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RCPropertyContainerRegistry">();
	}
	static class URCPropertyContainerRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<URCPropertyContainerRegistry>();
	}
};
static_assert(alignof(URCPropertyContainerRegistry) == 0x000008, "Wrong alignment on URCPropertyContainerRegistry");
static_assert(sizeof(URCPropertyContainerRegistry) == 0x000088, "Wrong size on URCPropertyContainerRegistry");
static_assert(offsetof(URCPropertyContainerRegistry, CachedContainerClasses) == 0x000038, "Member 'URCPropertyContainerRegistry::CachedContainerClasses' has a wrong offset!");

// Class RemoteControlCommon.PropertyContainerTestObject
// 0x0090 (0x00C0 - 0x0030)
class UPropertyContainerTestObject final : public UObject
{
public:
	bool                                          bSomeBool;                                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        SomeUInt32;                                        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SomeFloat;                                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SomeVector;                                        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               SomeRotator;                                       // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         SomeClampedInt;                                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SomeClampedInt2;                                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SomeUIClampedInt;                                  // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SomeClampedFloat;                                  // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SomeUIClampedFloat;                                // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SomeClampedFloat2;                                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SomeString;                                        // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   SomeText;                                          // 0x0098(0x0018)(NativeAccessSpecifierPublic)
	TArray<float>                                 SomeFloatArray;                                    // 0x00B0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyContainerTestObject">();
	}
	static class UPropertyContainerTestObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyContainerTestObject>();
	}
};
static_assert(alignof(UPropertyContainerTestObject) == 0x000008, "Wrong alignment on UPropertyContainerTestObject");
static_assert(sizeof(UPropertyContainerTestObject) == 0x0000C0, "Wrong size on UPropertyContainerTestObject");
static_assert(offsetof(UPropertyContainerTestObject, bSomeBool) == 0x000030, "Member 'UPropertyContainerTestObject::bSomeBool' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeUInt32) == 0x000034, "Member 'UPropertyContainerTestObject::SomeUInt32' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeFloat) == 0x000038, "Member 'UPropertyContainerTestObject::SomeFloat' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeVector) == 0x000040, "Member 'UPropertyContainerTestObject::SomeVector' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeRotator) == 0x000058, "Member 'UPropertyContainerTestObject::SomeRotator' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeClampedInt) == 0x000070, "Member 'UPropertyContainerTestObject::SomeClampedInt' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeClampedInt2) == 0x000074, "Member 'UPropertyContainerTestObject::SomeClampedInt2' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeUIClampedInt) == 0x000078, "Member 'UPropertyContainerTestObject::SomeUIClampedInt' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeClampedFloat) == 0x00007C, "Member 'UPropertyContainerTestObject::SomeClampedFloat' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeUIClampedFloat) == 0x000080, "Member 'UPropertyContainerTestObject::SomeUIClampedFloat' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeClampedFloat2) == 0x000084, "Member 'UPropertyContainerTestObject::SomeClampedFloat2' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeString) == 0x000088, "Member 'UPropertyContainerTestObject::SomeString' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeText) == 0x000098, "Member 'UPropertyContainerTestObject::SomeText' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeFloatArray) == 0x0000B0, "Member 'UPropertyContainerTestObject::SomeFloatArray' has a wrong offset!");

// Class RemoteControlCommon.RemoteControlSettings
// 0x00D0 (0x0118 - 0x0048)
class URemoteControlSettings final : public UDeveloperSettings
{
public:
	bool                                          bProtocolsGenerateTransactions;                    // 0x0048(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 RemoteControlWebInterfaceBindAddress;              // 0x0050(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        RemoteControlWebInterfacePort;                     // 0x0060(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceWebAppBuildAtStartup;                        // 0x0064(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWebAppLogRequestDuration;                         // 0x0065(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoStartWebServer;                               // 0x0066(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoStartWebSocketServer;                         // 0x0067(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        RemoteControlHttpServerPort;                       // 0x0068(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 RemoteControlWebsocketServerBindAddress;           // 0x0070(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        RemoteControlWebSocketServerPort;                  // 0x0080(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisplayInEditorOnlyWarnings;                      // 0x0084(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TreeBindingSplitRatio;                             // 0x0088(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseRebindingContext;                              // 0x008C(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIgnoreProtectedCheck;                             // 0x008D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIgnoreGetterSetterCheck;                          // 0x008E(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIgnoreWarnings;                                   // 0x008F(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRestrictServerAccess;                             // 0x0090(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableRemotePythonExecution;                      // 0x0091(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_92[0x6];                                       // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<struct FRCNetworkAddressRange>           AllowlistedClients;                                // 0x0098(0x0050)(Edit, Config, NativeAccessSpecifierPublic)
	class FString                                 AllowedOrigin;                                     // 0x00E8(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnforcePassphraseForRemoteClients;                // 0x00F8(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRCPassphrase>                  Passphrases;                                       // 0x0100(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                          bShowPassphraseDisabledWarning;                    // 0x0110(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSecuritySettingsReviewed;                         // 0x0111(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_112[0x6];                                      // 0x0112(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RemoteControlSettings">();
	}
	static class URemoteControlSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<URemoteControlSettings>();
	}
};
static_assert(alignof(URemoteControlSettings) == 0x000008, "Wrong alignment on URemoteControlSettings");
static_assert(sizeof(URemoteControlSettings) == 0x000118, "Wrong size on URemoteControlSettings");
static_assert(offsetof(URemoteControlSettings, bProtocolsGenerateTransactions) == 0x000048, "Member 'URemoteControlSettings::bProtocolsGenerateTransactions' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, RemoteControlWebInterfaceBindAddress) == 0x000050, "Member 'URemoteControlSettings::RemoteControlWebInterfaceBindAddress' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, RemoteControlWebInterfacePort) == 0x000060, "Member 'URemoteControlSettings::RemoteControlWebInterfacePort' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bForceWebAppBuildAtStartup) == 0x000064, "Member 'URemoteControlSettings::bForceWebAppBuildAtStartup' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bWebAppLogRequestDuration) == 0x000065, "Member 'URemoteControlSettings::bWebAppLogRequestDuration' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bAutoStartWebServer) == 0x000066, "Member 'URemoteControlSettings::bAutoStartWebServer' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bAutoStartWebSocketServer) == 0x000067, "Member 'URemoteControlSettings::bAutoStartWebSocketServer' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, RemoteControlHttpServerPort) == 0x000068, "Member 'URemoteControlSettings::RemoteControlHttpServerPort' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, RemoteControlWebsocketServerBindAddress) == 0x000070, "Member 'URemoteControlSettings::RemoteControlWebsocketServerBindAddress' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, RemoteControlWebSocketServerPort) == 0x000080, "Member 'URemoteControlSettings::RemoteControlWebSocketServerPort' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bDisplayInEditorOnlyWarnings) == 0x000084, "Member 'URemoteControlSettings::bDisplayInEditorOnlyWarnings' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, TreeBindingSplitRatio) == 0x000088, "Member 'URemoteControlSettings::TreeBindingSplitRatio' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bUseRebindingContext) == 0x00008C, "Member 'URemoteControlSettings::bUseRebindingContext' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bIgnoreProtectedCheck) == 0x00008D, "Member 'URemoteControlSettings::bIgnoreProtectedCheck' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bIgnoreGetterSetterCheck) == 0x00008E, "Member 'URemoteControlSettings::bIgnoreGetterSetterCheck' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bIgnoreWarnings) == 0x00008F, "Member 'URemoteControlSettings::bIgnoreWarnings' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bRestrictServerAccess) == 0x000090, "Member 'URemoteControlSettings::bRestrictServerAccess' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bEnableRemotePythonExecution) == 0x000091, "Member 'URemoteControlSettings::bEnableRemotePythonExecution' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, AllowlistedClients) == 0x000098, "Member 'URemoteControlSettings::AllowlistedClients' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, AllowedOrigin) == 0x0000E8, "Member 'URemoteControlSettings::AllowedOrigin' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bEnforcePassphraseForRemoteClients) == 0x0000F8, "Member 'URemoteControlSettings::bEnforcePassphraseForRemoteClients' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, Passphrases) == 0x000100, "Member 'URemoteControlSettings::Passphrases' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bShowPassphraseDisabledWarning) == 0x000110, "Member 'URemoteControlSettings::bShowPassphraseDisabledWarning' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bSecuritySettingsReviewed) == 0x000111, "Member 'URemoteControlSettings::bSecuritySettingsReviewed' has a wrong offset!");

}

