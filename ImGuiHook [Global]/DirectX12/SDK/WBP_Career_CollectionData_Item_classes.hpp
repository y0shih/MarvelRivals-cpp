#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Career_CollectionData_Item

#include "Basic.hpp"

#include "PyWidget_CareerOverviewPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Career_CollectionData_Item.WBP_Career_CollectionData_Item_C
// 0x0030 (0x0740 - 0x0710)
class UWBP_Career_CollectionData_Item_C final : public UPyWidget_CareerOverview_DataItem
{
public:
	uint8                                         Pad_701[0x7];                                      // 0x0701(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarvelImage*                           Img_Data_Icon;                                     // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_line;                                          // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_NumLess_Icon;                                  // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Game_Data;                                 // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Data_Number;                                  // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Data_Title;                                   // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Data_Unit;                                    // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Career_CollectionData_Item_C">();
	}
	static class UWBP_Career_CollectionData_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Career_CollectionData_Item_C>();
	}
};
static_assert(alignof(UWBP_Career_CollectionData_Item_C) == 0x000010, "Wrong alignment on UWBP_Career_CollectionData_Item_C");
static_assert(sizeof(UWBP_Career_CollectionData_Item_C) == 0x000740, "Wrong size on UWBP_Career_CollectionData_Item_C");
static_assert(offsetof(UWBP_Career_CollectionData_Item_C, Img_Data_Icon) == 0x000708, "Member 'UWBP_Career_CollectionData_Item_C::Img_Data_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Career_CollectionData_Item_C, Img_line) == 0x000710, "Member 'UWBP_Career_CollectionData_Item_C::Img_line' has a wrong offset!");
static_assert(offsetof(UWBP_Career_CollectionData_Item_C, Img_NumLess_Icon) == 0x000718, "Member 'UWBP_Career_CollectionData_Item_C::Img_NumLess_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Career_CollectionData_Item_C, Overlay_Game_Data) == 0x000720, "Member 'UWBP_Career_CollectionData_Item_C::Overlay_Game_Data' has a wrong offset!");
static_assert(offsetof(UWBP_Career_CollectionData_Item_C, Text_Data_Number) == 0x000728, "Member 'UWBP_Career_CollectionData_Item_C::Text_Data_Number' has a wrong offset!");
static_assert(offsetof(UWBP_Career_CollectionData_Item_C, Text_Data_Title) == 0x000730, "Member 'UWBP_Career_CollectionData_Item_C::Text_Data_Title' has a wrong offset!");
static_assert(offsetof(UWBP_Career_CollectionData_Item_C, Text_Data_Unit) == 0x000738, "Member 'UWBP_Career_CollectionData_Item_C::Text_Data_Unit' has a wrong offset!");

}
