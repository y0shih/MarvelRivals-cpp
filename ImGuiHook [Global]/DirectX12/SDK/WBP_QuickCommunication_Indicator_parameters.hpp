#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QuickCommunication_Indicator

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_QuickCommunication_Indicator.WBP_QuickCommunication_Indicator_C.ExecuteUbergraph_WBP_QuickCommunication_Indicator
// 0x0028 (0x0028 - 0x0000)
struct WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Arrow_C*                           K2Node_DynamicCast_AsWBP_Arrow;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlayingForward_ReturnValue;    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0018(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator) == 0x000008, "Wrong alignment on WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator");
static_assert(sizeof(WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator) == 0x000028, "Wrong size on WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator");
static_assert(offsetof(WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator, EntryPoint) == 0x000000, "Member 'WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator, K2Node_DynamicCast_AsWBP_Arrow) == 0x000008, "Member 'WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator::K2Node_DynamicCast_AsWBP_Arrow' has a wrong offset!");
static_assert(offsetof(WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator, CallFunc_IsAnimationPlayingForward_ReturnValue) == 0x000011, "Member 'WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator::CallFunc_IsAnimationPlayingForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator, K2Node_Event_Animation) == 0x000018, "Member 'WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator, CallFunc_GetVisibility_ReturnValue) == 0x000020, "Member 'WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator, K2Node_SwitchEnum_CmpSuccess) == 0x000021, "Member 'WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_QuickCommunication_Indicator.WBP_QuickCommunication_Indicator_C.OnAnimationStarted
// 0x0008 (0x0008 - 0x0000)
struct WBP_QuickCommunication_Indicator_C_OnAnimationStarted final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuickCommunication_Indicator_C_OnAnimationStarted) == 0x000008, "Wrong alignment on WBP_QuickCommunication_Indicator_C_OnAnimationStarted");
static_assert(sizeof(WBP_QuickCommunication_Indicator_C_OnAnimationStarted) == 0x000008, "Wrong size on WBP_QuickCommunication_Indicator_C_OnAnimationStarted");
static_assert(offsetof(WBP_QuickCommunication_Indicator_C_OnAnimationStarted, Animation) == 0x000000, "Member 'WBP_QuickCommunication_Indicator_C_OnAnimationStarted::Animation' has a wrong offset!");

}
