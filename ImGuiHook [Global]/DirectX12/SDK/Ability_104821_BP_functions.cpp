#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_104821_BP

#include "Basic.hpp"

#include "Ability_104821_BP_classes.hpp"
#include "Ability_104821_BP_parameters.hpp"


namespace SDK
{

// Function Ability_104821_BP.Ability_104821_BP_C.ExecuteUbergraph_Ability_104821_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_104821_BP_C::ExecuteUbergraph_Ability_104821_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_104821_BP_C", "ExecuteUbergraph_Ability_104821_BP");

	Params::Ability_104821_BP_C_ExecuteUbergraph_Ability_104821_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ability_104821_BP.Ability_104821_BP_C.OnGameplayAbilityHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>               HitResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UAbility_104821_BP_C::OnGameplayAbilityHit(const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_104821_BP_C", "OnGameplayAbilityHit");

	Params::Ability_104821_BP_C_OnGameplayAbilityHit Parms{};

	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}

}
