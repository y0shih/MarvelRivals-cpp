#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1048

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hero_1048_structs.hpp"
#include "Marvel_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// Class Hero_1048.Config_104831
// 0x0040 (0x00D8 - 0x0098)
class UConfig_104831 : public UMarvelAbilityConfig
{
public:
	int32                                         LaunchShurikenID;                                  // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FShurikenSpawnInfo>             ShurikenSpawnInfo;                                 // 0x00A0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                                AnchorOffset;                                      // 0x00B0(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RecallShurikenID;                                  // 0x00C8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxHomingDist;                                     // 0x00CC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHomingThroughCharacter;                           // 0x00D0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDebugDrawHomingPosition;                          // 0x00D1(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Config_104831">();
	}
	static class UConfig_104831* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfig_104831>();
	}
};
static_assert(alignof(UConfig_104831) == 0x000008, "Wrong alignment on UConfig_104831");
static_assert(sizeof(UConfig_104831) == 0x0000D8, "Wrong size on UConfig_104831");
static_assert(offsetof(UConfig_104831, LaunchShurikenID) == 0x000098, "Member 'UConfig_104831::LaunchShurikenID' has a wrong offset!");
static_assert(offsetof(UConfig_104831, ShurikenSpawnInfo) == 0x0000A0, "Member 'UConfig_104831::ShurikenSpawnInfo' has a wrong offset!");
static_assert(offsetof(UConfig_104831, AnchorOffset) == 0x0000B0, "Member 'UConfig_104831::AnchorOffset' has a wrong offset!");
static_assert(offsetof(UConfig_104831, RecallShurikenID) == 0x0000C8, "Member 'UConfig_104831::RecallShurikenID' has a wrong offset!");
static_assert(offsetof(UConfig_104831, MaxHomingDist) == 0x0000CC, "Member 'UConfig_104831::MaxHomingDist' has a wrong offset!");
static_assert(offsetof(UConfig_104831, bHomingThroughCharacter) == 0x0000D0, "Member 'UConfig_104831::bHomingThroughCharacter' has a wrong offset!");
static_assert(offsetof(UConfig_104831, bDebugDrawHomingPosition) == 0x0000D1, "Member 'UConfig_104831::bDebugDrawHomingPosition' has a wrong offset!");

// Class Hero_1048.Ability_104831
// 0x0040 (0x2590 - 0x2550)
class UAbility_104831 : public UMarvelGameplayAbility
{
public:
	EStage_104831                                 CurrentStage;                                      // 0x2550(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2551[0x7];                                     // 0x2551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TWeakObjectPtr<class AProjectile_10483101>> LaunchProjectiles;                                 // 0x2558(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class AProjectile_10483102>> RecallProjectiles;                                 // 0x2568(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UConfig_104831*                         Config;                                            // 0x2578(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2580[0x10];                                    // 0x2580(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	TArray<struct FVector> GetFirstHomingLocations(const EShurikenRecallType& RecallType);
	void OnProjectileSpawnSuccess(class AActor* SpawnActor, const struct FGameplayAbilityTargetDataHandle& Data);
	void RemoveAllShuriken(bool bLaunch, bool bRecall);
	void SetCurrentStageLocal(EStage_104831 NewStage);
	void SpawnLaunchShuriken();
	void SpawnRecallShuriken(const EShurikenRecallType& RecallType);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Ability_104831">();
	}
	static class UAbility_104831* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_104831>();
	}
};
static_assert(alignof(UAbility_104831) == 0x000008, "Wrong alignment on UAbility_104831");
static_assert(sizeof(UAbility_104831) == 0x002590, "Wrong size on UAbility_104831");
static_assert(offsetof(UAbility_104831, CurrentStage) == 0x002550, "Member 'UAbility_104831::CurrentStage' has a wrong offset!");
static_assert(offsetof(UAbility_104831, LaunchProjectiles) == 0x002558, "Member 'UAbility_104831::LaunchProjectiles' has a wrong offset!");
static_assert(offsetof(UAbility_104831, RecallProjectiles) == 0x002568, "Member 'UAbility_104831::RecallProjectiles' has a wrong offset!");
static_assert(offsetof(UAbility_104831, Config) == 0x002578, "Member 'UAbility_104831::Config' has a wrong offset!");

