#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerBtn

#include "Basic.hpp"

#include "PyLoginPanelV3_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ServerBtn.WBP_ServerBtn_C
// 0x0020 (0x0628 - 0x0608)
class UWBP_ServerBtn_C final : public UPyServerBtn
{
public:
	class UMarvelButtonBP_C*                      Btn_Main;                                          // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_collect;                                       // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Name;                                         // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 BtnTipClass;                                       // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ServerBtn_C">();
	}
	static class UWBP_ServerBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ServerBtn_C>();
	}
};
static_assert(alignof(UWBP_ServerBtn_C) == 0x000008, "Wrong alignment on UWBP_ServerBtn_C");
static_assert(sizeof(UWBP_ServerBtn_C) == 0x000628, "Wrong size on UWBP_ServerBtn_C");
static_assert(offsetof(UWBP_ServerBtn_C, Btn_Main) == 0x000608, "Member 'UWBP_ServerBtn_C::Btn_Main' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBtn_C, Img_collect) == 0x000610, "Member 'UWBP_ServerBtn_C::Img_collect' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBtn_C, Text_Name) == 0x000618, "Member 'UWBP_ServerBtn_C::Text_Name' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBtn_C, BtnTipClass) == 0x000620, "Member 'UWBP_ServerBtn_C::BtnTipClass' has a wrong offset!");

}
