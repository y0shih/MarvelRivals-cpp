#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Setting_Corona

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Setting_Corona.WBP_Setting_Corona_C
// 0x0030 (0x03E8 - 0x03B8)
class UWBP_Setting_Corona_C final : public UUserWidget
{
public:
	class UMarvelImage*                           Img_Corona_Pic4;                                   // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Corona_Pic4_Select;                            // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Corona_Pic8;                                   // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Corona_Pic8_Select;                            // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Corona_Name4;                                 // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Corona_Name8;                                 // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Setting_Corona_C">();
	}
	static class UWBP_Setting_Corona_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Setting_Corona_C>();
	}
};
static_assert(alignof(UWBP_Setting_Corona_C) == 0x000008, "Wrong alignment on UWBP_Setting_Corona_C");
static_assert(sizeof(UWBP_Setting_Corona_C) == 0x0003E8, "Wrong size on UWBP_Setting_Corona_C");
static_assert(offsetof(UWBP_Setting_Corona_C, Img_Corona_Pic4) == 0x0003B8, "Member 'UWBP_Setting_Corona_C::Img_Corona_Pic4' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Corona_C, Img_Corona_Pic4_Select) == 0x0003C0, "Member 'UWBP_Setting_Corona_C::Img_Corona_Pic4_Select' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Corona_C, Img_Corona_Pic8) == 0x0003C8, "Member 'UWBP_Setting_Corona_C::Img_Corona_Pic8' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Corona_C, Img_Corona_Pic8_Select) == 0x0003D0, "Member 'UWBP_Setting_Corona_C::Img_Corona_Pic8_Select' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Corona_C, Text_Corona_Name4) == 0x0003D8, "Member 'UWBP_Setting_Corona_C::Text_Corona_Name4' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_Corona_C, Text_Corona_Name8) == 0x0003E0, "Member 'UWBP_Setting_Corona_C::Text_Corona_Name8' has a wrong offset!");

}
