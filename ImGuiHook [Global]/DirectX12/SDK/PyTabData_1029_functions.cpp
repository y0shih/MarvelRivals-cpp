#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyTabData_1029

#include "Basic.hpp"

#include "PyTabData_1029_classes.hpp"
#include "PyTabData_1029_parameters.hpp"


namespace SDK
{

// PythonFunction PyTabData_1029.PyTabData_1029.K2_Initialize
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyTabData_1029::K2_Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyTabData_1029", "K2_Initialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyTabData_1029.PyTabData_1029.OnAbilityInitialize
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   AbilityID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyTabData_1029::OnAbilityInitialize(int32 AbilityID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyTabData_1029", "OnAbilityInitialize");

	Params::PyTabData_1029_OnAbilityInitialize Parms{};

	Parms.AbilityID = AbilityID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyTabData_1029.PyTabData_1029.OnAbilityActivate
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   AbilityID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyTabData_1029::OnAbilityActivate(int32 AbilityID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyTabData_1029", "OnAbilityActivate");

	Params::PyTabData_1029_OnAbilityActivate Parms{};

	Parms.AbilityID = AbilityID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyTabData_1029.PyTabData_1029.K2_Shutdown
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyTabData_1029::K2_Shutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyTabData_1029", "K2_Shutdown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
