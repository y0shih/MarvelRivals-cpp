#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TeamUp_ListItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_TeamUp_ListItem.WBP_TeamUp_ListItem_C.ExecuteUbergraph_WBP_TeamUp_ListItem
// 0x0060 (0x0060 - 0x0000)
struct WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 K2Node_CustomEvent_Image;                          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Role;                           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEmpty;                        // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	float                                         CallFunc_SetOpacity_InOpacity_ImplicitCast;        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem) == 0x000008, "Wrong alignment on WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem");
static_assert(sizeof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem) == 0x000060, "Wrong size on WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem");
static_assert(offsetof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem, EntryPoint) == 0x000000, "Member 'WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem, Temp_int_Variable) == 0x000004, "Member 'WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem, Temp_object_Variable) == 0x000008, "Member 'WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem, Temp_object_Variable_1) == 0x000010, "Member 'WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem, Temp_object_Variable_2) == 0x000018, "Member 'WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem, Temp_object_Variable_3) == 0x000020, "Member 'WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem, K2Node_CustomEvent_Image) == 0x000028, "Member 'WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem::K2Node_CustomEvent_Image' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem, K2Node_CustomEvent_Role) == 0x000030, "Member 'WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem::K2Node_CustomEvent_Role' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem, K2Node_CustomEvent_IsEmpty) == 0x000034, "Member 'WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem::K2Node_CustomEvent_IsEmpty' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem, CallFunc_SelectFloat_ReturnValue) == 0x000038, "Member 'WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem, K2Node_Select_Default) == 0x000040, "Member 'WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem, K2Node_MakeArray_Array) == 0x000048, "Member 'WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem, CallFunc_SetOpacity_InOpacity_ImplicitCast) == 0x000058, "Member 'WBP_TeamUp_ListItem_C_ExecuteUbergraph_WBP_TeamUp_ListItem::CallFunc_SetOpacity_InOpacity_ImplicitCast' has a wrong offset!");

// Function WBP_TeamUp_ListItem.WBP_TeamUp_ListItem_C.SetRoles
// 0x0010 (0x0010 - 0x0000)
struct WBP_TeamUp_ListItem_C_SetRoles final
{
public:
	class UImage*                                 Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Role;                                              // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEmpty;                                           // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TeamUp_ListItem_C_SetRoles) == 0x000008, "Wrong alignment on WBP_TeamUp_ListItem_C_SetRoles");
static_assert(sizeof(WBP_TeamUp_ListItem_C_SetRoles) == 0x000010, "Wrong size on WBP_TeamUp_ListItem_C_SetRoles");
static_assert(offsetof(WBP_TeamUp_ListItem_C_SetRoles, Image) == 0x000000, "Member 'WBP_TeamUp_ListItem_C_SetRoles::Image' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_SetRoles, Role) == 0x000008, "Member 'WBP_TeamUp_ListItem_C_SetRoles::Role' has a wrong offset!");
static_assert(offsetof(WBP_TeamUp_ListItem_C_SetRoles, IsEmpty) == 0x00000C, "Member 'WBP_TeamUp_ListItem_C_SetRoles::IsEmpty' has a wrong offset!");

}
