#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SelectHero_HeroListBtnTips

#include "Basic.hpp"

#include "PyWidget_SelectHero_HeroListBtnTips_classes.hpp"
#include "PyWidget_SelectHero_HeroListBtnTips_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_SelectHero_HeroListBtnTips.PyWidget_SelectHero_HeroListBtnTips.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_SelectHero_HeroListBtnTips::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SelectHero_HeroListBtnTips", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SelectHero_HeroListBtnTips.PyWidget_SelectHero_HeroListBtnTips.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SelectHero_HeroListBtnTips::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SelectHero_HeroListBtnTips", "MarvelSetVisible");

	Params::PyWidget_SelectHero_HeroListBtnTips_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
