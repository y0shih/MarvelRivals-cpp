#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PySubtitleSettings

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// PythonClass PySubtitleSettings.PySubtitleSettings
// 0x02C0 (0x02F8 - 0x0038)
class UPySubtitleSettings final : public UPrimaryDataAsset
{
public:
	TSubclassOf<class UUserWidget>                GameSubtitleItemClass;                             // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSlateColor>                    SubtitleColors;                                    // 0x0040(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FText>                           SubtitleColorNames;                                // 0x0050(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                         MaxItemNum;                                        // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AdjacentLineInterval;                              // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SingleVoicelineLifespan;                           // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SilenceTimeBeforeDisappear;                        // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         VoicelineFont;                                     // 0x0070(0x0068)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         NakataFont;                                        // 0x00D8(0x0068)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         MapFont;                                           // 0x0140(0x0068)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         AllyFont;                                          // 0x01A8(0x0068)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         EnemyFont;                                         // 0x0210(0x0068)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontSizeBig;                                       // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontSizeMedium;                                    // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontSizeSmall;                                     // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontSizeBigTopPadding;                             // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontSizeMediumTopPadding;                          // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontSizeSmallTopPadding;                           // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontSizeBigBottomPadding;                          // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontSizeMediumBottomPadding;                       // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontSizeSmallgBottomPadding;                       // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BackgroundOpacityHeavy;                            // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BackgroundOpacityMedium;                           // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BackgroundOpacityLight;                            // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            FontColorNakata;                                   // 0x02A8(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            FontColorAlly;                                     // 0x02BC(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            FontColorEnemy;                                    // 0x02D0(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            FontColorMap;                                      // 0x02E4(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySubtitleSettings">();
	}
	static class UPySubtitleSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySubtitleSettings>();
	}
};
static_assert(alignof(UPySubtitleSettings) == 0x000008, "Wrong alignment on UPySubtitleSettings");
static_assert(sizeof(UPySubtitleSettings) == 0x0002F8, "Wrong size on UPySubtitleSettings");
static_assert(offsetof(UPySubtitleSettings, GameSubtitleItemClass) == 0x000038, "Member 'UPySubtitleSettings::GameSubtitleItemClass' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, SubtitleColors) == 0x000040, "Member 'UPySubtitleSettings::SubtitleColors' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, SubtitleColorNames) == 0x000050, "Member 'UPySubtitleSettings::SubtitleColorNames' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, MaxItemNum) == 0x000060, "Member 'UPySubtitleSettings::MaxItemNum' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, AdjacentLineInterval) == 0x000064, "Member 'UPySubtitleSettings::AdjacentLineInterval' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, SingleVoicelineLifespan) == 0x000068, "Member 'UPySubtitleSettings::SingleVoicelineLifespan' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, SilenceTimeBeforeDisappear) == 0x00006C, "Member 'UPySubtitleSettings::SilenceTimeBeforeDisappear' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, VoicelineFont) == 0x000070, "Member 'UPySubtitleSettings::VoicelineFont' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, NakataFont) == 0x0000D8, "Member 'UPySubtitleSettings::NakataFont' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, MapFont) == 0x000140, "Member 'UPySubtitleSettings::MapFont' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, AllyFont) == 0x0001A8, "Member 'UPySubtitleSettings::AllyFont' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, EnemyFont) == 0x000210, "Member 'UPySubtitleSettings::EnemyFont' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, FontSizeBig) == 0x000278, "Member 'UPySubtitleSettings::FontSizeBig' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, FontSizeMedium) == 0x00027C, "Member 'UPySubtitleSettings::FontSizeMedium' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, FontSizeSmall) == 0x000280, "Member 'UPySubtitleSettings::FontSizeSmall' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, FontSizeBigTopPadding) == 0x000284, "Member 'UPySubtitleSettings::FontSizeBigTopPadding' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, FontSizeMediumTopPadding) == 0x000288, "Member 'UPySubtitleSettings::FontSizeMediumTopPadding' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, FontSizeSmallTopPadding) == 0x00028C, "Member 'UPySubtitleSettings::FontSizeSmallTopPadding' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, FontSizeBigBottomPadding) == 0x000290, "Member 'UPySubtitleSettings::FontSizeBigBottomPadding' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, FontSizeMediumBottomPadding) == 0x000294, "Member 'UPySubtitleSettings::FontSizeMediumBottomPadding' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, FontSizeSmallgBottomPadding) == 0x000298, "Member 'UPySubtitleSettings::FontSizeSmallgBottomPadding' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, BackgroundOpacityHeavy) == 0x00029C, "Member 'UPySubtitleSettings::BackgroundOpacityHeavy' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, BackgroundOpacityMedium) == 0x0002A0, "Member 'UPySubtitleSettings::BackgroundOpacityMedium' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, BackgroundOpacityLight) == 0x0002A4, "Member 'UPySubtitleSettings::BackgroundOpacityLight' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, FontColorNakata) == 0x0002A8, "Member 'UPySubtitleSettings::FontColorNakata' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, FontColorAlly) == 0x0002BC, "Member 'UPySubtitleSettings::FontColorAlly' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, FontColorEnemy) == 0x0002D0, "Member 'UPySubtitleSettings::FontColorEnemy' has a wrong offset!");
static_assert(offsetof(UPySubtitleSettings, FontColorMap) == 0x0002E4, "Member 'UPySubtitleSettings::FontColorMap' has a wrong offset!");

}
