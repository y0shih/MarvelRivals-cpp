#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mission_SettlementItem

#include "Basic.hpp"

#include "WBP_Mission_SettlementItem_classes.hpp"
#include "WBP_Mission_SettlementItem_parameters.hpp"


namespace SDK
{

// Function WBP_Mission_SettlementItem.WBP_Mission_SettlementItem_C.ExecuteUbergraph_WBP_Mission_SettlementItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Mission_SettlementItem_C::ExecuteUbergraph_WBP_Mission_SettlementItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Mission_SettlementItem_C", "ExecuteUbergraph_WBP_Mission_SettlementItem");

	Params::WBP_Mission_SettlementItem_C_ExecuteUbergraph_WBP_Mission_SettlementItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Mission_SettlementItem.WBP_Mission_SettlementItem_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void UWBP_Mission_SettlementItem_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Mission_SettlementItem_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Mission_SettlementItem.WBP_Mission_SettlementItem_C.SequenceEvent__ENTRYPOINTWBP_Mission_SettlementItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Mission_SettlementItem_C::SequenceEvent__ENTRYPOINTWBP_Mission_SettlementItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Mission_SettlementItem_C", "SequenceEvent__ENTRYPOINTWBP_Mission_SettlementItem");

	UObject::ProcessEvent(Func, nullptr);
}

}
