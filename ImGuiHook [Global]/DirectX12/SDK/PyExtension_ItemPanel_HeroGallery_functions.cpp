#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyExtension_ItemPanel_HeroGallery

#include "Basic.hpp"

#include "PyExtension_ItemPanel_HeroGallery_classes.hpp"


namespace SDK
{

// PythonFunction PyExtension_ItemPanel_HeroGallery.PyExtension_ItemPanel_HeroGallery.BP_OnInitialize
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyExtension_ItemPanel_HeroGallery::BP_OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyExtension_ItemPanel_HeroGallery", "BP_OnInitialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
