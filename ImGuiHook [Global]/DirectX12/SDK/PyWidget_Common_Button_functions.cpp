#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_Button

#include "Basic.hpp"

#include "PyWidget_Common_Button_classes.hpp"
#include "PyWidget_Common_Button_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_Common_Button.PyWidget_BaseCommonButton.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BaseCommonButton::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BaseCommonButton", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_BaseCommonButton.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BaseCommonButton::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BaseCommonButton", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_BaseCommonButton.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BaseCommonButton::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BaseCommonButton", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_BaseCommonButton.OnButtonVisibilityChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// ESlateVisibility                        InVisibility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BaseCommonButton::OnButtonVisibilityChanged(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BaseCommonButton", "OnButtonVisibilityChanged");

	Params::PyWidget_BaseCommonButton_OnButtonVisibilityChanged Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_BaseCommonButton.SetBtnVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BaseCommonButton::SetBtnVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BaseCommonButton", "SetBtnVisible");

	Params::PyWidget_BaseCommonButton_SetBtnVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_BaseCommonButton.SetBtnIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Enabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BaseCommonButton::SetBtnIsEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BaseCommonButton", "SetBtnIsEnabled");

	Params::PyWidget_BaseCommonButton_SetBtnIsEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_BaseCommonButton.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BaseCommonButton::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BaseCommonButton", "OnAnimationFinished");

	Params::PyWidget_BaseCommonButton_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_BaseCommonButton.OnAnimationsDisabled
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BaseCommonButton::OnAnimationsDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BaseCommonButton", "OnAnimationsDisabled");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_CommonButton_Lv4.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CommonButton_Lv4::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonButton_Lv4", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_CommonButton_Lv1_W.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonButton_Lv1_W::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonButton_Lv1_W", "OnAnimationFinished");

	Params::PyWidget_CommonButton_Lv1_W_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_CommonButton_Lv0.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CommonButton_Lv0::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonButton_Lv0", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_CommonButton_Lv0.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonButton_Lv0::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonButton_Lv0", "OnAnimationFinished");

	Params::PyWidget_CommonButton_Lv0_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_CommonButton_Icon.SetBtnIsPressed
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsBtnPressed_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonButton_Icon::SetBtnIsPressed(bool IsBtnPressed_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonButton_Icon", "SetBtnIsPressed");

	Params::PyWidget_CommonButton_Icon_SetBtnIsPressed Parms{};

	Parms.IsBtnPressed_0 = IsBtnPressed_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_CommonButton_Icon.SetIsHover
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsHover_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonButton_Icon::SetIsHover(bool IsHover_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonButton_Icon", "SetIsHover");

	Params::PyWidget_CommonButton_Icon_SetIsHover Parms{};

	Parms.IsHover_0 = IsHover_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_CommonButton_Icon.SetBtnIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Enabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonButton_Icon::SetBtnIsEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonButton_Icon", "SetBtnIsEnabled");

	Params::PyWidget_CommonButton_Icon_SetBtnIsEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_CommonButton_Icon.SetBtnHidden
// (Native, Public, BlueprintCallable)

void UPyWidget_CommonButton_Icon::SetBtnHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonButton_Icon", "SetBtnHidden");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_CommonButton_Lv3.SetBtnIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Enabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonButton_Lv3::SetBtnIsEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonButton_Lv3", "SetBtnIsEnabled");

	Params::PyWidget_CommonButton_Lv3_SetBtnIsEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_CommonButton_WithHoverTips.SetIsHover
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsHover_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonButton_WithHoverTips::SetIsHover(bool IsHover_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonButton_WithHoverTips", "SetIsHover");

	Params::PyWidget_CommonButton_WithHoverTips_SetIsHover Parms{};

	Parms.IsHover_0 = IsHover_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_Button.PyWidget_CommonButton_WithHoverTips.OnCascadingVisibleChanged
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonButton_WithHoverTips::OnCascadingVisibleChanged(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonButton_WithHoverTips", "OnCascadingVisibleChanged");

	Params::PyWidget_CommonButton_WithHoverTips_OnCascadingVisibleChanged Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
