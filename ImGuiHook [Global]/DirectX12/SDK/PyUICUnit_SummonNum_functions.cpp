#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyUICUnit_SummonNum

#include "Basic.hpp"

#include "PyUICUnit_SummonNum_classes.hpp"
#include "PyUICUnit_SummonNum_parameters.hpp"


namespace SDK
{

// PythonFunction PyUICUnit_SummonNum.PyUICUnit_SummonNum.Construct
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyUICUnit_SummonNum::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUICUnit_SummonNum", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyUICUnit_SummonNum.PyUICUnit_SummonNum.OnActorChange
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Target                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyUICUnit_SummonNum::OnActorChange(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUICUnit_SummonNum", "OnActorChange");

	Params::PyUICUnit_SummonNum_OnActorChange Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyUICUnit_SummonNum.PyUICUnit_SummonNum.Destruct
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyUICUnit_SummonNum::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUICUnit_SummonNum", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyUICUnit_SummonNum.PyUICUnit_SummonNum.SetMaxNum
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   InTotalNumMax                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyUICUnit_SummonNum::SetMaxNum(int32 InTotalNumMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUICUnit_SummonNum", "SetMaxNum");

	Params::PyUICUnit_SummonNum_SetMaxNum Parms{};

	Parms.InTotalNumMax = InTotalNumMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyUICUnit_SummonNum.PyUICUnit_SummonNum.SetCurNum
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   InTotalNumCur                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyUICUnit_SummonNum::SetCurNum(int32 InTotalNumCur)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUICUnit_SummonNum", "SetCurNum");

	Params::PyUICUnit_SummonNum_SetCurNum Parms{};

	Parms.InTotalNumCur = InTotalNumCur;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyUICUnit_SummonNum.PyUICUnit_SummonNum.SetSummonedDesc
// (Native, Public, BlueprintCallable)
// Parameters:
// class FText                             InDesc                                                 (Parm)

void UPyUICUnit_SummonNum::SetSummonedDesc(const class FText& InDesc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUICUnit_SummonNum", "SetSummonedDesc");

	Params::PyUICUnit_SummonNum_SetSummonedDesc Parms{};

	Parms.InDesc = std::move(InDesc);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
