#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_Input

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// DelegateFunction PyWidget_Common_Input.PyWidget_Common_Input.OnSubmitText__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_Common_Input_OnSubmitText__DelegateSignature final
{
public:
	class FString                                 TextStr;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_OnSubmitText__DelegateSignature) == 0x000008, "Wrong alignment on PyWidget_Common_Input_OnSubmitText__DelegateSignature");
static_assert(sizeof(PyWidget_Common_Input_OnSubmitText__DelegateSignature) == 0x000010, "Wrong size on PyWidget_Common_Input_OnSubmitText__DelegateSignature");
static_assert(offsetof(PyWidget_Common_Input_OnSubmitText__DelegateSignature, TextStr) == 0x000000, "Member 'PyWidget_Common_Input_OnSubmitText__DelegateSignature::TextStr' has a wrong offset!");

// DelegateFunction PyWidget_Common_Input.PyWidget_Common_Input.OnTextChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_Common_Input_OnTextChanged__DelegateSignature final
{
public:
	class FString                                 TextStr;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_OnTextChanged__DelegateSignature) == 0x000008, "Wrong alignment on PyWidget_Common_Input_OnTextChanged__DelegateSignature");
static_assert(sizeof(PyWidget_Common_Input_OnTextChanged__DelegateSignature) == 0x000010, "Wrong size on PyWidget_Common_Input_OnTextChanged__DelegateSignature");
static_assert(offsetof(PyWidget_Common_Input_OnTextChanged__DelegateSignature, TextStr) == 0x000000, "Member 'PyWidget_Common_Input_OnTextChanged__DelegateSignature::TextStr' has a wrong offset!");

