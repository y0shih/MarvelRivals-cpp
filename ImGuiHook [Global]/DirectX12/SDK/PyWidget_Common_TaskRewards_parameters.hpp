#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_TaskRewards

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_Common_TaskRewards.PyWidget_Common_TaskRewards.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_Common_TaskRewards_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Common_TaskRewards_OnAnimationFinished) == 0x000008, "Wrong alignment on PyWidget_Common_TaskRewards_OnAnimationFinished");
static_assert(sizeof(PyWidget_Common_TaskRewards_OnAnimationFinished) == 0x000008, "Wrong size on PyWidget_Common_TaskRewards_OnAnimationFinished");
static_assert(offsetof(PyWidget_Common_TaskRewards_OnAnimationFinished, Animation) == 0x000000, "Member 'PyWidget_Common_TaskRewards_OnAnimationFinished::Animation' has a wrong offset!");

}
