#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ClosePanel_Prompt

#include "Basic.hpp"

#include "PyWidget_ClosePanel_Prompt_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ClosePanel_Prompt.WBP_ClosePanel_Prompt_C
// 0x0018 (0x0600 - 0x05E8)
class UWBP_ClosePanel_Prompt_C final : public UPyWidget_ClosePanel_Prompt
{
public:
	class UWBP_Common_KeyWidget_C*                KeyWidget_Right;                                   // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_KeyWidget_C*                KeyWidget_Space;                                   // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Prompt;                                       // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ClosePanel_Prompt_C">();
	}
	static class UWBP_ClosePanel_Prompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ClosePanel_Prompt_C>();
	}
};
static_assert(alignof(UWBP_ClosePanel_Prompt_C) == 0x000008, "Wrong alignment on UWBP_ClosePanel_Prompt_C");
static_assert(sizeof(UWBP_ClosePanel_Prompt_C) == 0x000600, "Wrong size on UWBP_ClosePanel_Prompt_C");
static_assert(offsetof(UWBP_ClosePanel_Prompt_C, KeyWidget_Right) == 0x0005E8, "Member 'UWBP_ClosePanel_Prompt_C::KeyWidget_Right' has a wrong offset!");
static_assert(offsetof(UWBP_ClosePanel_Prompt_C, KeyWidget_Space) == 0x0005F0, "Member 'UWBP_ClosePanel_Prompt_C::KeyWidget_Space' has a wrong offset!");
static_assert(offsetof(UWBP_ClosePanel_Prompt_C, Text_Prompt) == 0x0005F8, "Member 'UWBP_ClosePanel_Prompt_C::Text_Prompt' has a wrong offset!");

}
