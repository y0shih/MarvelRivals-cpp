#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyControlAnalyzerSubsystem

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyControlAnalyzerSubsystem.PyControlAnalyzerSubsystem.SendWarning
// 0x0010 (0x0010 - 0x0000)
struct PyControlAnalyzerSubsystem_SendWarning final
{
public:
	class FString                                 Warning_str;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyControlAnalyzerSubsystem_SendWarning) == 0x000008, "Wrong alignment on PyControlAnalyzerSubsystem_SendWarning");
static_assert(sizeof(PyControlAnalyzerSubsystem_SendWarning) == 0x000010, "Wrong size on PyControlAnalyzerSubsystem_SendWarning");
static_assert(offsetof(PyControlAnalyzerSubsystem_SendWarning, Warning_str) == 0x000000, "Member 'PyControlAnalyzerSubsystem_SendWarning::Warning_str' has a wrong offset!");

}
