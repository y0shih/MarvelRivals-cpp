#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIParticle

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum UIParticle.ECurveType
// NumValues: 0x0004
enum class ECurveType : uint8
{
	ParticleLifePercent                      = 0,
	ParticleLifeTime                         = 1,
	EmitLifeTime                             = 2,
	ECurveType_MAX                           = 3,
};

// Enum UIParticle.EEmitterType
// NumValues: 0x0004
enum class EEmitterType : uint8
{
	Gravity                                  = 0,
	Radial                                   = 1,
	Curve                                    = 2,
	EEmitterType_MAX                         = 3,
};

// Enum UIParticle.EPositionType
// NumValues: 0x0003
enum class EPositionType : uint8
{
	FREE                                     = 0,
	RELATIVE_0                               = 1,
	EPositionType_MAX                        = 2,
};

// Enum UIParticle.EParticleDrawEffect
// NumValues: 0x000A
enum class EParticleDrawEffect : uint8
{
	None                                     = 0,
	NoBlending                               = 1,
	PreMultipliedAlpha                       = 2,
	NoGamma                                  = 4,
	InvertAlpha                              = 8,
	NoPixelSnapping                          = 16,
	DisabledEffect                           = 32,
	IgnoreTextureAlpha                       = 64,
	ReverseGamma                             = 128,
	EParticleDrawEffect_MAX                  = 129,
};

// Enum UIParticle.EUIParticlePropertyType
// NumValues: 0x0009
enum class EUIParticlePropertyType : uint8
{
	Float                                    = 0,
	FloatRange                               = 1,
	FloatCurve                               = 2,
	FloatCurveRange                          = 3,
	Vector2D                                 = 4,
	Vector2DRange                            = 5,
	LinearColorCurve                         = 6,
	LinearColorCurveRange                    = 7,
	EUIParticlePropertyType_MAX              = 8,
};

// ScriptStruct UIParticle.EasyParticleChildEmitterArray
// 0x0038 (0x0038 - 0x0000)
struct FEasyParticleChildEmitterArray final
{
public:
	class UUIParticleEmitterAsset*                ChildrenAsset;                                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              EmitterStartTime;                                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10[0x28];                                      // 0x0010(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FEasyParticleChildEmitterArray) == 0x000008, "Wrong alignment on FEasyParticleChildEmitterArray");
static_assert(sizeof(FEasyParticleChildEmitterArray) == 0x000038, "Wrong size on FEasyParticleChildEmitterArray");
static_assert(offsetof(FEasyParticleChildEmitterArray, ChildrenAsset) == 0x000000, "Member 'FEasyParticleChildEmitterArray::ChildrenAsset' has a wrong offset!");
static_assert(offsetof(FEasyParticleChildEmitterArray, EmitterStartTime) == 0x000008, "Member 'FEasyParticleChildEmitterArray::EmitterStartTime' has a wrong offset!");

// ScriptStruct UIParticle.UIParticleEmitterInfo
// 0x0018 (0x0018 - 0x0000)
struct FUIParticleEmitterInfo final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ActiveDelay;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ZOrder;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIParticleEmitterAsset*                Asset;                                             // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUIParticleEmitterInfo) == 0x000008, "Wrong alignment on FUIParticleEmitterInfo");
static_assert(sizeof(FUIParticleEmitterInfo) == 0x000018, "Wrong size on FUIParticleEmitterInfo");
static_assert(offsetof(FUIParticleEmitterInfo, Disable) == 0x000000, "Member 'FUIParticleEmitterInfo::Disable' has a wrong offset!");
static_assert(offsetof(FUIParticleEmitterInfo, ActiveDelay) == 0x000004, "Member 'FUIParticleEmitterInfo::ActiveDelay' has a wrong offset!");
static_assert(offsetof(FUIParticleEmitterInfo, ZOrder) == 0x000008, "Member 'FUIParticleEmitterInfo::ZOrder' has a wrong offset!");
static_assert(offsetof(FUIParticleEmitterInfo, Asset) == 0x000010, "Member 'FUIParticleEmitterInfo::Asset' has a wrong offset!");

// ScriptStruct UIParticle.LerpKeyVector2D
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x04) FLerpKeyVector2D final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLerpKeyVector2D) == 0x000004, "Wrong alignment on FLerpKeyVector2D");
static_assert(sizeof(FLerpKeyVector2D) == 0x000008, "Wrong size on FLerpKeyVector2D");

