#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_202

#include "Basic.hpp"

#include "PyAbility_202_classes.hpp"
#include "PyAbility_202_parameters.hpp"


namespace SDK
{

// DelegateFunction PyAbility_202.PyAbility_202.OnCoolDownFinishDispatcher__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UPyAbility_202::OnCoolDownFinishDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_202", "OnCoolDownFinishDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// DelegateFunction PyAbility_202.PyAbility_202.OnSendSignalSuccess__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   SignalID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMarvelBaseCharacter*             ResonseTarget                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyAbility_202::OnSendSignalSuccess__DelegateSignature(int32 SignalID, class AMarvelBaseCharacter* ResonseTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_202", "OnSendSignalSuccess__DelegateSignature");

	Params::PyAbility_202_OnSendSignalSuccess__DelegateSignature Parms{};

	Parms.SignalID = SignalID;
	Parms.ResonseTarget = ResonseTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyAbility_202.PyAbility_202.OnSignalBeResponded__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   SignalID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMarvelBaseCharacter*             SourceActor                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyAbility_202::OnSignalBeResponded__DelegateSignature(int32 SignalID, class AMarvelBaseCharacter* SourceActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_202", "OnSignalBeResponded__DelegateSignature");

	Params::PyAbility_202_OnSignalBeResponded__DelegateSignature Parms{};

	Parms.SignalID = SignalID;
	Parms.SourceActor = SourceActor;

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyAbility_202.PyAbility_202.BeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_202::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_202", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_202.PyAbility_202.CanActivate
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_202::CanActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_202", "CanActivate");

	Params::PyAbility_202_CanActivate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_202.PyAbility_202.K2_ActivateAbilityFromEvent
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, Parm, OutParm, ReferenceParm)

void UPyAbility_202::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_202", "K2_ActivateAbilityFromEvent");

	Params::PyAbility_202_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_202.PyAbility_202.EndPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_202::EndPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_202", "EndPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_202.PyAbility_202.OnCooldownFinish
// (Native, Public, BlueprintCallable)

void UPyAbility_202::OnCooldownFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_202", "OnCooldownFinish");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
