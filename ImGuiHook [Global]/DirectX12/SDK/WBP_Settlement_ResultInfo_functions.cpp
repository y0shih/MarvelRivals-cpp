#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settlement_ResultInfo

#include "Basic.hpp"

#include "WBP_Settlement_ResultInfo_classes.hpp"
#include "WBP_Settlement_ResultInfo_parameters.hpp"


namespace SDK
{

// Function WBP_Settlement_ResultInfo.WBP_Settlement_ResultInfo_C.ExecuteUbergraph_WBP_Settlement_ResultInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settlement_ResultInfo_C::ExecuteUbergraph_WBP_Settlement_ResultInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settlement_ResultInfo_C", "ExecuteUbergraph_WBP_Settlement_ResultInfo");

	Params::WBP_Settlement_ResultInfo_C_ExecuteUbergraph_WBP_Settlement_ResultInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settlement_ResultInfo.WBP_Settlement_ResultInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settlement_ResultInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settlement_ResultInfo_C", "PreConstruct");

	Params::WBP_Settlement_ResultInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
