#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Common_Title

#include "Basic.hpp"

#include "PyWidget_CommonTitle_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Common_Title.WBP_Common_Title_C
// 0x0010 (0x0610 - 0x0600)
class UWBP_Common_Title_C final : public UPyWidget_CommonTitle
{
public:
	class UMarvelImage*                           Img_Mask_Bg;                                       // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Title;                                        // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Common_Title_C">();
	}
	static class UWBP_Common_Title_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Common_Title_C>();
	}
};
static_assert(alignof(UWBP_Common_Title_C) == 0x000008, "Wrong alignment on UWBP_Common_Title_C");
static_assert(sizeof(UWBP_Common_Title_C) == 0x000610, "Wrong size on UWBP_Common_Title_C");
static_assert(offsetof(UWBP_Common_Title_C, Img_Mask_Bg) == 0x000600, "Member 'UWBP_Common_Title_C::Img_Mask_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Common_Title_C, Text_Title) == 0x000608, "Member 'UWBP_Common_Title_C::Text_Title' has a wrong offset!");

}
