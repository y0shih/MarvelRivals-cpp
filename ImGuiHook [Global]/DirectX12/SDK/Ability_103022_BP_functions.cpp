#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_103022_BP

#include "Basic.hpp"

#include "Ability_103022_BP_classes.hpp"
#include "Ability_103022_BP_parameters.hpp"


namespace SDK
{

// Function Ability_103022_BP.Ability_103022_BP_C.ExecuteUbergraph_Ability_103022_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_103022_BP_C::ExecuteUbergraph_Ability_103022_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_103022_BP_C", "ExecuteUbergraph_Ability_103022_BP");

	Params::Ability_103022_BP_C_ExecuteUbergraph_Ability_103022_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ability_103022_BP.Ability_103022_BP_C.SetAbilityExtraWidget_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InExtraWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UAbility_103022_BP_C::SetAbilityExtraWidget_1(class UUserWidget* InExtraWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_103022_BP_C", "SetAbilityExtraWidget_1");

	Params::Ability_103022_BP_C_SetAbilityExtraWidget_1 Parms{};

	Parms.InExtraWidget = InExtraWidget;

	UObject::ProcessEvent(Func, &Parms);
}

}
