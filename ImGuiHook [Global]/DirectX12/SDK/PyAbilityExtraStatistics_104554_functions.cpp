#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbilityExtraStatistics_104554

#include "Basic.hpp"

#include "PyAbilityExtraStatistics_104554_classes.hpp"
#include "PyAbilityExtraStatistics_104554_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbilityExtraStatistics_104554.PyAbilityExtraStatistics_104554.K2_OnInitialize
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbilityExtraStatistics_104554::K2_OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbilityExtraStatistics_104554", "K2_OnInitialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbilityExtraStatistics_104554.PyAbilityExtraStatistics_104554.K2_OnShutdown
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbilityExtraStatistics_104554::K2_OnShutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbilityExtraStatistics_104554", "K2_OnShutdown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbilityExtraStatistics_104554.PyAbilityExtraStatistics_104554.OnAbilityHit
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionLogBattleContext          BattleContext                                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FAttributeModifierHandle         ParameterHandle                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UPyAbilityExtraStatistics_104554::OnAbilityHit(const struct FActionLogBattleContext& BattleContext, const struct FAttributeModifierHandle& ParameterHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbilityExtraStatistics_104554", "OnAbilityHit");

	Params::PyAbilityExtraStatistics_104554_OnAbilityHit Parms{};

	Parms.BattleContext = std::move(BattleContext);
	Parms.ParameterHandle = std::move(ParameterHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbilityExtraStatistics_104554.PyAbilityExtraStatistics_104554.OnAbilityEndAgentTask
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Instigator                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMarvelTargetActorGenerateInfo   GenerateInfo                                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEndAgentTaskInfo                EndInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UPyAbilityExtraStatistics_104554::OnAbilityEndAgentTask(class AActor* Instigator, const struct FMarvelTargetActorGenerateInfo& GenerateInfo, const struct FEndAgentTaskInfo& EndInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbilityExtraStatistics_104554", "OnAbilityEndAgentTask");

	Params::PyAbilityExtraStatistics_104554_OnAbilityEndAgentTask Parms{};

	Parms.Instigator = Instigator;
	Parms.GenerateInfo = std::move(GenerateInfo);
	Parms.EndInfo = std::move(EndInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbilityExtraStatistics_104554.PyAbilityExtraStatistics_104554.GetRealExtraStatistics
// (Native, Public, BlueprintCallable)

void UPyAbilityExtraStatistics_104554::GetRealExtraStatistics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbilityExtraStatistics_104554", "GetRealExtraStatistics");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
