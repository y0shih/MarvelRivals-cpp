#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Ranking_RankRanking

#include "Basic.hpp"

#include "PyWidget_Ranking_RankRanking_classes.hpp"
#include "PyWidget_Ranking_RankRanking_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_Ranking_RankRanking.PyWidget_Ranking_BtnMyself.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Ranking_BtnMyself::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Ranking_BtnMyself", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Ranking_RankRanking.PyWidget_Ranking_BtnMyself.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Ranking_BtnMyself::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Ranking_BtnMyself", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Ranking_RankRanking.PyWidget_Ranking_BtnMyself.OnHovered
// (Native, Public, BlueprintCallable)

void UPyWidget_Ranking_BtnMyself::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Ranking_BtnMyself", "OnHovered");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Ranking_RankRanking.PyWidget_Ranking_BtnMyself.OnUnhovered
// (Native, Public, BlueprintCallable)

void UPyWidget_Ranking_BtnMyself::OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Ranking_BtnMyself", "OnUnhovered");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Ranking_RankRanking.PyWidget_Ranking_RankRanking.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Ranking_RankRanking::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Ranking_RankRanking", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Ranking_RankRanking.PyWidget_Ranking_RankRanking.PreConstruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Ranking_RankRanking::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Ranking_RankRanking", "PreConstruct");

	Params::PyWidget_Ranking_RankRanking_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Ranking_RankRanking.PyWidget_Ranking_RankRanking.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Ranking_RankRanking::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Ranking_RankRanking", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Ranking_RankRanking.PyWidget_Ranking_RankRanking.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Ranking_RankRanking::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Ranking_RankRanking", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Ranking_RankRanking.PyWidget_Ranking_RankRanking.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Ranking_RankRanking::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Ranking_RankRanking", "MarvelSetVisible");

	Params::PyWidget_Ranking_RankRanking_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

