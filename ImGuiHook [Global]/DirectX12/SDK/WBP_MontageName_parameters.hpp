#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MontageName

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_MontageName.WBP_MontageName_C.ExecuteUbergraph_WBP_MontageName
// 0x0078 (0x0078 - 0x0000)
struct WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0018)(HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0038(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName) == 0x000008, "Wrong alignment on WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName");
static_assert(sizeof(WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName) == 0x000078, "Wrong size on WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName");
static_assert(offsetof(WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName, EntryPoint) == 0x000000, "Member 'WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName, CallFunc_IsEmpty_ReturnValue) == 0x000018, "Member 'WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName, K2Node_Event_MyGeometry) == 0x000038, "Member 'WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName, K2Node_Event_InDeltaTime) == 0x000070, "Member 'WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000074, "Member 'WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000075, "Member 'WBP_MontageName_C_ExecuteUbergraph_WBP_MontageName::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function WBP_MontageName.WBP_MontageName_C.Get_EventName_Text
// 0x0030 (0x0030 - 0x0000)
struct WBP_MontageName_C_Get_EventName_Text final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(WBP_MontageName_C_Get_EventName_Text) == 0x000008, "Wrong alignment on WBP_MontageName_C_Get_EventName_Text");
static_assert(sizeof(WBP_MontageName_C_Get_EventName_Text) == 0x000030, "Wrong size on WBP_MontageName_C_Get_EventName_Text");
static_assert(offsetof(WBP_MontageName_C_Get_EventName_Text, ReturnValue) == 0x000000, "Member 'WBP_MontageName_C_Get_EventName_Text::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MontageName_C_Get_EventName_Text, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WBP_MontageName_C_Get_EventName_Text::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_MontageName.WBP_MontageName_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_MontageName_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MontageName_C_Tick) == 0x000004, "Wrong alignment on WBP_MontageName_C_Tick");
static_assert(sizeof(WBP_MontageName_C_Tick) == 0x00003C, "Wrong size on WBP_MontageName_C_Tick");
static_assert(offsetof(WBP_MontageName_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_MontageName_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_MontageName_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_MontageName_C_Tick::InDeltaTime' has a wrong offset!");

}
