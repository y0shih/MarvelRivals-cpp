#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_PyActiveAbilityByInput

#include "Basic.hpp"

#include "BTS_PyActiveAbilityByInput_classes.hpp"
#include "BTS_PyActiveAbilityByInput_parameters.hpp"


namespace SDK
{

// PythonFunction BTS_PyActiveAbilityByInput.BTS_PyActiveAbilityByInput.ReceiveDeactivationAI
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTS_PyActiveAbilityByInput::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_PyActiveAbilityByInput", "ReceiveDeactivationAI");

	Params::BTS_PyActiveAbilityByInput_ReceiveDeactivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction BTS_PyActiveAbilityByInput.BTS_PyActiveAbilityByInput.ReceiveTickAI
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_PyActiveAbilityByInput::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_PyActiveAbilityByInput", "ReceiveTickAI");

	Params::BTS_PyActiveAbilityByInput_ReceiveTickAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
