#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QuickCommunication_Indicator

#include "Basic.hpp"

#include "WBP_QuickCommunication_Indicator_classes.hpp"
#include "WBP_QuickCommunication_Indicator_parameters.hpp"


namespace SDK
{

// Function WBP_QuickCommunication_Indicator.WBP_QuickCommunication_Indicator_C.ExecuteUbergraph_WBP_QuickCommunication_Indicator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuickCommunication_Indicator_C::ExecuteUbergraph_WBP_QuickCommunication_Indicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickCommunication_Indicator_C", "ExecuteUbergraph_WBP_QuickCommunication_Indicator");

	Params::WBP_QuickCommunication_Indicator_C_ExecuteUbergraph_WBP_QuickCommunication_Indicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuickCommunication_Indicator.WBP_QuickCommunication_Indicator_C.OnAnimationStarted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QuickCommunication_Indicator_C::OnAnimationStarted(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickCommunication_Indicator_C", "OnAnimationStarted");

	Params::WBP_QuickCommunication_Indicator_C_OnAnimationStarted Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuickCommunication_Indicator.WBP_QuickCommunication_Indicator_C.WidgetAnimationEvt_Anim_FadeOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UWBP_QuickCommunication_Indicator_C::WidgetAnimationEvt_Anim_FadeOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickCommunication_Indicator_C", "WidgetAnimationEvt_Anim_FadeOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}

}
