#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103541

#include "Basic.hpp"

#include "PyAbility_103541_classes.hpp"
#include "PyAbility_103541_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_103541.PyAbility_103541.BeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_103541::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103541", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103541.PyAbility_103541.CanActivate
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_103541::CanActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103541", "CanActivate");

	Params::PyAbility_103541_CanActivate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_103541.PyAbility_103541.NativeOnMontageCompleted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_103541::NativeOnMontageCompleted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103541", "NativeOnMontageCompleted");

	Params::PyAbility_103541_NativeOnMontageCompleted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103541.PyAbility_103541.NativeOnMontageInterrupted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_103541::NativeOnMontageInterrupted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103541", "NativeOnMontageInterrupted");

	Params::PyAbility_103541_NativeOnMontageInterrupted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103541.PyAbility_103541.NativeOnMontageCancelled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_103541::NativeOnMontageCancelled(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103541", "NativeOnMontageCancelled");

	Params::PyAbility_103541_NativeOnMontageCancelled Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103541.PyAbility_103541.K2_ActivateAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_103541::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103541", "K2_ActivateAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103541.PyAbility_103541.MissileEventNotify
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_103541::MissileEventNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103541", "MissileEventNotify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103541.PyAbility_103541.K2_OnEndAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_103541::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103541", "K2_OnEndAbility");

	Params::PyAbility_103541_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
