#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyBTNodeBase

#include "Basic.hpp"

#include "PyBTNodeBase_classes.hpp"
#include "PyBTNodeBase_parameters.hpp"


namespace SDK
{

// PythonFunction PyBTNodeBase.BTDecorator_PyBase.PerformConditionCheckAI
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBTDecorator_PyBase::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTDecorator_PyBase", "PerformConditionCheckAI");

	Params::BTDecorator_PyBase_PerformConditionCheckAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyBTNodeBase.BTDecorator_PyBase.GetBTNodeDescription
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBTDecorator_PyBase::GetBTNodeDescription() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTDecorator_PyBase", "GetBTNodeDescription");

	Params::BTDecorator_PyBase_GetBTNodeDescription Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyBTNodeBase.BTTask_PyBase.ReceiveAbortAI
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_PyBase::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_PyBase", "ReceiveAbortAI");

	Params::BTTask_PyBase_ReceiveAbortAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyBTNodeBase.BTTask_PyBase.ReceiveExecuteAI
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_PyBase::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_PyBase", "ReceiveExecuteAI");

	Params::BTTask_PyBase_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyBTNodeBase.BTTask_PyBase.GetBTNodeDescription
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBTTask_PyBase::GetBTNodeDescription() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_PyBase", "GetBTNodeDescription");

	Params::BTTask_PyBase_GetBTNodeDescription Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyBTNodeBase.BTService_PyBase.GetBTNodeDescription
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBTService_PyBase::GetBTNodeDescription() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTService_PyBase", "GetBTNodeDescription");

	Params::BTService_PyBase_GetBTNodeDescription Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
