#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_PyUpdateBirthBase

#include "Basic.hpp"

#include "BTS_PyUpdateBirthBase_classes.hpp"
#include "BTS_PyUpdateBirthBase_parameters.hpp"


namespace SDK
{

// PythonFunction BTS_PyUpdateBirthBase.BTS_PyUpdateBirthBase.ReceiveActivationAI
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTS_PyUpdateBirthBase::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_PyUpdateBirthBase", "ReceiveActivationAI");

	Params::BTS_PyUpdateBirthBase_ReceiveActivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction BTS_PyUpdateBirthBase.BTS_PyUpdateBirthBase.ReceiveDeactivation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OwnerActor                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTS_PyUpdateBirthBase::ReceiveDeactivation(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_PyUpdateBirthBase", "ReceiveDeactivation");

	Params::BTS_PyUpdateBirthBase_ReceiveDeactivation Parms{};

	Parms.OwnerActor = OwnerActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
