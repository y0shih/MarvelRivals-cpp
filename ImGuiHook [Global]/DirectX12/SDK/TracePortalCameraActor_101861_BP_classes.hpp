#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TracePortalCameraActor_101861_BP

#include "Basic.hpp"

#include "Hero_1018_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TracePortalCameraActor_101861_BP.TracePortalCameraActor_101861_BP_C
// 0x0010 (0x0F80 - 0x0F70)
class ATracePortalCameraActor_101861_BP_C final : public ATracePortalCameraActor_101861
{
public:
	class USummonedAbilitySystemComponent*        AbilitySystemComponent;                            // 0x0F70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TracePortalCameraActor_101861_BP_C">();
	}
	static class ATracePortalCameraActor_101861_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATracePortalCameraActor_101861_BP_C>();
	}
};
static_assert(alignof(ATracePortalCameraActor_101861_BP_C) == 0x000010, "Wrong alignment on ATracePortalCameraActor_101861_BP_C");
static_assert(sizeof(ATracePortalCameraActor_101861_BP_C) == 0x000F80, "Wrong size on ATracePortalCameraActor_101861_BP_C");
static_assert(offsetof(ATracePortalCameraActor_101861_BP_C, AbilitySystemComponent) == 0x000F70, "Member 'ATracePortalCameraActor_101861_BP_C::AbilitySystemComponent' has a wrong offset!");

}
