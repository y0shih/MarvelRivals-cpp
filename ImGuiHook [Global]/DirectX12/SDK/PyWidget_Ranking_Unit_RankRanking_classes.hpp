#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Ranking_Unit_RankRanking

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Ranking_Unit_RankRanking.PyWidget_Ranking_Unit_RankRanking
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_Ranking_Unit_RankRanking : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetAnimationStart(float Time);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Ranking_Unit_RankRanking">();
	}
	static class UPyWidget_Ranking_Unit_RankRanking* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Ranking_Unit_RankRanking>();
	}
};
static_assert(alignof(UPyWidget_Ranking_Unit_RankRanking) == 0x000008, "Wrong alignment on UPyWidget_Ranking_Unit_RankRanking");
static_assert(sizeof(UPyWidget_Ranking_Unit_RankRanking) == 0x0005E8, "Wrong size on UPyWidget_Ranking_Unit_RankRanking");

}
