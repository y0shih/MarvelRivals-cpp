#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mall_Recommend_4Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyWidget_Mall_PageList_Row_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mall_Recommend_4Item.WBP_Mall_Recommend_4Item_C
// 0x0048 (0x0680 - 0x0638)
class UWBP_Mall_Recommend_4Item_C final : public UPyWidget_Mall_PageList_Row
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0638(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Custom_Anim_FadeIn;                                // 0x0640(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_Top;                                          // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_mask;                                          // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Skin_Item_V3_C*               Item_0;                                            // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Skin_Item_V3_C*               Item_1;                                            // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Skin_Item_V3_C*               Item_2;                                            // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Skin_Item_V3_C*               Item_3;                                            // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_SeriesTag_C*                  SeriesTag;                                         // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_Mall_Recommend_4Item(int32 EntryPoint);
	void OnListItemObjectSet(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mall_Recommend_4Item_C">();
	}
	static class UWBP_Mall_Recommend_4Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mall_Recommend_4Item_C>();
	}
};
static_assert(alignof(UWBP_Mall_Recommend_4Item_C) == 0x000008, "Wrong alignment on UWBP_Mall_Recommend_4Item_C");
static_assert(sizeof(UWBP_Mall_Recommend_4Item_C) == 0x000680, "Wrong size on UWBP_Mall_Recommend_4Item_C");
static_assert(offsetof(UWBP_Mall_Recommend_4Item_C, UberGraphFrame) == 0x000638, "Member 'UWBP_Mall_Recommend_4Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_4Item_C, Custom_Anim_FadeIn) == 0x000640, "Member 'UWBP_Mall_Recommend_4Item_C::Custom_Anim_FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_4Item_C, HBox_Top) == 0x000648, "Member 'UWBP_Mall_Recommend_4Item_C::HBox_Top' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_4Item_C, Img_mask) == 0x000650, "Member 'UWBP_Mall_Recommend_4Item_C::Img_mask' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_4Item_C, Item_0) == 0x000658, "Member 'UWBP_Mall_Recommend_4Item_C::Item_0' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_4Item_C, Item_1) == 0x000660, "Member 'UWBP_Mall_Recommend_4Item_C::Item_1' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_4Item_C, Item_2) == 0x000668, "Member 'UWBP_Mall_Recommend_4Item_C::Item_2' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_4Item_C, Item_3) == 0x000670, "Member 'UWBP_Mall_Recommend_4Item_C::Item_3' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_4Item_C, SeriesTag) == 0x000678, "Member 'UWBP_Mall_Recommend_4Item_C::SeriesTag' has a wrong offset!");

}

