﻿#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AnimGraphRuntime.ESphericalLimitType
	 */
	enum class AnimGraphRuntime_ESphericalLimitType : uint8_t
	{
		ESphericalLimitType__Inner                   = 0,
		ESphericalLimitType__Outer                   = 1,
		ESphericalLimitType__ESphericalLimitType_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.AnimPhysSimSpaceType
	 */
	enum class AnimGraphRuntime_EAnimPhysSimSpaceType : uint8_t
	{
		AnimPhysSimSpaceType__Component                = 0,
		AnimPhysSimSpaceType__Actor                    = 1,
		AnimPhysSimSpaceType__World                    = 2,
		AnimPhysSimSpaceType__RootRelative             = 3,
		AnimPhysSimSpaceType__BoneRelative             = 4,
		AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5
	};

	/**
	 * Enum AnimGraphRuntime.AnimPhysLinearConstraintType
	 */
	enum class AnimGraphRuntime_EAnimPhysLinearConstraintType : uint8_t
	{
		AnimPhysLinearConstraintType__Free                             = 0,
		AnimPhysLinearConstraintType__Limited                          = 1,
		AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.AnimPhysAngularConstraintType
	 */
	enum class AnimGraphRuntime_EAnimPhysAngularConstraintType : uint8_t
	{
		AnimPhysAngularConstraintType__Angular                           = 0,
		AnimPhysAngularConstraintType__Cone                              = 1,
		AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.EDrivenDestinationMode
	 */
	enum class AnimGraphRuntime_EDrivenDestinationMode : uint8_t
	{
		EDrivenDestinationMode__Bone                       = 0,
		EDrivenDestinationMode__MorphTarget                = 1,
		EDrivenDestinationMode__MaterialParameter          = 2,
		EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3
	};

	/**
	 * Enum AnimGraphRuntime.EDrivenBoneModificationMode
	 */
	enum class AnimGraphRuntime_EDrivenBoneModificationMode : uint8_t
	{
		EDrivenBoneModificationMode__AddToInput                      = 0,
		EDrivenBoneModificationMode__ReplaceComponent                = 1,
		EDrivenBoneModificationMode__AddToRefPose                    = 2,
		EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3
	};

	/**
	 * Enum AnimGraphRuntime.EConstraintOffsetOption
	 */
	enum class AnimGraphRuntime_EConstraintOffsetOption : uint8_t
	{
		EConstraintOffsetOption__None                        = 0,
		EConstraintOffsetOption__Offset_RefPose              = 1,
		EConstraintOffsetOption__EConstraintOffsetOption_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.CopyBoneDeltaMode
	 */
	enum class AnimGraphRuntime_ECopyBoneDeltaMode : uint8_t
	{
		CopyBoneDeltaMode__Accumulate            = 0,
		CopyBoneDeltaMode__Copy                  = 1,
		CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.EInterpolationBlend
	 */
	enum class AnimGraphRuntime_EInterpolationBlend : uint8_t
	{
		EInterpolationBlend__Linear             = 0,
		EInterpolationBlend__Cubic              = 1,
		EInterpolationBlend__Sinusoidal         = 2,
		EInterpolationBlend__EaseInOutExponent2 = 3,
		EInterpolationBlend__EaseInOutExponent3 = 4,
		EInterpolationBlend__EaseInOutExponent4 = 5,
		EInterpolationBlend__EaseInOutExponent5 = 6,
		EInterpolationBlend__MAX                = 7
	};

	/**
	 * Enum AnimGraphRuntime.EBoneModificationMode
	 */
	enum class AnimGraphRuntime_EBoneModificationMode : uint8_t
	{
		BMM_Ignore   = 0,
		BMM_Replace  = 1,
		BMM_Additive = 2,
		BMM_MAX      = 3
	};

	/**
	 * Enum AnimGraphRuntime.EModifyCurveApplyMode
	 */
	enum class AnimGraphRuntime_EModifyCurveApplyMode : uint8_t
	{
		EModifyCurveApplyMode__Add                       = 0,
		EModifyCurveApplyMode__Scale                     = 1,
		EModifyCurveApplyMode__Blend                     = 2,
		EModifyCurveApplyMode__WeightedMovingAverage     = 3,
		EModifyCurveApplyMode__RemapCurve                = 4,
		EModifyCurveApplyMode__EModifyCurveApplyMode_MAX = 5
	};

	/**
	 * Enum AnimGraphRuntime.EPoseDriverOutput
	 */
	enum class AnimGraphRuntime_EPoseDriverOutput : uint8_t
	{
		EPoseDriverOutput__DrivePoses            = 0,
		EPoseDriverOutput__DriveCurves           = 1,
		EPoseDriverOutput__EPoseDriverOutput_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.EPoseDriverSource
	 */
	enum class AnimGraphRuntime_EPoseDriverSource : uint8_t
	{
		EPoseDriverSource__Rotation              = 0,
		EPoseDriverSource__Translation           = 1,
		EPoseDriverSource__EPoseDriverSource_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.EPoseDriverType
	 */
	enum class AnimGraphRuntime_EPoseDriverType : uint8_t
	{
		EPoseDriverType__SwingAndTwist       = 0,
		EPoseDriverType__SwingOnly           = 1,
		EPoseDriverType__Translation         = 2,
		EPoseDriverType__EPoseDriverType_MAX = 3
	};

	/**
	 * Enum AnimGraphRuntime.ESnapshotSourceMode
	 */
	enum class AnimGraphRuntime_ESnapshotSourceMode : uint8_t
	{
		ESnapshotSourceMode__NamedSnapshot           = 0,
		ESnapshotSourceMode__SnapshotPin             = 1,
		ESnapshotSourceMode__ESnapshotSourceMode_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.ERefPoseType
	 */
	enum class AnimGraphRuntime_ERefPoseType : uint8_t
	{
		EIT_LocalSpace = 0,
		EIT_Additive   = 1,
		EIT_MAX        = 2
	};

	/**
	 * Enum AnimGraphRuntime.ESimulationSpace
	 */
	enum class AnimGraphRuntime_ESimulationSpace : uint8_t
	{
		ESimulationSpace__ComponentSpace       = 0,
		ESimulationSpace__WorldSpace           = 1,
		ESimulationSpace__BaseBoneSpace        = 2,
		ESimulationSpace__ESimulationSpace_MAX = 3
	};

	/**
	 * Enum AnimGraphRuntime.EScaleChainInitialLength
	 */
	enum class AnimGraphRuntime_EScaleChainInitialLength : uint8_t
	{
		EScaleChainInitialLength__FixedDefaultLengthValue      = 0,
		EScaleChainInitialLength__Distance                     = 1,
		EScaleChainInitialLength__ChainLength                  = 2,
		EScaleChainInitialLength__EScaleChainInitialLength_MAX = 3
	};

	/**
	 * Enum AnimGraphRuntime.ESequenceEvalReinit
	 */
	enum class AnimGraphRuntime_ESequenceEvalReinit : uint8_t
	{
		ESequenceEvalReinit__NoReset                 = 0,
		ESequenceEvalReinit__StartPosition           = 1,
		ESequenceEvalReinit__ExplicitTime            = 2,
		ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3
	};

	/**
	 * Enum AnimGraphRuntime.ESplineBoneAxis
	 */
	enum class AnimGraphRuntime_ESplineBoneAxis : uint8_t
	{
		ESplineBoneAxis__X                   = 0,
		ESplineBoneAxis__Y                   = 1,
		ESplineBoneAxis__Z                   = 2,
		ESplineBoneAxis__ESplineBoneAxis_MAX = 3
	};

	/**
	 * Enum AnimGraphRuntime.ERotationComponent
	 */
	enum class AnimGraphRuntime_ERotationComponent : uint8_t
	{
		ERotationComponent__EulerX                 = 0,
		ERotationComponent__EulerY                 = 1,
		ERotationComponent__EulerZ                 = 2,
		ERotationComponent__QuaternionAngle        = 3,
		ERotationComponent__SwingAngle             = 4,
		ERotationComponent__TwistAngle             = 5,
		ERotationComponent__ERotationComponent_MAX = 6
	};

	/**
	 * Enum AnimGraphRuntime.EEasingFuncType
	 */
	enum class AnimGraphRuntime_EEasingFuncType : uint8_t
	{
		EEasingFuncType__Linear              = 0,
		EEasingFuncType__Sinusoidal          = 1,
		EEasingFuncType__Cubic               = 2,
		EEasingFuncType__QuadraticInOut      = 3,
		EEasingFuncType__CubicInOut          = 4,
		EEasingFuncType__HermiteCubic        = 5,
		EEasingFuncType__QuarticInOut        = 6,
		EEasingFuncType__QuinticInOut        = 7,
		EEasingFuncType__CircularIn          = 8,
		EEasingFuncType__CircularOut         = 9,
		EEasingFuncType__CircularInOut       = 10,
		EEasingFuncType__ExpIn               = 11,
		EEasingFuncType__ExpOut              = 12,
		EEasingFuncType__ExpInOut            = 13,
		EEasingFuncType__CustomCurve         = 14,
		EEasingFuncType__EEasingFuncType_MAX = 15
	};

	/**
	 * Enum AnimGraphRuntime.ERBFNormalizeMethod
	 */
	enum class AnimGraphRuntime_ERBFNormalizeMethod : uint8_t
	{
		ERBFNormalizeMethod__OnlyNormalizeAboveOne   = 0,
		ERBFNormalizeMethod__AlwaysNormalize         = 1,
		ERBFNormalizeMethod__NormalizeWithinMedian   = 2,
		ERBFNormalizeMethod__ERBFNormalizeMethod_MAX = 3
	};

	/**
	 * Enum AnimGraphRuntime.ERBFDistanceMethod
	 */
	enum class AnimGraphRuntime_ERBFDistanceMethod : uint8_t
	{
		ERBFDistanceMethod__Euclidean              = 0,
		ERBFDistanceMethod__Quaternion             = 1,
		ERBFDistanceMethod__SwingAngle             = 2,
		ERBFDistanceMethod__DefaultMethod          = 3,
		ERBFDistanceMethod__ERBFDistanceMethod_MAX = 4
	};

	/**
	 * Enum AnimGraphRuntime.ERBFFunctionType
	 */
	enum class AnimGraphRuntime_ERBFFunctionType : uint8_t
	{
		ERBFFunctionType__Gaussian             = 0,
		ERBFFunctionType__Exponential          = 1,
		ERBFFunctionType__Linear               = 2,
		ERBFFunctionType__Cubic                = 3,
		ERBFFunctionType__Quintic              = 4,
		ERBFFunctionType__DefaultFunction      = 5,
		ERBFFunctionType__ERBFFunctionType_MAX = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AnimGraphRuntime.PositionHistory
	 * Size -> 0x0030
	 */
	struct FPositionHistory
	{
	public:
		TArray<struct FVector>                                     Positions;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Range;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NBK[0x1C];                                  // 0x0014(0x001C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
	 * Size -> 0x00B8 (FullSize[0x00C8] - InheritedSize[0x0010])
	 */
	struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             ComponentPose;                                           // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int                                                        LODThreshold;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActualAlpha;                                             // 0x0024(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAnimAlphaInputType                                 AlphaInputType;                                          // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlphaBoolEnabled;                                       // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PC25[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0030(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0038(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AlphaCurveName;                                          // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x0088(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9XBC[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
	 * Size -> 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
	 */
	struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
	{
	public:
		float                                                      X;                                                       // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoop;                                                   // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetPlayTimeWhenBlendSpaceChanges;                     // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96F7[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartPosition;                                           // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpaceBase*                                     BlendSpace;                                              // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BKX[0x88];                                  // 0x0050(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpaceBase*                                     PreviousBlendSpace;                                      // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
	 * Size -> 0x00D0 (FullSize[0x01B0] - InheritedSize[0x00E0])
	 */
	struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
	{
	public:
		unsigned char                                              UnknownData_D0NY[0x60];                                  // 0x00E0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseLink                                           BasePose;                                                // 0x0140(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int                                                        LODThreshold;                                            // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceSocketName;                                        // 0x0154(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PivotSocketName;                                         // 0x015C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LookAtLocation;                                          // 0x0164(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SocketAxis;                                              // 0x0170(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLOQ[0x30];                                  // 0x0180(0x0030) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
	 * Size -> 0x0048
	 */
	struct FAnimPhysConstraintSetup
	{
	public:
		AnimGraphRuntime_EAnimPhysLinearConstraintType             LinearXLimitType;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_EAnimPhysLinearConstraintType             LinearYLimitType;                                        // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_EAnimPhysLinearConstraintType             LinearZLimitType;                                        // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8OSK[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LinearAxesMin;                                           // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearAxesMax;                                           // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_EAnimPhysAngularConstraintType            AngularConstraintType;                                   // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAnimPhysTwistAxis                                  TwistAxis;                                               // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAnimPhysTwistAxis                                  AngularTargetAxis;                                       // 0x001E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNM6[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConeAngle;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularLimitsMin;                                        // 0x0024(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularLimitsMax;                                        // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularTarget;                                           // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
	 * Size -> 0x0024
	 */
	struct FAnimPhysSphericalLimit
	{
	public:
		struct FBoneReference                                      DrivingBone;                                             // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             SphereLocalOffset;                                       // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LimitRadius;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_ESphericalLimitType                       LimitType;                                               // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G51S[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
	 * Size -> 0x0040
	 */
	struct FAnimPhysPlanarLimit
	{
	public:
		struct FBoneReference                                      DrivingBone;                                             // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          PlaneTransform;                                          // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
	 * Size -> 0x0130
	 */
	struct FRotationRetargetingInfo
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P675[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Source;                                                  // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Target;                                                  // 0x0040(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		AnimGraphRuntime_ERotationComponent                        RotationComponent;                                       // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D88S[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TwistAxis;                                               // 0x0074(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAbsoluteAngle;                                       // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LYKA[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SourceMinimum;                                           // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMaximum;                                           // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMinimum;                                           // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMaximum;                                           // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_EEasingFuncType                           EasingType;                                              // 0x0094(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FTFV[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  CustomCurve;                                             // 0x0098(0x0088) Edit, NativeAccessSpecifierPublic
		bool                                                       bFlipEasing;                                             // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4C3U[0x3];                                   // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EasingWeight;                                            // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClamp;                                                  // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PZ3R[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
	 * Size -> 0x0378 (FullSize[0x0440] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                      LinearDampingOverride;                                   // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularDampingOverride;                                  // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3MI[0x60];                                  // 0x00D0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      RelativeSpaceBone;                                       // 0x0130(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      BoundBone;                                               // 0x0140(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      ChainEnd;                                                // 0x0150(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             BoxExtents;                                              // 0x0160(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocalJointOffset;                                        // 0x016C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             GravityOverride;                                         // 0x017C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearSpringConstant;                                    // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularSpringConstant;                                   // 0x018C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindScale;                                               // 0x0190(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearAccScale;                                 // 0x0194(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearVelScale;                                 // 0x01A0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentAppliedLinearAccClamp;                          // 0x01AC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularBiasOverride;                                     // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        NumSolverIterationsPreUpdate;                            // 0x01BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        NumSolverIterationsPostUpdate;                           // 0x01C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimPhysConstraintSetup                            ConstraintSetup;                                         // 0x01C4(0x0048) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8F9K[0x4];                                   // 0x020C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimPhysSphericalLimit>                     SphericalLimits;                                         // 0x0210(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SphereCollisionRadius;                                   // 0x0220(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalForce;                                           // 0x0224(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAnimPhysPlanarLimit>                        PlanarLimits;                                            // 0x0230(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		Engine_EAnimPhysCollisionType                              CollisionType;                                           // 0x0240(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_EAnimPhysSimSpaceType                     SimulationSpace;                                         // 0x0241(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D75L[0x2];                                   // 0x0242(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bUseSphericalLimits : 1;                                 // 0x0244(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUsePlanarLimit : 1;                                     // 0x0244(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDoUpdate : 1;                                           // 0x0244(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDoEval : 1;                                             // 0x0244(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideLinearDamping : 1;                              // 0x0244(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideAngularBias : 1;                                // 0x0244(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideAngularDamping : 1;                             // 0x0244(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableWind : 1;                                         // 0x0244(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YEH : 1;                                    // 0x0245(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bUseGravityOverride : 1;                                 // 0x0245(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLinearSpring : 1;                                       // 0x0245(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAngularSpring : 1;                                      // 0x0245(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bChain : 1;                                              // 0x0245(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LCW3[0xA];                                   // 0x0246(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotationRetargetingInfo                            RetargetingSettings;                                     // 0x0250(0x0130) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_844R[0xC0];                                  // 0x0380(0x00C0) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
	 * Size -> 0x00B8 (FullSize[0x00C8] - InheritedSize[0x0010])
	 */
	struct FAnimNode_ApplyAdditive : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Base;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           Additive;                                                // 0x0020(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0034(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int                                                        LODThreshold;                                            // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0040(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AlphaCurveName;                                          // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x0090(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXTC[0x4];                                   // 0x00C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_EAnimAlphaInputType                                 AlphaInputType;                                          // 0x00C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlphaBoolEnabled;                                       // 0x00C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P93E[0x2];                                   // 0x00C6(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AngularRangeLimit
	 * Size -> 0x0028
	 */
	struct FAngularRangeLimit
	{
	public:
		struct FVector                                             LimitMin;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LimitMax;                                                // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      Bone;                                                    // 0x0018(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
	{
	public:
		TArray<struct FAngularRangeLimit>                          AngularRangeLimits;                                      // 0x00C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     AngularOffsets;                                          // 0x00D8(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
	 * Size -> 0x0024
	 */
	struct FBlendBoneByChannelEntry
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bBlendTranslation;                                       // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendRotation;                                          // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendScale;                                             // 0x0022(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33M4[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
	 * Size -> 0x0058 (FullSize[0x0068] - InheritedSize[0x0010])
	 */
	struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           A;                                                       // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           B;                                                       // 0x0020(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBlendBoneByChannelEntry>                    BoneDefinitions;                                         // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JNZL[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UH4S[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0058(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		Engine_EBoneControlSpace                                   TransformsSpace;                                         // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1M3[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
	 * Size -> 0x0088 (FullSize[0x0098] - InheritedSize[0x0010])
	 */
	struct FAnimNode_BlendListBase : public FAnimNode_Base
	{
	public:
		TArray<struct FPoseLink>                                   BlendPose;                                               // 0x0010(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BlendTime;                                               // 0x0020(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		Engine_EAlphaBlendOption                                   BlendType;                                               // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetChildOnActivation;                                 // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZOU6[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CustomBlendCurve;                                        // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendProfile*                                       BlendProfile;                                            // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XET7[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
	{
	public:
		bool                                                       bActiveValue;                                            // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L2I6[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
	{
	public:
		TArray<int>                                                EnumToPoseIndex;                                         // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              ActiveEnumValue;                                         // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B0YL[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
	{
	public:
		int                                                        ActiveChildIndex;                                        // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DLNH[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
	{
	public:
		float                                                      NormalizedTime;                                          // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYVB[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
	 * Size -> 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UCurveFloat*                                         DrivingCurve;                                            // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeMin;                                                // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeMax;                                                // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMin;                                             // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMax;                                             // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ParameterName;                                           // 0x00F4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x00FC(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		AnimGraphRuntime_EDrivenDestinationMode                    DestinationMode;                                         // 0x010C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_EDrivenBoneModificationMode               ModificationMode;                                        // 0x010D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EComponentType                                      SourceComponent;                                         // 0x010E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseRange : 1;                                           // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectTargetTranslationX : 1;                           // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectTargetTranslationY : 1;                           // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectTargetTranslationZ : 1;                           // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectTargetRotationX : 1;                              // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectTargetRotationY : 1;                              // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectTargetRotationZ : 1;                              // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectTargetScaleX : 1;                                 // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectTargetScaleY : 1;                                 // 0x0110(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectTargetScaleZ : 1;                                 // 0x0110(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4CDU[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.SocketReference
	 * Size -> 0x0040
	 */
	struct FSocketReference
	{
	public:
		unsigned char                                              UnknownData_MG8Z[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TC7U[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.BoneSocketTarget
	 * Size -> 0x0060
	 */
	struct FBoneSocketTarget
	{
	public:
		bool                                                       bUseSocket;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AH8H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      BoneReference;                                           // 0x0004(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CSTJ[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSocketReference                                    SocketReference;                                         // 0x0020(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
	 * Size -> 0x00B8 (FullSize[0x0180] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FVector                                             EffectorLocation;                                        // 0x00C8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBoneControlSpace                                   EffectorLocationSpace;                                   // 0x00D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TY2N[0xB];                                   // 0x00D5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   EffectorTarget;                                          // 0x00E0(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TipBone;                                                 // 0x0140(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RootBone;                                                // 0x0150(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0160(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxIterations;                                           // 0x0164(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartFromTail;                                          // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRotationLimit;                                    // 0x0169(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VC47[0x6];                                   // 0x016A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              RotationLimitPerJoints;                                  // 0x0170(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct AnimGraphRuntime.Constraint
	 * Size -> 0x001C
	 */
	struct FConstraint
	{
	public:
		struct FBoneReference                                      TargetBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		AnimGraphRuntime_EConstraintOffsetOption                   OffsetOption;                                            // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimationCore_ETransformConstraintType                     TransformType;                                           // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                PerAxis;                                                 // 0x0012(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QY51[0x7];                                   // 0x0015(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Constraint
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraint>                                 ConstraintSetup;                                         // 0x00D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ConstraintWeights;                                       // 0x00E8(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LEID[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCopyTranslation;                                        // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyRotation;                                           // 0x00E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyScale;                                              // 0x00EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBoneControlSpace                                   ControlSpace;                                            // 0x00EB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JOJE[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCopyTranslation;                                        // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyRotation;                                           // 0x00E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyScale;                                              // 0x00EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_ECopyBoneDeltaMode                        CopyMode;                                                // 0x00EB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslationMultiplier;                                   // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMultiplier;                                      // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleMultiplier;                                         // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
	 * Size -> 0x0130 (FullSize[0x0140] - InheritedSize[0x0010])
	 */
	struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
	{
	public:
		TWeakObjectPtr<class USkeletalMeshComponent>               SourceMeshComponent;                                     // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAttachedParent;                                      // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyCurves;                                             // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7RF[0x126];                                 // 0x001A(0x0126) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
	 * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
	 */
	struct FAnimNode_CurveSource : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                SourceBinding;                                           // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F7J0[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CurveSource[0x10];                                       // 0x002C(0x0010) UNKNOWN PROPERTY: InterfaceProperty AnimGraphRuntime.AnimNode_CurveSource.CurveSource

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
	 * Size -> 0x00C8 (FullSize[0x0190] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_62WP[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EffectorTransform;                                       // 0x00D0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneSocketTarget                                   EffectorTarget;                                          // 0x0100(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TipBone;                                                 // 0x0160(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RootBone;                                                // 0x0170(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxIterations;                                           // 0x0184(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBoneControlSpace                                   EffectorTransformSpace;                                  // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBoneRotationSource                                 EffectorRotationSource;                                  // 0x0189(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZMZ[0x6];                                   // 0x018A(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
	 * Size -> 0x0058 (FullSize[0x0120] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      RightHandFK;                                             // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      LeftHandFK;                                              // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RightHandIK;                                             // 0x00E8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      LeftHandIK;                                              // 0x00F8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              IKBonesToMove;                                           // 0x0108(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      HandFKWeight;                                            // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0EC[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
	 * Size -> 0x00B0 (FullSize[0x00C0] - InheritedSize[0x0010])
	 */
	struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FPoseLink>                                   BlendPoses;                                              // 0x0020(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FInputBlendPose>                             LayerSetup;                                              // 0x0030(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BlendWeights;                                            // 0x0040(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bMeshSpaceRotationBlend;                                 // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMeshSpaceScaleBlend;                                    // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECurveBlendOption                                   CurveBlendOption;                                        // 0x0052(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendRootMotionBasedOnRootBone;                         // 0x0053(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EVDB[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        LODThreshold;                                            // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DCOM[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPerBoneBlendWeight>                         PerBoneBlendWeights;                                     // 0x0060(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FGuid                                               SkeletonGuid;                                            // 0x0070(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               VirtualBoneGuid;                                         // 0x0080(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0GTR[0x30];                                  // 0x0090(0x0030) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
	 * Size -> 0x002C
	 */
	struct FAnimLegIKDefinition
	{
	public:
		struct FBoneReference                                      IKFootBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      FKFootBone;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		int                                                        NumBonesInLimb;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRotationAngle;                                        // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		CoreUObject_EAxis                                          FootBoneForwardAxis;                                     // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		CoreUObject_EAxis                                          HingeRotationAxis;                                       // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRotationLimit;                                    // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableKneeTwistCorrection;                              // 0x002B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_LegIK
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                      ReachPrecision;                                          // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxIterations;                                           // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAnimLegIKDefinition>                        LegsDefinition;                                          // 0x00D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4T5M[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimLegIKData
	 * Size -> 0x00A0
	 */
	struct FAnimLegIKData
	{
	public:
		unsigned char                                              UnknownData_U8P1[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.IKChain
	 * Size -> 0x0038
	 */
	struct FIKChain
	{
	public:
		unsigned char                                              UnknownData_G6TX[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.IKChainLink
	 * Size -> 0x003C
	 */
	struct FIKChainLink
	{
	public:
		unsigned char                                              UnknownData_71XS[0x3C];                                  // 0x0000(0x003C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_LookAt
	 * Size -> 0x00E8 (FullSize[0x01B0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EVZ[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   LookAtTarget;                                            // 0x00E0(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LookAtLocation;                                          // 0x0140(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAxis                                               LookAt_Axis;                                             // 0x014C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseLookUpAxis;                                          // 0x015C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_EInterpolationBlend                       InterpolationType;                                       // 0x015D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJ9A[0x2];                                   // 0x015E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAxis                                               LookUp_Axis;                                             // 0x0160(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LookAtClamp;                                             // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationTime;                                       // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationTriggerThreashold;                          // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TPG[0x34];                                  // 0x017C(0x0034) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
	 * Size -> 0x0028 (FullSize[0x0038] - InheritedSize[0x0010])
	 */
	struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Base;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           Additive;                                                // 0x0020(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bMeshSpaceAdditive;                                      // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJWM[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x00D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x00E4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x00F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_EBoneModificationMode                     TranslationMode;                                         // 0x00FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_EBoneModificationMode                     RotationMode;                                            // 0x00FD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_EBoneModificationMode                     ScaleMode;                                               // 0x00FE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBoneControlSpace                                   TranslationSpace;                                        // 0x00FF(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBoneControlSpace                                   RotationSpace;                                           // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBoneControlSpace                                   ScaleSpace;                                              // 0x0101(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TSDA[0x6];                                   // 0x0102(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
	 * Size -> 0x0048 (FullSize[0x0058] - InheritedSize[0x0010])
	 */
	struct FAnimNode_ModifyCurve : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0010(0x0010) Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		TArray<float>                                              CurveValues;                                             // 0x0020(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        CurveNames;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LD0I[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_EModifyCurveApplyMode                     ApplyMode;                                               // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JCT0[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
	 * Size -> 0x0040 (FullSize[0x0050] - InheritedSize[0x0010])
	 */
	struct FAnimNode_MultiWayBlend : public FAnimNode_Base
	{
	public:
		TArray<struct FPoseLink>                                   Poses;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              DesiredAlphas;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFO5[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0040(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAdditiveNode;                                           // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalizeAlpha;                                         // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVHY[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
	 * Size -> 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToObserve;                                           // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		Engine_EBoneControlSpace                                   DisplaySpace;                                            // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRelativeToRefPose;                                      // 0x00D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTRK[0x2];                                   // 0x00DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Translation;                                             // 0x00DC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x00E8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x00F4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
	{
	public:
		class UPoseAsset*                                          PoseAsset;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F38W[0x40];                                  // 0x0038(0x0040) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
	 * Size -> 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
	 */
	struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0078(0x0010) Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		Engine_EAlphaBlendOption                                   BlendOption;                                             // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSHT[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CustomCurve;                                             // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
	 * Size -> 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
	 */
	struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
	{
	public:
		class FName                                                PoseName;                                                // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoseWeight;                                              // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKH8[0xC];                                   // 0x0084(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.PoseDriverTransform
	 * Size -> 0x0018
	 */
	struct FPoseDriverTransform
	{
	public:
		struct FVector                                             TargetTranslation;                                       // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            TargetRotation;                                          // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.RBFParams
	 * Size -> 0x0028
	 */
	struct FRBFParams
	{
	public:
		int                                                        TargetDimensions;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_ERBFFunctionType                          Function;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_ERBFDistanceMethod                        DistanceMethod;                                          // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBoneAxis                                           TwistAxis;                                               // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQNL[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeightThreshold;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_ERBFNormalizeMethod                       NormalizeMethod;                                         // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VGP[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MedianReference;                                         // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MedianMin;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MedianMax;                                               // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.PoseDriverTarget
	 * Size -> 0x00C0
	 */
	struct FPoseDriverTarget
	{
	public:
		TArray<struct FPoseDriverTransform>                        BoneTransforms;                                          // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRotator                                            TargetRotation;                                          // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TargetScale;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_ERBFDistanceMethod                        DistanceMethod;                                          // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_ERBFFunctionType                          FunctionType;                                            // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyCustomCurve;                                       // 0x0022(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TKC[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          CustomCurve;                                             // 0x0028(0x0080) Edit, NativeAccessSpecifierPublic
		class FName                                                DrivenName;                                              // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T6Q5[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsHidden;                                               // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWB9[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
	 * Size -> 0x00B0 (FullSize[0x0128] - InheritedSize[0x0078])
	 */
	struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0078(0x0010) Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              SourceBones;                                             // 0x0088(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              OnlyDriveBones;                                          // 0x0098(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPoseDriverTarget>                           PoseTargets;                                             // 0x00A8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYEM[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      EvalSpaceBone;                                           // 0x00E8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRBFParams                                          RBFParams;                                               // 0x00F8(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
		AnimGraphRuntime_EPoseDriverSource                         DriveSource;                                             // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_EPoseDriverOutput                         DriveOutput;                                             // 0x0121(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOnlyDriveSelectedBones : 1;                             // 0x0122(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4HQ[0x5];                                   // 0x0123(0x0005) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
	 * Size -> 0x0080 (FullSize[0x0090] - InheritedSize[0x0010])
	 */
	struct FAnimNode_PoseSnapshot : public FAnimNode_Base
	{
	public:
		class FName                                                SnapshotName;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPoseSnapshot                                       Snapshot;                                                // 0x0018(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		AnimGraphRuntime_ESnapshotSourceMode                       Mode;                                                    // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZQ2[0x3F];                                  // 0x0051(0x003F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
	 * Size -> 0x0050
	 */
	struct FRandomPlayerSequenceEntry
	{
	public:
		class UAnimSequence*                                       Sequence;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceToPlay;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MinLoopCount;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxLoopCount;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPlayRate;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPlayRate;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VF17[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAlphaBlend                                         BlendIn;                                                 // 0x0020(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
	 * Size -> 0x0058 (FullSize[0x0068] - InheritedSize[0x0010])
	 */
	struct FAnimNode_RandomPlayer : public FAnimNode_Base
	{
	public:
		TArray<struct FRandomPlayerSequenceEntry>                  Entries;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELD3[0x44];                                  // 0x0020(0x0044) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShuffleMode;                                            // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPI1[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
	{
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RefPose
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FAnimNode_RefPose : public FAnimNode_Base
	{
	public:
		AnimGraphRuntime_ERefPoseType                              RefPoseType;                                             // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZURZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_XXRV[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
	 * Size -> 0x0488 (FullSize[0x0550] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
	{
	public:
		class UPhysicsAsset*                                       OverridePhysicsAsset;                                    // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7O3B[0x90];                                  // 0x00D0(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OverrideWorldGravity;                                    // 0x0160(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalForce;                                           // 0x016C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearAccScale;                                 // 0x0178(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearVelScale;                                 // 0x0184(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentAppliedLinearAccClamp;                          // 0x0190(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedBoundsScale;                                       // 0x019C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      BaseBoneRef;                                             // 0x01A0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		Engine_ECollisionChannel                                   OverlapChannel;                                          // 0x01B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_ESimulationSpace                          SimulationSpace;                                         // 0x01B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceDisableCollisionBetweenConstraintBodies;           // 0x01B2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPW9[0x1];                                   // 0x01B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bEnableWorldGeometry : 1;                                // 0x01B4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideWorldGravity : 1;                               // 0x01B4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTransferBoneVelocities : 1;                             // 0x01B4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFreezeIncomingPoseOnStart : 1;                          // 0x01B4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bClampLinearTranslationLimitToRefPose : 1;               // 0x01B4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Z5Z[0x39B];                                 // 0x01B5(0x039B) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
	 * Size -> 0x0428 (FullSize[0x04F0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_RigidBody_Chaos : public FAnimNode_SkeletalControlBase
	{
	public:
		class UPhysicsAsset*                                       OverridePhysicsAsset;                                    // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UChaosPhysicalMaterial*                              PhysicalMaterial;                                        // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimulating;                                             // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CR1J[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        NumIterations;                                           // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNotifyCollisions;                                       // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		GeometryCollectionSimulationCore_EObjectStateTypeEnum      ObjectType;                                              // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3OTU[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Density;                                                 // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinMass;                                                 // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMass;                                                 // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		GeometryCollectionSimulationCore_ECollisionTypeEnum        CollisionType;                                           // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C08A[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ImplicitShapeParticlesPerUnitArea;                       // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ImplicitShapeMinNumParticles;                            // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ImplicitShapeMaxNumParticles;                            // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MinLevelSetResolution;                                   // 0x0100(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxLevelSetResolution;                                   // 0x0104(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        CollisionGroup;                                          // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		GeometryCollectionSimulationCore_EInitialVelocityTypeEnum  InitialVelocityType;                                     // 0x010C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EF85[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InitialLinearVelocity;                                   // 0x0110(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialAngularVelocity;                                  // 0x011C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7P9[0x98];                                  // 0x0128(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OverrideWorldGravity;                                    // 0x01C0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalForce;                                           // 0x01CC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearAccScale;                                 // 0x01D8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearVelScale;                                 // 0x01E4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentAppliedLinearAccClamp;                          // 0x01F0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedBoundsScale;                                       // 0x01FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      BaseBoneRef;                                             // 0x0200(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		Engine_ECollisionChannel                                   OverlapChannel;                                          // 0x0210(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_ESimulationSpace                          SimulationSpace;                                         // 0x0211(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceDisableCollisionBetweenConstraintBodies;           // 0x0212(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NIE1[0x1];                                   // 0x0213(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bEnableWorldGeometry : 1;                                // 0x0214(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideWorldGravity : 1;                               // 0x0214(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTransferBoneVelocities : 1;                             // 0x0214(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFreezeIncomingPoseOnStart : 1;                          // 0x0214(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bClampLinearTranslationLimitToRefPose : 1;               // 0x0214(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UEIY[0x2DB];                                 // 0x0215(0x02DB) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
	 * Size -> 0x0090 (FullSize[0x00A0] - InheritedSize[0x0010])
	 */
	struct FAnimNode_RotateRootBone : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Yaw;                                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                PitchScaleBiasClamp;                                     // 0x0028(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                YawScaleBiasClamp;                                       // 0x0058(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            MeshToComponent;                                         // 0x0088(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CA9Q[0xC];                                   // 0x0094(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      TargetBone;                                              // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      SourceBone;                                              // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBoneAxis                                           RotationAxisToRefer;                                     // 0x00EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAdditive;                                             // 0x00ED(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N47W[0x2];                                   // 0x00EE(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
	 * Size -> 0x00A8 (FullSize[0x0188] - InheritedSize[0x00E0])
	 */
	struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x00E0(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int                                                        LODThreshold;                                            // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x00F8(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0100(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AlphaCurveName;                                          // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x0150(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HL7O[0x4];                                   // 0x0180(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_EAnimAlphaInputType                                 AlphaInputType;                                          // 0x0184(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlphaBoolEnabled;                                       // 0x0185(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLZF[0x2];                                   // 0x0186(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
	 * Size -> 0x0068 (FullSize[0x0078] - InheritedSize[0x0010])
	 */
	struct FAnimNode_ScaleChainLength : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           InputPose;                                               // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DefaultChainLength;                                      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      ChainStartBone;                                          // 0x0024(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      ChainEndBone;                                            // 0x0034(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TargetLocation;                                          // 0x0044(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L4DX[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0058(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		AnimGraphRuntime_EScaleChainInitialLength                  ChainInitialLength;                                      // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WREA[0x17];                                  // 0x0061(0x0017) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
	{
	public:
		class UAnimSequenceBase*                                   Sequence;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplicitTime;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldLoop;                                             // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTeleportToExplicitTime;                                 // 0x003D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_ESequenceEvalReinit                       ReinitializationBehavior;                                // 0x003E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TEF[0x1];                                   // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartPosition;                                           // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GNR[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Slot
	 * Size -> 0x0038 (FullSize[0x0048] - InheritedSize[0x0010])
	 */
	struct FAnimNode_Slot : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                SlotName;                                                // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysUpdateSourcePose;                                 // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E32F[0x1F];                                  // 0x0029(0x001F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
	 * Size -> 0x0198 (FullSize[0x0260] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      StartBone;                                               // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      EndBone;                                                 // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		AnimGraphRuntime_ESplineBoneAxis                           BoneAxis;                                                // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCalculateSpline;                                    // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVUQ[0x2];                                   // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        PointCount;                                              // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ControlPoints;                                           // 0x00F0(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Roll;                                                    // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TwistStart;                                              // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TwistEnd;                                                // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RDVG[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAlphaBlend                                         TwistBlend;                                              // 0x0110(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Stretch;                                                 // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Offset;                                                  // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SND6[0x118];                                 // 0x0148(0x0118) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
	 * Size -> 0x0014
	 */
	struct FSplineIKCachedBoneData
	{
	public:
		struct FBoneReference                                      Bone;                                                    // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int                                                        RefSkeletonIndex;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SpringBone;                                              // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxDisplacement;                                         // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpringStiffness;                                         // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpringDamping;                                           // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ErrorResetThresh;                                        // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_546Y[0x3C];                                  // 0x00E8(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bLimitDisplacement : 1;                                  // 0x0124(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTranslateX : 1;                                         // 0x0124(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTranslateY : 1;                                         // 0x0124(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTranslateZ : 1;                                         // 0x0124(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRotateX : 1;                                            // 0x0124(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRotateY : 1;                                            // 0x0124(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRotateZ : 1;                                            // 0x0124(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7FWC[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_StateResult
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FAnimNode_StateResult : public FAnimNode_Root
	{
	};

	/**
	 * ScriptStruct AnimGraphRuntime.RotationLimit
	 * Size -> 0x0018
	 */
	struct FRotationLimit
	{
	public:
		struct FVector                                             LimitMin;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LimitMax;                                                // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Trail
	 * Size -> 0x0198 (FullSize[0x0260] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_B34Q[0x38];                                  // 0x00C8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      TrailBone;                                               // 0x0100(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		int                                                        ChainLength;                                             // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		CoreUObject_EAxis                                          ChainBoneAxis;                                           // 0x0114(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInvertChainBoneAxis : 1;                                // 0x0115(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLimitStretch : 1;                                       // 0x0115(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLimitRotation : 1;                                      // 0x0115(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUsePlanarLimit : 1;                                     // 0x0115(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bActorSpaceFakeVel : 1;                                  // 0x0115(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReorientParentToChild : 1;                              // 0x0115(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9J35[0x2];                                   // 0x0116(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDeltaTime;                                            // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RelaxationSpeedScale;                                    // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  TrailRelaxationSpeed;                                    // 0x0120(0x0088) Edit, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                RelaxationSpeedScaleInputProcessor;                      // 0x01A8(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FRotationLimit>                              RotationLimits;                                          // 0x01D8(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     RotationOffsets;                                         // 0x01E8(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAnimPhysPlanarLimit>                        PlanarLimits;                                            // 0x01F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      StretchLimit;                                            // 0x0208(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FakeVelocity;                                            // 0x020C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      BaseJoint;                                               // 0x0218(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LastBoneRotationAnimAlphaBlend;                          // 0x0228(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SH2A[0x34];                                  // 0x022C(0x0034) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
	 * Size -> 0x0020
	 */
	struct FReferenceBoneFrame
	{
	public:
		struct FBoneReference                                      Bone;                                                    // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAxis                                               Axis;                                                    // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
	 * Size -> 0x0070 (FullSize[0x0138] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FReferenceBoneFrame                                 BaseFrame;                                               // 0x00C8(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FReferenceBoneFrame                                 TwistFrame;                                              // 0x00E8(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAxis                                               TwistPlaneNormalAxis;                                    // 0x0108(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RangeMax;                                                // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMin;                                             // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMax;                                             // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimCurveParam                                     Curve;                                                   // 0x0124(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V08U[0x8];                                   // 0x0130(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
	 * Size -> 0x0118 (FullSize[0x01E0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      IKBone;                                                  // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StartStretchRatio;                                       // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxStretchScale;                                         // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EffectorLocation;                                        // 0x00E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2UL[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   EffectorTarget;                                          // 0x00F0(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             JointTargetLocation;                                     // 0x0150(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8365[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   JointTarget;                                             // 0x0160(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAxis                                               TwistAxis;                                               // 0x01C0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		Engine_EBoneControlSpace                                   EffectorLocationSpace;                                   // 0x01D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBoneControlSpace                                   JointTargetLocationSpace;                                // 0x01D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowStretching : 1;                                    // 0x01D2(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTakeRotationFromEffectorSpace : 1;                      // 0x01D2(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMaintainEffectorRelRot : 1;                             // 0x01D2(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowTwist : 1;                                         // 0x01D2(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H16G[0xD];                                   // 0x01D3(0x000D) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
	 * Size -> 0x00B8 (FullSize[0x00C8] - InheritedSize[0x0010])
	 */
	struct FAnimNode_TwoWayBlend : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           A;                                                       // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           B;                                                       // 0x0020(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		Engine_EAnimAlphaInputType                                 AlphaInputType;                                          // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlphaBoolEnabled : 1;                                   // 0x0031(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RO3U : 2;                                    // 0x0031(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bResetChildOnActivation : 1;                             // 0x0031(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6CH4[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0040(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AlphaCurveName;                                          // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x0090(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3PDK[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
	 * Size -> 0x0250 (FullSize[0x0920] - InheritedSize[0x06D0])
	 */
	struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_84RH[0x250];                                 // 0x06D0(0x0250) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnimGraphRuntime.RBFEntry
	 * Size -> 0x0010
	 */
	struct FRBFEntry
	{
	public:
		TArray<float>                                              Values;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnimGraphRuntime.RBFTarget
	 * Size -> 0x0090 (FullSize[0x00A0] - InheritedSize[0x0010])
	 */
	struct FRBFTarget : public FRBFEntry
	{
	public:
		float                                                      ScaleFactor;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyCustomCurve;                                       // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WIMU[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          CustomCurve;                                             // 0x0018(0x0080) Edit, NativeAccessSpecifierPublic
		AnimGraphRuntime_ERBFDistanceMethod                        DistanceMethod;                                          // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AnimGraphRuntime_ERBFFunctionType                          FunctionType;                                            // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LI8B[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
