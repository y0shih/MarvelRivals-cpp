#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_DropDownList

#include "Basic.hpp"

#include "PyWidget_DropDownList_classes.hpp"
#include "PyWidget_DropDownList_parameters.hpp"


namespace SDK
{

// DelegateFunction PyWidget_DropDownList.PyWidget_DropDownList.OnExtendChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                                    IsExtended_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_DropDownList::OnExtendChanged__DelegateSignature(bool IsExtended_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "OnExtendChanged__DelegateSignature");

	Params::PyWidget_DropDownList_OnExtendChanged__DelegateSignature Parms{};

	Parms.IsExtended_0 = IsExtended_0;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_DropDownList.PyWidget_DropDownList.OnItemIDChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   ItemId_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_DropDownList::OnItemIDChanged__DelegateSignature(int32 ItemId_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "OnItemIDChanged__DelegateSignature");

	Params::PyWidget_DropDownList_OnItemIDChanged__DelegateSignature Parms{};

	Parms.ItemId_0 = ItemId_0;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_DropDownList.PyWidget_DropDownList.OnHeroIDChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   HeroID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_DropDownList::OnHeroIDChanged__DelegateSignature(int32 HeroID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "OnHeroIDChanged__DelegateSignature");

	Params::PyWidget_DropDownList_OnHeroIDChanged__DelegateSignature Parms{};

	Parms.HeroID = HeroID;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_DropDownList.PyWidget_DropDownList.OnCustomeTagChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                           CustomeTag                                             (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyWidget_DropDownList::OnCustomeTagChanged__DelegateSignature(const class FString& CustomeTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "OnCustomeTagChanged__DelegateSignature");

	Params::PyWidget_DropDownList_OnCustomeTagChanged__DelegateSignature Parms{};

	Parms.CustomeTag = std::move(CustomeTag);

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_DropDownList::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.PreConstruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_DropDownList::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "PreConstruct");

	Params::PyWidget_DropDownList_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_DropDownList::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.OnGetMenuContent
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidget* UPyWidget_DropDownList::OnGetMenuContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "OnGetMenuContent");

	Params::PyWidget_DropDownList_OnGetMenuContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.ShouldEnableInput
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyWidget_DropDownList::ShouldEnableInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "ShouldEnableInput");

	Params::PyWidget_DropDownList_ShouldEnableInput Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.OnCascadingVisibleChanged
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_DropDownList::OnCascadingVisibleChanged(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "OnCascadingVisibleChanged");

	Params::PyWidget_DropDownList_OnCascadingVisibleChanged Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.SetIsExtend
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsExtended_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_DropDownList::SetIsExtend(bool IsExtended_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "SetIsExtend");

	Params::PyWidget_DropDownList_SetIsExtend Parms{};

	Parms.IsExtended_0 = IsExtended_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.SetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Enabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_DropDownList::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "SetEnabled");

	Params::PyWidget_DropDownList_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.GetItemID
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UPyWidget_DropDownList::GetItemID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "GetItemID");

	Params::PyWidget_DropDownList_GetItemID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.SetItemID
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   ItemId_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_DropDownList::SetItemID(int32 ItemId_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "SetItemID");

	Params::PyWidget_DropDownList_SetItemID Parms{};

	Parms.ItemId_0 = ItemId_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.SetItemTextList
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FText>                     ItemTextList_0                                         (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_DropDownList::SetItemTextList(const TArray<class FText>& ItemTextList_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "SetItemTextList");

	Params::PyWidget_DropDownList_SetItemTextList Parms{};

	Parms.ItemTextList_0 = std::move(ItemTextList_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.SetItemIconList
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UTexture2D*>               ItemIconList_0                                         (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_DropDownList::SetItemIconList(const TArray<class UTexture2D*>& ItemIconList_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "SetItemIconList");

	Params::PyWidget_DropDownList_SetItemIconList Parms{};

	Parms.ItemIconList_0 = std::move(ItemIconList_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.SetItemHeroIDList
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                           ItemHeroIDList_0                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_DropDownList::SetItemHeroIDList(const TArray<int32>& ItemHeroIDList_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "SetItemHeroIDList");

	Params::PyWidget_DropDownList_SetItemHeroIDList Parms{};

	Parms.ItemHeroIDList_0 = std::move(ItemHeroIDList_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.SetItemColorList
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FLinearColor>             ItemColorList_0                                        (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_DropDownList::SetItemColorList(const TArray<struct FLinearColor>& ItemColorList_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "SetItemColorList");

	Params::PyWidget_DropDownList_SetItemColorList Parms{};

	Parms.ItemColorList_0 = std::move(ItemColorList_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.SetItemLeftColorList
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FLinearColor>             ItemLeftColorList_0                                    (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_DropDownList::SetItemLeftColorList(const TArray<struct FLinearColor>& ItemLeftColorList_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "SetItemLeftColorList");

	Params::PyWidget_DropDownList_SetItemLeftColorList Parms{};

	Parms.ItemLeftColorList_0 = std::move(ItemLeftColorList_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList.PyWidget_DropDownList.SetItemCustomeTagList
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>                   ItemCustomeTagList_0                                   (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_DropDownList::SetItemCustomeTagList(const TArray<class FString>& ItemCustomeTagList_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList", "SetItemCustomeTagList");

	Params::PyWidget_DropDownList_SetItemCustomeTagList Parms{};

	Parms.ItemCustomeTagList_0 = std::move(ItemCustomeTagList_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