// Class Hero_1048.Projectile_10483101
// 0x0050 (0x2FB0 - 0x2F60)
class AProjectile_10483101 : public AMarvelAbilityTargetActor_Projectile
{
public:
	EShurikenState                                ShurikenState;                                     // 0x2F60(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2F61[0x7];                                     // 0x2F61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnShurikenStateChangeDispatcher;                   // 0x2F68(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AActor*                                 ValidHitTarget;                                    // 0x2F78(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2F80[0x30];                                    // 0x2F80(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AttachToTarget(const struct FHitResult& Hit);
	void ClearProjectileVelocity();
	void DetachFromActorWithReason(const class FString& Reason);
	void OnAttachActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
	void OnAttachAgentEndTask(class AActor* Actor);
	void OnAttachCharacterDeath(class AActor* InSourceAvatar, class AActor* InTargetAvatar, const struct FAttributeModifierHandle& ParamHandle);
	void OnComponentFracture();
	void SetShurikenStateLocal(EShurikenState NewState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Projectile_10483101">();
	}
	static class AProjectile_10483101* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProjectile_10483101>();
	}
};
static_assert(alignof(AProjectile_10483101) == 0x000010, "Wrong alignment on AProjectile_10483101");
static_assert(sizeof(AProjectile_10483101) == 0x002FB0, "Wrong size on AProjectile_10483101");
static_assert(offsetof(AProjectile_10483101, ShurikenState) == 0x002F60, "Member 'AProjectile_10483101::ShurikenState' has a wrong offset!");
static_assert(offsetof(AProjectile_10483101, OnShurikenStateChangeDispatcher) == 0x002F68, "Member 'AProjectile_10483101::OnShurikenStateChangeDispatcher' has a wrong offset!");
static_assert(offsetof(AProjectile_10483101, ValidHitTarget) == 0x002F78, "Member 'AProjectile_10483101::ValidHitTarget' has a wrong offset!");

// Class Hero_1048.Projectile_10483102
// 0x0050 (0x2FB0 - 0x2F60)
class AProjectile_10483102 : public AMarvelAbilityTargetActor_Projectile
{
public:
	int32                                         ProjIndex;                                         // 0x2F60(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2F64[0x4];                                     // 0x2F64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HomingLocation;                                    // 0x2F68(0x0018)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 LaunchValidHitTarget;                              // 0x2F80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EShurikenRecallType                           RecallType;                                        // 0x2F88(0x0001)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2F89[0x7];                                     // 0x2F89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectileHomingComponent*             HomingComponent;                                   // 0x2F90(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2F98[0x18];                                    // 0x2F98(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnEndHomingSelf();
	void OnModifyMoveDelta(struct FVector* MoveDelta);
	void TryHomingInstigator(bool bNeedFixProjInfo);

	float K2_GetFirstSpeed() const;
	float K2_GetSecondSpeed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Projectile_10483102">();
	}
	static class AProjectile_10483102* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProjectile_10483102>();
	}
};
static_assert(alignof(AProjectile_10483102) == 0x000010, "Wrong alignment on AProjectile_10483102");
static_assert(sizeof(AProjectile_10483102) == 0x002FB0, "Wrong size on AProjectile_10483102");
static_assert(offsetof(AProjectile_10483102, ProjIndex) == 0x002F60, "Member 'AProjectile_10483102::ProjIndex' has a wrong offset!");
static_assert(offsetof(AProjectile_10483102, HomingLocation) == 0x002F68, "Member 'AProjectile_10483102::HomingLocation' has a wrong offset!");
static_assert(offsetof(AProjectile_10483102, LaunchValidHitTarget) == 0x002F80, "Member 'AProjectile_10483102::LaunchValidHitTarget' has a wrong offset!");
static_assert(offsetof(AProjectile_10483102, RecallType) == 0x002F88, "Member 'AProjectile_10483102::RecallType' has a wrong offset!");
static_assert(offsetof(AProjectile_10483102, HomingComponent) == 0x002F90, "Member 'AProjectile_10483102::HomingComponent' has a wrong offset!");

