#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Setting_MiniKeyBoard_Mouse_V2

#include "Basic.hpp"

#include "WBP_Setting_MiniKeyBoard_Mouse_V2_classes.hpp"
#include "WBP_Setting_MiniKeyBoard_Mouse_V2_parameters.hpp"


namespace SDK
{

// Function WBP_Setting_MiniKeyBoard_Mouse_V2.WBP_Setting_MiniKeyBoard_Mouse_V2_C.ExecuteUbergraph_WBP_Setting_MiniKeyBoard_Mouse_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Setting_MiniKeyBoard_Mouse_V2_C::ExecuteUbergraph_WBP_Setting_MiniKeyBoard_Mouse_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Setting_MiniKeyBoard_Mouse_V2_C", "ExecuteUbergraph_WBP_Setting_MiniKeyBoard_Mouse_V2");

	Params::WBP_Setting_MiniKeyBoard_Mouse_V2_C_ExecuteUbergraph_WBP_Setting_MiniKeyBoard_Mouse_V2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Setting_MiniKeyBoard_Mouse_V2.WBP_Setting_MiniKeyBoard_Mouse_V2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Setting_MiniKeyBoard_Mouse_V2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Setting_MiniKeyBoard_Mouse_V2_C", "PreConstruct");

	Params::WBP_Setting_MiniKeyBoard_Mouse_V2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
