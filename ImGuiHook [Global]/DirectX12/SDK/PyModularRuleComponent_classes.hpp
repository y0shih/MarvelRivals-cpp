#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyModularRuleComponent

#include "Basic.hpp"

#include "MarvelLevel_structs.hpp"
#include "Marvel_structs.hpp"
#include "PyRuleComponent_classes.hpp"


namespace SDK
{

// PythonClass PyModularRuleComponent.PyModularRuleComponent
// 0x0008 (0x00F8 - 0x00F0)
class UPyModularRuleComponent final : public UPyRuleComponent
{
public:
	EHeroSelectType                               HeroSelectType;                                    // 0x00F0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnMapLoaded();
	void OnLevelStart();
	void OnPrepareStartStart();
	void OnFightStart();
	void OnCampStart(const class FString& Name_0, EBattleSide AttackSide, int32 RemainTime);
	class AActor* GetCurrentCamp();
	class AActor* GetCampByName(const class FString& CampName);
	void SetSelectHeroAllowedAnytime();
	void SetSelectHeroAllowedWhenDead();
	void SetSelectHeroAllowedWhenInBirthbaseOrDead();
	void SetSelectHeroNotAllowed();
	void SetDefaultHeroID(int32 HeroID);
	void SetBattleSideDefaultHeroID(const TMap<EBattleSide, int32>& DefaultHeroMap);
	void SetAllPlayerHeroByHeroId(int32 HeroID);
	void SetSidePlayerHeroByHeroId(int32 AttackSideHeroID, int32 DefendSideHeroID);
	void SetPlayerHeroByHeroId(int32 UID, int32 HeroID);
	float GetPayloadProgress();
	void SideGetPoints(EBattleSide BattleSide, float Score);
	bool CheckSideScore(float Score);
	EBattleSide GetScoreSide(float Score);
	void EscortTouchProgressCheck(float Progress, EBattleSide AttackSide);
	void OnSpawnCharacterBP(class AMarvelBaseCharacter* Character);
	void AddBuffToPlayer(int32 BuffID, const TArray<int32>& ActorList);
	void RemoveBuffToPlayer(int32 BuffID, const TArray<int32>& PlayerUIDList);
	void RespawnPlayer(const TArray<int32>& ActorList);
	TArray<int32> GetAllPlayer();
	int32 GetPlayerDeathCount(int32 UID);
	void SetInstantReborn();
	void OnPlayerAbilityHit(const TArray<int32>& PlayerList, const TArray<int32>& AbilityList, const class FString& EventName);
	void OnActorWeaponAmmoUse(class AActor* Source, class AActor* Target, int32 AbilityID, bool bHit, bool bIsCritHit, const struct FGlobalEventExtraData& ExtraData);
	void AddCharHealthAttr(int32 PlayerUID, float PercentValue, float FixedValue);
	void ReduceCharHealthAttr(int32 PlayerUID, float PercentValue, float FixedValue);
	void SetBirthBaseState(const TMap<class FString, bool>& BirthbaseState);
	void SetBirthBaseOpen(const TMap<class FString, bool>& BirthbaseState);
	void EndWithResult(EBattleSide WinnerSide);
	void UILoaded();
	void BindPlayerDeathEvent(int32 PlayerUID, const class FString& EventName);
	void OpenSelectHeroPanel(int32 UID);
	void SetModularHeroID(int32 HeroID);
	void ClearPlayerAbilityCD(class AMarvelBaseCharacter* Character);
	void ChargePlayerAbility(class AMarvelBaseCharacter* Character);
	void MonitorPlayerDamage(class AMarvelBaseCharacter* Character);
	void ApplyDamageTrigger(class AActor* Source, class AActor* Target, float Damage, int32 AbilityID);
	void MonitorPlayerTreat(class AMarvelBaseCharacter* Character);
	void ApplyTreatTrigger(class AActor* Source, class AActor* Target, float Treat, int32 AbilityID);
	void MonitorPlayerBuff(class AMarvelBaseCharacter* Character);
	void ApplyBuffTrigger(class AActor* Source, class AActor* Target, int32 BuffID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyModularRuleComponent">();
	}
	static class UPyModularRuleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyModularRuleComponent>();
	}
};
static_assert(alignof(UPyModularRuleComponent) == 0x000008, "Wrong alignment on UPyModularRuleComponent");
static_assert(sizeof(UPyModularRuleComponent) == 0x0000F8, "Wrong size on UPyModularRuleComponent");
static_assert(offsetof(UPyModularRuleComponent, HeroSelectType) == 0x0000F0, "Member 'UPyModularRuleComponent::HeroSelectType' has a wrong offset!");

}
