#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChatOut_ItemText

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ChatOut_ItemText.WBP_ChatOut_ItemText_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_ChatOut_ItemText_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ChatOut_ItemText_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_ChatOut_ItemText_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_ChatOut_ItemText_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_ChatOut_ItemText_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_ChatOut_ItemText_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_ChatOut_ItemText_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_ChatOut_ItemText.WBP_ChatOut_ItemText_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_ChatOut_ItemText_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ChatOut_ItemText_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_ChatOut_ItemText_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_ChatOut_ItemText_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_ChatOut_ItemText_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_ChatOut_ItemText_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_ChatOut_ItemText_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_ChatOut_ItemText.WBP_ChatOut_ItemText_C.ExecuteUbergraph_WBP_ChatOut_ItemText
// 0x0008 (0x0008 - 0x0000)
struct WBP_ChatOut_ItemText_C_ExecuteUbergraph_WBP_ChatOut_ItemText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ChatOut_ItemText_C_ExecuteUbergraph_WBP_ChatOut_ItemText) == 0x000004, "Wrong alignment on WBP_ChatOut_ItemText_C_ExecuteUbergraph_WBP_ChatOut_ItemText");
static_assert(sizeof(WBP_ChatOut_ItemText_C_ExecuteUbergraph_WBP_ChatOut_ItemText) == 0x000008, "Wrong size on WBP_ChatOut_ItemText_C_ExecuteUbergraph_WBP_ChatOut_ItemText");
static_assert(offsetof(WBP_ChatOut_ItemText_C_ExecuteUbergraph_WBP_ChatOut_ItemText, EntryPoint) == 0x000000, "Member 'WBP_ChatOut_ItemText_C_ExecuteUbergraph_WBP_ChatOut_ItemText::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ChatOut_ItemText_C_ExecuteUbergraph_WBP_ChatOut_ItemText, K2Node_Event_bIsSelected) == 0x000004, "Member 'WBP_ChatOut_ItemText_C_ExecuteUbergraph_WBP_ChatOut_ItemText::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_ChatOut_ItemText_C_ExecuteUbergraph_WBP_ChatOut_ItemText, K2Node_Event_bIsExpanded) == 0x000005, "Member 'WBP_ChatOut_ItemText_C_ExecuteUbergraph_WBP_ChatOut_ItemText::K2Node_Event_bIsExpanded' has a wrong offset!");

}
