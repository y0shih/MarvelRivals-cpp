#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102581

#include "Basic.hpp"

#include "PyAbility_102581_classes.hpp"
#include "PyAbility_102581_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_102581.PyAbility_102581.BeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_102581::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102581", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102581.PyAbility_102581.K2_ActivateAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_102581::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102581", "K2_ActivateAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102581.PyAbility_102581.OnReleaseKeyInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_102581::OnReleaseKeyInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102581", "OnReleaseKeyInput");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102581.PyAbility_102581.MissileEventNotify
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_102581::MissileEventNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102581", "MissileEventNotify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102581.PyAbility_102581.MulticastStartAdsorb
// (Net, NetReliable, Native, NetMulticast, Public, BlueprintCallable)

void UPyAbility_102581::MulticastStartAdsorb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102581", "MulticastStartAdsorb");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102581.PyAbility_102581.OnRep_CurrentAdsorbResult
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_102581::OnRep_CurrentAdsorbResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102581", "OnRep_CurrentAdsorbResult");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102581.PyAbility_102581.NativeOnMontageCompleted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_102581::NativeOnMontageCompleted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102581", "NativeOnMontageCompleted");

	Params::PyAbility_102581_NativeOnMontageCompleted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102581.PyAbility_102581.K2_OnEndAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_102581::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102581", "K2_OnEndAbility");

	Params::PyAbility_102581_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
