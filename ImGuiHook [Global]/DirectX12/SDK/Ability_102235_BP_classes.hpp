#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_102235_BP

#include "Basic.hpp"

#include "PyAbility_102235_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_102235_BP.Ability_102235_BP_C
// 0x0008 (0x2558 - 0x2550)
class UAbility_102235_BP_C final : public UPyAbility_102235
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2550(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ability_102235_BP(int32 EntryPoint);
	void K2_ActivateAbility();
	void SetAbilityExtraWidget_1(class UUserWidget* InExtraWidget);
	void SetAbilityStatusWidget_1(class UUserWidget* InUserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_102235_BP_C">();
	}
	static class UAbility_102235_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_102235_BP_C>();
	}
};
static_assert(alignof(UAbility_102235_BP_C) == 0x000008, "Wrong alignment on UAbility_102235_BP_C");
static_assert(sizeof(UAbility_102235_BP_C) == 0x002558, "Wrong size on UAbility_102235_BP_C");
static_assert(offsetof(UAbility_102235_BP_C, UberGraphFrame) == 0x002550, "Member 'UAbility_102235_BP_C::UberGraphFrame' has a wrong offset!");

}
