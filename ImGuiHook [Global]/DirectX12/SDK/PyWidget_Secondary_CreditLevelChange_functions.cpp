#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Secondary_CreditLevelChange

#include "Basic.hpp"

#include "PyWidget_Secondary_CreditLevelChange_classes.hpp"


namespace SDK
{

// PythonFunction PyWidget_Secondary_CreditLevelChange.PyWidget_Secondary_CreditLevelChange.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Secondary_CreditLevelChange::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Secondary_CreditLevelChange", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