// Class Hero_1048.PsylockeAnimInstance
// 0x0090 (0x0990 - 0x0900)
class UPsylockeAnimInstance final : public UMarvelAnimInstance
{
public:
	EAbilityState_104861                          AbilityStage_104861;                               // 0x0900(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_901[0x3];                                      // 0x0901(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AttackIndex_104861;                                // 0x0904(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         DashingPitch_104861;                               // 0x0908(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_90C[0x4];                                      // 0x090C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CurrentLocation;                                   // 0x0910(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                               CurrentRotation;                                   // 0x0928(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                          bShouldModifyRoot;                                 // 0x0940(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_941[0x3];                                      // 0x0941(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAbilityStage_104861                   AbilityStage_104861_UnSafe;                        // 0x0944(0x0008)(NoDestructor, NativeAccessSpecifierPrivate)
	float                                         DashPitch_104861_UnSafe;                           // 0x094C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                CurLocation_UnSafe;                                // 0x0950(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRotator                               CurRotation_UnSafe;                                // 0x0968(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                          ModifiedRootActive_UnSafe;                         // 0x0980(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_981[0xF];                                      // 0x0981(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PsylockeAnimInstance">();
	}
	static class UPsylockeAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPsylockeAnimInstance>();
	}
};
static_assert(alignof(UPsylockeAnimInstance) == 0x000010, "Wrong alignment on UPsylockeAnimInstance");
static_assert(sizeof(UPsylockeAnimInstance) == 0x000990, "Wrong size on UPsylockeAnimInstance");
static_assert(offsetof(UPsylockeAnimInstance, AbilityStage_104861) == 0x000900, "Member 'UPsylockeAnimInstance::AbilityStage_104861' has a wrong offset!");
static_assert(offsetof(UPsylockeAnimInstance, AttackIndex_104861) == 0x000904, "Member 'UPsylockeAnimInstance::AttackIndex_104861' has a wrong offset!");
static_assert(offsetof(UPsylockeAnimInstance, DashingPitch_104861) == 0x000908, "Member 'UPsylockeAnimInstance::DashingPitch_104861' has a wrong offset!");
static_assert(offsetof(UPsylockeAnimInstance, CurrentLocation) == 0x000910, "Member 'UPsylockeAnimInstance::CurrentLocation' has a wrong offset!");
static_assert(offsetof(UPsylockeAnimInstance, CurrentRotation) == 0x000928, "Member 'UPsylockeAnimInstance::CurrentRotation' has a wrong offset!");
static_assert(offsetof(UPsylockeAnimInstance, bShouldModifyRoot) == 0x000940, "Member 'UPsylockeAnimInstance::bShouldModifyRoot' has a wrong offset!");
static_assert(offsetof(UPsylockeAnimInstance, AbilityStage_104861_UnSafe) == 0x000944, "Member 'UPsylockeAnimInstance::AbilityStage_104861_UnSafe' has a wrong offset!");
static_assert(offsetof(UPsylockeAnimInstance, DashPitch_104861_UnSafe) == 0x00094C, "Member 'UPsylockeAnimInstance::DashPitch_104861_UnSafe' has a wrong offset!");
static_assert(offsetof(UPsylockeAnimInstance, CurLocation_UnSafe) == 0x000950, "Member 'UPsylockeAnimInstance::CurLocation_UnSafe' has a wrong offset!");
static_assert(offsetof(UPsylockeAnimInstance, CurRotation_UnSafe) == 0x000968, "Member 'UPsylockeAnimInstance::CurRotation_UnSafe' has a wrong offset!");
static_assert(offsetof(UPsylockeAnimInstance, ModifiedRootActive_UnSafe) == 0x000980, "Member 'UPsylockeAnimInstance::ModifiedRootActive_UnSafe' has a wrong offset!");

// Class Hero_1048.PsylockeCharacter
// 0x0020 (0x17E0 - 0x17C0)
class APsylockeCharacter : public AMarvelBaseCharacter
{
public:
	EPsylockeState                                CurrentState;                                      // 0x17B8(0x0001)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17B9[0x7];                                     // 0x17B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPsylockeStateChangeDispatcher;                   // 0x17C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UPsylockeMoveLogicBaseComponent*        PsylockeMoveLogic;                                 // 0x17D0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_17D8[0x8];                                     // 0x17D8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_CurrentState();
	void SetCharacterState(EPsylockeState NewState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PsylockeCharacter">();
	}
	static class APsylockeCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<APsylockeCharacter>();
	}
};
static_assert(alignof(APsylockeCharacter) == 0x000010, "Wrong alignment on APsylockeCharacter");
static_assert(sizeof(APsylockeCharacter) == 0x0017E0, "Wrong size on APsylockeCharacter");
static_assert(offsetof(APsylockeCharacter, CurrentState) == 0x0017B8, "Member 'APsylockeCharacter::CurrentState' has a wrong offset!");
static_assert(offsetof(APsylockeCharacter, OnPsylockeStateChangeDispatcher) == 0x0017C0, "Member 'APsylockeCharacter::OnPsylockeStateChangeDispatcher' has a wrong offset!");
static_assert(offsetof(APsylockeCharacter, PsylockeMoveLogic) == 0x0017D0, "Member 'APsylockeCharacter::PsylockeMoveLogic' has a wrong offset!");

