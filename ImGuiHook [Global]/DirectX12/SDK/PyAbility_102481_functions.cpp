#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102481

#include "Basic.hpp"

#include "PyAbility_102481_classes.hpp"
#include "PyAbility_102481_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_102481.PyAbility_102481.BeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_102481::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102481", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102481.PyAbility_102481.K2_ActivateAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_102481::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102481", "K2_ActivateAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102481.PyAbility_102481.K2_OnAeroStateChanged
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAeroState                              NewAeroState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_102481::K2_OnAeroStateChanged(EAeroState NewAeroState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102481", "K2_OnAeroStateChanged");

	Params::PyAbility_102481_K2_OnAeroStateChanged Parms{};

	Parms.NewAeroState = NewAeroState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102481.PyAbility_102481.K2_OnEndAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_102481::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102481", "K2_OnEndAbility");

	Params::PyAbility_102481_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
