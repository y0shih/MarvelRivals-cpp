#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyTabData_1011

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyTabData_1011.PyTabData_1011.AddTabDataValue
// 0x0018 (0x0018 - 0x0000)
struct PyTabData_1011_AddTabDataValue final
{
public:
	class AActor*                                 Source;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         BuffID;                                            // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyTabData_1011_AddTabDataValue) == 0x000008, "Wrong alignment on PyTabData_1011_AddTabDataValue");
static_assert(sizeof(PyTabData_1011_AddTabDataValue) == 0x000018, "Wrong size on PyTabData_1011_AddTabDataValue");
static_assert(offsetof(PyTabData_1011_AddTabDataValue, Source) == 0x000000, "Member 'PyTabData_1011_AddTabDataValue::Source' has a wrong offset!");
static_assert(offsetof(PyTabData_1011_AddTabDataValue, Target) == 0x000008, "Member 'PyTabData_1011_AddTabDataValue::Target' has a wrong offset!");
static_assert(offsetof(PyTabData_1011_AddTabDataValue, BuffID) == 0x000010, "Member 'PyTabData_1011_AddTabDataValue::BuffID' has a wrong offset!");

}
