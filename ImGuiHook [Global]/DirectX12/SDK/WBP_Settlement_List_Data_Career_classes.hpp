#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settlement_List_Data_Career

#include "Basic.hpp"

#include "PyWidget_Settlement_ListData_Career_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settlement_List_Data_Career.WBP_Settlement_List_Data_Career_C
// 0x0070 (0x0680 - 0x0610)
class UWBP_Settlement_List_Data_Career_C final : public UPyWidget_Settlement_ListData_Career
{
public:
	class UMarvelButton*                          Btn_Share;                                         // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_Share;                                        // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_BottomBg;                                      // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Collection_Normal;                             // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Collection_Selected;                           // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_TopBg;                                         // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           MarvelImage_55;                                    // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_DataList;                                     // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Record_Numder;                                // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          WBP_Btn_Collection;                                // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Icon_Dark_C*            WBP_Btn_Play;                                      // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Chat_C*                     WBP_Common_Chat;                                   // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settlement_ResultInfo_Career_C*    WBP_ResultInfo;                                    // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settlement_List_Data_C*            WBP_Settlement_List_Data;                          // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settlement_List_Data_Career_C">();
	}
	static class UWBP_Settlement_List_Data_Career_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settlement_List_Data_Career_C>();
	}
};
static_assert(alignof(UWBP_Settlement_List_Data_Career_C) == 0x000008, "Wrong alignment on UWBP_Settlement_List_Data_Career_C");
static_assert(sizeof(UWBP_Settlement_List_Data_Career_C) == 0x000680, "Wrong size on UWBP_Settlement_List_Data_Career_C");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, Btn_Share) == 0x000610, "Member 'UWBP_Settlement_List_Data_Career_C::Btn_Share' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, HBox_Share) == 0x000618, "Member 'UWBP_Settlement_List_Data_Career_C::HBox_Share' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, Img_BottomBg) == 0x000620, "Member 'UWBP_Settlement_List_Data_Career_C::Img_BottomBg' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, Img_Collection_Normal) == 0x000628, "Member 'UWBP_Settlement_List_Data_Career_C::Img_Collection_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, Img_Collection_Selected) == 0x000630, "Member 'UWBP_Settlement_List_Data_Career_C::Img_Collection_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, Img_TopBg) == 0x000638, "Member 'UWBP_Settlement_List_Data_Career_C::Img_TopBg' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, MarvelImage_55) == 0x000640, "Member 'UWBP_Settlement_List_Data_Career_C::MarvelImage_55' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, Slot_DataList) == 0x000648, "Member 'UWBP_Settlement_List_Data_Career_C::Slot_DataList' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, Text_Record_Numder) == 0x000650, "Member 'UWBP_Settlement_List_Data_Career_C::Text_Record_Numder' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, WBP_Btn_Collection) == 0x000658, "Member 'UWBP_Settlement_List_Data_Career_C::WBP_Btn_Collection' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, WBP_Btn_Play) == 0x000660, "Member 'UWBP_Settlement_List_Data_Career_C::WBP_Btn_Play' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, WBP_Common_Chat) == 0x000668, "Member 'UWBP_Settlement_List_Data_Career_C::WBP_Common_Chat' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, WBP_ResultInfo) == 0x000670, "Member 'UWBP_Settlement_List_Data_Career_C::WBP_ResultInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_List_Data_Career_C, WBP_Settlement_List_Data) == 0x000678, "Member 'UWBP_Settlement_List_Data_Career_C::WBP_Settlement_List_Data' has a wrong offset!");

}
