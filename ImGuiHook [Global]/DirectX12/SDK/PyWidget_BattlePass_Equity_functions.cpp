#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_BattlePass_Equity

#include "Basic.hpp"

#include "PyWidget_BattlePass_Equity_classes.hpp"
#include "PyWidget_BattlePass_Equity_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_BattlePass_Equity.PyWidget_BattlePass_Equity.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattlePass_Equity::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_Equity", "MarvelSetVisible");

	Params::PyWidget_BattlePass_Equity_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
