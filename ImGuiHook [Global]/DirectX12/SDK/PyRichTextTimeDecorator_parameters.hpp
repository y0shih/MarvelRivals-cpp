#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyRichTextTimeDecorator

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyRichTextTimeDecorator.PyRichTextTimeDecorator.FormatTimeFromPython
// 0x0020 (0x0020 - 0x0000)
struct PyRichTextTimeDecorator_FormatTimeFromPython final
{
public:
	class FString                                 TimeString;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(PyRichTextTimeDecorator_FormatTimeFromPython) == 0x000008, "Wrong alignment on PyRichTextTimeDecorator_FormatTimeFromPython");
static_assert(sizeof(PyRichTextTimeDecorator_FormatTimeFromPython) == 0x000020, "Wrong size on PyRichTextTimeDecorator_FormatTimeFromPython");
static_assert(offsetof(PyRichTextTimeDecorator_FormatTimeFromPython, TimeString) == 0x000000, "Member 'PyRichTextTimeDecorator_FormatTimeFromPython::TimeString' has a wrong offset!");
static_assert(offsetof(PyRichTextTimeDecorator_FormatTimeFromPython, ReturnValue) == 0x000010, "Member 'PyRichTextTimeDecorator_FormatTimeFromPython::ReturnValue' has a wrong offset!");

}
