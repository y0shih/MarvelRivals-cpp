#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_Slider_V2

#include "Basic.hpp"

#include "PyWidget_Common_Slider_V2_classes.hpp"
#include "PyWidget_Common_Slider_V2_parameters.hpp"


namespace SDK
{

// DelegateFunction PyWidget_Common_Slider_V2.PyWidget_Common_Slider_V2.OnValueChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_Slider_V2::OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_Slider_V2", "OnValueChanged__DelegateSignature");

	Params::PyWidget_Common_Slider_V2_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_Common_Slider_V2.PyWidget_Common_Slider_V2.OnMouseCaptureEnd__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_Slider_V2::OnMouseCaptureEnd__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_Slider_V2", "OnMouseCaptureEnd__DelegateSignature");

	Params::PyWidget_Common_Slider_V2_OnMouseCaptureEnd__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_Common_Slider_V2.PyWidget_Common_Slider_V2.OnMetaDataSet__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// ENumberType                             EType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_Slider_V2::OnMetaDataSet__DelegateSignature(ENumberType EType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_Slider_V2", "OnMetaDataSet__DelegateSignature");

	Params::PyWidget_Common_Slider_V2_OnMetaDataSet__DelegateSignature Parms{};

	Parms.EType = EType;

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyWidget_Common_Slider_V2.PyWidget_Common_Slider_V2.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Common_Slider_V2::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_Slider_V2", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Slider_V2.PyWidget_Common_Slider_V2.UpdateRangeNum
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   MinNum                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxNum                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_Slider_V2::UpdateRangeNum(float MinNum, float MaxNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_Slider_V2", "UpdateRangeNum");

	Params::PyWidget_Common_Slider_V2_UpdateRangeNum Parms{};

	Parms.MinNum = MinNum;
	Parms.MaxNum = MaxNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Slider_V2.PyWidget_Common_Slider_V2.OnReceiveInputAxis
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             AxisName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AxisValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_Slider_V2::OnReceiveInputAxis(class FName AxisName, float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_Slider_V2", "OnReceiveInputAxis");

	Params::PyWidget_Common_Slider_V2_OnReceiveInputAxis Parms{};

	Parms.AxisName = AxisName;
	Parms.AxisValue = AxisValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Slider_V2.PyWidget_Common_Slider_V2.ShouldEnableInput
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyWidget_Common_Slider_V2::ShouldEnableInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_Slider_V2", "ShouldEnableInput");

	Params::PyWidget_Common_Slider_V2_ShouldEnableInput Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