// DelegateFunction PyWidget_Common_Input.PyWidget_Common_Input.OnTextStandardChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Common_Input_OnTextStandardChanged__DelegateSignature final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_OnTextStandardChanged__DelegateSignature) == 0x000001, "Wrong alignment on PyWidget_Common_Input_OnTextStandardChanged__DelegateSignature");
static_assert(sizeof(PyWidget_Common_Input_OnTextStandardChanged__DelegateSignature) == 0x000001, "Wrong size on PyWidget_Common_Input_OnTextStandardChanged__DelegateSignature");
static_assert(offsetof(PyWidget_Common_Input_OnTextStandardChanged__DelegateSignature, Enable) == 0x000000, "Member 'PyWidget_Common_Input_OnTextStandardChanged__DelegateSignature::Enable' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Common_Input_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_PreConstruct) == 0x000001, "Wrong alignment on PyWidget_Common_Input_PreConstruct");
static_assert(sizeof(PyWidget_Common_Input_PreConstruct) == 0x000001, "Wrong size on PyWidget_Common_Input_PreConstruct");
static_assert(offsetof(PyWidget_Common_Input_PreConstruct, IsDesignTime) == 0x000000, "Member 'PyWidget_Common_Input_PreConstruct::IsDesignTime' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetIsOwner
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Common_Input_SetIsOwner final
{
public:
	bool                                          IsOwner;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_SetIsOwner) == 0x000001, "Wrong alignment on PyWidget_Common_Input_SetIsOwner");
static_assert(sizeof(PyWidget_Common_Input_SetIsOwner) == 0x000001, "Wrong size on PyWidget_Common_Input_SetIsOwner");
static_assert(offsetof(PyWidget_Common_Input_SetIsOwner, IsOwner) == 0x000000, "Member 'PyWidget_Common_Input_SetIsOwner::IsOwner' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetIsEditable
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Common_Input_SetIsEditable final
{
public:
	bool                                          IsEditable;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_SetIsEditable) == 0x000001, "Wrong alignment on PyWidget_Common_Input_SetIsEditable");
static_assert(sizeof(PyWidget_Common_Input_SetIsEditable) == 0x000001, "Wrong size on PyWidget_Common_Input_SetIsEditable");
static_assert(offsetof(PyWidget_Common_Input_SetIsEditable, IsEditable) == 0x000000, "Member 'PyWidget_Common_Input_SetIsEditable::IsEditable' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetInputHintText
// 0x0018 (0x0018 - 0x0000)
struct PyWidget_Common_Input_SetInputHintText final
{
public:
	class FText                                   HintText;                                          // 0x0000(0x0018)(Parm)
};
static_assert(alignof(PyWidget_Common_Input_SetInputHintText) == 0x000008, "Wrong alignment on PyWidget_Common_Input_SetInputHintText");
static_assert(sizeof(PyWidget_Common_Input_SetInputHintText) == 0x000018, "Wrong size on PyWidget_Common_Input_SetInputHintText");
static_assert(offsetof(PyWidget_Common_Input_SetInputHintText, HintText) == 0x000000, "Member 'PyWidget_Common_Input_SetInputHintText::HintText' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetPromptHintText
// 0x0018 (0x0018 - 0x0000)
struct PyWidget_Common_Input_SetPromptHintText final
{
public:
	class FText                                   HintText;                                          // 0x0000(0x0018)(Parm)
};
static_assert(alignof(PyWidget_Common_Input_SetPromptHintText) == 0x000008, "Wrong alignment on PyWidget_Common_Input_SetPromptHintText");
static_assert(sizeof(PyWidget_Common_Input_SetPromptHintText) == 0x000018, "Wrong size on PyWidget_Common_Input_SetPromptHintText");
static_assert(offsetof(PyWidget_Common_Input_SetPromptHintText, HintText) == 0x000000, "Member 'PyWidget_Common_Input_SetPromptHintText::HintText' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetTextPrompt
// 0x0018 (0x0018 - 0x0000)
struct PyWidget_Common_Input_SetTextPrompt final
{
public:
	class FText                                   Prompt;                                            // 0x0000(0x0018)(Parm)
};
static_assert(alignof(PyWidget_Common_Input_SetTextPrompt) == 0x000008, "Wrong alignment on PyWidget_Common_Input_SetTextPrompt");
static_assert(sizeof(PyWidget_Common_Input_SetTextPrompt) == 0x000018, "Wrong size on PyWidget_Common_Input_SetTextPrompt");
static_assert(offsetof(PyWidget_Common_Input_SetTextPrompt, Prompt) == 0x000000, "Member 'PyWidget_Common_Input_SetTextPrompt::Prompt' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetIsEditing
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Common_Input_SetIsEditing final
{
public:
	bool                                          IsEditing;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_SetIsEditing) == 0x000001, "Wrong alignment on PyWidget_Common_Input_SetIsEditing");
static_assert(sizeof(PyWidget_Common_Input_SetIsEditing) == 0x000001, "Wrong size on PyWidget_Common_Input_SetIsEditing");
static_assert(offsetof(PyWidget_Common_Input_SetIsEditing, IsEditing) == 0x000000, "Member 'PyWidget_Common_Input_SetIsEditing::IsEditing' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.UpdateWidgetStyleWithEditState
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Common_Input_UpdateWidgetStyleWithEditState final
{
public:
	bool                                          IsEditing;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_UpdateWidgetStyleWithEditState) == 0x000001, "Wrong alignment on PyWidget_Common_Input_UpdateWidgetStyleWithEditState");
static_assert(sizeof(PyWidget_Common_Input_UpdateWidgetStyleWithEditState) == 0x000001, "Wrong size on PyWidget_Common_Input_UpdateWidgetStyleWithEditState");
static_assert(offsetof(PyWidget_Common_Input_UpdateWidgetStyleWithEditState, IsEditing) == 0x000000, "Member 'PyWidget_Common_Input_UpdateWidgetStyleWithEditState::IsEditing' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetOperateBtnStyle
// 0x0400 (0x0400 - 0x0000)
struct PyWidget_Common_Input_SetOperateBtnStyle final
{
public:
	struct FButtonStyle                           BtnStyle;                                          // 0x0000(0x0400)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyWidget_Common_Input_SetOperateBtnStyle) == 0x000010, "Wrong alignment on PyWidget_Common_Input_SetOperateBtnStyle");
static_assert(sizeof(PyWidget_Common_Input_SetOperateBtnStyle) == 0x000400, "Wrong size on PyWidget_Common_Input_SetOperateBtnStyle");
static_assert(offsetof(PyWidget_Common_Input_SetOperateBtnStyle, BtnStyle) == 0x000000, "Member 'PyWidget_Common_Input_SetOperateBtnStyle::BtnStyle' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetIsSearch
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Common_Input_SetIsSearch final
{
public:
	bool                                          IsSearch;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_SetIsSearch) == 0x000001, "Wrong alignment on PyWidget_Common_Input_SetIsSearch");
static_assert(sizeof(PyWidget_Common_Input_SetIsSearch) == 0x000001, "Wrong size on PyWidget_Common_Input_SetIsSearch");
static_assert(offsetof(PyWidget_Common_Input_SetIsSearch, IsSearch) == 0x000000, "Member 'PyWidget_Common_Input_SetIsSearch::IsSearch' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetIsPassword
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Common_Input_SetIsPassword final
{
public:
	bool                                          IsPassword;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_SetIsPassword) == 0x000001, "Wrong alignment on PyWidget_Common_Input_SetIsPassword");
static_assert(sizeof(PyWidget_Common_Input_SetIsPassword) == 0x000001, "Wrong size on PyWidget_Common_Input_SetIsPassword");
static_assert(offsetof(PyWidget_Common_Input_SetIsPassword, IsPassword) == 0x000000, "Member 'PyWidget_Common_Input_SetIsPassword::IsPassword' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.GetLenUTFEight
// 0x0018 (0x0018 - 0x0000)
struct PyWidget_Common_Input_GetLenUTFEight final
{
public:
	class FString                                 Str;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_GetLenUTFEight) == 0x000008, "Wrong alignment on PyWidget_Common_Input_GetLenUTFEight");
static_assert(sizeof(PyWidget_Common_Input_GetLenUTFEight) == 0x000018, "Wrong size on PyWidget_Common_Input_GetLenUTFEight");
static_assert(offsetof(PyWidget_Common_Input_GetLenUTFEight, Str) == 0x000000, "Member 'PyWidget_Common_Input_GetLenUTFEight::Str' has a wrong offset!");
static_assert(offsetof(PyWidget_Common_Input_GetLenUTFEight, ReturnValue) == 0x000010, "Member 'PyWidget_Common_Input_GetLenUTFEight::ReturnValue' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetInputText
// 0x0018 (0x0018 - 0x0000)
struct PyWidget_Common_Input_SetInputText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm)
};
static_assert(alignof(PyWidget_Common_Input_SetInputText) == 0x000008, "Wrong alignment on PyWidget_Common_Input_SetInputText");
static_assert(sizeof(PyWidget_Common_Input_SetInputText) == 0x000018, "Wrong size on PyWidget_Common_Input_SetInputText");
static_assert(offsetof(PyWidget_Common_Input_SetInputText, Text) == 0x000000, "Member 'PyWidget_Common_Input_SetInputText::Text' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.GetInputText
// 0x0018 (0x0018 - 0x0000)
struct PyWidget_Common_Input_GetInputText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(PyWidget_Common_Input_GetInputText) == 0x000008, "Wrong alignment on PyWidget_Common_Input_GetInputText");
static_assert(sizeof(PyWidget_Common_Input_GetInputText) == 0x000018, "Wrong size on PyWidget_Common_Input_GetInputText");
static_assert(offsetof(PyWidget_Common_Input_GetInputText, ReturnValue) == 0x000000, "Member 'PyWidget_Common_Input_GetInputText::ReturnValue' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetTipsText
// 0x0020 (0x0020 - 0x0000)
struct PyWidget_Common_Input_SetTipsText final
{
public:
	struct FInputTips                             Tips;                                              // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyWidget_Common_Input_SetTipsText) == 0x000008, "Wrong alignment on PyWidget_Common_Input_SetTipsText");
static_assert(sizeof(PyWidget_Common_Input_SetTipsText) == 0x000020, "Wrong size on PyWidget_Common_Input_SetTipsText");
static_assert(offsetof(PyWidget_Common_Input_SetTipsText, Tips) == 0x000000, "Member 'PyWidget_Common_Input_SetTipsText::Tips' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetTipEnabled
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Common_Input_SetTipEnabled final
{
public:
	bool                                          TipEnabled;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_SetTipEnabled) == 0x000001, "Wrong alignment on PyWidget_Common_Input_SetTipEnabled");
static_assert(sizeof(PyWidget_Common_Input_SetTipEnabled) == 0x000001, "Wrong size on PyWidget_Common_Input_SetTipEnabled");
static_assert(offsetof(PyWidget_Common_Input_SetTipEnabled, TipEnabled) == 0x000000, "Member 'PyWidget_Common_Input_SetTipEnabled::TipEnabled' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SubmitText
// 0x0020 (0x0020 - 0x0000)
struct PyWidget_Common_Input_SubmitText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm)
	bool                                          bIsEnter;                                          // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_SubmitText) == 0x000008, "Wrong alignment on PyWidget_Common_Input_SubmitText");
static_assert(sizeof(PyWidget_Common_Input_SubmitText) == 0x000020, "Wrong size on PyWidget_Common_Input_SubmitText");
static_assert(offsetof(PyWidget_Common_Input_SubmitText, Text) == 0x000000, "Member 'PyWidget_Common_Input_SubmitText::Text' has a wrong offset!");
static_assert(offsetof(PyWidget_Common_Input_SubmitText, bIsEnter) == 0x000018, "Member 'PyWidget_Common_Input_SubmitText::bIsEnter' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetMinTextLength
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_Common_Input_SetMinTextLength final
{
public:
	int32                                         Min_length;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_SetMinTextLength) == 0x000004, "Wrong alignment on PyWidget_Common_Input_SetMinTextLength");
static_assert(sizeof(PyWidget_Common_Input_SetMinTextLength) == 0x000004, "Wrong size on PyWidget_Common_Input_SetMinTextLength");
static_assert(offsetof(PyWidget_Common_Input_SetMinTextLength, Min_length) == 0x000000, "Member 'PyWidget_Common_Input_SetMinTextLength::Min_length' has a wrong offset!");

// PythonFunction PyWidget_Common_Input.PyWidget_Common_Input.SetMaxTextLength
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_Common_Input_SetMaxTextLength final
{
public:
	int32                                         Max_length;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_Input_SetMaxTextLength) == 0x000004, "Wrong alignment on PyWidget_Common_Input_SetMaxTextLength");
static_assert(sizeof(PyWidget_Common_Input_SetMaxTextLength) == 0x000004, "Wrong size on PyWidget_Common_Input_SetMaxTextLength");
static_assert(offsetof(PyWidget_Common_Input_SetMaxTextLength, Max_length) == 0x000000, "Member 'PyWidget_Common_Input_SetMaxTextLength::Max_length' has a wrong offset!");

}
