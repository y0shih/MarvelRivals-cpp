#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyActionLogController

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyActionLogController.PyActionLogController
// 0x0000 (0x00E0 - 0x00E0)
class UPyActionLogController : public UActionLogController
{
public:
	void OnInitialize();
	void OnShutdown();
	void OnPointActive(int32 Player_uid, int32 Point_id);
	void CreateLevelStatisticsController();
	void DestroyLevelStatisticsController();
	void OnPartNameChange(const class FString& Current_part_name);
	void OnMatchStateChanged(EMatchState MatchState);
	void OnTransitionEnd();
	void OnOverTimeStart();
	void OnOverTimeEnd();
	void OnEscortRebirth();
	void OnFightEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyActionLogController">();
	}
	static class UPyActionLogController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyActionLogController>();
	}
};
static_assert(alignof(UPyActionLogController) == 0x000008, "Wrong alignment on UPyActionLogController");
static_assert(sizeof(UPyActionLogController) == 0x0000E0, "Wrong size on UPyActionLogController");

}
