#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbilityStatistics_102441

#include "Basic.hpp"

#include "PyAbilityStatistics_102441_classes.hpp"
#include "PyAbilityStatistics_102441_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbilityStatistics_102441.PyAbilityStatistics_102441.OnAbilityRecycleAgentTask
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Instigator                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMarvelTargetActorGenerateInfo   GenerateInfo                                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEndAgentTaskInfo                EndAgentTaskInfo                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UPyAbilityStatistics_102441::OnAbilityRecycleAgentTask(class AActor* Instigator, const struct FMarvelTargetActorGenerateInfo& GenerateInfo, const struct FEndAgentTaskInfo& EndAgentTaskInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbilityStatistics_102441", "OnAbilityRecycleAgentTask");

	Params::PyAbilityStatistics_102441_OnAbilityRecycleAgentTask Parms{};

	Parms.Instigator = Instigator;
	Parms.GenerateInfo = std::move(GenerateInfo);
	Parms.EndAgentTaskInfo = std::move(EndAgentTaskInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbilityStatistics_102441.PyAbilityStatistics_102441.OnAbilityEndAgentTask
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Instigator                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMarvelTargetActorGenerateInfo   GenerateInfo                                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEndAgentTaskInfo                EndAgentTaskInfo                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UPyAbilityStatistics_102441::OnAbilityEndAgentTask(class AActor* Instigator, const struct FMarvelTargetActorGenerateInfo& GenerateInfo, const struct FEndAgentTaskInfo& EndAgentTaskInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbilityStatistics_102441", "OnAbilityEndAgentTask");

	Params::PyAbilityStatistics_102441_OnAbilityEndAgentTask Parms{};

	Parms.Instigator = Instigator;
	Parms.GenerateInfo = std::move(GenerateInfo);
	Parms.EndAgentTaskInfo = std::move(EndAgentTaskInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
