#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: One033001_HeroList_LightBP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass 1033001_HeroList_LightBP.1033001_HeroList_LightBP_C
// 0x0030 (0x04A0 - 0x0470)
class AOne033001_HeroList_LightBP_C final : public AActor
{
public:
	class UPointLightComponent*                   ARM02;                                             // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    Fill_Light1;                                       // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             Rim_Light_02;                                      // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             Main_Light;                                        // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             Rim_Light_01;                                      // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"1033001_HeroList_LightBP_C">();
	}
	static class AOne033001_HeroList_LightBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AOne033001_HeroList_LightBP_C>();
	}
};
static_assert(alignof(AOne033001_HeroList_LightBP_C) == 0x000008, "Wrong alignment on AOne033001_HeroList_LightBP_C");
static_assert(sizeof(AOne033001_HeroList_LightBP_C) == 0x0004A0, "Wrong size on AOne033001_HeroList_LightBP_C");
static_assert(offsetof(AOne033001_HeroList_LightBP_C, ARM02) == 0x000470, "Member 'AOne033001_HeroList_LightBP_C::ARM02' has a wrong offset!");
static_assert(offsetof(AOne033001_HeroList_LightBP_C, Fill_Light1) == 0x000478, "Member 'AOne033001_HeroList_LightBP_C::Fill_Light1' has a wrong offset!");
static_assert(offsetof(AOne033001_HeroList_LightBP_C, Rim_Light_02) == 0x000480, "Member 'AOne033001_HeroList_LightBP_C::Rim_Light_02' has a wrong offset!");
static_assert(offsetof(AOne033001_HeroList_LightBP_C, Main_Light) == 0x000488, "Member 'AOne033001_HeroList_LightBP_C::Main_Light' has a wrong offset!");
static_assert(offsetof(AOne033001_HeroList_LightBP_C, Rim_Light_01) == 0x000490, "Member 'AOne033001_HeroList_LightBP_C::Rim_Light_01' has a wrong offset!");
static_assert(offsetof(AOne033001_HeroList_LightBP_C, DefaultSceneRoot) == 0x000498, "Member 'AOne033001_HeroList_LightBP_C::DefaultSceneRoot' has a wrong offset!");

}

