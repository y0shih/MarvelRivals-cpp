#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_MatchResult

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_MatchResult.PyWidget_MatchResult.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_MatchResult_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_MatchResult_OnAnimationFinished) == 0x000008, "Wrong alignment on PyWidget_MatchResult_OnAnimationFinished");
static_assert(sizeof(PyWidget_MatchResult_OnAnimationFinished) == 0x000008, "Wrong size on PyWidget_MatchResult_OnAnimationFinished");
static_assert(offsetof(PyWidget_MatchResult_OnAnimationFinished, Animation) == 0x000000, "Member 'PyWidget_MatchResult_OnAnimationFinished::Animation' has a wrong offset!");

// PythonFunction PyWidget_MatchResult.PyWidget_MatchResultLighting.OnLightVisibilityChanged
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_MatchResultLighting_OnLightVisibilityChanged final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_MatchResultLighting_OnLightVisibilityChanged) == 0x000001, "Wrong alignment on PyWidget_MatchResultLighting_OnLightVisibilityChanged");
static_assert(sizeof(PyWidget_MatchResultLighting_OnLightVisibilityChanged) == 0x000001, "Wrong size on PyWidget_MatchResultLighting_OnLightVisibilityChanged");
static_assert(offsetof(PyWidget_MatchResultLighting_OnLightVisibilityChanged, InVisibility) == 0x000000, "Member 'PyWidget_MatchResultLighting_OnLightVisibilityChanged::InVisibility' has a wrong offset!");

}