// Class Hero_1048.PsylockeMoveLogicBaseComponent
// 0x0000 (0x03F0 - 0x03F0)
class UPsylockeMoveLogicBaseComponent final : public UMarvelMoveLogicBaseComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PsylockeMoveLogicBaseComponent">();
	}
	static class UPsylockeMoveLogicBaseComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPsylockeMoveLogicBaseComponent>();
	}
};
static_assert(alignof(UPsylockeMoveLogicBaseComponent) == 0x000008, "Wrong alignment on UPsylockeMoveLogicBaseComponent");
static_assert(sizeof(UPsylockeMoveLogicBaseComponent) == 0x0003F0, "Wrong size on UPsylockeMoveLogicBaseComponent");

// Class Hero_1048.PsylockeMovementComponent
// 0x0000 (0x1AF0 - 0x1AF0)
class UPsylockeMovementComponent final : public UMarvelCharacterMovementComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PsylockeMovementComponent">();
	}
	static class UPsylockeMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPsylockeMovementComponent>();
	}
};
static_assert(alignof(UPsylockeMovementComponent) == 0x000010, "Wrong alignment on UPsylockeMovementComponent");
static_assert(sizeof(UPsylockeMovementComponent) == 0x001AF0, "Wrong size on UPsylockeMovementComponent");

// Class Hero_1048.Summoned_104892
// 0x0050 (0x1830 - 0x17E0)
class ASummoned_104892 final : public APsylockeCharacter
{
public:
	uint8                                         Pad_17E0[0x8];                                     // 0x17E0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarvelSummonedComponent*               SummonedComponent;                                 // 0x17E8(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                           PhantomCueTag;                                     // 0x17F0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_17FC[0x4];                                     // 0x17FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class AAIController>              SummonedControllerClass;                           // 0x1800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MaxAccumulativeDamage;                             // 0x1808(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_180C[0xC];                                     // 0x180C(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 SourceActor;                                       // 0x1818(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                 QuoteSource;                                       // 0x1820(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1828[0x8];                                     // 0x1828(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnAbilitySystemDeath(class AActor* InSourceAvatar, class AActor* InTargetAvatar, const struct FAttributeModifierHandle& ModifierParameterHandle);

	class UMarvelSummonedComponent* GetSummonedComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Summoned_104892">();
	}
	static class ASummoned_104892* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASummoned_104892>();
	}
};
static_assert(alignof(ASummoned_104892) == 0x000010, "Wrong alignment on ASummoned_104892");
static_assert(sizeof(ASummoned_104892) == 0x001830, "Wrong size on ASummoned_104892");
static_assert(offsetof(ASummoned_104892, SummonedComponent) == 0x0017E8, "Member 'ASummoned_104892::SummonedComponent' has a wrong offset!");
static_assert(offsetof(ASummoned_104892, PhantomCueTag) == 0x0017F0, "Member 'ASummoned_104892::PhantomCueTag' has a wrong offset!");
static_assert(offsetof(ASummoned_104892, SummonedControllerClass) == 0x001800, "Member 'ASummoned_104892::SummonedControllerClass' has a wrong offset!");
static_assert(offsetof(ASummoned_104892, MaxAccumulativeDamage) == 0x001808, "Member 'ASummoned_104892::MaxAccumulativeDamage' has a wrong offset!");
static_assert(offsetof(ASummoned_104892, SourceActor) == 0x001818, "Member 'ASummoned_104892::SourceActor' has a wrong offset!");
static_assert(offsetof(ASummoned_104892, QuoteSource) == 0x001820, "Member 'ASummoned_104892::QuoteSource' has a wrong offset!");

}