// ScriptStruct UIParticle.LerpKeyColor
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x04) FLerpKeyColor final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLerpKeyColor) == 0x000004, "Wrong alignment on FLerpKeyColor");
static_assert(sizeof(FLerpKeyColor) == 0x000010, "Wrong size on FLerpKeyColor");

// ScriptStruct UIParticle.UIParticleFloatCurve
// 0x0088 (0x0088 - 0x0000)
struct FUIParticleFloatCurve final
{
public:
	struct FRichCurve                             CurveData;                                         // 0x0000(0x0080)(Edit, NativeAccessSpecifierPublic)
	ECurveType                                    CurveType;                                         // 0x0080(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Loop;                                              // 0x0081(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FUIParticleFloatCurve) == 0x000008, "Wrong alignment on FUIParticleFloatCurve");
static_assert(sizeof(FUIParticleFloatCurve) == 0x000088, "Wrong size on FUIParticleFloatCurve");
static_assert(offsetof(FUIParticleFloatCurve, CurveData) == 0x000000, "Member 'FUIParticleFloatCurve::CurveData' has a wrong offset!");
static_assert(offsetof(FUIParticleFloatCurve, CurveType) == 0x000080, "Member 'FUIParticleFloatCurve::CurveType' has a wrong offset!");
static_assert(offsetof(FUIParticleFloatCurve, Loop) == 0x000081, "Member 'FUIParticleFloatCurve::Loop' has a wrong offset!");

// ScriptStruct UIParticle.ChildEmitter
// 0x0018 (0x0018 - 0x0000)
struct FChildEmitter final
{
public:
	float                                         ActivityInParentLifeTime;                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          FollowParentPosition;                              // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FollowParentSpeedPercent;                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ZOrderOffset;                                      // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUIParticleEmitterAsset*                ChildrenAsset;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FChildEmitter) == 0x000008, "Wrong alignment on FChildEmitter");
static_assert(sizeof(FChildEmitter) == 0x000018, "Wrong size on FChildEmitter");
static_assert(offsetof(FChildEmitter, ActivityInParentLifeTime) == 0x000000, "Member 'FChildEmitter::ActivityInParentLifeTime' has a wrong offset!");
static_assert(offsetof(FChildEmitter, FollowParentPosition) == 0x000004, "Member 'FChildEmitter::FollowParentPosition' has a wrong offset!");
static_assert(offsetof(FChildEmitter, FollowParentSpeedPercent) == 0x000008, "Member 'FChildEmitter::FollowParentSpeedPercent' has a wrong offset!");
static_assert(offsetof(FChildEmitter, ZOrderOffset) == 0x00000C, "Member 'FChildEmitter::ZOrderOffset' has a wrong offset!");
static_assert(offsetof(FChildEmitter, ChildrenAsset) == 0x000010, "Member 'FChildEmitter::ChildrenAsset' has a wrong offset!");

// ScriptStruct UIParticle.Range_FloatCurve
// 0x0110 (0x0110 - 0x0000)
struct FRange_FloatCurve final
{
public:
	struct FUIParticleFloatCurve                  Min;                                               // 0x0000(0x0088)(Edit, NativeAccessSpecifierPublic)
	struct FUIParticleFloatCurve                  Max;                                               // 0x0088(0x0088)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRange_FloatCurve) == 0x000008, "Wrong alignment on FRange_FloatCurve");
static_assert(sizeof(FRange_FloatCurve) == 0x000110, "Wrong size on FRange_FloatCurve");
static_assert(offsetof(FRange_FloatCurve, Min) == 0x000000, "Member 'FRange_FloatCurve::Min' has a wrong offset!");
static_assert(offsetof(FRange_FloatCurve, Max) == 0x000088, "Member 'FRange_FloatCurve::Max' has a wrong offset!");

// ScriptStruct UIParticle.UIParticleLinearColorCurve
// 0x0208 (0x0208 - 0x0000)
struct FUIParticleLinearColorCurve final
{
public:
	struct FRichCurve                             ColorCurves[0x4];                                  // 0x0000(0x0080)(Edit, NativeAccessSpecifierPublic)
	ECurveType                                    CurveType;                                         // 0x0200(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Loop;                                              // 0x0201(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_202[0x6];                                      // 0x0202(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FUIParticleLinearColorCurve) == 0x000008, "Wrong alignment on FUIParticleLinearColorCurve");
static_assert(sizeof(FUIParticleLinearColorCurve) == 0x000208, "Wrong size on FUIParticleLinearColorCurve");
static_assert(offsetof(FUIParticleLinearColorCurve, ColorCurves) == 0x000000, "Member 'FUIParticleLinearColorCurve::ColorCurves' has a wrong offset!");
static_assert(offsetof(FUIParticleLinearColorCurve, CurveType) == 0x000200, "Member 'FUIParticleLinearColorCurve::CurveType' has a wrong offset!");
static_assert(offsetof(FUIParticleLinearColorCurve, Loop) == 0x000201, "Member 'FUIParticleLinearColorCurve::Loop' has a wrong offset!");

// ScriptStruct UIParticle.Range_LinearColorCurve
// 0x0410 (0x0410 - 0x0000)
struct FRange_LinearColorCurve final
{
public:
	struct FUIParticleLinearColorCurve            Min;                                               // 0x0000(0x0208)(Edit, NativeAccessSpecifierPublic)
	struct FUIParticleLinearColorCurve            Max;                                               // 0x0208(0x0208)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRange_LinearColorCurve) == 0x000008, "Wrong alignment on FRange_LinearColorCurve");
static_assert(sizeof(FRange_LinearColorCurve) == 0x000410, "Wrong size on FRange_LinearColorCurve");
static_assert(offsetof(FRange_LinearColorCurve, Min) == 0x000000, "Member 'FRange_LinearColorCurve::Min' has a wrong offset!");
static_assert(offsetof(FRange_LinearColorCurve, Max) == 0x000208, "Member 'FRange_LinearColorCurve::Max' has a wrong offset!");

// ScriptStruct UIParticle.Range_Float
// 0x0008 (0x0008 - 0x0000)
struct FRange_Float final
{
public:
	float                                         Min;                                               // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Max;                                               // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRange_Float) == 0x000004, "Wrong alignment on FRange_Float");
static_assert(sizeof(FRange_Float) == 0x000008, "Wrong size on FRange_Float");
static_assert(offsetof(FRange_Float, Min) == 0x000000, "Member 'FRange_Float::Min' has a wrong offset!");
static_assert(offsetof(FRange_Float, Max) == 0x000004, "Member 'FRange_Float::Max' has a wrong offset!");

// ScriptStruct UIParticle.ScalarParamFloat
// 0x0014 (0x0014 - 0x0000)
struct FScalarParamFloat final
{
public:
	class FName                                   ScalarParamName;                                   // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRange_Float                           Value;                                             // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FScalarParamFloat) == 0x000004, "Wrong alignment on FScalarParamFloat");
static_assert(sizeof(FScalarParamFloat) == 0x000014, "Wrong size on FScalarParamFloat");
static_assert(offsetof(FScalarParamFloat, ScalarParamName) == 0x000000, "Member 'FScalarParamFloat::ScalarParamName' has a wrong offset!");
static_assert(offsetof(FScalarParamFloat, Value) == 0x00000C, "Member 'FScalarParamFloat::Value' has a wrong offset!");

// ScriptStruct UIParticle.Range_Vector2D
// 0x0020 (0x0020 - 0x0000)
struct FRange_Vector2D final
{
public:
	struct FVector2D                              Min;                                               // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Max;                                               // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRange_Vector2D) == 0x000008, "Wrong alignment on FRange_Vector2D");
static_assert(sizeof(FRange_Vector2D) == 0x000020, "Wrong size on FRange_Vector2D");
static_assert(offsetof(FRange_Vector2D, Min) == 0x000000, "Member 'FRange_Vector2D::Min' has a wrong offset!");
static_assert(offsetof(FRange_Vector2D, Max) == 0x000010, "Member 'FRange_Vector2D::Max' has a wrong offset!");

// ScriptStruct UIParticle.UIParticleProperty
// 0x07F0 (0x07F0 - 0x0000)
struct FUIParticleProperty final
{
public:
	EUIParticlePropertyType                       Type;                                              // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FloatValue;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRange_Float                           FloatRangeValue;                                   // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUIParticleFloatCurve                  FloatCurveValue;                                   // 0x0010(0x0088)(Edit, NativeAccessSpecifierPublic)
	struct FRange_FloatCurve                      FloatCurveRangeValue;                              // 0x0098(0x0110)(Edit, NativeAccessSpecifierPublic)
	struct FVector2D                              Vector2DValue;                                     // 0x01A8(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRange_Vector2D                        Vector2DRangeValue;                                // 0x01B8(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FUIParticleLinearColorCurve            LinearColorCurveValue;                             // 0x01D8(0x0208)(Edit, NativeAccessSpecifierPublic)
	struct FRange_LinearColorCurve                LinearColorCurveRangeValue;                        // 0x03E0(0x0410)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUIParticleProperty) == 0x000008, "Wrong alignment on FUIParticleProperty");
static_assert(sizeof(FUIParticleProperty) == 0x0007F0, "Wrong size on FUIParticleProperty");
static_assert(offsetof(FUIParticleProperty, Type) == 0x000000, "Member 'FUIParticleProperty::Type' has a wrong offset!");
static_assert(offsetof(FUIParticleProperty, FloatValue) == 0x000004, "Member 'FUIParticleProperty::FloatValue' has a wrong offset!");
static_assert(offsetof(FUIParticleProperty, FloatRangeValue) == 0x000008, "Member 'FUIParticleProperty::FloatRangeValue' has a wrong offset!");
static_assert(offsetof(FUIParticleProperty, FloatCurveValue) == 0x000010, "Member 'FUIParticleProperty::FloatCurveValue' has a wrong offset!");
static_assert(offsetof(FUIParticleProperty, FloatCurveRangeValue) == 0x000098, "Member 'FUIParticleProperty::FloatCurveRangeValue' has a wrong offset!");
static_assert(offsetof(FUIParticleProperty, Vector2DValue) == 0x0001A8, "Member 'FUIParticleProperty::Vector2DValue' has a wrong offset!");
static_assert(offsetof(FUIParticleProperty, Vector2DRangeValue) == 0x0001B8, "Member 'FUIParticleProperty::Vector2DRangeValue' has a wrong offset!");
static_assert(offsetof(FUIParticleProperty, LinearColorCurveValue) == 0x0001D8, "Member 'FUIParticleProperty::LinearColorCurveValue' has a wrong offset!");
static_assert(offsetof(FUIParticleProperty, LinearColorCurveRangeValue) == 0x0003E0, "Member 'FUIParticleProperty::LinearColorCurveRangeValue' has a wrong offset!");

// ScriptStruct UIParticle.Posotion_Vector2DCurve
// 0x0FE0 (0x0FE0 - 0x0000)
struct FPosotion_Vector2DCurve final
{
public:
	struct FUIParticleProperty                    X;                                                 // 0x0000(0x07F0)(Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                    Y;                                                 // 0x07F0(0x07F0)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPosotion_Vector2DCurve) == 0x000008, "Wrong alignment on FPosotion_Vector2DCurve");
static_assert(sizeof(FPosotion_Vector2DCurve) == 0x000FE0, "Wrong size on FPosotion_Vector2DCurve");
static_assert(offsetof(FPosotion_Vector2DCurve, X) == 0x000000, "Member 'FPosotion_Vector2DCurve::X' has a wrong offset!");
static_assert(offsetof(FPosotion_Vector2DCurve, Y) == 0x0007F0, "Member 'FPosotion_Vector2DCurve::Y' has a wrong offset!");

// ScriptStruct UIParticle.Size_Vector2DCurve
// 0x0FE0 (0x0FE0 - 0x0000)
struct FSize_Vector2DCurve final
{
public:
	struct FUIParticleProperty                    Min;                                               // 0x0000(0x07F0)(Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                    Max;                                               // 0x07F0(0x07F0)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSize_Vector2DCurve) == 0x000008, "Wrong alignment on FSize_Vector2DCurve");
static_assert(sizeof(FSize_Vector2DCurve) == 0x000FE0, "Wrong size on FSize_Vector2DCurve");
static_assert(offsetof(FSize_Vector2DCurve, Min) == 0x000000, "Member 'FSize_Vector2DCurve::Min' has a wrong offset!");
static_assert(offsetof(FSize_Vector2DCurve, Max) == 0x0007F0, "Member 'FSize_Vector2DCurve::Max' has a wrong offset!");

// ScriptStruct UIParticle.ScalarParamCurve
// 0x0800 (0x0800 - 0x0000)
struct FScalarParamCurve final
{
public:
	class FName                                   ScalarParamName;                                   // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUIParticleProperty                    Value;                                             // 0x0010(0x07F0)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FScalarParamCurve) == 0x000008, "Wrong alignment on FScalarParamCurve");
static_assert(sizeof(FScalarParamCurve) == 0x000800, "Wrong size on FScalarParamCurve");
static_assert(offsetof(FScalarParamCurve, ScalarParamName) == 0x000000, "Member 'FScalarParamCurve::ScalarParamName' has a wrong offset!");
static_assert(offsetof(FScalarParamCurve, Value) == 0x000010, "Member 'FScalarParamCurve::Value' has a wrong offset!");

}
