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
	 * Enum Engine.ETextGender
	 */
	enum class Engine_ETextGender : uint8_t
	{
		ETextGender__Masculine       = 0,
		ETextGender__Feminine        = 1,
		ETextGender__Neuter          = 2,
		ETextGender__ETextGender_MAX = 3
	};

	/**
	 * Enum Engine.EFormatArgumentType
	 */
	enum class Engine_EFormatArgumentType : uint8_t
	{
		EFormatArgumentType__Int                     = 0,
		EFormatArgumentType__UInt                    = 1,
		EFormatArgumentType__Float                   = 2,
		EFormatArgumentType__Double                  = 3,
		EFormatArgumentType__Text                    = 4,
		EFormatArgumentType__Gender                  = 5,
		EFormatArgumentType__EFormatArgumentType_MAX = 6
	};

	/**
	 * Enum Engine.EEndPlayReason
	 */
	enum class Engine_EEndPlayReason : uint8_t
	{
		EEndPlayReason__Destroyed          = 0,
		EEndPlayReason__LevelTransition    = 1,
		EEndPlayReason__EndPlayInEditor    = 2,
		EEndPlayReason__RemovedFromWorld   = 3,
		EEndPlayReason__Quit               = 4,
		EEndPlayReason__EEndPlayReason_MAX = 5
	};

	/**
	 * Enum Engine.ETickingGroup
	 */
	enum class Engine_ETickingGroup : uint8_t
	{
		TG_PrePhysics     = 0,
		TG_StartPhysics   = 1,
		TG_DuringPhysics  = 2,
		TG_EndPhysics     = 3,
		TG_PostPhysics    = 4,
		TG_PostUpdateWork = 5,
		TG_LastDemotable  = 6,
		TG_NewlySpawned   = 7,
		TG_MAX            = 8
	};

	/**
	 * Enum Engine.EComponentCreationMethod
	 */
	enum class Engine_EComponentCreationMethod : uint8_t
	{
		EComponentCreationMethod__Native                       = 0,
		EComponentCreationMethod__SimpleConstructionScript     = 1,
		EComponentCreationMethod__UserConstructionScript       = 2,
		EComponentCreationMethod__Instance                     = 3,
		EComponentCreationMethod__EComponentCreationMethod_MAX = 4
	};

	/**
	 * Enum Engine.ETemperatureSeverityType
	 */
	enum class Engine_ETemperatureSeverityType : uint8_t
	{
		ETemperatureSeverityType__Unknown                      = 0,
		ETemperatureSeverityType__Good                         = 1,
		ETemperatureSeverityType__Bad                          = 2,
		ETemperatureSeverityType__Serious                      = 3,
		ETemperatureSeverityType__Critical                     = 4,
		ETemperatureSeverityType__NumSeverities                = 5,
		ETemperatureSeverityType__ETemperatureSeverityType_MAX = 6
	};

	/**
	 * Enum Engine.EPlaneConstraintAxisSetting
	 */
	enum class Engine_EPlaneConstraintAxisSetting : uint8_t
	{
		EPlaneConstraintAxisSetting__Custom                          = 0,
		EPlaneConstraintAxisSetting__X                               = 1,
		EPlaneConstraintAxisSetting__Y                               = 2,
		EPlaneConstraintAxisSetting__Z                               = 3,
		EPlaneConstraintAxisSetting__UseGlobalPhysicsSetting         = 4,
		EPlaneConstraintAxisSetting__EPlaneConstraintAxisSetting_MAX = 5
	};

	/**
	 * Enum Engine.EInterpToBehaviourType
	 */
	enum class Engine_EInterpToBehaviourType : uint8_t
	{
		EInterpToBehaviourType__OneShot                    = 0,
		EInterpToBehaviourType__OneShot_Reverse            = 1,
		EInterpToBehaviourType__Loop_Reset                 = 2,
		EInterpToBehaviourType__PingPong                   = 3,
		EInterpToBehaviourType__EInterpToBehaviourType_MAX = 4
	};

	/**
	 * Enum Engine.ETeleportType
	 */
	enum class Engine_ETeleportType : uint8_t
	{
		ETeleportType__None              = 0,
		ETeleportType__TeleportPhysics   = 1,
		ETeleportType__ResetPhysics      = 2,
		ETeleportType__ETeleportType_MAX = 3
	};

	/**
	 * Enum Engine.EPlatformInterfaceDataType
	 */
	enum class Engine_EPlatformInterfaceDataType : uint8_t
	{
		PIDT_None   = 0,
		PIDT_Int    = 1,
		PIDT_Float  = 2,
		PIDT_String = 3,
		PIDT_Object = 4,
		PIDT_Custom = 5,
		PIDT_MAX    = 6
	};

	/**
	 * Enum Engine.EMovementMode
	 */
	enum class Engine_EMovementMode : uint8_t
	{
		MOVE_None       = 0,
		MOVE_Walking    = 1,
		MOVE_NavWalking = 2,
		MOVE_Falling    = 3,
		MOVE_Swimming   = 4,
		MOVE_Flying     = 5,
		MOVE_Custom     = 6,
		MOVE_MAX        = 7
	};

	/**
	 * Enum Engine.ENetworkFailure
	 */
	enum class Engine_ENetworkFailure : uint8_t
	{
		ENetworkFailure__NetDriverAlreadyExists   = 0,
		ENetworkFailure__NetDriverCreateFailure   = 1,
		ENetworkFailure__NetDriverListenFailure   = 2,
		ENetworkFailure__ConnectionLost           = 3,
		ENetworkFailure__ConnectionTimeout        = 4,
		ENetworkFailure__FailureReceived          = 5,
		ENetworkFailure__OutdatedClient           = 6,
		ENetworkFailure__OutdatedServer           = 7,
		ENetworkFailure__PendingConnectionFailure = 8,
		ENetworkFailure__NetGuidMismatch          = 9,
		ENetworkFailure__NetChecksumMismatch      = 10,
		ENetworkFailure__ENetworkFailure_MAX      = 11
	};

	/**
	 * Enum Engine.ETravelFailure
	 */
	enum class Engine_ETravelFailure : uint8_t
	{
		ETravelFailure__NoLevel                     = 0,
		ETravelFailure__LoadMapFailure              = 1,
		ETravelFailure__InvalidURL                  = 2,
		ETravelFailure__PackageMissing              = 3,
		ETravelFailure__PackageVersion              = 4,
		ETravelFailure__NoDownload                  = 5,
		ETravelFailure__TravelFailure               = 6,
		ETravelFailure__CheatCommands               = 7,
		ETravelFailure__PendingNetGameCreateFailure = 8,
		ETravelFailure__CloudSaveFailure            = 9,
		ETravelFailure__ServerTravelFailure         = 10,
		ETravelFailure__ClientTravelFailure         = 11,
		ETravelFailure__ETravelFailure_MAX          = 12
	};

	/**
	 * Enum Engine.EScreenOrientation
	 */
	enum class Engine_EScreenOrientation : uint8_t
	{
		EScreenOrientation__Unknown                = 0,
		EScreenOrientation__Portrait               = 1,
		EScreenOrientation__PortraitUpsideDown     = 2,
		EScreenOrientation__LandscapeLeft          = 3,
		EScreenOrientation__LandscapeRight         = 4,
		EScreenOrientation__FaceUp                 = 5,
		EScreenOrientation__FaceDown               = 6,
		EScreenOrientation__EScreenOrientation_MAX = 7
	};

	/**
	 * Enum Engine.EApplicationState
	 */
	enum class Engine_EApplicationState : uint8_t
	{
		EApplicationState__Unknown               = 0,
		EApplicationState__Inactive              = 1,
		EApplicationState__Background            = 2,
		EApplicationState__Active                = 3,
		EApplicationState__EApplicationState_MAX = 4
	};

	/**
	 * Enum Engine.EObjectTypeQuery
	 */
	enum class Engine_EObjectTypeQuery : uint8_t
	{
		ObjectTypeQuery1     = 0,
		ObjectTypeQuery2     = 1,
		ObjectTypeQuery3     = 2,
		ObjectTypeQuery4     = 3,
		ObjectTypeQuery5     = 4,
		ObjectTypeQuery6     = 5,
		ObjectTypeQuery7     = 6,
		ObjectTypeQuery8     = 7,
		ObjectTypeQuery9     = 8,
		ObjectTypeQuery10    = 9,
		ObjectTypeQuery11    = 10,
		ObjectTypeQuery12    = 11,
		ObjectTypeQuery13    = 12,
		ObjectTypeQuery14    = 13,
		ObjectTypeQuery15    = 14,
		ObjectTypeQuery16    = 15,
		ObjectTypeQuery17    = 16,
		ObjectTypeQuery18    = 17,
		ObjectTypeQuery19    = 18,
		ObjectTypeQuery20    = 19,
		ObjectTypeQuery21    = 20,
		ObjectTypeQuery22    = 21,
		ObjectTypeQuery23    = 22,
		ObjectTypeQuery24    = 23,
		ObjectTypeQuery25    = 24,
		ObjectTypeQuery26    = 25,
		ObjectTypeQuery27    = 26,
		ObjectTypeQuery28    = 27,
		ObjectTypeQuery29    = 28,
		ObjectTypeQuery30    = 29,
		ObjectTypeQuery31    = 30,
		ObjectTypeQuery32    = 31,
		ObjectTypeQuery_MAX  = 32,
		EObjectTypeQuery_MAX = 33
	};

	/**
	 * Enum Engine.EDrawDebugTrace
	 */
	enum class Engine_EDrawDebugTrace : uint8_t
	{
		EDrawDebugTrace__None                = 0,
		EDrawDebugTrace__ForOneFrame         = 1,
		EDrawDebugTrace__ForDuration         = 2,
		EDrawDebugTrace__Persistent          = 3,
		EDrawDebugTrace__EDrawDebugTrace_MAX = 4
	};

	/**
	 * Enum Engine.ETraceTypeQuery
	 */
	enum class Engine_ETraceTypeQuery : uint8_t
	{
		TraceTypeQuery1     = 0,
		TraceTypeQuery2     = 1,
		TraceTypeQuery3     = 2,
		TraceTypeQuery4     = 3,
		TraceTypeQuery5     = 4,
		TraceTypeQuery6     = 5,
		TraceTypeQuery7     = 6,
		TraceTypeQuery8     = 7,
		TraceTypeQuery9     = 8,
		TraceTypeQuery10    = 9,
		TraceTypeQuery11    = 10,
		TraceTypeQuery12    = 11,
		TraceTypeQuery13    = 12,
		TraceTypeQuery14    = 13,
		TraceTypeQuery15    = 14,
		TraceTypeQuery16    = 15,
		TraceTypeQuery17    = 16,
		TraceTypeQuery18    = 17,
		TraceTypeQuery19    = 18,
		TraceTypeQuery20    = 19,
		TraceTypeQuery21    = 20,
		TraceTypeQuery22    = 21,
		TraceTypeQuery23    = 22,
		TraceTypeQuery24    = 23,
		TraceTypeQuery25    = 24,
		TraceTypeQuery26    = 25,
		TraceTypeQuery27    = 26,
		TraceTypeQuery28    = 27,
		TraceTypeQuery29    = 28,
		TraceTypeQuery30    = 29,
		TraceTypeQuery31    = 30,
		TraceTypeQuery32    = 31,
		TraceTypeQuery_MAX  = 32,
		ETraceTypeQuery_MAX = 33
	};

	/**
	 * Enum Engine.EMoveComponentAction
	 */
	enum class Engine_EMoveComponentAction : uint8_t
	{
		EMoveComponentAction__Move                     = 0,
		EMoveComponentAction__Stop                     = 1,
		EMoveComponentAction__Return                   = 2,
		EMoveComponentAction__EMoveComponentAction_MAX = 3
	};

	/**
	 * Enum Engine.EQuitPreference
	 */
	enum class Engine_EQuitPreference : uint8_t
	{
		EQuitPreference__Quit                = 0,
		EQuitPreference__Background          = 1,
		EQuitPreference__EQuitPreference_MAX = 2
	};

	/**
	 * Enum Engine.ERelativeTransformSpace
	 */
	enum class Engine_ERelativeTransformSpace : uint8_t
	{
		RTS_World           = 0,
		RTS_Actor           = 1,
		RTS_Component       = 2,
		RTS_ParentBoneSpace = 3,
		RTS_MAX             = 4
	};

	/**
	 * Enum Engine.EAttachLocation
	 */
	enum class Engine_EAttachLocation : uint8_t
	{
		EAttachLocation__KeepRelativeOffset         = 0,
		EAttachLocation__KeepWorldPosition          = 1,
		EAttachLocation__SnapToTarget               = 2,
		EAttachLocation__SnapToTargetIncludingScale = 3,
		EAttachLocation__EAttachLocation_MAX        = 4
	};

	/**
	 * Enum Engine.EAttachmentRule
	 */
	enum class Engine_EAttachmentRule : uint8_t
	{
		EAttachmentRule__KeepRelative        = 0,
		EAttachmentRule__KeepWorld           = 1,
		EAttachmentRule__SnapToTarget        = 2,
		EAttachmentRule__EAttachmentRule_MAX = 3
	};

	/**
	 * Enum Engine.EDetachmentRule
	 */
	enum class Engine_EDetachmentRule : uint8_t
	{
		EDetachmentRule__KeepRelative        = 0,
		EDetachmentRule__KeepWorld           = 1,
		EDetachmentRule__EDetachmentRule_MAX = 2
	};

	/**
	 * Enum Engine.EComponentMobility
	 */
	enum class Engine_EComponentMobility : uint8_t
	{
		EComponentMobility__Static                 = 0,
		EComponentMobility__Stationary             = 1,
		EComponentMobility__Movable                = 2,
		EComponentMobility__EComponentMobility_MAX = 3
	};

	/**
	 * Enum Engine.EDetailMode
	 */
	enum class Engine_EDetailMode : uint8_t
	{
		DM_Low    = 0,
		DM_Medium = 1,
		DM_High   = 2,
		DM_MAX    = 3
	};

	/**
	 * Enum Engine.ERadialImpulseFalloff
	 */
	enum class Engine_ERadialImpulseFalloff : uint8_t
	{
		RIF_Constant = 0,
		RIF_Linear   = 1,
		RIF_MAX      = 2
	};

	/**
	 * Enum Engine.ECollisionEnabled
	 */
	enum class Engine_ECollisionEnabled : uint8_t
	{
		ECollisionEnabled__NoCollision           = 0,
		ECollisionEnabled__QueryOnly             = 1,
		ECollisionEnabled__PhysicsOnly           = 2,
		ECollisionEnabled__QueryAndPhysics       = 3,
		ECollisionEnabled__ECollisionEnabled_MAX = 4
	};

	/**
	 * Enum Engine.ECollisionChannel
	 */
	enum class Engine_ECollisionChannel : uint8_t
	{
		ECC_WorldStatic           = 0,
		ECC_WorldDynamic          = 1,
		ECC_Pawn                  = 2,
		ECC_Visibility            = 3,
		ECC_Camera                = 4,
		ECC_PhysicsBody           = 5,
		ECC_Vehicle               = 6,
		ECC_Destructible          = 7,
		ECC_EngineTraceChannel1   = 8,
		ECC_EngineTraceChannel2   = 9,
		ECC_EngineTraceChannel3   = 10,
		ECC_EngineTraceChannel4   = 11,
		ECC_EngineTraceChannel5   = 12,
		ECC_EngineTraceChannel6   = 13,
		ECC_GameTraceChannel1     = 14,
		ECC_GameTraceChannel2     = 15,
		ECC_GameTraceChannel3     = 16,
		ECC_GameTraceChannel4     = 17,
		ECC_GameTraceChannel5     = 18,
		ECC_GameTraceChannel6     = 19,
		ECC_GameTraceChannel7     = 20,
		ECC_GameTraceChannel8     = 21,
		ECC_GameTraceChannel9     = 22,
		ECC_GameTraceChannel10    = 23,
		ECC_GameTraceChannel11    = 24,
		ECC_GameTraceChannel12    = 25,
		ECC_GameTraceChannel13    = 26,
		ECC_GameTraceChannel14    = 27,
		ECC_GameTraceChannel15    = 28,
		ECC_GameTraceChannel16    = 29,
		ECC_GameTraceChannel17    = 30,
		ECC_GameTraceChannel18    = 31,
		ECC_OverlapAll_Deprecated = 32,
		ECC_MAX                   = 33
	};

	/**
	 * Enum Engine.ECollisionResponse
	 */
	enum class Engine_ECollisionResponse : uint8_t
	{
		ECR_Ignore  = 0,
		ECR_Overlap = 1,
		ECR_Block   = 2,
		ECR_MAX     = 3
	};

	/**
	 * Enum Engine.EWalkableSlopeBehavior
	 */
	enum class Engine_EWalkableSlopeBehavior : uint8_t
	{
		WalkableSlope_Default    = 0,
		WalkableSlope_Increase   = 1,
		WalkableSlope_Decrease   = 2,
		WalkableSlope_Unwalkable = 3,
		WalkableSlope_Max        = 4
	};

	/**
	 * Enum Engine.EDOFMode
	 */
	enum class Engine_EDOFMode : uint8_t
	{
		EDOFMode__Default      = 0,
		EDOFMode__SixDOF       = 1,
		EDOFMode__YZPlane      = 2,
		EDOFMode__XZPlane      = 3,
		EDOFMode__XYPlane      = 4,
		EDOFMode__CustomPlane  = 5,
		EDOFMode__None         = 6,
		EDOFMode__EDOFMode_MAX = 7
	};

	/**
	 * Enum Engine.ERendererStencilMask
	 */
	enum class Engine_ERendererStencilMask : uint8_t
	{
		ERendererStencilMask__ERSM_Default = 0,
		ERendererStencilMask__ERSM         = 1,
		ERendererStencilMask__ERSM01       = 2,
		ERendererStencilMask__ERSM02       = 3,
		ERendererStencilMask__ERSM03       = 4,
		ERendererStencilMask__ERSM04       = 5,
		ERendererStencilMask__ERSM05       = 6,
		ERendererStencilMask__ERSM06       = 7,
		ERendererStencilMask__ERSM07       = 8,
		ERendererStencilMask__ERSM08       = 9,
		ERendererStencilMask__ERSM_MAX     = 10
	};

	/**
	 * Enum Engine.ESleepFamily
	 */
	enum class Engine_ESleepFamily : uint8_t
	{
		ESleepFamily__Normal           = 0,
		ESleepFamily__Sensitive        = 1,
		ESleepFamily__Custom           = 2,
		ESleepFamily__ESleepFamily_MAX = 3
	};

	/**
	 * Enum Engine.ERuntimeVirtualTextureMainPassType
	 */
	enum class Engine_ERuntimeVirtualTextureMainPassType : uint8_t
	{
		ERuntimeVirtualTextureMainPassType__Never                                  = 0,
		ERuntimeVirtualTextureMainPassType__Exclusive                              = 1,
		ERuntimeVirtualTextureMainPassType__Always                                 = 2,
		ERuntimeVirtualTextureMainPassType__ERuntimeVirtualTextureMainPassType_MAX = 3
	};

	/**
	 * Enum Engine.ECanBeCharacterBase
	 */
	enum class Engine_ECanBeCharacterBase : uint8_t
	{
		ECB_No    = 0,
		ECB_Yes   = 1,
		ECB_Owner = 2,
		ECB_MAX   = 3
	};

	/**
	 * Enum Engine.EHasCustomNavigableGeometry
	 */
	enum class Engine_EHasCustomNavigableGeometry : uint8_t
	{
		EHasCustomNavigableGeometry__No                              = 0,
		EHasCustomNavigableGeometry__Yes                             = 1,
		EHasCustomNavigableGeometry__EvenIfNotCollidable             = 2,
		EHasCustomNavigableGeometry__DontExport                      = 3,
		EHasCustomNavigableGeometry__EHasCustomNavigableGeometry_MAX = 4
	};

	/**
	 * Enum Engine.ELightmapType
	 */
	enum class Engine_ELightmapType : uint8_t
	{
		ELightmapType__Default           = 0,
		ELightmapType__ForceSurface      = 1,
		ELightmapType__ForceVolumetric   = 2,
		ELightmapType__ELightmapType_MAX = 3
	};

	/**
	 * Enum Engine.EIndirectLightingCacheQuality
	 */
	enum class Engine_EIndirectLightingCacheQuality : uint8_t
	{
		ILCQ_Off    = 0,
		ILCQ_Point  = 1,
		ILCQ_Volume = 2,
		ILCQ_MAX    = 3
	};

	/**
	 * Enum Engine.ESceneDepthPriorityGroup
	 */
	enum class Engine_ESceneDepthPriorityGroup : uint8_t
	{
		SDPG_World      = 0,
		SDPG_Foreground = 1,
		SDPG_MAX        = 2
	};

	/**
	 * Enum Engine.EMouseLockMode
	 */
	enum class Engine_EMouseLockMode : uint8_t
	{
		EMouseLockMode__DoNotLock          = 0,
		EMouseLockMode__LockOnCapture      = 1,
		EMouseLockMode__LockAlways         = 2,
		EMouseLockMode__LockInFullscreen   = 3,
		EMouseLockMode__EMouseLockMode_MAX = 4
	};

	/**
	 * Enum Engine.EWindowTitleBarMode
	 */
	enum class Engine_EWindowTitleBarMode : uint8_t
	{
		EWindowTitleBarMode__Overlay                 = 0,
		EWindowTitleBarMode__VerticalBox             = 1,
		EWindowTitleBarMode__EWindowTitleBarMode_MAX = 2
	};

	/**
	 * Enum Engine.EAlphaBlendOption
	 */
	enum class Engine_EAlphaBlendOption : uint8_t
	{
		EAlphaBlendOption__Linear                = 0,
		EAlphaBlendOption__Cubic                 = 1,
		EAlphaBlendOption__HermiteCubic          = 2,
		EAlphaBlendOption__Sinusoidal            = 3,
		EAlphaBlendOption__QuadraticInOut        = 4,
		EAlphaBlendOption__CubicInOut            = 5,
		EAlphaBlendOption__QuarticInOut          = 6,
		EAlphaBlendOption__QuinticInOut          = 7,
		EAlphaBlendOption__CircularIn            = 8,
		EAlphaBlendOption__CircularOut           = 9,
		EAlphaBlendOption__CircularInOut         = 10,
		EAlphaBlendOption__ExpIn                 = 11,
		EAlphaBlendOption__ExpOut                = 12,
		EAlphaBlendOption__ExpInOut              = 13,
		EAlphaBlendOption__Custom                = 14,
		EAlphaBlendOption__EAlphaBlendOption_MAX = 15
	};

	/**
	 * Enum Engine.EAnimGroupRole
	 */
	enum class Engine_EAnimGroupRole : uint8_t
	{
		EAnimGroupRole__CanBeLeader        = 0,
		EAnimGroupRole__AlwaysFollower     = 1,
		EAnimGroupRole__AlwaysLeader       = 2,
		EAnimGroupRole__TransitionLeader   = 3,
		EAnimGroupRole__TransitionFollower = 4,
		EAnimGroupRole__EAnimGroupRole_MAX = 5
	};

	/**
	 * Enum Engine.AnimationKeyFormat
	 */
	enum class Engine_EAnimationKeyFormat : uint8_t
	{
		AKF_ConstantKeyLerp     = 0,
		AKF_VariableKeyLerp     = 1,
		AKF_PerTrackCompression = 2,
		AKF_MAX                 = 3
	};

	/**
	 * Enum Engine.ERawCurveTrackTypes
	 */
	enum class Engine_ERawCurveTrackTypes : uint8_t
	{
		ERawCurveTrackTypes__RCT_Float     = 0,
		ERawCurveTrackTypes__RCT_Vector    = 1,
		ERawCurveTrackTypes__RCT_Transform = 2,
		ERawCurveTrackTypes__RCT_MAX       = 3
	};

	/**
	 * Enum Engine.EAnimAssetCurveFlags
	 */
	enum class Engine_EAnimAssetCurveFlags : uint8_t
	{
		AACF_DriveMorphTarget_DEPRECATED = 0,
		AACF_DriveAttribute_DEPRECATED   = 1,
		AACF_Editable                    = 2,
		AACF_DriveMaterial_DEPRECATED    = 3,
		AACF_Metadata                    = 4,
		AACF_DriveTrack                  = 5,
		AACF_Disabled                    = 6,
		AACF_MAX                         = 7
	};

	/**
	 * Enum Engine.AnimationCompressionFormat
	 */
	enum class Engine_EAnimationCompressionFormat : uint8_t
	{
		ACF_None               = 0,
		ACF_Float96NoW         = 1,
		ACF_Fixed48NoW         = 2,
		ACF_IntervalFixed32NoW = 3,
		ACF_Fixed32NoW         = 4,
		ACF_Float32NoW         = 5,
		ACF_Identity           = 6,
		ACF_MAX                = 7
	};

	/**
	 * Enum Engine.EAdditiveBasePoseType
	 */
	enum class Engine_EAdditiveBasePoseType : uint8_t
	{
		ABPT_None       = 0,
		ABPT_RefPose    = 1,
		ABPT_AnimScaled = 2,
		ABPT_AnimFrame  = 3,
		ABPT_MAX        = 4
	};

	/**
	 * Enum Engine.ERootMotionMode
	 */
	enum class Engine_ERootMotionMode : uint8_t
	{
		ERootMotionMode__NoRootMotionExtraction     = 0,
		ERootMotionMode__IgnoreRootMotion           = 1,
		ERootMotionMode__RootMotionFromEverything   = 2,
		ERootMotionMode__RootMotionFromMontagesOnly = 3,
		ERootMotionMode__ERootMotionMode_MAX        = 4
	};

	/**
	 * Enum Engine.ERootMotionRootLock
	 */
	enum class Engine_ERootMotionRootLock : uint8_t
	{
		ERootMotionRootLock__RefPose                 = 0,
		ERootMotionRootLock__AnimFirstFrame          = 1,
		ERootMotionRootLock__Zero                    = 2,
		ERootMotionRootLock__ERootMotionRootLock_MAX = 3
	};

	/**
	 * Enum Engine.EMontagePlayReturnType
	 */
	enum class Engine_EMontagePlayReturnType : uint8_t
	{
		EMontagePlayReturnType__MontageLength              = 0,
		EMontagePlayReturnType__Duration                   = 1,
		EMontagePlayReturnType__EMontagePlayReturnType_MAX = 2
	};

	/**
	 * Enum Engine.EDrawDebugItemType
	 */
	enum class Engine_EDrawDebugItemType : uint8_t
	{
		EDrawDebugItemType__DirectionalArrow       = 0,
		EDrawDebugItemType__Sphere                 = 1,
		EDrawDebugItemType__Line                   = 2,
		EDrawDebugItemType__OnScreenMessage        = 3,
		EDrawDebugItemType__CoordinateSystem       = 4,
		EDrawDebugItemType__EDrawDebugItemType_MAX = 5
	};

	/**
	 * Enum Engine.EAnimLinkMethod
	 */
	enum class Engine_EAnimLinkMethod : uint8_t
	{
		EAnimLinkMethod__Absolute            = 0,
		EAnimLinkMethod__Relative            = 1,
		EAnimLinkMethod__Proportional        = 2,
		EAnimLinkMethod__EAnimLinkMethod_MAX = 3
	};

	/**
	 * Enum Engine.EMontageSubStepResult
	 */
	enum class Engine_EMontageSubStepResult : uint8_t
	{
		EMontageSubStepResult__Moved                     = 0,
		EMontageSubStepResult__NotMoved                  = 1,
		EMontageSubStepResult__InvalidSection            = 2,
		EMontageSubStepResult__InvalidMontage            = 3,
		EMontageSubStepResult__EMontageSubStepResult_MAX = 4
	};

	/**
	 * Enum Engine.EAnimNotifyEventType
	 */
	enum class Engine_EAnimNotifyEventType : uint8_t
	{
		EAnimNotifyEventType__Begin                    = 0,
		EAnimNotifyEventType__End                      = 1,
		EAnimNotifyEventType__EAnimNotifyEventType_MAX = 2
	};

	/**
	 * Enum Engine.EEvaluatorMode
	 */
	enum class Engine_EEvaluatorMode : uint8_t
	{
		EEvaluatorMode__EM_Standard      = 0,
		EEvaluatorMode__EM_Freeze        = 1,
		EEvaluatorMode__EM_DelayedFreeze = 2,
		EEvaluatorMode__EM_MAX           = 3
	};

	/**
	 * Enum Engine.EEvaluatorDataSource
	 */
	enum class Engine_EEvaluatorDataSource : uint8_t
	{
		EEvaluatorDataSource__EDS_SourcePose      = 0,
		EEvaluatorDataSource__EDS_DestinationPose = 1,
		EEvaluatorDataSource__EDS_MAX             = 2
	};

	/**
	 * Enum Engine.ECopyType
	 */
	enum class Engine_ECopyType : uint8_t
	{
		ECopyType__MemCopy        = 0,
		ECopyType__BoolProperty   = 1,
		ECopyType__StructProperty = 2,
		ECopyType__ObjectProperty = 3,
		ECopyType__ECopyType_MAX  = 4
	};

	/**
	 * Enum Engine.EPostCopyOperation
	 */
	enum class Engine_EPostCopyOperation : uint8_t
	{
		EPostCopyOperation__None                   = 0,
		EPostCopyOperation__LogicalNegateBool      = 1,
		EPostCopyOperation__EPostCopyOperation_MAX = 2
	};

	/**
	 * Enum Engine.EPinHidingMode
	 */
	enum class Engine_EPinHidingMode : uint8_t
	{
		EPinHidingMode__NeverAsPin         = 0,
		EPinHidingMode__PinHiddenByDefault = 1,
		EPinHidingMode__PinShownByDefault  = 2,
		EPinHidingMode__AlwaysAsPin        = 3,
		EPinHidingMode__EPinHidingMode_MAX = 4
	};

	/**
	 * Enum Engine.AnimPhysCollisionType
	 */
	enum class Engine_EAnimPhysCollisionType : uint8_t
	{
		AnimPhysCollisionType__CoM                       = 0,
		AnimPhysCollisionType__CustomSphere              = 1,
		AnimPhysCollisionType__InnerSphere               = 2,
		AnimPhysCollisionType__OuterSphere               = 3,
		AnimPhysCollisionType__AnimPhysCollisionType_MAX = 4
	};

	/**
	 * Enum Engine.AnimPhysTwistAxis
	 */
	enum class Engine_EAnimPhysTwistAxis : uint8_t
	{
		AnimPhysTwistAxis__AxisX                 = 0,
		AnimPhysTwistAxis__AxisY                 = 1,
		AnimPhysTwistAxis__AxisZ                 = 2,
		AnimPhysTwistAxis__AnimPhysTwistAxis_MAX = 3
	};

	/**
	 * Enum Engine.ETypeAdvanceAnim
	 */
	enum class Engine_ETypeAdvanceAnim : uint8_t
	{
		ETAA_Default  = 0,
		ETAA_Finished = 1,
		ETAA_Looped   = 2,
		ETAA_MAX      = 3
	};

	/**
	 * Enum Engine.ETransitionLogicType
	 */
	enum class Engine_ETransitionLogicType : uint8_t
	{
		ETransitionLogicType__TLT_StandardBlend = 0,
		ETransitionLogicType__TLT_Custom        = 1,
		ETransitionLogicType__TLT_MAX           = 2
	};

	/**
	 * Enum Engine.ETransitionBlendMode
	 */
	enum class Engine_ETransitionBlendMode : uint8_t
	{
		ETransitionBlendMode__TBM_Linear = 0,
		ETransitionBlendMode__TBM_Cubic  = 1,
		ETransitionBlendMode__TBM_MAX    = 2
	};

	/**
	 * Enum Engine.EComponentType
	 */
	enum class Engine_EComponentType : uint8_t
	{
		EComponentType__None               = 0,
		EComponentType__TranslationX       = 1,
		EComponentType__TranslationY       = 2,
		EComponentType__TranslationZ       = 3,
		EComponentType__RotationX          = 4,
		EComponentType__RotationY          = 5,
		EComponentType__RotationZ          = 6,
		EComponentType__Scale              = 7,
		EComponentType__ScaleX             = 8,
		EComponentType__ScaleY             = 9,
		EComponentType__ScaleZ             = 10,
		EComponentType__EComponentType_MAX = 11
	};

	/**
	 * Enum Engine.EAxisOption
	 */
	enum class Engine_EAxisOption : uint8_t
	{
		EAxisOption__X               = 0,
		EAxisOption__Y               = 1,
		EAxisOption__Z               = 2,
		EAxisOption__X_Neg           = 3,
		EAxisOption__Y_Neg           = 4,
		EAxisOption__Z_Neg           = 5,
		EAxisOption__Custom          = 6,
		EAxisOption__EAxisOption_MAX = 7
	};

	/**
	 * Enum Engine.EAnimInterpolationType
	 */
	enum class Engine_EAnimInterpolationType : uint8_t
	{
		EAnimInterpolationType__Linear                     = 0,
		EAnimInterpolationType__Step                       = 1,
		EAnimInterpolationType__EAnimInterpolationType_MAX = 2
	};

	/**
	 * Enum Engine.ECurveBlendOption
	 */
	enum class Engine_ECurveBlendOption : uint8_t
	{
		ECurveBlendOption__MaxWeight             = 0,
		ECurveBlendOption__NormalizeByWeight     = 1,
		ECurveBlendOption__BlendByWeight         = 2,
		ECurveBlendOption__ECurveBlendOption_MAX = 3
	};

	/**
	 * Enum Engine.EAdditiveAnimationType
	 */
	enum class Engine_EAdditiveAnimationType : uint8_t
	{
		AAT_None                    = 0,
		AAT_LocalSpaceBase          = 1,
		AAT_RotationOffsetMeshSpace = 2,
		AAT_MAX                     = 3
	};

	/**
	 * Enum Engine.ENotifyFilterType
	 */
	enum class Engine_ENotifyFilterType : uint8_t
	{
		ENotifyFilterType__NoFiltering           = 0,
		ENotifyFilterType__LOD                   = 1,
		ENotifyFilterType__ENotifyFilterType_MAX = 2
	};

	/**
	 * Enum Engine.EMontageNotifyTickType
	 */
	enum class Engine_EMontageNotifyTickType : uint8_t
	{
		EMontageNotifyTickType__Queued                     = 0,
		EMontageNotifyTickType__BranchingPoint             = 1,
		EMontageNotifyTickType__EMontageNotifyTickType_MAX = 2
	};

	/**
	 * Enum Engine.EBoneRotationSource
	 */
	enum class Engine_EBoneRotationSource : uint8_t
	{
		BRS_KeepComponentSpaceRotation = 0,
		BRS_KeepLocalSpaceRotation     = 1,
		BRS_CopyFromTarget             = 2,
		BRS_MAX                        = 3
	};

	/**
	 * Enum Engine.EBoneControlSpace
	 */
	enum class Engine_EBoneControlSpace : uint8_t
	{
		BCS_WorldSpace      = 0,
		BCS_ComponentSpace  = 1,
		BCS_ParentBoneSpace = 2,
		BCS_BoneSpace       = 3,
		BCS_MAX             = 4
	};

	/**
	 * Enum Engine.EBoneAxis
	 */
	enum class Engine_EBoneAxis : uint8_t
	{
		BA_X   = 0,
		BA_Y   = 1,
		BA_Z   = 2,
		BA_MAX = 3
	};

	/**
	 * Enum Engine.EPrimaryAssetCookRule
	 */
	enum class Engine_EPrimaryAssetCookRule : uint8_t
	{
		EPrimaryAssetCookRule__Unknown                   = 0,
		EPrimaryAssetCookRule__NeverCook                 = 1,
		EPrimaryAssetCookRule__DevelopmentCook           = 2,
		EPrimaryAssetCookRule__DevelopmentAlwaysCook     = 3,
		EPrimaryAssetCookRule__AlwaysCook                = 4,
		EPrimaryAssetCookRule__EPrimaryAssetCookRule_MAX = 5
	};

	/**
	 * Enum Engine.EAttenuationShape
	 */
	enum class Engine_EAttenuationShape : uint8_t
	{
		EAttenuationShape__Sphere                = 0,
		EAttenuationShape__Capsule               = 1,
		EAttenuationShape__Box                   = 2,
		EAttenuationShape__Cone                  = 3,
		EAttenuationShape__EAttenuationShape_MAX = 4
	};

	/**
	 * Enum Engine.EAttenuationDistanceModel
	 */
	enum class Engine_EAttenuationDistanceModel : uint8_t
	{
		EAttenuationDistanceModel__Linear                        = 0,
		EAttenuationDistanceModel__Logarithmic                   = 1,
		EAttenuationDistanceModel__Inverse                       = 2,
		EAttenuationDistanceModel__LogReverse                    = 3,
		EAttenuationDistanceModel__NaturalSound                  = 4,
		EAttenuationDistanceModel__Custom                        = 5,
		EAttenuationDistanceModel__EAttenuationDistanceModel_MAX = 6
	};

	/**
	 * Enum Engine.EMonoChannelUpmixMethod
	 */
	enum class Engine_EMonoChannelUpmixMethod : uint8_t
	{
		EMonoChannelUpmixMethod__Linear                      = 0,
		EMonoChannelUpmixMethod__EqualPower                  = 1,
		EMonoChannelUpmixMethod__FullVolume                  = 2,
		EMonoChannelUpmixMethod__EMonoChannelUpmixMethod_MAX = 3
	};

	/**
	 * Enum Engine.EPanningMethod
	 */
	enum class Engine_EPanningMethod : uint8_t
	{
		EPanningMethod__Linear             = 0,
		EPanningMethod__EqualPower         = 1,
		EPanningMethod__EPanningMethod_MAX = 2
	};

	/**
	 * Enum Engine.EVoiceSampleRate
	 */
	enum class Engine_EVoiceSampleRate : uint8_t
	{
		EVoiceSampleRate__Low16000Hz           = 0,
		EVoiceSampleRate__Normal24000Hz        = 1,
		EVoiceSampleRate__EVoiceSampleRate_MAX = 2
	};

	/**
	 * Enum Engine.ReverbPreset
	 */
	enum class Engine_EReverbPreset : uint8_t
	{
		REVERB_Default       = 0,
		REVERB_Bathroom      = 1,
		REVERB_StoneRoom     = 2,
		REVERB_Auditorium    = 3,
		REVERB_ConcertHall   = 4,
		REVERB_Cave          = 5,
		REVERB_Hallway       = 6,
		REVERB_StoneCorridor = 7,
		REVERB_Alley         = 8,
		REVERB_Forest        = 9,
		REVERB_City          = 10,
		REVERB_Mountains     = 11,
		REVERB_Quarry        = 12,
		REVERB_Plain         = 13,
		REVERB_ParkingLot    = 14,
		REVERB_SewerPipe     = 15,
		REVERB_Underwater    = 16,
		REVERB_SmallRoom     = 17,
		REVERB_MediumRoom    = 18,
		REVERB_LargeRoom     = 19,
		REVERB_MediumHall    = 20,
		REVERB_LargeHall     = 21,
		REVERB_Plate         = 22,
		REVERB_MAX           = 23
	};

	/**
	 * Enum Engine.EBlendableLocation
	 */
	enum class Engine_EBlendableLocation : uint8_t
	{
		BL_AfterTonemapping    = 0,
		BL_BeforeTonemapping   = 1,
		BL_BeforeTranslucency  = 2,
		BL_ReplacingTonemapper = 3,
		BL_SSRInput            = 4,
		BL_MAX                 = 5
	};

	/**
	 * Enum Engine.ENotifyTriggerMode
	 */
	enum class Engine_ENotifyTriggerMode : uint8_t
	{
		ENotifyTriggerMode__AllAnimations            = 0,
		ENotifyTriggerMode__HighestWeightedAnimation = 1,
		ENotifyTriggerMode__None                     = 2,
		ENotifyTriggerMode__ENotifyTriggerMode_MAX   = 3
	};

	/**
	 * Enum Engine.EBlendSpaceAxis
	 */
	enum class Engine_EBlendSpaceAxis : uint8_t
	{
		BSA_None = 0,
		BSA_X    = 1,
		BSA_Y    = 2,
		BSA_Max  = 3
	};

	/**
	 * Enum Engine.EBlueprintNativizationFlag
	 */
	enum class Engine_EBlueprintNativizationFlag : uint8_t
	{
		EBlueprintNativizationFlag__Disabled                       = 0,
		EBlueprintNativizationFlag__Dependency                     = 1,
		EBlueprintNativizationFlag__ExplicitlyEnabled              = 2,
		EBlueprintNativizationFlag__EBlueprintNativizationFlag_MAX = 3
	};

	/**
	 * Enum Engine.EBlueprintCompileMode
	 */
	enum class Engine_EBlueprintCompileMode : uint8_t
	{
		EBlueprintCompileMode__Default                   = 0,
		EBlueprintCompileMode__Development               = 1,
		EBlueprintCompileMode__FinalRelease              = 2,
		EBlueprintCompileMode__EBlueprintCompileMode_MAX = 3
	};

	/**
	 * Enum Engine.EBlueprintType
	 */
	enum class Engine_EBlueprintType : uint8_t
	{
		BPTYPE_Normal          = 0,
		BPTYPE_Const           = 1,
		BPTYPE_MacroLibrary    = 2,
		BPTYPE_Interface       = 3,
		BPTYPE_LevelScript     = 4,
		BPTYPE_FunctionLibrary = 5,
		BPTYPE_MAX             = 6
	};

	/**
	 * Enum Engine.EBlueprintStatus
	 */
	enum class Engine_EBlueprintStatus : uint8_t
	{
		BS_Unknown              = 0,
		BS_Dirty                = 1,
		BS_Error                = 2,
		BS_UpToDate             = 3,
		BS_BeingCreated         = 4,
		BS_UpToDateWithWarnings = 5,
		BS_MAX                  = 6
	};

	/**
	 * Enum Engine.EBodyCollisionResponse
	 */
	enum class Engine_EBodyCollisionResponse : uint8_t
	{
		EBodyCollisionResponse__BodyCollision_Enabled  = 0,
		EBodyCollisionResponse__BodyCollision_Disabled = 1,
		EBodyCollisionResponse__BodyCollision_MAX      = 2
	};

	/**
	 * Enum Engine.EPhysicsType
	 */
	enum class Engine_EPhysicsType : uint8_t
	{
		PhysType_Default   = 0,
		PhysType_Kinematic = 1,
		PhysType_Simulated = 2,
		PhysType_MAX       = 3
	};

	/**
	 * Enum Engine.ECollisionTraceFlag
	 */
	enum class Engine_ECollisionTraceFlag : uint8_t
	{
		CTF_UseDefault          = 0,
		CTF_UseSimpleAndComplex = 1,
		CTF_UseSimpleAsComplex  = 2,
		CTF_UseComplexAsSimple  = 3,
		CTF_MAX                 = 4
	};

	/**
	 * Enum Engine.EBrushType
	 */
	enum class Engine_EBrushType : uint8_t
	{
		Brush_Default  = 0,
		Brush_Add      = 1,
		Brush_Subtract = 2,
		Brush_MAX      = 3
	};

	/**
	 * Enum Engine.ECsgOper
	 */
	enum class Engine_ECsgOper : uint8_t
	{
		CSG_Active      = 0,
		CSG_Add         = 1,
		CSG_Subtract    = 2,
		CSG_Intersect   = 3,
		CSG_Deintersect = 4,
		CSG_None        = 5,
		CSG_MAX         = 6
	};

	/**
	 * Enum Engine.EInitialOscillatorOffset
	 */
	enum class Engine_EInitialOscillatorOffset : uint8_t
	{
		EOO_OffsetRandom = 0,
		EOO_OffsetZero   = 1,
		EOO_MAX          = 2
	};

	/**
	 * Enum Engine.EOscillatorWaveform
	 */
	enum class Engine_EOscillatorWaveform : uint8_t
	{
		EOscillatorWaveform__SineWave                = 0,
		EOscillatorWaveform__PerlinNoise             = 1,
		EOscillatorWaveform__EOscillatorWaveform_MAX = 2
	};

	/**
	 * Enum Engine.ECameraAlphaBlendMode
	 */
	enum class Engine_ECameraAlphaBlendMode : uint8_t
	{
		ECameraAlphaBlendMode__CABM_Linear = 0,
		ECameraAlphaBlendMode__CABM_Cubic  = 1,
		ECameraAlphaBlendMode__CABM_MAX    = 2
	};

	/**
	 * Enum Engine.ECameraAnimPlaySpace
	 */
	enum class Engine_ECameraAnimPlaySpace : uint8_t
	{
		ECameraAnimPlaySpace__CameraLocal              = 0,
		ECameraAnimPlaySpace__World                    = 1,
		ECameraAnimPlaySpace__UserDefined              = 2,
		ECameraAnimPlaySpace__ECameraAnimPlaySpace_MAX = 3
	};

	/**
	 * Enum Engine.ECameraProjectionMode
	 */
	enum class Engine_ECameraProjectionMode : uint8_t
	{
		ECameraProjectionMode__Perspective               = 0,
		ECameraProjectionMode__Orthographic              = 1,
		ECameraProjectionMode__ECameraProjectionMode_MAX = 2
	};

	/**
	 * Enum Engine.ECloudStorageDelegate
	 */
	enum class Engine_ECloudStorageDelegate : uint8_t
	{
		CSD_KeyValueReadComplete     = 0,
		CSD_KeyValueWriteComplete    = 1,
		CSD_ValueChanged             = 2,
		CSD_DocumentQueryComplete    = 3,
		CSD_DocumentReadComplete     = 4,
		CSD_DocumentWriteComplete    = 5,
		CSD_DocumentConflictDetected = 6,
		CSD_MAX                      = 7
	};

	/**
	 * Enum Engine.EAngularDriveMode
	 */
	enum class Engine_EAngularDriveMode : uint8_t
	{
		EAngularDriveMode__SLERP                 = 0,
		EAngularDriveMode__TwistAndSwing         = 1,
		EAngularDriveMode__EAngularDriveMode_MAX = 2
	};

	/**
	 * Enum Engine.ELinearConstraintMotion
	 */
	enum class Engine_ELinearConstraintMotion : uint8_t
	{
		LCM_Free    = 0,
		LCM_Limited = 1,
		LCM_Locked  = 2,
		LCM_MAX     = 3
	};

	/**
	 * Enum Engine.ECurveTableMode
	 */
	enum class Engine_ECurveTableMode : uint8_t
	{
		ECurveTableMode__Empty               = 0,
		ECurveTableMode__SimpleCurves        = 1,
		ECurveTableMode__RichCurves          = 2,
		ECurveTableMode__ECurveTableMode_MAX = 3
	};

	/**
	 * Enum Engine.EEvaluateCurveTableResult
	 */
	enum class Engine_EEvaluateCurveTableResult : uint8_t
	{
		EEvaluateCurveTableResult__RowFound                      = 0,
		EEvaluateCurveTableResult__RowNotFound                   = 1,
		EEvaluateCurveTableResult__EEvaluateCurveTableResult_MAX = 2
	};

	/**
	 * Enum Engine.EGrammaticalNumber
	 */
	enum class Engine_EGrammaticalNumber : uint8_t
	{
		EGrammaticalNumber__Singular               = 0,
		EGrammaticalNumber__Plural                 = 1,
		EGrammaticalNumber__EGrammaticalNumber_MAX = 2
	};

	/**
	 * Enum Engine.EGrammaticalGender
	 */
	enum class Engine_EGrammaticalGender : uint8_t
	{
		EGrammaticalGender__Neuter                 = 0,
		EGrammaticalGender__Masculine              = 1,
		EGrammaticalGender__Feminine               = 2,
		EGrammaticalGender__Mixed                  = 3,
		EGrammaticalGender__EGrammaticalGender_MAX = 4
	};

	/**
	 * Enum Engine.DistributionParamMode
	 */
	enum class Engine_EDistributionParamMode : uint8_t
	{
		DPM_Normal = 0,
		DPM_Abs    = 1,
		DPM_Direct = 2,
		DPM_MAX    = 3
	};

	/**
	 * Enum Engine.EDistributionVectorMirrorFlags
	 */
	enum class Engine_EDistributionVectorMirrorFlags : uint8_t
	{
		EDVMF_Same      = 0,
		EDVMF_Different = 1,
		EDVMF_Mirror    = 2,
		EDVMF_MAX       = 3
	};

	/**
	 * Enum Engine.EDistributionVectorLockFlags
	 */
	enum class Engine_EDistributionVectorLockFlags : uint8_t
	{
		EDVLF_None = 0,
		EDVLF_XY   = 1,
		EDVLF_XZ   = 2,
		EDVLF_YZ   = 3,
		EDVLF_XYZ  = 4,
		EDVLF_MAX  = 5
	};

	/**
	 * Enum Engine.ENodeEnabledState
	 */
	enum class Engine_ENodeEnabledState : uint8_t
	{
		ENodeEnabledState__Enabled               = 0,
		ENodeEnabledState__Disabled              = 1,
		ENodeEnabledState__DevelopmentOnly       = 2,
		ENodeEnabledState__ENodeEnabledState_MAX = 3
	};

	/**
	 * Enum Engine.ENodeAdvancedPins
	 */
	enum class Engine_ENodeAdvancedPins : uint8_t
	{
		ENodeAdvancedPins__NoPins                = 0,
		ENodeAdvancedPins__Shown                 = 1,
		ENodeAdvancedPins__Hidden                = 2,
		ENodeAdvancedPins__ENodeAdvancedPins_MAX = 3
	};

	/**
	 * Enum Engine.ENodeTitleType
	 */
	enum class Engine_ENodeTitleType : uint8_t
	{
		ENodeTitleType__FullTitle          = 0,
		ENodeTitleType__ListView           = 1,
		ENodeTitleType__EditableTitle      = 2,
		ENodeTitleType__MenuTitle          = 3,
		ENodeTitleType__MAX_TitleTypes     = 4,
		ENodeTitleType__ENodeTitleType_MAX = 5
	};

	/**
	 * Enum Engine.EPinContainerType
	 */
	enum class Engine_EPinContainerType : uint8_t
	{
		EPinContainerType__None                  = 0,
		EPinContainerType__Array                 = 1,
		EPinContainerType__Set                   = 2,
		EPinContainerType__Map                   = 3,
		EPinContainerType__EPinContainerType_MAX = 4
	};

	/**
	 * Enum Engine.EEdGraphPinDirection
	 */
	enum class Engine_EEdGraphPinDirection : uint8_t
	{
		EGPD_Input  = 0,
		EGPD_Output = 1,
		EGPD_MAX    = 2
	};

	/**
	 * Enum Engine.EBlueprintPinStyleType
	 */
	enum class Engine_EBlueprintPinStyleType : uint8_t
	{
		BPST_Original = 0,
		BPST_VariantA = 1,
		BPST_MAX      = 2
	};

	/**
	 * Enum Engine.ECanCreateConnectionResponse
	 */
	enum class Engine_ECanCreateConnectionResponse : uint8_t
	{
		CONNECT_RESPONSE_MAKE                      = 0,
		CONNECT_RESPONSE_DISALLOW                  = 1,
		CONNECT_RESPONSE_BREAK_OTHERS_A            = 2,
		CONNECT_RESPONSE_BREAK_OTHERS_B            = 3,
		CONNECT_RESPONSE_BREAK_OTHERS_AB           = 4,
		CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
		CONNECT_RESPONSE_MAX                       = 6
	};

	/**
	 * Enum Engine.EGraphType
	 */
	enum class Engine_EGraphType : uint8_t
	{
		GT_Function     = 0,
		GT_Ubergraph    = 1,
		GT_Macro        = 2,
		GT_Animation    = 3,
		GT_StateMachine = 4,
		GT_MAX          = 5
	};

	/**
	 * Enum Engine.EConsoleType
	 */
	enum class Engine_EConsoleType : uint8_t
	{
		EConsoleType__Any    = 0,
		EConsoleType__Mobile = 1,
		EConsoleType__MAX    = 2
	};

	/**
	 * Enum Engine.ETransitionType
	 */
	enum class Engine_ETransitionType : uint8_t
	{
		ETransitionType__None             = 0,
		ETransitionType__Paused           = 1,
		ETransitionType__Loading          = 2,
		ETransitionType__Saving           = 3,
		ETransitionType__Connecting       = 4,
		ETransitionType__Precaching       = 5,
		ETransitionType__WaitingToConnect = 6,
		ETransitionType__MAX              = 7
	};

	/**
	 * Enum Engine.EFullyLoadPackageType
	 */
	enum class Engine_EFullyLoadPackageType : uint8_t
	{
		FULLYLOAD_Map                = 0,
		FULLYLOAD_Game_PreLoadClass  = 1,
		FULLYLOAD_Game_PostLoadClass = 2,
		FULLYLOAD_Always             = 3,
		FULLYLOAD_Mutator            = 4,
		FULLYLOAD_MAX                = 5
	};

	/**
	 * Enum Engine.EViewModeIndex
	 */
	enum class Engine_EViewModeIndex : uint8_t
	{
		VMI_BrushWireframe                   = 0,
		VMI_Wireframe                        = 1,
		VMI_Unlit                            = 2,
		VMI_Lit                              = 3,
		VMI_Lit_DetailLighting               = 4,
		VMI_LightingOnly                     = 5,
		VMI_LightComplexity                  = 6,
		VMI_ShaderComplexity                 = 7,
		VMI_LightmapDensity                  = 8,
		VMI_LitLightmapDensity               = 9,
		VMI_ReflectionOverride               = 10,
		VMI_VisualizeBuffer                  = 11,
		VMI_StationaryLightOverlap           = 12,
		VMI_CollisionPawn                    = 13,
		VMI_CollisionVisibility              = 14,
		VMI_LODColoration                    = 15,
		VMI_QuadOverdraw                     = 16,
		VMI_PrimitiveDistanceAccuracy        = 17,
		VMI_MeshUVDensityAccuracy            = 18,
		VMI_ShaderComplexityWithQuadOverdraw = 19,
		VMI_HLODColoration                   = 20,
		VMI_GroupLODColoration               = 21,
		VMI_MaterialTextureScaleAccuracy     = 22,
		VMI_RequiredTextureResolution        = 23,
		VMI_PathTracing                      = 24,
		VMI_RayTracingDebug                  = 25,
		VMI_Max                              = 26,
		VMI_Unknown                          = 27
	};

	/**
	 * Enum Engine.EDemoPlayFailure
	 */
	enum class Engine_EDemoPlayFailure : uint8_t
	{
		EDemoPlayFailure__Generic                = 0,
		EDemoPlayFailure__DemoNotFound           = 1,
		EDemoPlayFailure__Corrupt                = 2,
		EDemoPlayFailure__InvalidVersion         = 3,
		EDemoPlayFailure__InitBase               = 4,
		EDemoPlayFailure__GameSpecificHeader     = 5,
		EDemoPlayFailure__ReplayStreamerInternal = 6,
		EDemoPlayFailure__LoadMap                = 7,
		EDemoPlayFailure__Serialization          = 8,
		EDemoPlayFailure__EDemoPlayFailure_MAX   = 9
	};

	/**
	 * Enum Engine.ETravelType
	 */
	enum class Engine_ETravelType : uint8_t
	{
		TRAVEL_Absolute = 0,
		TRAVEL_Partial  = 1,
		TRAVEL_Relative = 2,
		TRAVEL_MAX      = 3
	};

	/**
	 * Enum Engine.ENetworkLagState
	 */
	enum class Engine_ENetworkLagState : uint8_t
	{
		ENetworkLagState__NotLagging           = 0,
		ENetworkLagState__Lagging              = 1,
		ENetworkLagState__ENetworkLagState_MAX = 2
	};

	/**
	 * Enum Engine.EMouseCaptureMode
	 */
	enum class Engine_EMouseCaptureMode : uint8_t
	{
		EMouseCaptureMode__NoCapture                                    = 0,
		EMouseCaptureMode__CapturePermanently                           = 1,
		EMouseCaptureMode__CapturePermanently_IncludingInitialMouseDown = 2,
		EMouseCaptureMode__CaptureDuringMouseDown                       = 3,
		EMouseCaptureMode__CaptureDuringRightMouseDown                  = 4,
		EMouseCaptureMode__EMouseCaptureMode_MAX                        = 5
	};

	/**
	 * Enum Engine.EInputEvent
	 */
	enum class Engine_EInputEvent : uint8_t
	{
		IE_Pressed     = 0,
		IE_Released    = 1,
		IE_Repeat      = 2,
		IE_DoubleClick = 3,
		IE_Axis        = 4,
		IE_MAX         = 5
	};

	/**
	 * Enum Engine.ECustomTimeStepSynchronizationState
	 */
	enum class Engine_ECustomTimeStepSynchronizationState : uint8_t
	{
		ECustomTimeStepSynchronizationState__Closed                                  = 0,
		ECustomTimeStepSynchronizationState__Error                                   = 1,
		ECustomTimeStepSynchronizationState__Synchronized                            = 2,
		ECustomTimeStepSynchronizationState__Synchronizing                           = 3,
		ECustomTimeStepSynchronizationState__ECustomTimeStepSynchronizationState_MAX = 4
	};

	/**
	 * Enum Engine.EMeshBufferAccess
	 */
	enum class Engine_EMeshBufferAccess : uint8_t
	{
		EMeshBufferAccess__Default               = 0,
		EMeshBufferAccess__ForceCPUAndGPU        = 1,
		EMeshBufferAccess__EMeshBufferAccess_MAX = 2
	};

	/**
	 * Enum Engine.ESpawnActorCollisionHandlingMethod
	 */
	enum class Engine_ESpawnActorCollisionHandlingMethod : uint8_t
	{
		ESpawnActorCollisionHandlingMethod__Undefined                               = 0,
		ESpawnActorCollisionHandlingMethod__AlwaysSpawn                             = 1,
		ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButAlwaysSpawn          = 2,
		ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding = 3,
		ESpawnActorCollisionHandlingMethod__DontSpawnIfColliding                    = 4,
		ESpawnActorCollisionHandlingMethod__ESpawnActorCollisionHandlingMethod_MAX  = 5
	};

	/**
	 * Enum Engine.EConstraintFrame
	 */
	enum class Engine_EConstraintFrame : uint8_t
	{
		EConstraintFrame__Frame1               = 0,
		EConstraintFrame__Frame2               = 1,
		EConstraintFrame__EConstraintFrame_MAX = 2
	};

	/**
	 * Enum Engine.EAngularConstraintMotion
	 */
	enum class Engine_EAngularConstraintMotion : uint8_t
	{
		ACM_Free    = 0,
		ACM_Limited = 1,
		ACM_Locked  = 2,
		ACM_MAX     = 3
	};

	/**
	 * Enum Engine.EComponentSocketType
	 */
	enum class Engine_EComponentSocketType : uint8_t
	{
		EComponentSocketType__Invalid                  = 0,
		EComponentSocketType__Bone                     = 1,
		EComponentSocketType__Socket                   = 2,
		EComponentSocketType__EComponentSocketType_MAX = 3
	};

	/**
	 * Enum Engine.EPhysicalSurface
	 */
	enum class Engine_EPhysicalSurface : uint8_t
	{
		SurfaceType_Default  = 0,
		SurfaceType1         = 1,
		SurfaceType2         = 2,
		SurfaceType3         = 3,
		SurfaceType4         = 4,
		SurfaceType5         = 5,
		SurfaceType6         = 6,
		SurfaceType7         = 7,
		SurfaceType8         = 8,
		SurfaceType9         = 9,
		SurfaceType10        = 10,
		SurfaceType11        = 11,
		SurfaceType12        = 12,
		SurfaceType13        = 13,
		SurfaceType14        = 14,
		SurfaceType15        = 15,
		SurfaceType16        = 16,
		SurfaceType17        = 17,
		SurfaceType18        = 18,
		SurfaceType19        = 19,
		SurfaceType20        = 20,
		SurfaceType21        = 21,
		SurfaceType22        = 22,
		SurfaceType23        = 23,
		SurfaceType24        = 24,
		SurfaceType25        = 25,
		SurfaceType26        = 26,
		SurfaceType27        = 27,
		SurfaceType28        = 28,
		SurfaceType29        = 29,
		SurfaceType30        = 30,
		SurfaceType31        = 31,
		SurfaceType32        = 32,
		SurfaceType33        = 33,
		SurfaceType34        = 34,
		SurfaceType35        = 35,
		SurfaceType36        = 36,
		SurfaceType37        = 37,
		SurfaceType38        = 38,
		SurfaceType39        = 39,
		SurfaceType40        = 40,
		SurfaceType41        = 41,
		SurfaceType42        = 42,
		SurfaceType43        = 43,
		SurfaceType44        = 44,
		SurfaceType45        = 45,
		SurfaceType46        = 46,
		SurfaceType47        = 47,
		SurfaceType48        = 48,
		SurfaceType49        = 49,
		SurfaceType50        = 50,
		SurfaceType51        = 51,
		SurfaceType52        = 52,
		SurfaceType53        = 53,
		SurfaceType54        = 54,
		SurfaceType55        = 55,
		SurfaceType56        = 56,
		SurfaceType57        = 57,
		SurfaceType58        = 58,
		SurfaceType59        = 59,
		SurfaceType60        = 60,
		SurfaceType61        = 61,
		SurfaceType62        = 62,
		SurfaceType_Max      = 63,
		EPhysicalSurface_MAX = 64
	};

	/**
	 * Enum Engine.ERotatorQuantization
	 */
	enum class Engine_ERotatorQuantization : uint8_t
	{
		ERotatorQuantization__ByteComponents           = 0,
		ERotatorQuantization__ShortComponents          = 1,
		ERotatorQuantization__ERotatorQuantization_MAX = 2
	};

	/**
	 * Enum Engine.EVectorQuantization
	 */
	enum class Engine_EVectorQuantization : uint8_t
	{
		EVectorQuantization__RoundWholeNumber        = 0,
		EVectorQuantization__RoundOneDecimal         = 1,
		EVectorQuantization__RoundTwoDecimals        = 2,
		EVectorQuantization__EVectorQuantization_MAX = 3
	};

	/**
	 * Enum Engine.EAutoPossessAI
	 */
	enum class Engine_EAutoPossessAI : uint8_t
	{
		EAutoPossessAI__Disabled               = 0,
		EAutoPossessAI__PlacedInWorld          = 1,
		EAutoPossessAI__Spawned                = 2,
		EAutoPossessAI__PlacedInWorldOrSpawned = 3,
		EAutoPossessAI__EAutoPossessAI_MAX     = 4
	};

	/**
	 * Enum Engine.EAutoReceiveInput
	 */
	enum class Engine_EAutoReceiveInput : uint8_t
	{
		EAutoReceiveInput__Disabled              = 0,
		EAutoReceiveInput__Player0               = 1,
		EAutoReceiveInput__Player1               = 2,
		EAutoReceiveInput__Player2               = 3,
		EAutoReceiveInput__Player3               = 4,
		EAutoReceiveInput__Player4               = 5,
		EAutoReceiveInput__Player5               = 6,
		EAutoReceiveInput__Player6               = 7,
		EAutoReceiveInput__Player7               = 8,
		EAutoReceiveInput__EAutoReceiveInput_MAX = 9
	};

	/**
	 * Enum Engine.ENetDormancy
	 */
	enum class Engine_ENetDormancy : uint8_t
	{
		DORM_Never          = 0,
		DORM_Awake          = 1,
		DORM_DormantAll     = 2,
		DORM_DormantPartial = 3,
		DORM_Initial        = 4,
		DORM_MAX            = 5
	};

	/**
	 * Enum Engine.ENetRole
	 */
	enum class Engine_ENetRole : uint8_t
	{
		ROLE_None            = 0,
		ROLE_SimulatedProxy  = 1,
		ROLE_AutonomousProxy = 2,
		ROLE_Authority       = 3,
		ROLE_MAX             = 4
	};

	/**
	 * Enum Engine.EUpdateRateShiftBucket
	 */
	enum class Engine_EUpdateRateShiftBucket : uint8_t
	{
		EUpdateRateShiftBucket__ShiftBucket0               = 0,
		EUpdateRateShiftBucket__ShiftBucket1               = 1,
		EUpdateRateShiftBucket__ShiftBucket2               = 2,
		EUpdateRateShiftBucket__ShiftBucket3               = 3,
		EUpdateRateShiftBucket__ShiftBucket4               = 4,
		EUpdateRateShiftBucket__ShiftBucket5               = 5,
		EUpdateRateShiftBucket__ShiftBucketMax             = 6,
		EUpdateRateShiftBucket__EUpdateRateShiftBucket_MAX = 7
	};

	/**
	 * Enum Engine.EShadowMapFlags
	 */
	enum class Engine_EShadowMapFlags : uint8_t
	{
		SMF_None     = 0,
		SMF_Streamed = 1,
		SMF_MAX      = 2
	};

	/**
	 * Enum Engine.ELightMapPaddingType
	 */
	enum class Engine_ELightMapPaddingType : uint8_t
	{
		LMPT_NormalPadding = 0,
		LMPT_PrePadding    = 1,
		LMPT_NoPadding     = 2,
		LMPT_MAX           = 3
	};

	/**
	 * Enum Engine.ETimelineSigType
	 */
	enum class Engine_ETimelineSigType : uint8_t
	{
		ETS_EventSignature       = 0,
		ETS_FloatSignature       = 1,
		ETS_VectorSignature      = 2,
		ETS_LinearColorSignature = 3,
		ETS_InvalidSignature     = 4,
		ETS_MAX                  = 5
	};

	/**
	 * Enum Engine.EFilterInterpolationType
	 */
	enum class Engine_EFilterInterpolationType : uint8_t
	{
		BSIT_Average = 0,
		BSIT_Linear  = 1,
		BSIT_Cubic   = 2,
		BSIT_MAX     = 3
	};

	/**
	 * Enum Engine.EOverlapFilterOption
	 */
	enum class Engine_EOverlapFilterOption : uint8_t
	{
		OverlapFilter_All         = 0,
		OverlapFilter_DynamicOnly = 1,
		OverlapFilter_StaticOnly  = 2,
		OverlapFilter_MAX         = 3
	};

	/**
	 * Enum Engine.ENetworkSmoothingMode
	 */
	enum class Engine_ENetworkSmoothingMode : uint8_t
	{
		ENetworkSmoothingMode__Disabled                  = 0,
		ENetworkSmoothingMode__Linear                    = 1,
		ENetworkSmoothingMode__Exponential               = 2,
		ENetworkSmoothingMode__Replay                    = 3,
		ENetworkSmoothingMode__ENetworkSmoothingMode_MAX = 4
	};

	/**
	 * Enum Engine.ELightingBuildQuality
	 */
	enum class Engine_ELightingBuildQuality : uint8_t
	{
		Quality_Preview    = 0,
		Quality_Medium     = 1,
		Quality_High       = 2,
		Quality_Production = 3,
		Quality_MAX        = 4
	};

	/**
	 * Enum Engine.EMaterialStencilCompare
	 */
	enum class Engine_EMaterialStencilCompare : uint8_t
	{
		MSC_Less         = 0,
		MSC_LessEqual    = 1,
		MSC_Greater      = 2,
		MSC_GreaterEqual = 3,
		MSC_Equal        = 4,
		MSC_NotEqual     = 5,
		MSC_Never        = 6,
		MSC_Always       = 7,
		MSC_Count        = 8,
		MSC_MAX          = 9
	};

	/**
	 * Enum Engine.EMaterialSamplerType
	 */
	enum class Engine_EMaterialSamplerType : uint8_t
	{
		SAMPLERTYPE_Color                  = 0,
		SAMPLERTYPE_Grayscale              = 1,
		SAMPLERTYPE_Alpha                  = 2,
		SAMPLERTYPE_Normal                 = 3,
		SAMPLERTYPE_Masks                  = 4,
		SAMPLERTYPE_DistanceFieldFont      = 5,
		SAMPLERTYPE_LinearColor            = 6,
		SAMPLERTYPE_LinearGrayscale        = 7,
		SAMPLERTYPE_Data                   = 8,
		SAMPLERTYPE_External               = 9,
		SAMPLERTYPE_VirtualColor           = 10,
		SAMPLERTYPE_VirtualGrayscale       = 11,
		SAMPLERTYPE_VirtualAlpha           = 12,
		SAMPLERTYPE_VirtualNormal          = 13,
		SAMPLERTYPE_VirtualMasks           = 14,
		SAMPLERTYPE_VirtualLinearColor     = 15,
		SAMPLERTYPE_VirtualLinearGrayscale = 16,
		SAMPLERTYPE_MAX                    = 17
	};

	/**
	 * Enum Engine.EMaterialTessellationMode
	 */
	enum class Engine_EMaterialTessellationMode : uint8_t
	{
		MTM_NoTessellation   = 0,
		MTM_FlatTessellation = 1,
		MTM_PNTriangles      = 2,
		MTM_MAX              = 3
	};

	/**
	 * Enum Engine.EMaterialShadingModel
	 */
	enum class Engine_EMaterialShadingModel : uint8_t
	{
		MSM_Unlit                  = 0,
		MSM_DefaultLit             = 1,
		MSM_Subsurface             = 2,
		MSM_PreintegratedSkin      = 3,
		MSM_ClearCoat              = 4,
		MSM_SubsurfaceProfile      = 5,
		MSM_TwoSidedFoliage        = 6,
		MSM_Hair                   = 7,
		MSM_Cloth                  = 8,
		MSM_Eye                    = 9,
		MSM_NUM                    = 10,
		MSM_FromMaterialExpression = 11,
		MSM_MAX                    = 12
	};

	/**
	 * Enum Engine.EParticleCollisionMode
	 */
	enum class Engine_EParticleCollisionMode : uint8_t
	{
		EParticleCollisionMode__SceneDepth                 = 0,
		EParticleCollisionMode__DistanceField              = 1,
		EParticleCollisionMode__EParticleCollisionMode_MAX = 2
	};

	/**
	 * Enum Engine.ETrailWidthMode
	 */
	enum class Engine_ETrailWidthMode : uint8_t
	{
		ETrailWidthMode_FromCentre = 0,
		ETrailWidthMode_FromFirst  = 1,
		ETrailWidthMode_FromSecond = 2,
		ETrailWidthMode_MAX        = 3
	};

	/**
	 * Enum Engine.EGBufferFormat
	 */
	enum class Engine_EGBufferFormat : uint8_t
	{
		EGBufferFormat__Force8BitsPerChannel  = 0,
		EGBufferFormat__Default               = 1,
		EGBufferFormat__HighPrecisionNormals  = 2,
		EGBufferFormat__Force16BitsPerChannel = 3,
		EGBufferFormat__EGBufferFormat_MAX    = 4
	};

	/**
	 * Enum Engine.ESceneCaptureCompositeMode
	 */
	enum class Engine_ESceneCaptureCompositeMode : uint8_t
	{
		SCCM_Overwrite = 0,
		SCCM_Additive  = 1,
		SCCM_Composite = 2,
		SCCM_MAX       = 3
	};

	/**
	 * Enum Engine.ESceneCaptureSource
	 */
	enum class Engine_ESceneCaptureSource : uint8_t
	{
		SCS_SceneColorHDR        = 0,
		SCS_SceneColorHDRNoAlpha = 1,
		SCS_FinalColorLDR        = 2,
		SCS_SceneColorSceneDepth = 3,
		SCS_SceneDepth           = 4,
		SCS_DeviceDepth          = 5,
		SCS_Normal               = 6,
		SCS_BaseColor            = 7,
		SCS_FinalColorHDR        = 8,
		SCS_MAX                  = 9
	};

	/**
	 * Enum Engine.ETranslucentSortPolicy
	 */
	enum class Engine_ETranslucentSortPolicy : uint8_t
	{
		ETranslucentSortPolicy__SortByDistance             = 0,
		ETranslucentSortPolicy__SortByProjectedZ           = 1,
		ETranslucentSortPolicy__SortAlongAxis              = 2,
		ETranslucentSortPolicy__ETranslucentSortPolicy_MAX = 3
	};

	/**
	 * Enum Engine.ERefractionMode
	 */
	enum class Engine_ERefractionMode : uint8_t
	{
		RM_IndexOfRefraction = 0,
		RM_PixelNormalOffset = 1,
		RM_MAX               = 2
	};

	/**
	 * Enum Engine.ETranslucencyLightingMode
	 */
	enum class Engine_ETranslucencyLightingMode : uint8_t
	{
		TLM_VolumetricNonDirectional          = 0,
		TLM_VolumetricDirectional             = 1,
		TLM_VolumetricPerVertexNonDirectional = 2,
		TLM_VolumetricPerVertexDirectional    = 3,
		TLM_Surface                           = 4,
		TLM_SurfacePerPixelLighting           = 5,
		TLM_MAX                               = 6
	};

	/**
	 * Enum Engine.ESamplerSourceMode
	 */
	enum class Engine_ESamplerSourceMode : uint8_t
	{
		SSM_FromTextureAsset         = 0,
		SSM_Wrap_WorldGroupSettings  = 1,
		SSM_Clamp_WorldGroupSettings = 2,
		SSM_MAX                      = 3
	};

	/**
	 * Enum Engine.EBlendMode
	 */
	enum class Engine_EBlendMode : uint8_t
	{
		BLEND_Opaque         = 0,
		BLEND_Masked         = 1,
		BLEND_Translucent    = 2,
		BLEND_Additive       = 3,
		BLEND_Modulate       = 4,
		BLEND_AlphaComposite = 5,
		BLEND_AlphaHoldout   = 6,
		BLEND_MAX            = 7
	};

	/**
	 * Enum Engine.EOcclusionCombineMode
	 */
	enum class Engine_EOcclusionCombineMode : uint8_t
	{
		OCM_Minimum  = 0,
		OCM_Multiply = 1,
		OCM_MAX      = 2
	};

	/**
	 * Enum Engine.EAspectRatioAxisConstraint
	 */
	enum class Engine_EAspectRatioAxisConstraint : uint8_t
	{
		AspectRatio_MaintainYFOV = 0,
		AspectRatio_MaintainXFOV = 1,
		AspectRatio_MajorAxisFOV = 2,
		AspectRatio_MAX          = 3
	};

	/**
	 * Enum Engine.EFontCacheType
	 */
	enum class Engine_EFontCacheType : uint8_t
	{
		EFontCacheType__Offline            = 0,
		EFontCacheType__Runtime            = 1,
		EFontCacheType__EFontCacheType_MAX = 2
	};

	/**
	 * Enum Engine.EFontImportCharacterSet
	 */
	enum class Engine_EFontImportCharacterSet : uint8_t
	{
		FontICS_Default = 0,
		FontICS_Ansi    = 1,
		FontICS_Symbol  = 2,
		FontICS_MAX     = 3
	};

	/**
	 * Enum Engine.EStandbyType
	 */
	enum class Engine_EStandbyType : uint8_t
	{
		STDBY_Rx      = 0,
		STDBY_Tx      = 1,
		STDBY_BadPing = 2,
		STDBY_MAX     = 3
	};

	/**
	 * Enum Engine.ESuggestProjVelocityTraceOption
	 */
	enum class Engine_ESuggestProjVelocityTraceOption : uint8_t
	{
		ESuggestProjVelocityTraceOption__DoNotTrace                          = 0,
		ESuggestProjVelocityTraceOption__TraceFullPath                       = 1,
		ESuggestProjVelocityTraceOption__OnlyTraceWhileAscending             = 2,
		ESuggestProjVelocityTraceOption__ESuggestProjVelocityTraceOption_MAX = 3
	};

	/**
	 * Enum Engine.EWindowMode
	 */
	enum class Engine_EWindowMode : uint8_t
	{
		EWindowMode__Fullscreen         = 0,
		EWindowMode__WindowedFullscreen = 1,
		EWindowMode__Windowed           = 2,
		EWindowMode__EWindowMode_MAX    = 3
	};

	/**
	 * Enum Engine.EImportanceWeight
	 */
	enum class Engine_EImportanceWeight : uint8_t
	{
		EImportanceWeight__Luminance             = 0,
		EImportanceWeight__Red                   = 1,
		EImportanceWeight__Green                 = 2,
		EImportanceWeight__Blue                  = 3,
		EImportanceWeight__Alpha                 = 4,
		EImportanceWeight__EImportanceWeight_MAX = 5
	};

	/**
	 * Enum Engine.EAdManagerDelegate
	 */
	enum class Engine_EAdManagerDelegate : uint8_t
	{
		AMD_ClickedBanner = 0,
		AMD_UserClosedAd  = 1,
		AMD_MAX           = 2
	};

	/**
	 * Enum Engine.EControllerAnalogStick
	 */
	enum class Engine_EControllerAnalogStick : uint8_t
	{
		EControllerAnalogStick__CAS_LeftStick  = 0,
		EControllerAnalogStick__CAS_RightStick = 1,
		EControllerAnalogStick__CAS_MAX        = 2
	};

	/**
	 * Enum Engine.EAnimAlphaInputType
	 */
	enum class Engine_EAnimAlphaInputType : uint8_t
	{
		EAnimAlphaInputType__Float                   = 0,
		EAnimAlphaInputType__Bool                    = 1,
		EAnimAlphaInputType__Curve                   = 2,
		EAnimAlphaInputType__EAnimAlphaInputType_MAX = 3
	};

	/**
	 * Enum Engine.ETrackActiveCondition
	 */
	enum class Engine_ETrackActiveCondition : uint8_t
	{
		ETAC_Always       = 0,
		ETAC_GoreEnabled  = 1,
		ETAC_GoreDisabled = 2,
		ETAC_MAX          = 3
	};

	/**
	 * Enum Engine.EInterpTrackMoveRotMode
	 */
	enum class Engine_EInterpTrackMoveRotMode : uint8_t
	{
		IMR_Keyframed   = 0,
		IMR_LookAtGroup = 1,
		IMR_Ignore      = 2,
		IMR_MAX         = 3
	};

	/**
	 * Enum Engine.EInterpMoveAxis
	 */
	enum class Engine_EInterpMoveAxis : uint8_t
	{
		AXIS_TranslationX = 0,
		AXIS_TranslationY = 1,
		AXIS_TranslationZ = 2,
		AXIS_RotationX    = 3,
		AXIS_RotationY    = 4,
		AXIS_RotationZ    = 5,
		AXIS_MAX          = 6
	};

	/**
	 * Enum Engine.ETrackToggleAction
	 */
	enum class Engine_ETrackToggleAction : uint8_t
	{
		ETTA_Off     = 0,
		ETTA_On      = 1,
		ETTA_Toggle  = 2,
		ETTA_Trigger = 3,
		ETTA_MAX     = 4
	};

	/**
	 * Enum Engine.EVisibilityTrackCondition
	 */
	enum class Engine_EVisibilityTrackCondition : uint8_t
	{
		EVTC_Always       = 0,
		EVTC_GoreEnabled  = 1,
		EVTC_GoreDisabled = 2,
		EVTC_MAX          = 3
	};

	/**
	 * Enum Engine.EVisibilityTrackAction
	 */
	enum class Engine_EVisibilityTrackAction : uint8_t
	{
		EVTA_Hide   = 0,
		EVTA_Show   = 1,
		EVTA_Toggle = 2,
		EVTA_MAX    = 3
	};

	/**
	 * Enum Engine.ESlateGesture
	 */
	enum class Engine_ESlateGesture : uint8_t
	{
		ESlateGesture__None              = 0,
		ESlateGesture__Scroll            = 1,
		ESlateGesture__Magnify           = 2,
		ESlateGesture__Swipe             = 3,
		ESlateGesture__Rotate            = 4,
		ESlateGesture__LongPress         = 5,
		ESlateGesture__ESlateGesture_MAX = 6
	};

	/**
	 * Enum Engine.ELerpInterpolationMode
	 */
	enum class Engine_ELerpInterpolationMode : uint8_t
	{
		ELerpInterpolationMode__QuatInterp                 = 0,
		ELerpInterpolationMode__EulerInterp                = 1,
		ELerpInterpolationMode__DualQuatInterp             = 2,
		ELerpInterpolationMode__ELerpInterpolationMode_MAX = 3
	};

	/**
	 * Enum Engine.EEasingFunc
	 */
	enum class Engine_EEasingFunc : uint8_t
	{
		EEasingFunc__Linear          = 0,
		EEasingFunc__Step            = 1,
		EEasingFunc__SinusoidalIn    = 2,
		EEasingFunc__SinusoidalOut   = 3,
		EEasingFunc__SinusoidalInOut = 4,
		EEasingFunc__EaseIn          = 5,
		EEasingFunc__EaseOut         = 6,
		EEasingFunc__EaseInOut       = 7,
		EEasingFunc__ExpoIn          = 8,
		EEasingFunc__ExpoOut         = 9,
		EEasingFunc__ExpoInOut       = 10,
		EEasingFunc__CircularIn      = 11,
		EEasingFunc__CircularOut     = 12,
		EEasingFunc__CircularInOut   = 13,
		EEasingFunc__EEasingFunc_MAX = 14
	};

	/**
	 * Enum Engine.ERoundingMode
	 */
	enum class Engine_ERoundingMode : uint8_t
	{
		HalfToEven         = 0,
		HalfFromZero       = 1,
		HalfToZero         = 2,
		FromZero           = 3,
		ToZero             = 4,
		ToNegativeInfinity = 5,
		ToPositiveInfinity = 6,
		ERoundingMode_MAX  = 7
	};

	/**
	 * Enum Engine.EStreamingVolumeUsage
	 */
	enum class Engine_EStreamingVolumeUsage : uint8_t
	{
		SVB_Loading                  = 0,
		SVB_LoadingAndVisibility     = 1,
		SVB_VisibilityBlockingOnLoad = 2,
		SVB_BlockingOnLoad           = 3,
		SVB_LoadingNotVisible        = 4,
		SVB_MAX                      = 5
	};

	/**
	 * Enum Engine.EMaterialDecalResponse
	 */
	enum class Engine_EMaterialDecalResponse : uint8_t
	{
		MDR_None                 = 0,
		MDR_ColorNormalRoughness = 1,
		MDR_Color                = 2,
		MDR_ColorNormal          = 3,
		MDR_ColorRoughness       = 4,
		MDR_Normal               = 5,
		MDR_NormalRoughness      = 6,
		MDR_Roughness            = 7,
		MDR_MAX                  = 8
	};

	/**
	 * Enum Engine.EDecalBlendMode
	 */
	enum class Engine_EDecalBlendMode : uint8_t
	{
		DBM_Translucent                    = 0,
		DBM_Stain                          = 1,
		DBM_Normal                         = 2,
		DBM_Emissive                       = 3,
		DBM_DBuffer_ColorNormalRoughness   = 4,
		DBM_DBuffer_Color                  = 5,
		DBM_DBuffer_ColorNormal            = 6,
		DBM_DBuffer_ColorRoughness         = 7,
		DBM_DBuffer_Normal                 = 8,
		DBM_DBuffer_NormalRoughness        = 9,
		DBM_DBuffer_Roughness              = 10,
		DBM_DBuffer_Emissive               = 11,
		DBM_DBuffer_AlphaComposite         = 12,
		DBM_DBuffer_EmissiveAlphaComposite = 13,
		DBM_Volumetric_DistanceFunction    = 14,
		DBM_AlphaComposite                 = 15,
		DBM_AmbientOcclusion               = 16,
		DBM_MAX                            = 17
	};

	/**
	 * Enum Engine.ETextureColorChannel
	 */
	enum class Engine_ETextureColorChannel : uint8_t
	{
		TCC_Red   = 0,
		TCC_Green = 1,
		TCC_Blue  = 2,
		TCC_Alpha = 3,
		TCC_MAX   = 4
	};

	/**
	 * Enum Engine.EMaterialAttributeBlend
	 */
	enum class Engine_EMaterialAttributeBlend : uint8_t
	{
		EMaterialAttributeBlend__Blend                       = 0,
		EMaterialAttributeBlend__UseA                        = 1,
		EMaterialAttributeBlend__UseB                        = 2,
		EMaterialAttributeBlend__EMaterialAttributeBlend_MAX = 3
	};

	/**
	 * Enum Engine.EChannelMaskParameterColor
	 */
	enum class Engine_EChannelMaskParameterColor : uint8_t
	{
		EChannelMaskParameterColor__Red                            = 0,
		EChannelMaskParameterColor__Green                          = 1,
		EChannelMaskParameterColor__Blue                           = 2,
		EChannelMaskParameterColor__Alpha                          = 3,
		EChannelMaskParameterColor__EChannelMaskParameterColor_MAX = 4
	};

	/**
	 * Enum Engine.EClampMode
	 */
	enum class Engine_EClampMode : uint8_t
	{
		CMODE_Clamp    = 0,
		CMODE_ClampMin = 1,
		CMODE_ClampMax = 2,
		CMODE_MAX      = 3
	};

	/**
	 * Enum Engine.ECustomMaterialOutputType
	 */
	enum class Engine_ECustomMaterialOutputType : uint8_t
	{
		CMOT_Float1 = 0,
		CMOT_Float2 = 1,
		CMOT_Float3 = 2,
		CMOT_Float4 = 3,
		CMOT_MAX    = 4
	};

	/**
	 * Enum Engine.EDepthOfFieldFunctionValue
	 */
	enum class Engine_EDepthOfFieldFunctionValue : uint8_t
	{
		TDOF_NearAndFarMask          = 0,
		TDOF_NearMask                = 1,
		TDOF_FarMask                 = 2,
		TDOF_CircleOfConfusionRadius = 3,
		TDOF_MAX                     = 4
	};

	/**
	 * Enum Engine.EFunctionInputType
	 */
	enum class Engine_EFunctionInputType : uint8_t
	{
		FunctionInput_Scalar             = 0,
		FunctionInput_Vector2            = 1,
		FunctionInput_Vector3            = 2,
		FunctionInput_Vector4            = 3,
		FunctionInput_Texture2D          = 4,
		FunctionInput_TextureCube        = 5,
		FunctionInput_VolumeTexture      = 6,
		FunctionInput_StaticBool         = 7,
		FunctionInput_MaterialAttributes = 8,
		FunctionInput_TextureExternal    = 9,
		FunctionInput_MAX                = 10
	};

	/**
	 * Enum Engine.ENoiseFunction
	 */
	enum class Engine_ENoiseFunction : uint8_t
	{
		NOISEFUNCTION_SimplexTex    = 0,
		NOISEFUNCTION_GradientTex   = 1,
		NOISEFUNCTION_GradientTex3D = 2,
		NOISEFUNCTION_GradientALU   = 3,
		NOISEFUNCTION_ValueALU      = 4,
		NOISEFUNCTION_VoronoiALU    = 5,
		NOISEFUNCTION_MAX           = 6
	};

	/**
	 * Enum Engine.EMaterialSceneAttributeInputMode
	 */
	enum class Engine_EMaterialSceneAttributeInputMode : uint8_t
	{
		EMaterialSceneAttributeInputMode__Coordinates                          = 0,
		EMaterialSceneAttributeInputMode__OffsetFraction                       = 1,
		EMaterialSceneAttributeInputMode__EMaterialSceneAttributeInputMode_MAX = 2
	};

	/**
	 * Enum Engine.ESpeedTreeLODType
	 */
	enum class Engine_ESpeedTreeLODType : uint8_t
	{
		STLOD_Pop    = 0,
		STLOD_Smooth = 1,
		STLOD_MAX    = 2
	};

	/**
	 * Enum Engine.ESpeedTreeWindType
	 */
	enum class Engine_ESpeedTreeWindType : uint8_t
	{
		STW_None     = 0,
		STW_Fastest  = 1,
		STW_Fast     = 2,
		STW_Better   = 3,
		STW_Best     = 4,
		STW_Palm     = 5,
		STW_BestPlus = 6,
		STW_MAX      = 7
	};

	/**
	 * Enum Engine.ESpeedTreeGeometryType
	 */
	enum class Engine_ESpeedTreeGeometryType : uint8_t
	{
		STG_Branch     = 0,
		STG_Frond      = 1,
		STG_Leaf       = 2,
		STG_FacingLeaf = 3,
		STG_Billboard  = 4,
		STG_MAX        = 5
	};

	/**
	 * Enum Engine.EMaterialExposedTextureProperty
	 */
	enum class Engine_EMaterialExposedTextureProperty : uint8_t
	{
		TMTM_TextureSize = 0,
		TMTM_TexelSize   = 1,
		TMTM_MAX         = 2
	};

	/**
	 * Enum Engine.ETextureMipValueMode
	 */
	enum class Engine_ETextureMipValueMode : uint8_t
	{
		TMVM_None       = 0,
		TMVM_MipLevel   = 1,
		TMVM_MipBias    = 2,
		TMVM_Derivative = 3,
		TMVM_MAX        = 4
	};

	/**
	 * Enum Engine.EMaterialVectorCoordTransform
	 */
	enum class Engine_EMaterialVectorCoordTransform : uint8_t
	{
		TRANSFORM_Tangent       = 0,
		TRANSFORM_Local         = 1,
		TRANSFORM_World         = 2,
		TRANSFORM_View          = 3,
		TRANSFORM_Camera        = 4,
		TRANSFORM_ParticleWorld = 5,
		TRANSFORM_MAX           = 6
	};

	/**
	 * Enum Engine.EMaterialVectorCoordTransformSource
	 */
	enum class Engine_EMaterialVectorCoordTransformSource : uint8_t
	{
		TRANSFORMSOURCE_Tangent       = 0,
		TRANSFORMSOURCE_Local         = 1,
		TRANSFORMSOURCE_World         = 2,
		TRANSFORMSOURCE_View          = 3,
		TRANSFORMSOURCE_Camera        = 4,
		TRANSFORMSOURCE_ParticleWorld = 5,
		TRANSFORMSOURCE_MAX           = 6
	};

	/**
	 * Enum Engine.EMaterialPositionTransformSource
	 */
	enum class Engine_EMaterialPositionTransformSource : uint8_t
	{
		TRANSFORMPOSSOURCE_Local           = 0,
		TRANSFORMPOSSOURCE_World           = 1,
		TRANSFORMPOSSOURCE_TranslatedWorld = 2,
		TRANSFORMPOSSOURCE_View            = 3,
		TRANSFORMPOSSOURCE_Camera          = 4,
		TRANSFORMPOSSOURCE_Particle        = 5,
		TRANSFORMPOSSOURCE_MAX             = 6
	};

	/**
	 * Enum Engine.EVectorNoiseFunction
	 */
	enum class Engine_EVectorNoiseFunction : uint8_t
	{
		VNF_CellnoiseALU = 0,
		VNF_VectorALU    = 1,
		VNF_GradientALU  = 2,
		VNF_CurlALU      = 3,
		VNF_VoronoiALU   = 4,
		VNF_MAX          = 5
	};

	/**
	 * Enum Engine.EMaterialExposedViewProperty
	 */
	enum class Engine_EMaterialExposedViewProperty : uint8_t
	{
		MEVP_BufferSize                            = 0,
		MEVP_FieldOfView                           = 1,
		MEVP_TanHalfFieldOfView                    = 2,
		MEVP_ViewSize                              = 3,
		MEVP_WorldSpaceViewPosition                = 4,
		MEVP_WorldSpaceCameraPosition              = 5,
		MEVP_ViewportOffset                        = 6,
		MEVP_TemporalSampleCount                   = 7,
		MEVP_TemporalSampleIndex                   = 8,
		MEVP_TemporalSampleOffset                  = 9,
		MEVP_RuntimeVirtualTextureOutputLevel      = 10,
		MEVP_RuntimeVirtualTextureOutputDerivative = 11,
		MEVP_MAX                                   = 12
	};

	/**
	 * Enum Engine.EWorldPositionIncludedOffsets
	 */
	enum class Engine_EWorldPositionIncludedOffsets : uint8_t
	{
		WPT_Default                 = 0,
		WPT_ExcludeAllShaderOffsets = 1,
		WPT_CameraRelative          = 2,
		WPT_CameraRelativeNoOffsets = 3,
		WPT_MAX                     = 4
	};

	/**
	 * Enum Engine.EMaterialFunctionUsage
	 */
	enum class Engine_EMaterialFunctionUsage : uint8_t
	{
		EMaterialFunctionUsage__Default                    = 0,
		EMaterialFunctionUsage__MaterialLayer              = 1,
		EMaterialFunctionUsage__MaterialLayerBlend         = 2,
		EMaterialFunctionUsage__EMaterialFunctionUsage_MAX = 3
	};

	/**
	 * Enum Engine.EMaterialUsage
	 */
	enum class Engine_EMaterialUsage : uint8_t
	{
		MATUSAGE_SkeletalMesh          = 0,
		MATUSAGE_ParticleSprites       = 1,
		MATUSAGE_BeamTrails            = 2,
		MATUSAGE_MeshParticles         = 3,
		MATUSAGE_StaticLighting        = 4,
		MATUSAGE_MorphTargets          = 5,
		MATUSAGE_SplineMesh            = 6,
		MATUSAGE_InstancedStaticMeshes = 7,
		MATUSAGE_GeometryCollections   = 8,
		MATUSAGE_Clothing              = 9,
		MATUSAGE_NiagaraSprites        = 10,
		MATUSAGE_NiagaraRibbons        = 11,
		MATUSAGE_NiagaraMeshParticles  = 12,
		MATUSAGE_GeometryCache         = 13,
		MATUSAGE_MAX                   = 14
	};

	/**
	 * Enum Engine.EMaterialParameterAssociation
	 */
	enum class Engine_EMaterialParameterAssociation : uint8_t
	{
		LayerParameter                    = 0,
		BlendParameter                    = 1,
		GlobalParameter                   = 2,
		EMaterialParameterAssociation_MAX = 3
	};

	/**
	 * Enum Engine.EMaterialMergeType
	 */
	enum class Engine_EMaterialMergeType : uint8_t
	{
		MaterialMergeType_Default   = 0,
		MaterialMergeType_Simplygon = 1,
		MaterialMergeType_MAX       = 2
	};

	/**
	 * Enum Engine.ETextureSizingType
	 */
	enum class Engine_ETextureSizingType : uint8_t
	{
		TextureSizingType_UseSingleTextureSize         = 0,
		TextureSizingType_UseAutomaticBiasedSizes      = 1,
		TextureSizingType_UseManualOverrideTextureSize = 2,
		TextureSizingType_UseSimplygonAutomaticSizing  = 3,
		TextureSizingType_MAX                          = 4
	};

	/**
	 * Enum Engine.ESceneTextureId
	 */
	enum class Engine_ESceneTextureId : uint8_t
	{
		PPI_SceneColor           = 0,
		PPI_SceneDepth           = 1,
		PPI_DiffuseColor         = 2,
		PPI_SpecularColor        = 3,
		PPI_SubsurfaceColor      = 4,
		PPI_BaseColor            = 5,
		PPI_Specular             = 6,
		PPI_Metallic             = 7,
		PPI_WorldNormal          = 8,
		PPI_SeparateTranslucency = 9,
		PPI_Opacity              = 10,
		PPI_Roughness            = 11,
		PPI_MaterialAO           = 12,
		PPI_CustomDepth          = 13,
		PPI_PostProcessInput0    = 14,
		PPI_PostProcessInput1    = 15,
		PPI_PostProcessInput2    = 16,
		PPI_PostProcessInput3    = 17,
		PPI_PostProcessInput4    = 18,
		PPI_PostProcessInput5    = 19,
		PPI_PostProcessInput6    = 20,
		PPI_DecalMask            = 21,
		PPI_ShadingModelColor    = 22,
		PPI_ShadingModelID       = 23,
		PPI_AmbientOcclusion     = 24,
		PPI_CustomStencil        = 25,
		PPI_StoredBaseColor      = 26,
		PPI_StoredSpecular       = 27,
		PPI_Velocity             = 28,
		PPI_MAX                  = 29
	};

	/**
	 * Enum Engine.EMaterialDomain
	 */
	enum class Engine_EMaterialDomain : uint8_t
	{
		MD_Surface               = 0,
		MD_DeferredDecal         = 1,
		MD_LightFunction         = 2,
		MD_Volume                = 3,
		MD_PostProcess           = 4,
		MD_UI                    = 5,
		MD_RuntimeVirtualTexture = 6,
		MD_MAX                   = 7
	};

	/**
	 * Enum Engine.EMeshInstancingReplacementMethod
	 */
	enum class Engine_EMeshInstancingReplacementMethod : uint8_t
	{
		EMeshInstancingReplacementMethod__RemoveOriginalActors                 = 0,
		EMeshInstancingReplacementMethod__KeepOriginalActorsAsEditorOnly       = 1,
		EMeshInstancingReplacementMethod__EMeshInstancingReplacementMethod_MAX = 2
	};

	/**
	 * Enum Engine.EUVOutput
	 */
	enum class Engine_EUVOutput : uint8_t
	{
		EUVOutput__DoNotOutputChannel = 0,
		EUVOutput__OutputChannel      = 1,
		EUVOutput__EUVOutput_MAX      = 2
	};

	/**
	 * Enum Engine.EMeshMergeType
	 */
	enum class Engine_EMeshMergeType : uint8_t
	{
		EMeshMergeType__MeshMergeType_Default    = 0,
		EMeshMergeType__MeshMergeType_MergeActor = 1,
		EMeshMergeType__MeshMergeType_MAX        = 2
	};

	/**
	 * Enum Engine.EMeshLODSelectionType
	 */
	enum class Engine_EMeshLODSelectionType : uint8_t
	{
		EMeshLODSelectionType__AllLODs                   = 0,
		EMeshLODSelectionType__SpecificLOD               = 1,
		EMeshLODSelectionType__CalculateLOD              = 2,
		EMeshLODSelectionType__LowestDetailLOD           = 3,
		EMeshLODSelectionType__EMeshLODSelectionType_MAX = 4
	};

	/**
	 * Enum Engine.EProxyNormalComputationMethod
	 */
	enum class Engine_EProxyNormalComputationMethod : uint8_t
	{
		EProxyNormalComputationMethod__AngleWeighted                     = 0,
		EProxyNormalComputationMethod__AreaWeighted                      = 1,
		EProxyNormalComputationMethod__EqualWeighted                     = 2,
		EProxyNormalComputationMethod__EProxyNormalComputationMethod_MAX = 3
	};

	/**
	 * Enum Engine.ELandscapeCullingPrecision
	 */
	enum class Engine_ELandscapeCullingPrecision : uint8_t
	{
		ELandscapeCullingPrecision__High                           = 0,
		ELandscapeCullingPrecision__Medium                         = 1,
		ELandscapeCullingPrecision__Low                            = 2,
		ELandscapeCullingPrecision__ELandscapeCullingPrecision_MAX = 3
	};

	/**
	 * Enum Engine.EStaticMeshReductionTerimationCriterion
	 */
	enum class Engine_EStaticMeshReductionTerimationCriterion : uint8_t
	{
		EStaticMeshReductionTerimationCriterion__Triangles                                   = 0,
		EStaticMeshReductionTerimationCriterion__Vertices                                    = 1,
		EStaticMeshReductionTerimationCriterion__Any                                         = 2,
		EStaticMeshReductionTerimationCriterion__EStaticMeshReductionTerimationCriterion_MAX = 3
	};

	/**
	 * Enum Engine.EMeshFeatureImportance
	 */
	enum class Engine_EMeshFeatureImportance : uint8_t
	{
		EMeshFeatureImportance__Off                        = 0,
		EMeshFeatureImportance__Lowest                     = 1,
		EMeshFeatureImportance__Low                        = 2,
		EMeshFeatureImportance__Normal                     = 3,
		EMeshFeatureImportance__High                       = 4,
		EMeshFeatureImportance__Highest                    = 5,
		EMeshFeatureImportance__EMeshFeatureImportance_MAX = 6
	};

	/**
	 * Enum Engine.EVertexPaintAxis
	 */
	enum class Engine_EVertexPaintAxis : uint8_t
	{
		EVertexPaintAxis__X                    = 0,
		EVertexPaintAxis__Y                    = 1,
		EVertexPaintAxis__Z                    = 2,
		EVertexPaintAxis__EVertexPaintAxis_MAX = 3
	};

	/**
	 * Enum Engine.EMicroTransactionResult
	 */
	enum class Engine_EMicroTransactionResult : uint8_t
	{
		MTR_Succeeded          = 0,
		MTR_Failed             = 1,
		MTR_Canceled           = 2,
		MTR_RestoredFromServer = 3,
		MTR_MAX                = 4
	};

	/**
	 * Enum Engine.EMicroTransactionDelegate
	 */
	enum class Engine_EMicroTransactionDelegate : uint8_t
	{
		MTD_PurchaseQueryComplete = 0,
		MTD_PurchaseComplete      = 1,
		MTD_MAX                   = 2
	};

	/**
	 * Enum Engine.FNavigationSystemRunMode
	 */
	enum class Engine_EFNavigationSystemRunMode : uint8_t
	{
		FNavigationSystemRunMode__InvalidMode                  = 0,
		FNavigationSystemRunMode__GameMode                     = 1,
		FNavigationSystemRunMode__EditorMode                   = 2,
		FNavigationSystemRunMode__SimulationMode               = 3,
		FNavigationSystemRunMode__PIEMode                      = 4,
		FNavigationSystemRunMode__FNavigationSystemRunMode_MAX = 5
	};

	/**
	 * Enum Engine.ENavigationQueryResult
	 */
	enum class Engine_ENavigationQueryResult : uint8_t
	{
		ENavigationQueryResult__Invalid                    = 0,
		ENavigationQueryResult__Error                      = 1,
		ENavigationQueryResult__Fail                       = 2,
		ENavigationQueryResult__Success                    = 3,
		ENavigationQueryResult__ENavigationQueryResult_MAX = 4
	};

	/**
	 * Enum Engine.ENavPathEvent
	 */
	enum class Engine_ENavPathEvent : uint8_t
	{
		ENavPathEvent__Cleared                       = 0,
		ENavPathEvent__NewPath                       = 1,
		ENavPathEvent__UpdatedDueToGoalMoved         = 2,
		ENavPathEvent__UpdatedDueToNavigationChanged = 3,
		ENavPathEvent__Invalidated                   = 4,
		ENavPathEvent__RePathFailed                  = 5,
		ENavPathEvent__MetaPathUpdate                = 6,
		ENavPathEvent__Custom                        = 7,
		ENavPathEvent__ENavPathEvent_MAX             = 8
	};

	/**
	 * Enum Engine.ENavDataGatheringModeConfig
	 */
	enum class Engine_ENavDataGatheringModeConfig : uint8_t
	{
		ENavDataGatheringModeConfig__Invalid                         = 0,
		ENavDataGatheringModeConfig__Instant                         = 1,
		ENavDataGatheringModeConfig__Lazy                            = 2,
		ENavDataGatheringModeConfig__ENavDataGatheringModeConfig_MAX = 3
	};

	/**
	 * Enum Engine.ENavDataGatheringMode
	 */
	enum class Engine_ENavDataGatheringMode : uint8_t
	{
		ENavDataGatheringMode__Default                   = 0,
		ENavDataGatheringMode__Instant                   = 1,
		ENavDataGatheringMode__Lazy                      = 2,
		ENavDataGatheringMode__ENavDataGatheringMode_MAX = 3
	};

	/**
	 * Enum Engine.ENavigationOptionFlag
	 */
	enum class Engine_ENavigationOptionFlag : uint8_t
	{
		ENavigationOptionFlag__Default = 0,
		ENavigationOptionFlag__Enable  = 1,
		ENavigationOptionFlag__Disable = 2,
		ENavigationOptionFlag__MAX     = 3
	};

	/**
	 * Enum Engine.ENavLinkDirection
	 */
	enum class Engine_ENavLinkDirection : uint8_t
	{
		ENavLinkDirection__BothWays              = 0,
		ENavLinkDirection__LeftToRight           = 1,
		ENavLinkDirection__RightToLeft           = 2,
		ENavLinkDirection__ENavLinkDirection_MAX = 3
	};

	/**
	 * Enum Engine.EFastArraySerializerDeltaFlags
	 */
	enum class Engine_EFastArraySerializerDeltaFlags : uint8_t
	{
		EFastArraySerializerDeltaFlags__None                               = 0,
		EFastArraySerializerDeltaFlags__HasBeenSerialized                  = 1,
		EFastArraySerializerDeltaFlags__HasDeltaBeenRequested              = 2,
		EFastArraySerializerDeltaFlags__IsUsingDeltaSerialization          = 3,
		EFastArraySerializerDeltaFlags__EFastArraySerializerDeltaFlags_MAX = 4
	};

	/**
	 * Enum Engine.EEmitterRenderMode
	 */
	enum class Engine_EEmitterRenderMode : uint8_t
	{
		ERM_Normal     = 0,
		ERM_Point      = 1,
		ERM_Cross      = 2,
		ERM_LightsOnly = 3,
		ERM_None       = 4,
		ERM_MAX        = 5
	};

	/**
	 * Enum Engine.EParticleSubUVInterpMethod
	 */
	enum class Engine_EParticleSubUVInterpMethod : uint8_t
	{
		PSUVIM_None         = 0,
		PSUVIM_Linear       = 1,
		PSUVIM_Linear_Blend = 2,
		PSUVIM_Random       = 3,
		PSUVIM_Random_Blend = 4,
		PSUVIM_MAX          = 5
	};

	/**
	 * Enum Engine.EParticleBurstMethod
	 */
	enum class Engine_EParticleBurstMethod : uint8_t
	{
		EPBM_Instant      = 0,
		EPBM_Interpolated = 1,
		EPBM_MAX          = 2
	};

	/**
	 * Enum Engine.EParticleSystemInsignificanceReaction
	 */
	enum class Engine_EParticleSystemInsignificanceReaction : uint8_t
	{
		EParticleSystemInsignificanceReaction__Auto                                      = 0,
		EParticleSystemInsignificanceReaction__Complete                                  = 1,
		EParticleSystemInsignificanceReaction__DisableTick                               = 2,
		EParticleSystemInsignificanceReaction__DisableTickAndKill                        = 3,
		EParticleSystemInsignificanceReaction__Num                                       = 4,
		EParticleSystemInsignificanceReaction__EParticleSystemInsignificanceReaction_MAX = 5
	};

	/**
	 * Enum Engine.EParticleSignificanceLevel
	 */
	enum class Engine_EParticleSignificanceLevel : uint8_t
	{
		EParticleSignificanceLevel__Low                            = 0,
		EParticleSignificanceLevel__Medium                         = 1,
		EParticleSignificanceLevel__High                           = 2,
		EParticleSignificanceLevel__Critical                       = 3,
		EParticleSignificanceLevel__Num                            = 4,
		EParticleSignificanceLevel__EParticleSignificanceLevel_MAX = 5
	};

	/**
	 * Enum Engine.EParticleDetailMode
	 */
	enum class Engine_EParticleDetailMode : uint8_t
	{
		PDM_Low    = 0,
		PDM_Medium = 1,
		PDM_High   = 2,
		PDM_MAX    = 3
	};

	/**
	 * Enum Engine.EParticleSourceSelectionMethod
	 */
	enum class Engine_EParticleSourceSelectionMethod : uint8_t
	{
		EPSSM_Random     = 0,
		EPSSM_Sequential = 1,
		EPSSM_MAX        = 2
	};

	/**
	 * Enum Engine.EModuleType
	 */
	enum class Engine_EModuleType : uint8_t
	{
		EPMT_General  = 0,
		EPMT_TypeData = 1,
		EPMT_Beam     = 2,
		EPMT_Trail    = 3,
		EPMT_Spawn    = 4,
		EPMT_Required = 5,
		EPMT_Event    = 6,
		EPMT_Light    = 7,
		EPMT_SubUV    = 8,
		EPMT_MAX      = 9
	};

	/**
	 * Enum Engine.EAttractorParticleSelectionMethod
	 */
	enum class Engine_EAttractorParticleSelectionMethod : uint8_t
	{
		EAPSM_Random     = 0,
		EAPSM_Sequential = 1,
		EAPSM_MAX        = 2
	};

	/**
	 * Enum Engine.Beam2SourceTargetTangentMethod
	 */
	enum class Engine_EBeam2SourceTargetTangentMethod : uint8_t
	{
		PEB2STTM_Direct       = 0,
		PEB2STTM_UserSet      = 1,
		PEB2STTM_Distribution = 2,
		PEB2STTM_Emitter      = 3,
		PEB2STTM_MAX          = 4
	};

	/**
	 * Enum Engine.Beam2SourceTargetMethod
	 */
	enum class Engine_EBeam2SourceTargetMethod : uint8_t
	{
		PEB2STM_Default  = 0,
		PEB2STM_UserSet  = 1,
		PEB2STM_Emitter  = 2,
		PEB2STM_Particle = 3,
		PEB2STM_Actor    = 4,
		PEB2STM_MAX      = 5
	};

	/**
	 * Enum Engine.BeamModifierType
	 */
	enum class Engine_EBeamModifierType : uint8_t
	{
		PEB2MT_Source = 0,
		PEB2MT_Target = 1,
		PEB2MT_MAX    = 2
	};

	/**
	 * Enum Engine.EParticleCameraOffsetUpdateMethod
	 */
	enum class Engine_EParticleCameraOffsetUpdateMethod : uint8_t
	{
		EPCOUM_DirectSet = 0,
		EPCOUM_Additive  = 1,
		EPCOUM_Scalar    = 2,
		EPCOUM_MAX       = 3
	};

	/**
	 * Enum Engine.EParticleCollisionComplete
	 */
	enum class Engine_EParticleCollisionComplete : uint8_t
	{
		EPCC_Kill              = 0,
		EPCC_Freeze            = 1,
		EPCC_HaltCollisions    = 2,
		EPCC_FreezeTranslation = 3,
		EPCC_FreezeRotation    = 4,
		EPCC_FreezeMovement    = 5,
		EPCC_MAX               = 6
	};

	/**
	 * Enum Engine.EParticleCollisionResponse
	 */
	enum class Engine_EParticleCollisionResponse : uint8_t
	{
		EParticleCollisionResponse__Bounce                         = 0,
		EParticleCollisionResponse__Stop                           = 1,
		EParticleCollisionResponse__Kill                           = 2,
		EParticleCollisionResponse__EParticleCollisionResponse_MAX = 3
	};

	/**
	 * Enum Engine.ELocationBoneSocketSelectionMethod
	 */
	enum class Engine_ELocationBoneSocketSelectionMethod : uint8_t
	{
		BONESOCKETSEL_Sequential = 0,
		BONESOCKETSEL_Random     = 1,
		BONESOCKETSEL_MAX        = 2
	};

	/**
	 * Enum Engine.ELocationBoneSocketSource
	 */
	enum class Engine_ELocationBoneSocketSource : uint8_t
	{
		BONESOCKETSOURCE_Bones   = 0,
		BONESOCKETSOURCE_Sockets = 1,
		BONESOCKETSOURCE_MAX     = 2
	};

	/**
	 * Enum Engine.ELocationEmitterSelectionMethod
	 */
	enum class Engine_ELocationEmitterSelectionMethod : uint8_t
	{
		ELESM_Random     = 0,
		ELESM_Sequential = 1,
		ELESM_MAX        = 2
	};

	/**
	 * Enum Engine.CylinderHeightAxis
	 */
	enum class Engine_ECylinderHeightAxis : uint8_t
	{
		PMLPC_HEIGHTAXIS_X   = 0,
		PMLPC_HEIGHTAXIS_Y   = 1,
		PMLPC_HEIGHTAXIS_Z   = 2,
		PMLPC_HEIGHTAXIS_MAX = 3
	};

	/**
	 * Enum Engine.ELocationSkelVertSurfaceSource
	 */
	enum class Engine_ELocationSkelVertSurfaceSource : uint8_t
	{
		VERTSURFACESOURCE_Vert    = 0,
		VERTSURFACESOURCE_Surface = 1,
		VERTSURFACESOURCE_MAX     = 2
	};

	/**
	 * Enum Engine.EOrbitChainMode
	 */
	enum class Engine_EOrbitChainMode : uint8_t
	{
		EOChainMode_Add   = 0,
		EOChainMode_Scale = 1,
		EOChainMode_Link  = 2,
		EOChainMode_MAX   = 3
	};

	/**
	 * Enum Engine.EParticleAxisLock
	 */
	enum class Engine_EParticleAxisLock : uint8_t
	{
		EPAL_NONE       = 0,
		EPAL_X          = 1,
		EPAL_Y          = 2,
		EPAL_Z          = 3,
		EPAL_NEGATIVE_X = 4,
		EPAL_NEGATIVE_Y = 5,
		EPAL_NEGATIVE_Z = 6,
		EPAL_ROTATE_X   = 7,
		EPAL_ROTATE_Y   = 8,
		EPAL_ROTATE_Z   = 9,
		EPAL_MAX        = 10
	};

	/**
	 * Enum Engine.EEmitterDynamicParameterValue
	 */
	enum class Engine_EEmitterDynamicParameterValue : uint8_t
	{
		EDPV_UserSet     = 0,
		EDPV_AutoSet     = 1,
		EDPV_VelocityX   = 2,
		EDPV_VelocityY   = 3,
		EDPV_VelocityZ   = 4,
		EDPV_VelocityMag = 5,
		EDPV_MAX         = 6
	};

	/**
	 * Enum Engine.EEmitterNormalsMode
	 */
	enum class Engine_EEmitterNormalsMode : uint8_t
	{
		ENM_CameraFacing = 0,
		ENM_Spherical    = 1,
		ENM_Cylindrical  = 2,
		ENM_MAX          = 3
	};

	/**
	 * Enum Engine.EParticleSortMode
	 */
	enum class Engine_EParticleSortMode : uint8_t
	{
		PSORTMODE_None            = 0,
		PSORTMODE_ViewProjDepth   = 1,
		PSORTMODE_DistanceToView  = 2,
		PSORTMODE_Age_OldestFirst = 3,
		PSORTMODE_Age_NewestFirst = 4,
		PSORTMODE_MAX             = 5
	};

	/**
	 * Enum Engine.EParticleUVFlipMode
	 */
	enum class Engine_EParticleUVFlipMode : uint8_t
	{
		EParticleUVFlipMode__None                    = 0,
		EParticleUVFlipMode__FlipUV                  = 1,
		EParticleUVFlipMode__FlipUOnly               = 2,
		EParticleUVFlipMode__FlipVOnly               = 3,
		EParticleUVFlipMode__RandomFlipUV            = 4,
		EParticleUVFlipMode__RandomFlipUOnly         = 5,
		EParticleUVFlipMode__RandomFlipVOnly         = 6,
		EParticleUVFlipMode__RandomFlipUVIndependent = 7,
		EParticleUVFlipMode__EParticleUVFlipMode_MAX = 8
	};

	/**
	 * Enum Engine.ETrail2SourceMethod
	 */
	enum class Engine_ETrail2SourceMethod : uint8_t
	{
		PET2SRCM_Default  = 0,
		PET2SRCM_Particle = 1,
		PET2SRCM_Actor    = 2,
		PET2SRCM_MAX      = 3
	};

	/**
	 * Enum Engine.EBeamTaperMethod
	 */
	enum class Engine_EBeamTaperMethod : uint8_t
	{
		PEBTM_None    = 0,
		PEBTM_Full    = 1,
		PEBTM_Partial = 2,
		PEBTM_MAX     = 3
	};

	/**
	 * Enum Engine.EBeam2Method
	 */
	enum class Engine_EBeam2Method : uint8_t
	{
		PEB2M_Distance = 0,
		PEB2M_Target   = 1,
		PEB2M_Branch   = 2,
		PEB2M_MAX      = 3
	};

	/**
	 * Enum Engine.EMeshCameraFacingOptions
	 */
	enum class Engine_EMeshCameraFacingOptions : uint8_t
	{
		XAxisFacing_NoUp                    = 0,
		XAxisFacing_ZUp                     = 1,
		XAxisFacing_NegativeZUp             = 2,
		XAxisFacing_YUp                     = 3,
		XAxisFacing_NegativeYUp             = 4,
		LockedAxis_ZAxisFacing              = 5,
		LockedAxis_NegativeZAxisFacing      = 6,
		LockedAxis_YAxisFacing              = 7,
		LockedAxis_NegativeYAxisFacing      = 8,
		VelocityAligned_ZAxisFacing         = 9,
		VelocityAligned_NegativeZAxisFacing = 10,
		VelocityAligned_YAxisFacing         = 11,
		VelocityAligned_NegativeYAxisFacing = 12,
		EMeshCameraFacingOptions_MAX        = 13
	};

	/**
	 * Enum Engine.EMeshCameraFacingUpAxis
	 */
	enum class Engine_EMeshCameraFacingUpAxis : uint8_t
	{
		CameraFacing_NoneUP      = 0,
		CameraFacing_ZUp         = 1,
		CameraFacing_NegativeZUp = 2,
		CameraFacing_YUp         = 3,
		CameraFacing_NegativeYUp = 4,
		CameraFacing_MAX         = 5
	};

	/**
	 * Enum Engine.EMeshScreenAlignment
	 */
	enum class Engine_EMeshScreenAlignment : uint8_t
	{
		PSMA_MeshFaceCameraWithRoll       = 0,
		PSMA_MeshFaceCameraWithSpin       = 1,
		PSMA_MeshFaceCameraWithLockedAxis = 2,
		PSMA_MAX                          = 3
	};

	/**
	 * Enum Engine.ETrailsRenderAxisOption
	 */
	enum class Engine_ETrailsRenderAxisOption : uint8_t
	{
		Trails_CameraUp = 0,
		Trails_SourceUp = 1,
		Trails_WorldUp  = 2,
		Trails_MAX      = 3
	};

	/**
	 * Enum Engine.EParticleScreenAlignment
	 */
	enum class Engine_EParticleScreenAlignment : uint8_t
	{
		PSA_FacingCameraPosition      = 0,
		PSA_Square                    = 1,
		PSA_Rectangle                 = 2,
		PSA_Velocity                  = 3,
		PSA_AwayFromCenter            = 4,
		PSA_TypeSpecific              = 5,
		PSA_FacingCameraDistanceBlend = 6,
		PSA_MAX                       = 7
	};

	/**
	 * Enum Engine.EParticleSystemOcclusionBoundsMethod
	 */
	enum class Engine_EParticleSystemOcclusionBoundsMethod : uint8_t
	{
		EPSOBM_None           = 0,
		EPSOBM_ParticleBounds = 1,
		EPSOBM_CustomBounds   = 2,
		EPSOBM_MAX            = 3
	};

	/**
	 * Enum Engine.ParticleSystemLODMethod
	 */
	enum class Engine_EParticleSystemLODMethod : uint8_t
	{
		PARTICLESYSTEMLODMETHOD_Automatic         = 0,
		PARTICLESYSTEMLODMETHOD_DirectSet         = 1,
		PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
		PARTICLESYSTEMLODMETHOD_MAX               = 3
	};

	/**
	 * Enum Engine.EParticleSystemUpdateMode
	 */
	enum class Engine_EParticleSystemUpdateMode : uint8_t
	{
		EPSUM_RealTime  = 0,
		EPSUM_FixedTime = 1,
		EPSUM_MAX       = 2
	};

	/**
	 * Enum Engine.EParticleEventType
	 */
	enum class Engine_EParticleEventType : uint8_t
	{
		EPET_Any       = 0,
		EPET_Spawn     = 1,
		EPET_Death     = 2,
		EPET_Collision = 3,
		EPET_Burst     = 4,
		EPET_Blueprint = 5,
		EPET_MAX       = 6
	};

	/**
	 * Enum Engine.ParticleReplayState
	 */
	enum class Engine_EParticleReplayState : uint8_t
	{
		PRS_Disabled  = 0,
		PRS_Capturing = 1,
		PRS_Replaying = 2,
		PRS_MAX       = 3
	};

	/**
	 * Enum Engine.EParticleSysParamType
	 */
	enum class Engine_EParticleSysParamType : uint8_t
	{
		PSPT_None       = 0,
		PSPT_Scalar     = 1,
		PSPT_ScalarRand = 2,
		PSPT_Vector     = 3,
		PSPT_VectorRand = 4,
		PSPT_Color      = 5,
		PSPT_Actor      = 6,
		PSPT_Material   = 7,
		PSPT_MAX        = 8
	};

	/**
	 * Enum Engine.ESettingsLockedAxis
	 */
	enum class Engine_ESettingsLockedAxis : uint8_t
	{
		ESettingsLockedAxis__None                    = 0,
		ESettingsLockedAxis__X                       = 1,
		ESettingsLockedAxis__Y                       = 2,
		ESettingsLockedAxis__Z                       = 3,
		ESettingsLockedAxis__Invalid                 = 4,
		ESettingsLockedAxis__ESettingsLockedAxis_MAX = 5
	};

	/**
	 * Enum Engine.ESettingsDOF
	 */
	enum class Engine_ESettingsDOF : uint8_t
	{
		ESettingsDOF__Full3D           = 0,
		ESettingsDOF__YZPlane          = 1,
		ESettingsDOF__XZPlane          = 2,
		ESettingsDOF__XYPlane          = 3,
		ESettingsDOF__ESettingsDOF_MAX = 4
	};

	/**
	 * Enum Engine.EFrictionCombineMode
	 */
	enum class Engine_EFrictionCombineMode : uint8_t
	{
		EFrictionCombineMode__Average  = 0,
		EFrictionCombineMode__Min      = 1,
		EFrictionCombineMode__Multiply = 2,
		EFrictionCombineMode__Max      = 3
	};

	/**
	 * Enum Engine.EViewTargetBlendFunction
	 */
	enum class Engine_EViewTargetBlendFunction : uint8_t
	{
		VTBlend_Linear    = 0,
		VTBlend_Cubic     = 1,
		VTBlend_EaseIn    = 2,
		VTBlend_EaseOut   = 3,
		VTBlend_EaseInOut = 4,
		VTBlend_MAX       = 5
	};

	/**
	 * Enum Engine.EDynamicForceFeedbackAction
	 */
	enum class Engine_EDynamicForceFeedbackAction : uint8_t
	{
		EDynamicForceFeedbackAction__Start                           = 0,
		EDynamicForceFeedbackAction__Update                          = 1,
		EDynamicForceFeedbackAction__Stop                            = 2,
		EDynamicForceFeedbackAction__EDynamicForceFeedbackAction_MAX = 3
	};

	/**
	 * Enum Engine.ERichCurveExtrapolation
	 */
	enum class Engine_ERichCurveExtrapolation : uint8_t
	{
		RCCE_Cycle           = 0,
		RCCE_CycleWithOffset = 1,
		RCCE_Oscillate       = 2,
		RCCE_Linear          = 3,
		RCCE_Constant        = 4,
		RCCE_None            = 5,
		RCCE_MAX             = 6
	};

	/**
	 * Enum Engine.ERichCurveInterpMode
	 */
	enum class Engine_ERichCurveInterpMode : uint8_t
	{
		RCIM_Linear   = 0,
		RCIM_Constant = 1,
		RCIM_Cubic    = 2,
		RCIM_None     = 3,
		RCIM_MAX      = 4
	};

	/**
	 * Enum Engine.EReflectionSourceType
	 */
	enum class Engine_EReflectionSourceType : uint8_t
	{
		EReflectionSourceType__CapturedScene             = 0,
		EReflectionSourceType__SpecifiedCubemap          = 1,
		EReflectionSourceType__EReflectionSourceType_MAX = 2
	};

	/**
	 * Enum Engine.EDefaultBackBufferPixelFormat
	 */
	enum class Engine_EDefaultBackBufferPixelFormat : uint8_t
	{
		EDefaultBackBufferPixelFormat__DBBPF_B8G8R8A8                = 0,
		EDefaultBackBufferPixelFormat__DBBPF_A16B16G16R16_DEPRECATED = 1,
		EDefaultBackBufferPixelFormat__DBBPF_FloatRGB_DEPRECATED     = 2,
		EDefaultBackBufferPixelFormat__DBBPF_FloatRGBA               = 3,
		EDefaultBackBufferPixelFormat__DBBPF_A2B10G10R10             = 4,
		EDefaultBackBufferPixelFormat__DBBPF_MAX                     = 5
	};

	/**
	 * Enum Engine.EAutoExposureMethodUI
	 */
	enum class Engine_EAutoExposureMethodUI : uint8_t
	{
		EAutoExposureMethodUI__AEM_Histogram = 0,
		EAutoExposureMethodUI__AEM_Basic     = 1,
		EAutoExposureMethodUI__AEM_Manual    = 2,
		EAutoExposureMethodUI__AEM_MAX       = 3
	};

	/**
	 * Enum Engine.EAlphaChannelMode
	 */
	enum class Engine_EAlphaChannelMode : uint8_t
	{
		EAlphaChannelMode__Disabled               = 0,
		EAlphaChannelMode__LinearColorSpaceOnly   = 1,
		EAlphaChannelMode__AllowThroughTonemapper = 2,
		EAlphaChannelMode__EAlphaChannelMode_MAX  = 3
	};

	/**
	 * Enum Engine.EEarlyZPass
	 */
	enum class Engine_EEarlyZPass : uint8_t
	{
		EEarlyZPass__None            = 0,
		EEarlyZPass__OpaqueOnly      = 1,
		EEarlyZPass__OpaqueAndMasked = 2,
		EEarlyZPass__Auto            = 3,
		EEarlyZPass__EEarlyZPass_MAX = 4
	};

	/**
	 * Enum Engine.ECustomDepthStencil
	 */
	enum class Engine_ECustomDepthStencil : uint8_t
	{
		ECustomDepthStencil__Disabled                = 0,
		ECustomDepthStencil__Enabled                 = 1,
		ECustomDepthStencil__EnabledOnDemand         = 2,
		ECustomDepthStencil__EnabledWithStencil      = 3,
		ECustomDepthStencil__ECustomDepthStencil_MAX = 4
	};

	/**
	 * Enum Engine.EMobileMSAASampleCount
	 */
	enum class Engine_EMobileMSAASampleCount : uint8_t
	{
		EMobileMSAASampleCount__One                        = 0,
		EMobileMSAASampleCount__Two                        = 1,
		EMobileMSAASampleCount__Four                       = 2,
		EMobileMSAASampleCount__Eight                      = 3,
		EMobileMSAASampleCount__EMobileMSAASampleCount_MAX = 4
	};

	/**
	 * Enum Engine.ECompositingSampleCount
	 */
	enum class Engine_ECompositingSampleCount : uint8_t
	{
		ECompositingSampleCount__One                         = 0,
		ECompositingSampleCount__Two                         = 1,
		ECompositingSampleCount__Four                        = 2,
		ECompositingSampleCount__Eight                       = 3,
		ECompositingSampleCount__ECompositingSampleCount_MAX = 4
	};

	/**
	 * Enum Engine.EClearSceneOptions
	 */
	enum class Engine_EClearSceneOptions : uint8_t
	{
		EClearSceneOptions__NoClear                = 0,
		EClearSceneOptions__HardwareClear          = 1,
		EClearSceneOptions__QuadAtMaxZ             = 2,
		EClearSceneOptions__EClearSceneOptions_MAX = 3
	};

	/**
	 * Enum Engine.EReporterLineStyle
	 */
	enum class Engine_EReporterLineStyle : uint8_t
	{
		EReporterLineStyle__Line                   = 0,
		EReporterLineStyle__Dash                   = 1,
		EReporterLineStyle__EReporterLineStyle_MAX = 2
	};

	/**
	 * Enum Engine.ELegendPosition
	 */
	enum class Engine_ELegendPosition : uint8_t
	{
		ELegendPosition__Outside             = 0,
		ELegendPosition__Inside              = 1,
		ELegendPosition__ELegendPosition_MAX = 2
	};

	/**
	 * Enum Engine.EGraphDataStyle
	 */
	enum class Engine_EGraphDataStyle : uint8_t
	{
		EGraphDataStyle__Lines               = 0,
		EGraphDataStyle__Filled              = 1,
		EGraphDataStyle__EGraphDataStyle_MAX = 2
	};

	/**
	 * Enum Engine.EGraphAxisStyle
	 */
	enum class Engine_EGraphAxisStyle : uint8_t
	{
		EGraphAxisStyle__Lines               = 0,
		EGraphAxisStyle__Notches             = 1,
		EGraphAxisStyle__Grid                = 2,
		EGraphAxisStyle__EGraphAxisStyle_MAX = 3
	};

	/**
	 * Enum Engine.ERichCurveKeyTimeCompressionFormat
	 */
	enum class Engine_ERichCurveKeyTimeCompressionFormat : uint8_t
	{
		RCKTCF_uint16  = 0,
		RCKTCF_float32 = 1,
		RCKTCF_MAX     = 2
	};

	/**
	 * Enum Engine.ERichCurveCompressionFormat
	 */
	enum class Engine_ERichCurveCompressionFormat : uint8_t
	{
		RCCF_Empty    = 0,
		RCCF_Constant = 1,
		RCCF_Linear   = 2,
		RCCF_Cubic    = 3,
		RCCF_Mixed    = 4,
		RCCF_MAX      = 5
	};

	/**
	 * Enum Engine.ERichCurveTangentWeightMode
	 */
	enum class Engine_ERichCurveTangentWeightMode : uint8_t
	{
		RCTWM_WeightedNone   = 0,
		RCTWM_WeightedArrive = 1,
		RCTWM_WeightedLeave  = 2,
		RCTWM_WeightedBoth   = 3,
		RCTWM_MAX            = 4
	};

	/**
	 * Enum Engine.ERichCurveTangentMode
	 */
	enum class Engine_ERichCurveTangentMode : uint8_t
	{
		RCTM_Auto  = 0,
		RCTM_User  = 1,
		RCTM_Break = 2,
		RCTM_None  = 3,
		RCTM_MAX   = 4
	};

	/**
	 * Enum Engine.EConstraintTransform
	 */
	enum class Engine_EConstraintTransform : uint8_t
	{
		EConstraintTransform__Absolute                 = 0,
		EConstraintTransform__Relative                 = 1,
		EConstraintTransform__EConstraintTransform_MAX = 2
	};

	/**
	 * Enum Engine.EControlConstraint
	 */
	enum class Engine_EControlConstraint : uint8_t
	{
		EControlConstraint__Orientation = 0,
		EControlConstraint__Translation = 1,
		EControlConstraint__MAX         = 2
	};

	/**
	 * Enum Engine.ERootMotionFinishVelocityMode
	 */
	enum class Engine_ERootMotionFinishVelocityMode : uint8_t
	{
		ERootMotionFinishVelocityMode__MaintainLastRootMotionVelocity    = 0,
		ERootMotionFinishVelocityMode__SetVelocity                       = 1,
		ERootMotionFinishVelocityMode__ClampVelocity                     = 2,
		ERootMotionFinishVelocityMode__ERootMotionFinishVelocityMode_MAX = 3
	};

	/**
	 * Enum Engine.ERootMotionSourceSettingsFlags
	 */
	enum class Engine_ERootMotionSourceSettingsFlags : uint8_t
	{
		ERootMotionSourceSettingsFlags__UseSensitiveLiftoffCheck           = 0,
		ERootMotionSourceSettingsFlags__DisablePartialEndTick              = 1,
		ERootMotionSourceSettingsFlags__ERootMotionSourceSettingsFlags_MAX = 2
	};

	/**
	 * Enum Engine.ERootMotionSourceStatusFlags
	 */
	enum class Engine_ERootMotionSourceStatusFlags : uint8_t
	{
		ERootMotionSourceStatusFlags__Prepared                         = 0,
		ERootMotionSourceStatusFlags__Finished                         = 1,
		ERootMotionSourceStatusFlags__MarkedForRemoval                 = 2,
		ERootMotionSourceStatusFlags__ERootMotionSourceStatusFlags_MAX = 3
	};

	/**
	 * Enum Engine.ERootMotionAccumulateMode
	 */
	enum class Engine_ERootMotionAccumulateMode : uint8_t
	{
		ERootMotionAccumulateMode__Override                      = 0,
		ERootMotionAccumulateMode__Additive                      = 1,
		ERootMotionAccumulateMode__ERootMotionAccumulateMode_MAX = 2
	};

	/**
	 * Enum Engine.ERuntimeVirtualTextureMaterialType
	 */
	enum class Engine_ERuntimeVirtualTextureMaterialType : uint8_t
	{
		ERuntimeVirtualTextureMaterialType__BaseColor                              = 0,
		ERuntimeVirtualTextureMaterialType__BaseColor_Normal                       = 1,
		ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular              = 2,
		ERuntimeVirtualTextureMaterialType__Count                                  = 3,
		ERuntimeVirtualTextureMaterialType__ERuntimeVirtualTextureMaterialType_MAX = 4
	};

	/**
	 * Enum Engine.EReflectedAndRefractedRayTracedShadows
	 */
	enum class Engine_EReflectedAndRefractedRayTracedShadows : uint8_t
	{
		EReflectedAndRefractedRayTracedShadows__Disabled                                   = 0,
		EReflectedAndRefractedRayTracedShadows__Hard_shadows                               = 1,
		EReflectedAndRefractedRayTracedShadows__Area_shadows                               = 2,
		EReflectedAndRefractedRayTracedShadows__EReflectedAndRefractedRayTracedShadows_MAX = 3
	};

	/**
	 * Enum Engine.ETranslucencyType
	 */
	enum class Engine_ETranslucencyType : uint8_t
	{
		ETranslucencyType__Raster                = 0,
		ETranslucencyType__RayTracing            = 1,
		ETranslucencyType__ETranslucencyType_MAX = 2
	};

	/**
	 * Enum Engine.EReflectionsType
	 */
	enum class Engine_EReflectionsType : uint8_t
	{
		EReflectionsType__ScreenSpace          = 0,
		EReflectionsType__RayTracing           = 1,
		EReflectionsType__EReflectionsType_MAX = 2
	};

	/**
	 * Enum Engine.ELightUnits
	 */
	enum class Engine_ELightUnits : uint8_t
	{
		ELightUnits__Unitless        = 0,
		ELightUnits__Candelas        = 1,
		ELightUnits__Lumens          = 2,
		ELightUnits__ELightUnits_MAX = 3
	};

	/**
	 * Enum Engine.EBloomMethod
	 */
	enum class Engine_EBloomMethod : uint8_t
	{
		BM_SOG = 0,
		BM_FFT = 1,
		BM_MAX = 2
	};

	/**
	 * Enum Engine.EAutoExposureMethod
	 */
	enum class Engine_EAutoExposureMethod : uint8_t
	{
		AEM_Histogram = 0,
		AEM_Basic     = 1,
		AEM_Manual    = 2,
		AEM_MAX       = 3
	};

	/**
	 * Enum Engine.EAntiAliasingMethod
	 */
	enum class Engine_EAntiAliasingMethod : uint8_t
	{
		AAM_None       = 0,
		AAM_FXAA       = 1,
		AAM_TemporalAA = 2,
		AAM_MSAA       = 3,
		AAM_MAX        = 4
	};

	/**
	 * Enum Engine.EDepthOfFieldMethod
	 */
	enum class Engine_EDepthOfFieldMethod : uint8_t
	{
		DOFM_BokehDOF  = 0,
		DOFM_Gaussian  = 1,
		DOFM_CircleDOF = 2,
		DOFM_MAX       = 3
	};

	/**
	 * Enum Engine.ESceneCapturePrimitiveRenderMode
	 */
	enum class Engine_ESceneCapturePrimitiveRenderMode : uint8_t
	{
		ESceneCapturePrimitiveRenderMode__PRM_LegacySceneCapture    = 0,
		ESceneCapturePrimitiveRenderMode__PRM_RenderScenePrimitives = 1,
		ESceneCapturePrimitiveRenderMode__PRM_UseShowOnlyList       = 2,
		ESceneCapturePrimitiveRenderMode__PRM_MAX                   = 3
	};

	/**
	 * Enum Engine.EMaterialProperty
	 */
	enum class Engine_EMaterialProperty : uint8_t
	{
		MP_EmissiveColor          = 0,
		MP_Opacity                = 1,
		MP_OpacityMask            = 2,
		MP_DiffuseColor           = 3,
		MP_SpecularColor          = 4,
		MP_BaseColor              = 5,
		MP_Metallic               = 6,
		MP_Specular               = 7,
		MP_Roughness              = 8,
		MP_Normal                 = 9,
		MP_WorldPositionOffset    = 10,
		MP_WorldDisplacement      = 11,
		MP_TessellationMultiplier = 12,
		MP_SubsurfaceColor        = 13,
		MP_CustomData0            = 14,
		MP_CustomData1            = 15,
		MP_AmbientOcclusion       = 16,
		MP_Refraction             = 17,
		MP_CustomizedUVs0         = 18,
		MP_CustomizedUVs1         = 19,
		MP_CustomizedUVs2         = 20,
		MP_CustomizedUVs3         = 21,
		MP_CustomizedUVs4         = 22,
		MP_CustomizedUVs5         = 23,
		MP_CustomizedUVs6         = 24,
		MP_CustomizedUVs7         = 25,
		MP_PixelDepthOffset       = 26,
		MP_ShadingModel           = 27,
		MP_MaterialAttributes     = 28,
		MP_CustomOutput           = 29,
		MP_MAX                    = 30
	};

	/**
	 * Enum Engine.EPhysicsTransformUpdateMode
	 */
	enum class Engine_EPhysicsTransformUpdateMode : uint8_t
	{
		EPhysicsTransformUpdateMode__SimulationUpatesComponentTransform = 0,
		EPhysicsTransformUpdateMode__ComponentTransformIsKinematic      = 1,
		EPhysicsTransformUpdateMode__EPhysicsTransformUpdateMode_MAX    = 2
	};

	/**
	 * Enum Engine.EAnimationMode
	 */
	enum class Engine_EAnimationMode : uint8_t
	{
		EAnimationMode__AnimationBlueprint  = 0,
		EAnimationMode__AnimationSingleNode = 1,
		EAnimationMode__AnimationCustomMode = 2,
		EAnimationMode__EAnimationMode_MAX  = 3
	};

	/**
	 * Enum Engine.EKinematicBonesUpdateToPhysics
	 */
	enum class Engine_EKinematicBonesUpdateToPhysics : uint8_t
	{
		EKinematicBonesUpdateToPhysics__SkipSimulatingBones                = 0,
		EKinematicBonesUpdateToPhysics__SkipAllBones                       = 1,
		EKinematicBonesUpdateToPhysics__EKinematicBonesUpdateToPhysics_MAX = 2
	};

	/**
	 * Enum Engine.EAnimCurveType
	 */
	enum class Engine_EAnimCurveType : uint8_t
	{
		EAnimCurveType__AttributeCurve     = 0,
		EAnimCurveType__MaterialCurve      = 1,
		EAnimCurveType__MorphTargetCurve   = 2,
		EAnimCurveType__MaxAnimCurveType   = 3,
		EAnimCurveType__EAnimCurveType_MAX = 4
	};

	/**
	 * Enum Engine.EBoneFilterActionOption
	 */
	enum class Engine_EBoneFilterActionOption : uint8_t
	{
		EBoneFilterActionOption__Remove                      = 0,
		EBoneFilterActionOption__Keep                        = 1,
		EBoneFilterActionOption__Invalid                     = 2,
		EBoneFilterActionOption__EBoneFilterActionOption_MAX = 3
	};

	/**
	 * Enum Engine.SkeletalMeshOptimizationImportance
	 */
	enum class Engine_ESkeletalMeshOptimizationImportance : uint8_t
	{
		SMOI_Off     = 0,
		SMOI_Lowest  = 1,
		SMOI_Low     = 2,
		SMOI_Normal  = 3,
		SMOI_High    = 4,
		SMOI_Highest = 5,
		SMOI_MAX     = 6
	};

	/**
	 * Enum Engine.SkeletalMeshOptimizationType
	 */
	enum class Engine_ESkeletalMeshOptimizationType : uint8_t
	{
		SMOT_NumOfTriangles      = 0,
		SMOT_MaxDeviation        = 1,
		SMOT_TriangleOrDeviation = 2,
		SMOT_MAX                 = 3
	};

	/**
	 * Enum Engine.SkeletalMeshTerminationCriterion
	 */
	enum class Engine_ESkeletalMeshTerminationCriterion : uint8_t
	{
		SMTC_NumOfTriangles    = 0,
		SMTC_NumOfVerts        = 1,
		SMTC_TriangleOrVert    = 2,
		SMTC_AbsNumOfTriangles = 3,
		SMTC_AbsNumOfVerts     = 4,
		SMTC_AbsTriangleOrVert = 5,
		SMTC_MAX               = 6
	};

	/**
	 * Enum Engine.EBoneTranslationRetargetingMode
	 */
	enum class Engine_EBoneTranslationRetargetingMode : uint8_t
	{
		EBoneTranslationRetargetingMode__Animation                           = 0,
		EBoneTranslationRetargetingMode__Skeleton                            = 1,
		EBoneTranslationRetargetingMode__AnimationScaled                     = 2,
		EBoneTranslationRetargetingMode__AnimationRelative                   = 3,
		EBoneTranslationRetargetingMode__OrientAndScale                      = 4,
		EBoneTranslationRetargetingMode__EBoneTranslationRetargetingMode_MAX = 5
	};

	/**
	 * Enum Engine.EBoneSpaces
	 */
	enum class Engine_EBoneSpaces : uint8_t
	{
		EBoneSpaces__WorldSpace      = 0,
		EBoneSpaces__ComponentSpace  = 1,
		EBoneSpaces__EBoneSpaces_MAX = 2
	};

	/**
	 * Enum Engine.EVisibilityBasedAnimTickOption
	 */
	enum class Engine_EVisibilityBasedAnimTickOption : uint8_t
	{
		EVisibilityBasedAnimTickOption__AlwaysTickPoseAndRefreshBones      = 0,
		EVisibilityBasedAnimTickOption__AlwaysTickPose                     = 1,
		EVisibilityBasedAnimTickOption__OnlyTickMontagesWhenNotRendered    = 2,
		EVisibilityBasedAnimTickOption__OnlyTickPoseWhenRendered           = 3,
		EVisibilityBasedAnimTickOption__EVisibilityBasedAnimTickOption_MAX = 4
	};

	/**
	 * Enum Engine.EPhysBodyOp
	 */
	enum class Engine_EPhysBodyOp : uint8_t
	{
		PBO_None = 0,
		PBO_Term = 1,
		PBO_MAX  = 2
	};

	/**
	 * Enum Engine.EBoneVisibilityStatus
	 */
	enum class Engine_EBoneVisibilityStatus : uint8_t
	{
		BVS_HiddenByParent   = 0,
		BVS_Visible          = 1,
		BVS_ExplicitlyHidden = 2,
		BVS_MAX              = 3
	};

	/**
	 * Enum Engine.ESkyLightSourceType
	 */
	enum class Engine_ESkyLightSourceType : uint8_t
	{
		SLS_CapturedScene    = 0,
		SLS_SpecifiedCubemap = 1,
		SLS_MAX              = 2
	};

	/**
	 * Enum Engine.EReverbSendMethod
	 */
	enum class Engine_EReverbSendMethod : uint8_t
	{
		EReverbSendMethod__Linear                = 0,
		EReverbSendMethod__CustomCurve           = 1,
		EReverbSendMethod__Manual                = 2,
		EReverbSendMethod__EReverbSendMethod_MAX = 3
	};

	/**
	 * Enum Engine.EAirAbsorptionMethod
	 */
	enum class Engine_EAirAbsorptionMethod : uint8_t
	{
		EAirAbsorptionMethod__Linear                   = 0,
		EAirAbsorptionMethod__CustomCurve              = 1,
		EAirAbsorptionMethod__EAirAbsorptionMethod_MAX = 2
	};

	/**
	 * Enum Engine.ESoundSpatializationAlgorithm
	 */
	enum class Engine_ESoundSpatializationAlgorithm : uint8_t
	{
		SPATIALIZATION_Default = 0,
		SPATIALIZATION_HRTF    = 1,
		SPATIALIZATION_MAX     = 2
	};

	/**
	 * Enum Engine.ESoundDistanceCalc
	 */
	enum class Engine_ESoundDistanceCalc : uint8_t
	{
		SOUNDDISTANCE_Normal          = 0,
		SOUNDDISTANCE_InfiniteXYPlane = 1,
		SOUNDDISTANCE_InfiniteXZPlane = 2,
		SOUNDDISTANCE_InfiniteYZPlane = 3,
		SOUNDDISTANCE_MAX             = 4
	};

	/**
	 * Enum Engine.EVirtualizationMode
	 */
	enum class Engine_EVirtualizationMode : uint8_t
	{
		EVirtualizationMode__Disabled                = 0,
		EVirtualizationMode__PlayWhenSilent          = 1,
		EVirtualizationMode__Restart                 = 2,
		EVirtualizationMode__EVirtualizationMode_MAX = 3
	};

	/**
	 * Enum Engine.EAudioOutputTarget
	 */
	enum class Engine_EAudioOutputTarget : uint8_t
	{
		EAudioOutputTarget__Speaker                     = 0,
		EAudioOutputTarget__Controller                  = 1,
		EAudioOutputTarget__ControllerFallbackToSpeaker = 2,
		EAudioOutputTarget__EAudioOutputTarget_MAX      = 3
	};

	/**
	 * Enum Engine.EMaxConcurrentResolutionRule
	 */
	enum class Engine_EMaxConcurrentResolutionRule : uint8_t
	{
		EMaxConcurrentResolutionRule__PreventNew                       = 0,
		EMaxConcurrentResolutionRule__StopOldest                       = 1,
		EMaxConcurrentResolutionRule__StopFarthestThenPreventNew       = 2,
		EMaxConcurrentResolutionRule__StopFarthestThenOldest           = 3,
		EMaxConcurrentResolutionRule__StopLowestPriority               = 4,
		EMaxConcurrentResolutionRule__StopQuietest                     = 5,
		EMaxConcurrentResolutionRule__StopLowestPriorityThenPreventNew = 6,
		EMaxConcurrentResolutionRule__EMaxConcurrentResolutionRule_MAX = 7
	};

	/**
	 * Enum Engine.ESoundGroup
	 */
	enum class Engine_ESoundGroup : uint8_t
	{
		SOUNDGROUP_Default          = 0,
		SOUNDGROUP_Effects          = 1,
		SOUNDGROUP_UI               = 2,
		SOUNDGROUP_Music            = 3,
		SOUNDGROUP_Voice            = 4,
		SOUNDGROUP_GameSoundGroup1  = 5,
		SOUNDGROUP_GameSoundGroup2  = 6,
		SOUNDGROUP_GameSoundGroup3  = 7,
		SOUNDGROUP_GameSoundGroup4  = 8,
		SOUNDGROUP_GameSoundGroup5  = 9,
		SOUNDGROUP_GameSoundGroup6  = 10,
		SOUNDGROUP_GameSoundGroup7  = 11,
		SOUNDGROUP_GameSoundGroup8  = 12,
		SOUNDGROUP_GameSoundGroup9  = 13,
		SOUNDGROUP_GameSoundGroup10 = 14,
		SOUNDGROUP_GameSoundGroup11 = 15,
		SOUNDGROUP_GameSoundGroup12 = 16,
		SOUNDGROUP_GameSoundGroup13 = 17,
		SOUNDGROUP_GameSoundGroup14 = 18,
		SOUNDGROUP_GameSoundGroup15 = 19,
		SOUNDGROUP_GameSoundGroup16 = 20,
		SOUNDGROUP_GameSoundGroup17 = 21,
		SOUNDGROUP_GameSoundGroup18 = 22,
		SOUNDGROUP_GameSoundGroup19 = 23,
		SOUNDGROUP_GameSoundGroup20 = 24,
		SOUNDGROUP_MAX              = 25
	};

	/**
	 * Enum Engine.ModulationParamMode
	 */
	enum class Engine_EModulationParamMode : uint8_t
	{
		MPM_Normal = 0,
		MPM_Abs    = 1,
		MPM_Direct = 2,
		MPM_MAX    = 3
	};

	/**
	 * Enum Engine.ESourceBusChannels
	 */
	enum class Engine_ESourceBusChannels : uint8_t
	{
		ESourceBusChannels__Mono                   = 0,
		ESourceBusChannels__Stereo                 = 1,
		ESourceBusChannels__ESourceBusChannels_MAX = 2
	};

	/**
	 * Enum Engine.ESourceBusSendLevelControlMethod
	 */
	enum class Engine_ESourceBusSendLevelControlMethod : uint8_t
	{
		ESourceBusSendLevelControlMethod__Linear                               = 0,
		ESourceBusSendLevelControlMethod__CustomCurve                          = 1,
		ESourceBusSendLevelControlMethod__Manual                               = 2,
		ESourceBusSendLevelControlMethod__ESourceBusSendLevelControlMethod_MAX = 3
	};

	/**
	 * Enum Engine.ESendLevelControlMethod
	 */
	enum class Engine_ESendLevelControlMethod : uint8_t
	{
		ESendLevelControlMethod__Linear                      = 0,
		ESendLevelControlMethod__CustomCurve                 = 1,
		ESendLevelControlMethod__Manual                      = 2,
		ESendLevelControlMethod__ESendLevelControlMethod_MAX = 3
	};

	/**
	 * Enum Engine.EAudioRecordingExportType
	 */
	enum class Engine_EAudioRecordingExportType : uint8_t
	{
		EAudioRecordingExportType__SoundWave                     = 0,
		EAudioRecordingExportType__WavFile                       = 1,
		EAudioRecordingExportType__EAudioRecordingExportType_MAX = 2
	};

	/**
	 * Enum Engine.ESubmixChannelFormat
	 */
	enum class Engine_ESubmixChannelFormat : uint8_t
	{
		ESubmixChannelFormat__Device                   = 0,
		ESubmixChannelFormat__Stereo                   = 1,
		ESubmixChannelFormat__Quad                     = 2,
		ESubmixChannelFormat__FiveDotOne               = 3,
		ESubmixChannelFormat__SevenDotOne              = 4,
		ESubmixChannelFormat__Ambisonics               = 5,
		ESubmixChannelFormat__Count                    = 6,
		ESubmixChannelFormat__ESubmixChannelFormat_MAX = 7
	};

	/**
	 * Enum Engine.ESoundWaveFFTSize
	 */
	enum class Engine_ESoundWaveFFTSize : uint8_t
	{
		ESoundWaveFFTSize__VerySmall             = 0,
		ESoundWaveFFTSize__Small                 = 1,
		ESoundWaveFFTSize__Medium                = 2,
		ESoundWaveFFTSize__Large                 = 3,
		ESoundWaveFFTSize__VeryLarge             = 4,
		ESoundWaveFFTSize__ESoundWaveFFTSize_MAX = 5
	};

	/**
	 * Enum Engine.EDecompressionType
	 */
	enum class Engine_EDecompressionType : uint8_t
	{
		DTYPE_Setup      = 0,
		DTYPE_Invalid    = 1,
		DTYPE_Preview    = 2,
		DTYPE_Native     = 3,
		DTYPE_RealTime   = 4,
		DTYPE_Procedural = 5,
		DTYPE_Xenon      = 6,
		DTYPE_Streaming  = 7,
		DTYPE_MAX        = 8
	};

	/**
	 * Enum Engine.ESplineCoordinateSpace
	 */
	enum class Engine_ESplineCoordinateSpace : uint8_t
	{
		ESplineCoordinateSpace__Local                      = 0,
		ESplineCoordinateSpace__World                      = 1,
		ESplineCoordinateSpace__ESplineCoordinateSpace_MAX = 2
	};

	/**
	 * Enum Engine.ESplinePointType
	 */
	enum class Engine_ESplinePointType : uint8_t
	{
		ESplinePointType__Linear               = 0,
		ESplinePointType__Curve                = 1,
		ESplinePointType__Constant             = 2,
		ESplinePointType__CurveClamped         = 3,
		ESplinePointType__CurveCustomTangent   = 4,
		ESplinePointType__ESplinePointType_MAX = 5
	};

	/**
	 * Enum Engine.ESplineMeshAxis
	 */
	enum class Engine_ESplineMeshAxis : uint8_t
	{
		ESplineMeshAxis__X                   = 0,
		ESplineMeshAxis__Y                   = 1,
		ESplineMeshAxis__Z                   = 2,
		ESplineMeshAxis__ESplineMeshAxis_MAX = 3
	};

	/**
	 * Enum Engine.EOptimizationType
	 */
	enum class Engine_EOptimizationType : uint8_t
	{
		OT_NumOfTriangles = 0,
		OT_MaxDeviation   = 1,
		OT_MAX            = 2
	};

	/**
	 * Enum Engine.EImportanceLevel
	 */
	enum class Engine_EImportanceLevel : uint8_t
	{
		IL_Off               = 0,
		IL_Lowest            = 1,
		IL_Low               = 2,
		IL_Normal            = 3,
		IL_High              = 4,
		IL_Highest           = 5,
		TEMP_BROKEN2         = 6,
		EImportanceLevel_MAX = 7
	};

	/**
	 * Enum Engine.ENormalMode
	 */
	enum class Engine_ENormalMode : uint8_t
	{
		NM_PreserveSmoothingGroups  = 0,
		NM_RecalculateNormals       = 1,
		NM_RecalculateNormalsSmooth = 2,
		NM_RecalculateNormalsHard   = 3,
		TEMP_BROKEN                 = 4,
		ENormalMode_MAX             = 5
	};

	/**
	 * Enum Engine.EStereoLayerShape
	 */
	enum class Engine_EStereoLayerShape : uint8_t
	{
		SLSH_QuadLayer     = 0,
		SLSH_CylinderLayer = 1,
		SLSH_CubemapLayer  = 2,
		SLSH_MAX           = 3
	};

	/**
	 * Enum Engine.EStereoLayerType
	 */
	enum class Engine_EStereoLayerType : uint8_t
	{
		SLT_WorldLocked   = 0,
		SLT_TrackerLocked = 1,
		SLT_FaceLocked    = 2,
		SLT_MAX           = 3
	};

	/**
	 * Enum Engine.EOpacitySourceMode
	 */
	enum class Engine_EOpacitySourceMode : uint8_t
	{
		OSM_Alpha           = 0,
		OSM_ColorBrightness = 1,
		OSM_RedChannel      = 2,
		OSM_GreenChannel    = 3,
		OSM_BlueChannel     = 4,
		OSM_MAX             = 5
	};

	/**
	 * Enum Engine.ESubUVBoundingVertexCount
	 */
	enum class Engine_ESubUVBoundingVertexCount : uint8_t
	{
		BVC_FourVertices  = 0,
		BVC_EightVertices = 1,
		BVC_MAX           = 2
	};

	/**
	 * Enum Engine.EVerticalTextAligment
	 */
	enum class Engine_EVerticalTextAligment : uint8_t
	{
		EVRTA_TextTop    = 0,
		EVRTA_TextCenter = 1,
		EVRTA_TextBottom = 2,
		EVRTA_QuadTop    = 3,
		EVRTA_MAX        = 4
	};

	/**
	 * Enum Engine.EHorizTextAligment
	 */
	enum class Engine_EHorizTextAligment : uint8_t
	{
		EHTA_Left   = 0,
		EHTA_Center = 1,
		EHTA_Right  = 2,
		EHTA_MAX    = 3
	};

	/**
	 * Enum Engine.ETextureLossyCompressionAmount
	 */
	enum class Engine_ETextureLossyCompressionAmount : uint8_t
	{
		TLCA_Default = 0,
		TLCA_None    = 1,
		TLCA_Lowest  = 2,
		TLCA_Low     = 3,
		TLCA_Medium  = 4,
		TLCA_High    = 5,
		TLCA_Highest = 6,
		TLCA_MAX     = 7
	};

	/**
	 * Enum Engine.ETextureCompressionQuality
	 */
	enum class Engine_ETextureCompressionQuality : uint8_t
	{
		TCQ_Default = 0,
		TCQ_Lowest  = 1,
		TCQ_Low     = 2,
		TCQ_Medium  = 3,
		TCQ_High    = 4,
		TCQ_Highest = 5,
		TCQ_MAX     = 6
	};

	/**
	 * Enum Engine.ETextureSourceFormat
	 */
	enum class Engine_ETextureSourceFormat : uint8_t
	{
		TSF_Invalid = 0,
		TSF_G8      = 1,
		TSF_BGRA8   = 2,
		TSF_BGRE8   = 3,
		TSF_RGBA16  = 4,
		TSF_RGBA16F = 5,
		TSF_RGBA8   = 6,
		TSF_RGBE8   = 7,
		TSF_MAX     = 8
	};

	/**
	 * Enum Engine.ETextureSourceArtType
	 */
	enum class Engine_ETextureSourceArtType : uint8_t
	{
		TSAT_Uncompressed  = 0,
		TSAT_PNGCompressed = 1,
		TSAT_DDSFile       = 2,
		TSAT_MAX           = 3
	};

	/**
	 * Enum Engine.ETextureMipCount
	 */
	enum class Engine_ETextureMipCount : uint8_t
	{
		TMC_ResidentMips  = 0,
		TMC_AllMips       = 1,
		TMC_AllMipsBiased = 2,
		TMC_MAX           = 3
	};

	/**
	 * Enum Engine.ECompositeTextureMode
	 */
	enum class Engine_ECompositeTextureMode : uint8_t
	{
		CTM_Disabled               = 0,
		CTM_NormalRoughnessToRed   = 1,
		CTM_NormalRoughnessToGreen = 2,
		CTM_NormalRoughnessToBlue  = 3,
		CTM_NormalRoughnessToAlpha = 4,
		CTM_MAX                    = 5
	};

	/**
	 * Enum Engine.TextureAddress
	 */
	enum class Engine_ETextureAddress : uint8_t
	{
		TA_Wrap   = 0,
		TA_Clamp  = 1,
		TA_Mirror = 2,
		TA_MAX    = 3
	};

	/**
	 * Enum Engine.TextureFilter
	 */
	enum class Engine_ETextureFilter : uint8_t
	{
		TF_Nearest   = 0,
		TF_Bilinear  = 1,
		TF_Trilinear = 2,
		TF_Default   = 3,
		TF_MAX       = 4
	};

	/**
	 * Enum Engine.TextureCompressionSettings
	 */
	enum class Engine_ETextureCompressionSettings : uint8_t
	{
		TC_Default               = 0,
		TC_Normalmap             = 1,
		TC_Masks                 = 2,
		TC_Grayscale             = 3,
		TC_Displacementmap       = 4,
		TC_VectorDisplacementmap = 5,
		TC_HDR                   = 6,
		TC_EditorIcon            = 7,
		TC_Alpha                 = 8,
		TC_DistanceFieldFont     = 9,
		TC_HDR_Compressed        = 10,
		TC_BC7                   = 11,
		TC_MAX                   = 12
	};

	/**
	 * Enum Engine.ETextureMipLoadOptions
	 */
	enum class Engine_ETextureMipLoadOptions : uint8_t
	{
		ETextureMipLoadOptions__Default                    = 0,
		ETextureMipLoadOptions__AllMips                    = 1,
		ETextureMipLoadOptions__OnlyFirstMip               = 2,
		ETextureMipLoadOptions__ETextureMipLoadOptions_MAX = 3
	};

	/**
	 * Enum Engine.ETextureSamplerFilter
	 */
	enum class Engine_ETextureSamplerFilter : uint8_t
	{
		ETextureSamplerFilter__Point                     = 0,
		ETextureSamplerFilter__Bilinear                  = 1,
		ETextureSamplerFilter__Trilinear                 = 2,
		ETextureSamplerFilter__AnisotropicPoint          = 3,
		ETextureSamplerFilter__AnisotropicLinear         = 4,
		ETextureSamplerFilter__ETextureSamplerFilter_MAX = 5
	};

	/**
	 * Enum Engine.ETexturePowerOfTwoSetting
	 */
	enum class Engine_ETexturePowerOfTwoSetting : uint8_t
	{
		ETexturePowerOfTwoSetting__None                          = 0,
		ETexturePowerOfTwoSetting__PadToPowerOfTwo               = 1,
		ETexturePowerOfTwoSetting__PadToSquarePowerOfTwo         = 2,
		ETexturePowerOfTwoSetting__ETexturePowerOfTwoSetting_MAX = 3
	};

	/**
	 * Enum Engine.TextureMipGenSettings
	 */
	enum class Engine_ETextureMipGenSettings : uint8_t
	{
		TMGS_FromTextureGroup  = 0,
		TMGS_SimpleAverage     = 1,
		TMGS_Sharpen0          = 2,
		TMGS_Sharpen1          = 3,
		TMGS_Sharpen2          = 4,
		TMGS_Sharpen3          = 5,
		TMGS_Sharpen4          = 6,
		TMGS_Sharpen5          = 7,
		TMGS_Sharpen6          = 8,
		TMGS_Sharpen7          = 9,
		TMGS_Sharpen8          = 10,
		TMGS_Sharpen9          = 11,
		TMGS_Sharpen10         = 12,
		TMGS_NoMipmaps         = 13,
		TMGS_LeaveExistingMips = 14,
		TMGS_Blur1             = 15,
		TMGS_Blur2             = 16,
		TMGS_Blur3             = 17,
		TMGS_Blur4             = 18,
		TMGS_Blur5             = 19,
		TMGS_Unfiltered        = 20,
		TMGS_MAX               = 21
	};

	/**
	 * Enum Engine.TextureGroup
	 */
	enum class Engine_ETextureGroup : uint8_t
	{
		TEXTUREGROUP_World                 = 0,
		TEXTUREGROUP_WorldNormalMap        = 1,
		TEXTUREGROUP_WorldSpecular         = 2,
		TEXTUREGROUP_Character             = 3,
		TEXTUREGROUP_CharacterNormalMap    = 4,
		TEXTUREGROUP_CharacterSpecular     = 5,
		TEXTUREGROUP_Weapon                = 6,
		TEXTUREGROUP_WeaponNormalMap       = 7,
		TEXTUREGROUP_WeaponSpecular        = 8,
		TEXTUREGROUP_Vehicle               = 9,
		TEXTUREGROUP_VehicleNormalMap      = 10,
		TEXTUREGROUP_VehicleSpecular       = 11,
		TEXTUREGROUP_Cinematic             = 12,
		TEXTUREGROUP_Effects               = 13,
		TEXTUREGROUP_EffectsNotFiltered    = 14,
		TEXTUREGROUP_Skybox                = 15,
		TEXTUREGROUP_UI                    = 16,
		TEXTUREGROUP_Lightmap              = 17,
		TEXTUREGROUP_RenderTarget          = 18,
		TEXTUREGROUP_MobileFlattened       = 19,
		TEXTUREGROUP_ProcBuilding_Face     = 20,
		TEXTUREGROUP_ProcBuilding_LightMap = 21,
		TEXTUREGROUP_Shadowmap             = 22,
		TEXTUREGROUP_ColorLookupTable      = 23,
		TEXTUREGROUP_Terrain_Heightmap     = 24,
		TEXTUREGROUP_Terrain_Weightmap     = 25,
		TEXTUREGROUP_Bokeh                 = 26,
		TEXTUREGROUP_IESLightProfile       = 27,
		TEXTUREGROUP_Pixels2D              = 28,
		TEXTUREGROUP_HierarchicalLOD       = 29,
		TEXTUREGROUP_Impostor              = 30,
		TEXTUREGROUP_ImpostorNormalDepth   = 31,
		TEXTUREGROUP_8BitData              = 32,
		TEXTUREGROUP_16BitData             = 33,
		TEXTUREGROUP_Project01             = 34,
		TEXTUREGROUP_Project02             = 35,
		TEXTUREGROUP_Project03             = 36,
		TEXTUREGROUP_Project04             = 37,
		TEXTUREGROUP_Project05             = 38,
		TEXTUREGROUP_Project06             = 39,
		TEXTUREGROUP_Project07             = 40,
		TEXTUREGROUP_Project08             = 41,
		TEXTUREGROUP_Project09             = 42,
		TEXTUREGROUP_Project10             = 43,
		TEXTUREGROUP_MAX                   = 44
	};

	/**
	 * Enum Engine.ETextureRenderTargetFormat
	 */
	enum class Engine_ETextureRenderTargetFormat : uint8_t
	{
		RTF_R8      = 0,
		RTF_RG8     = 1,
		RTF_RGBA8   = 2,
		RTF_R16f    = 3,
		RTF_RG16f   = 4,
		RTF_RGBA16f = 5,
		RTF_R32f    = 6,
		RTF_RG32f   = 7,
		RTF_RGBA32f = 8,
		RTF_RGB10A2 = 9,
		RTF_MAX     = 10
	};

	/**
	 * Enum Engine.ETimecodeProviderSynchronizationState
	 */
	enum class Engine_ETimecodeProviderSynchronizationState : uint8_t
	{
		ETimecodeProviderSynchronizationState__Closed                                    = 0,
		ETimecodeProviderSynchronizationState__Error                                     = 1,
		ETimecodeProviderSynchronizationState__Synchronized                              = 2,
		ETimecodeProviderSynchronizationState__Synchronizing                             = 3,
		ETimecodeProviderSynchronizationState__ETimecodeProviderSynchronizationState_MAX = 4
	};

	/**
	 * Enum Engine.ETimelineDirection
	 */
	enum class Engine_ETimelineDirection : uint8_t
	{
		ETimelineDirection__Forward                = 0,
		ETimelineDirection__Backward               = 1,
		ETimelineDirection__ETimelineDirection_MAX = 2
	};

	/**
	 * Enum Engine.ETimelineLengthMode
	 */
	enum class Engine_ETimelineLengthMode : uint8_t
	{
		TL_TimelineLength = 0,
		TL_LastKeyFrame   = 1,
		TL_MAX            = 2
	};

	/**
	 * Enum Engine.ETimeStretchCurveMapping
	 */
	enum class Engine_ETimeStretchCurveMapping : uint8_t
	{
		ETimeStretchCurveMapping__T_Original  = 0,
		ETimeStretchCurveMapping__T_TargetMin = 1,
		ETimeStretchCurveMapping__T_TargetMax = 2,
		ETimeStretchCurveMapping__MAX         = 3
	};

	/**
	 * Enum Engine.ETwitterIntegrationDelegate
	 */
	enum class Engine_ETwitterIntegrationDelegate : uint8_t
	{
		TID_AuthorizeComplete = 0,
		TID_TweetUIComplete   = 1,
		TID_RequestComplete   = 2,
		TID_MAX               = 3
	};

	/**
	 * Enum Engine.ETwitterRequestMethod
	 */
	enum class Engine_ETwitterRequestMethod : uint8_t
	{
		TRM_Get    = 0,
		TRM_Post   = 1,
		TRM_Delete = 2,
		TRM_MAX    = 3
	};

	/**
	 * Enum Engine.EUserDefinedStructureStatus
	 */
	enum class Engine_EUserDefinedStructureStatus : uint8_t
	{
		UDSS_UpToDate  = 0,
		UDSS_Dirty     = 1,
		UDSS_Error     = 2,
		UDSS_Duplicate = 3,
		UDSS_MAX       = 4
	};

	/**
	 * Enum Engine.EUIScalingRule
	 */
	enum class Engine_EUIScalingRule : uint8_t
	{
		EUIScalingRule__ShortestSide       = 0,
		EUIScalingRule__LongestSide        = 1,
		EUIScalingRule__Horizontal         = 2,
		EUIScalingRule__Vertical           = 3,
		EUIScalingRule__Custom             = 4,
		EUIScalingRule__EUIScalingRule_MAX = 5
	};

	/**
	 * Enum Engine.ERenderFocusRule
	 */
	enum class Engine_ERenderFocusRule : uint8_t
	{
		ERenderFocusRule__Always               = 0,
		ERenderFocusRule__NonPointer           = 1,
		ERenderFocusRule__NavigationOnly       = 2,
		ERenderFocusRule__Never                = 3,
		ERenderFocusRule__ERenderFocusRule_MAX = 4
	};

	/**
	 * Enum Engine.EVectorFieldConstructionOp
	 */
	enum class Engine_EVectorFieldConstructionOp : uint8_t
	{
		VFCO_Extrude = 0,
		VFCO_Revolve = 1,
		VFCO_MAX     = 2
	};

	/**
	 * Enum Engine.EWindSourceType
	 */
	enum class Engine_EWindSourceType : uint8_t
	{
		EWindSourceType__Directional         = 0,
		EWindSourceType__Point               = 1,
		EWindSourceType__EWindSourceType_MAX = 2
	};

	/**
	 * Enum Engine.EPSCPoolMethod
	 */
	enum class Engine_EPSCPoolMethod : uint8_t
	{
		EPSCPoolMethod__None                     = 0,
		EPSCPoolMethod__AutoRelease              = 1,
		EPSCPoolMethod__ManualRelease            = 2,
		EPSCPoolMethod__ManualRelease_OnComplete = 3,
		EPSCPoolMethod__FreeInPool               = 4,
		EPSCPoolMethod__EPSCPoolMethod_MAX       = 5
	};

	/**
	 * Enum Engine.EVolumeLightingMethod
	 */
	enum class Engine_EVolumeLightingMethod : uint8_t
	{
		VLM_VolumetricLightmap          = 0,
		VLM_SparseVolumeLightingSamples = 1,
		VLM_MAX                         = 2
	};

	/**
	 * Enum Engine.EVisibilityAggressiveness
	 */
	enum class Engine_EVisibilityAggressiveness : uint8_t
	{
		VIS_LeastAggressive      = 0,
		VIS_ModeratelyAggressive = 1,
		VIS_MostAggressive       = 2,
		VIS_Max                  = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Engine.TickFunction
	 * Size -> 0x0050
	 */
	struct FTickFunction
	{
	public:
		unsigned char                                              UnknownData_KEWQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_ETickingGroup                                       TickGroup;                                               // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ETickingGroup                                       EndTickGroup;                                            // 0x0009(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V29N[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bTickEvenWhenPaused : 1;                                 // 0x000C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanEverTick : 1;                                        // 0x000C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStartWithTickEnabled : 1;                               // 0x000C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowTickOnDedicatedServer : 1;                         // 0x000C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZWT[0x33];                                  // 0x000D(0x0033) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TickInterval;                                            // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2WZ8[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ActorTickFunction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FActorTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_390L[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.RepMovement
	 * Size -> 0x0034
	 */
	struct FRepMovement
	{
	public:
		struct FVector                                             LinearVelocity;                                          // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocity;                                         // 0x000C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0018(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0024(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bSimulatedPhysicSleep : 1;                               // 0x0030(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRepPhysics : 1;                                         // 0x0030(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EVectorQuantization                                 LocationQuantizationLevel;                               // 0x0031(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EVectorQuantization                                 VelocityQuantizationLevel;                               // 0x0032(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERotatorQuantization                                RotationQuantizationLevel;                               // 0x0033(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.Vector_NetQuantize100
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector_NetQuantize100 : public FVector
	{
	};

	/**
	 * ScriptStruct Engine.RepAttachment
	 * Size -> 0x0040
	 */
	struct FRepAttachment
	{
	public:
		class AActor*                                              AttachParent;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              LocationOffset;                                          // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              RelativeScale3D;                                         // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AttachSocket;                                            // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZITK[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     AttachComponent;                                         // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.Vector_NetQuantize
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector_NetQuantize : public FVector
	{
	};

	/**
	 * ScriptStruct Engine.Vector_NetQuantizeNormal
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector_NetQuantizeNormal : public FVector
	{
	};

	/**
	 * ScriptStruct Engine.HitResult
	 * Size -> 0x0088
	 */
	struct FHitResult
	{
	public:
		unsigned char                                              bBlockingHit : 1;                                        // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStartPenetrating : 1;                                   // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LI6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        FaceIndex;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 Location;                                                // 0x0010(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 ImpactPoint;                                             // 0x001C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           Normal;                                                  // 0x0028(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           ImpactNormal;                                            // 0x0034(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 TraceStart;                                              // 0x0040(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 TraceEnd;                                                // 0x004C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PenetrationDepth;                                        // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Item;                                                    // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPhysicalMaterial>                    PhysMaterial;                                            // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPrimitiveComponent>                  Component;                                               // 0x0070(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MyBoneName;                                              // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BasedMovementInfo
	 * Size -> 0x0030
	 */
	struct FBasedMovementInfo
	{
	public:
		class UPrimitiveComponent*                                 MovementBase;                                            // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              Location;                                                // 0x0010(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bServerHasBaseComponent;                                 // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRelativeRotation;                                       // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bServerHasVelocity;                                      // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYAF[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.RootMotionSourceSettings
	 * Size -> 0x0001
	 */
	struct FRootMotionSourceSettings
	{
	public:
		unsigned char                                              Flags;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.Vector_NetQuantize10
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector_NetQuantize10 : public FVector
	{
	};

	/**
	 * ScriptStruct Engine.RootMotionSourceGroup
	 * Size -> 0x00F8
	 */
	struct FRootMotionSourceGroup
	{
	public:
		unsigned char                                              UnknownData_MJCY[0xE8];                                  // 0x0000(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bHasAdditiveSources : 1;                                 // 0x00E8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHasOverrideSources : 1;                                 // 0x00E8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsAdditiveVelocityApplied : 1;                          // 0x00E8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRootMotionSourceSettings                           LastAccumulatedSettings;                                 // 0x00E9(0x0001) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZ3K[0x2];                                   // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize10                               LastPreAdditiveVelocity;                                 // 0x00EC(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RootMotionMovementParams
	 * Size -> 0x0040
	 */
	struct FRootMotionMovementParams
	{
	public:
		bool                                                       bHasRootMotion;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J2SO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendWeight;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22CJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RootMotionTransform;                                     // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RepRootMotionMontage
	 * Size -> 0x0158
	 */
	struct FRepRootMotionMontage
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEJB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        AnimMontage;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Position;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              Location;                                                // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IG07[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 MovementBase;                                            // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MovementBaseBoneName;                                    // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRelativePosition;                                       // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRelativeRotation;                                       // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJBO[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRootMotionSourceGroup                              AuthoritativeRootMotion;                                 // 0x0048(0x00F8) NativeAccessSpecifierPublic
		struct FVector_NetQuantize10                               Acceleration;                                            // 0x0140(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize10                               LinearVelocity;                                          // 0x014C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SimulatedRootMotionReplicatedMove
	 * Size -> 0x0160
	 */
	struct FSimulatedRootMotionReplicatedMove
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2EV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRepRootMotionMontage                               RootMotion;                                              // 0x0008(0x0158) ContainsInstancedReference, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ActiveForceFeedbackEffect
	 * Size -> 0x0018
	 */
	struct FActiveForceFeedbackEffect
	{
	public:
		class UForceFeedbackEffect*                                ForceFeedbackEffect;                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8O9T[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ViewTargetTransitionParams
	 * Size -> 0x0010
	 */
	struct FViewTargetTransitionParams
	{
	public:
		float                                                      BlendTime;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EViewTargetBlendFunction                            BlendFunction;                                           // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZZL[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendExp;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLockOutgoing : 1;                                       // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7EU[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
	 * Size -> 0x000C
	 */
	struct FUpdateLevelVisibilityLevelInfo
	{
	public:
		class FName                                                PackageName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsVisible : 1;                                          // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_54FM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.UniqueNetIdRepl
	 * Size -> 0x0027 (FullSize[0x0028] - InheritedSize[0x0001])
	 */
	struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
	{
	public:
		unsigned char                                              UnknownData_FYF9[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      ReplicationBytes;                                        // 0x0018(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct Engine.LatentActionInfo
	 * Size -> 0x0018
	 */
	struct FLatentActionInfo
	{
	public:
		int                                                        Linkage;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        UUID;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ExecutionFunction;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             CallbackTarget;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.UpdateLevelStreamingLevelStatus
	 * Size -> 0x0010
	 */
	struct FUpdateLevelStreamingLevelStatus
	{
	public:
		class FName                                                PackageName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LODIndex;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNewShouldBeLoaded : 1;                                  // 0x000C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNewShouldBeVisible : 1;                                 // 0x000C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNewShouldBlockOnLoad : 1;                               // 0x000C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NQWM[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ForceFeedbackParameters
	 * Size -> 0x000C
	 */
	struct FForceFeedbackParameters
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreTimeDilation;                                     // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayWhilePaused;                                        // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OG1A[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ActorComponentTickFunction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FActorComponentTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_Y4IW[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SimpleMemberReference
	 * Size -> 0x0020
	 */
	struct FSimpleMemberReference
	{
	public:
		class UObject*                                             MemberParent;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MemberName;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               MemberGuid;                                              // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.LightingChannels
	 * Size -> 0x0001
	 */
	struct FLightingChannels
	{
	public:
		unsigned char                                              bChannel0 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bChannel1 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bChannel2 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CustomPrimitiveData
	 * Size -> 0x0010
	 */
	struct FCustomPrimitiveData
	{
	public:
		TArray<float>                                              Data;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CollisionResponseContainer
	 * Size -> 0x0020
	 */
	struct FCollisionResponseContainer
	{
	public:
		Engine_ECollisionResponse                                  WorldStatic;                                             // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  WorldDynamic;                                            // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  Pawn;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  Visibility;                                              // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  Camera;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  PhysicsBody;                                             // 0x0005(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  Vehicle;                                                 // 0x0006(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  Destructible;                                            // 0x0007(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  EngineTraceChannel1;                                     // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  EngineTraceChannel2;                                     // 0x0009(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  EngineTraceChannel3;                                     // 0x000A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  EngineTraceChannel4;                                     // 0x000B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  EngineTraceChannel5;                                     // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  EngineTraceChannel6;                                     // 0x000D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel1;                                       // 0x000E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel2;                                       // 0x000F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel3;                                       // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel4;                                       // 0x0011(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel5;                                       // 0x0012(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel6;                                       // 0x0013(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel7;                                       // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel8;                                       // 0x0015(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel9;                                       // 0x0016(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel10;                                      // 0x0017(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel11;                                      // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel12;                                      // 0x0019(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel13;                                      // 0x001A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel14;                                      // 0x001B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel15;                                      // 0x001C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel16;                                      // 0x001D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel17;                                      // 0x001E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  GameTraceChannel18;                                      // 0x001F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ResponseChannel
	 * Size -> 0x000C
	 */
	struct FResponseChannel
	{
	public:
		class FName                                                Channel;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  Response;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N81E[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.WalkableSlopeOverride
	 * Size -> 0x0010
	 */
	struct FWalkableSlopeOverride
	{
	public:
		Engine_EWalkableSlopeBehavior                              WalkableSlopeBehavior;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SHSN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WalkableSlopeAngle;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJUU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ChannelDefinition
	 * Size -> 0x0028
	 */
	struct FChannelDefinition
	{
	public:
		class FName                                                ChannelName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ClassName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ChannelClass;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        StaticChannelIndex;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTickOnCreate;                                           // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bServerOpen;                                             // 0x001D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClientOpen;                                             // 0x001E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitialServer;                                          // 0x001F(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitialClient;                                          // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYOE[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ExpressionInput
	 * Size -> 0x000C
	 */
	struct FExpressionInput
	{
	public:
		int                                                        OutputIndex;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ExpressionName;                                          // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SplineCurves
	 * Size -> 0x0068
	 */
	struct FSplineCurves
	{
	public:
		struct FInterpCurveVector                                  Position;                                                // 0x0000(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveQuat                                    Rotation;                                                // 0x0018(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveVector                                  Scale;                                                   // 0x0030(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveFloat                                   ReparamTable;                                            // 0x0048(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplineMetadata*                                     MetaData;                                                // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SplinePoint
	 * Size -> 0x0044
	 */
	struct FSplinePoint
	{
	public:
		float                                                      InputKey;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ArriveTangent;                                           // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeaveTangent;                                            // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0034(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ESplinePointType                                    Type;                                                    // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YFW[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SkelMeshComponentLODInfo
	 * Size -> 0x0028
	 */
	struct FSkelMeshComponentLODInfo
	{
	public:
		TArray<bool>                                               HiddenMaterials;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LVN[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SkelMeshSkinWeightInfo
	 * Size -> 0x0028
	 */
	struct FSkelMeshSkinWeightInfo
	{
	public:
		int                                                        Bones[0x8];                                              // 0x0000(0x0020) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Weights[0x8];                                            // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SingleAnimationPlayData
	 * Size -> 0x0018
	 */
	struct FSingleAnimationPlayData
	{
	public:
		class UAnimationAsset*                                     AnimToPlay;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSavedLooping : 1;                                       // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSavedPlaying : 1;                                       // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9IU7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SavedPosition;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SavedPlayRate;                                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O3WJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PoseSnapshot
	 * Size -> 0x0038
	 */
	struct FPoseSnapshot
	{
	public:
		TArray<struct FTransform>                                  LocalTransforms;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        BoneNames;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                SkeletalMeshName;                                        // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SnapshotName;                                            // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsValid;                                                // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LSHO[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimNotifyEventReference
	 * Size -> 0x0010
	 */
	struct FAnimNotifyEventReference
	{
	public:
		unsigned char                                              UnknownData_LSRA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             NotifySource;                                            // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.AnimLinkableElement
	 * Size -> 0x0030
	 */
	struct FAnimLinkableElement
	{
	public:
		unsigned char                                              UnknownData_14OX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        LinkedMontage;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        SlotIndex;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        SegmentIndex;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		Engine_EAnimLinkMethod                                     LinkMethod;                                              // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		Engine_EAnimLinkMethod                                     CachedLinkMethod;                                        // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BOCU[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SegmentBeginTime;                                        // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SegmentLength;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LinkValue;                                               // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequenceBase*                                   LinkedSequence;                                          // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct Engine.AnimNotifyEvent
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	struct FAnimNotifyEvent : public FAnimLinkableElement
	{
	public:
		float                                                      DisplayTime;                                             // 0x0030(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TriggerTimeOffset;                                       // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndTriggerTimeOffset;                                    // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TriggerWeightThreshold;                                  // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NotifyName;                                              // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimNotify*                                         Notify;                                                  // 0x0048(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimNotifyState*                                    NotifyStateClass;                                        // 0x0050(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJ92[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimLinkableElement                                EndLink;                                                 // 0x0060(0x0030) NativeAccessSpecifierPublic
		bool                                                       bConvertedFromBranchingPoint;                            // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EMontageNotifyTickType                              MontageTickType;                                         // 0x0091(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MDQE[0x2];                                   // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NotifyTriggerChance;                                     // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ENotifyFilterType                                   NotifyFilterType;                                        // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAYM[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        NotifyFilterLOD;                                         // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTriggerOnDedicatedServer;                               // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTriggerOnFollower;                                      // 0x00A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQ4O[0x2];                                   // 0x00A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        TrackIndex;                                              // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JRTW[0x10];                                  // 0x00A8(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.MarkerSyncAnimPosition
	 * Size -> 0x0014
	 */
	struct FMarkerSyncAnimPosition
	{
	public:
		class FName                                                PreviousMarkerName;                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NextMarkerName;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositionBetweenMarkers;                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AudioComponentParam
	 * Size -> 0x0020
	 */
	struct FAudioComponentParam
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatParam;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolParam;                                               // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAV1[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        IntParam;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASLC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundWave*                                          SoundWaveParam;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.KeyHandleMap
	 * Size -> 0x0060
	 */
	struct FKeyHandleMap
	{
	public:
		unsigned char                                              UnknownData_SJX2[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.IndexedCurve
	 * Size -> 0x0068
	 */
	struct FIndexedCurve
	{
	public:
		unsigned char                                              UnknownData_XUNU[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKeyHandleMap                                       KeyHandlesToIndices;                                     // 0x0008(0x0060) Transient, Protected, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct Engine.RealCurve
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	struct FRealCurve : public FIndexedCurve
	{
	public:
		Engine_ERichCurveExtrapolation                             PreInfinityExtrap;                                       // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveExtrapolation                             PostInfinityExtrap;                                      // 0x0069(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWTL[0x2];                                   // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultValue;                                            // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RichCurveKey
	 * Size -> 0x001C
	 */
	struct FRichCurveKey
	{
	public:
		Engine_ERichCurveInterpMode                                InterpMode;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveTangentMode                               TangentMode;                                             // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveTangentWeightMode                         TangentWeightMode;                                       // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4U4L[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Time;                                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArriveTangent;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArriveTangentWeight;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangent;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangentWeight;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SoundModulation
	 * Size -> 0x0010
	 */
	struct FSoundModulation
	{
	public:
		TArray<class USoundModulationPluginSourceSettingsBase*>    Settings;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SoundWaveSpectralData
	 * Size -> 0x000C
	 */
	struct FSoundWaveSpectralData
	{
	public:
		float                                                      FrequencyHz;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalizedMagnitude;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SoundWaveSpectralDataPerSound
	 * Size -> 0x0020
	 */
	struct FSoundWaveSpectralDataPerSound
	{
	public:
		TArray<struct FSoundWaveSpectralData>                      SpectralData;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      PlaybackTime;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HILH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundWave*                                          SoundWave;                                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
	 * Size -> 0x0010
	 */
	struct FSoundWaveEnvelopeDataPerSound
	{
	public:
		float                                                      Envelope;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlaybackTime;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundWave*                                          SoundWave;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.LevelStreamingWrapper
	 * Size -> 0x0008
	 */
	struct FLevelStreamingWrapper
	{
	public:
		class ULevelStreaming*                                     StreamingLevel;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.LevelCollection
	 * Size -> 0x0078
	 */
	struct FLevelCollection
	{
	public:
		unsigned char                                              UnknownData_SF0G[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGameStateBase*                                      GameState;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNetDriver*                                          NetDriver;                                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDemoNetDriver*                                      DemoNetDriver;                                           // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULevel*                                              PersistentLevel;                                         // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Levels[0x50];                                            // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty Engine.LevelCollection.Levels

	};

	/**
	 * ScriptStruct Engine.PSCPoolElem
	 * Size -> 0x0010
	 */
	struct FPSCPoolElem
	{
	public:
		class UParticleSystemComponent*                            PSC;                                                     // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6U9S[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PSCPool
	 * Size -> 0x0038
	 */
	struct FPSCPool
	{
	public:
		TArray<struct FPSCPoolElem>                                FreeElements;                                            // 0x0000(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UParticleSystemComponent*>                    InUseComponents_Auto;                                    // 0x0010(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UParticleSystemComponent*>                    InUseComponents_Manual;                                  // 0x0020(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGUC[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CollisionResponse
	 * Size -> 0x0030
	 */
	struct FCollisionResponse
	{
	public:
		struct FCollisionResponseContainer                         ResponseToChannels;                                      // 0x0000(0x0020) Transient, NoDestructor, NativeAccessSpecifierPrivate
		TArray<struct FResponseChannel>                            ResponseArray;                                           // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.BodyInstance
	 * Size -> 0x0110
	 */
	struct FBodyInstance
	{
	public:
		unsigned char                                              UnknownData_87Z2[0x6];                                   // 0x0000(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_ECollisionChannel                                   ObjectType;                                              // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1UJM[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_ECollisionEnabled                                   CollisionEnabled;                                        // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UTA4[0x1];                                   // 0x0009(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_ESleepFamily                                        SleepFamily;                                             // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EDOFMode                                            DOFMode;                                                 // 0x000B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseCCD : 1;                                             // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNotifyRigidBodyCollision : 1;                           // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3XQ : 1;                                    // 0x000C(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bSimulatePhysics : 1;                                    // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideMass : 1;                                       // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableGravity : 1;                                      // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAutoWeld : 1;                                           // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStartAwake : 1;                                         // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGenerateWakeEvents : 1;                                 // 0x000D(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUpdateMassWhenScaleChanges : 1;                         // 0x000D(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLockTranslation : 1;                                    // 0x000D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLockRotation : 1;                                       // 0x000D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLockXTranslation : 1;                                   // 0x000D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLockYTranslation : 1;                                   // 0x000D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLockZTranslation : 1;                                   // 0x000D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLockXRotation : 1;                                      // 0x000D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLockYRotation : 1;                                      // 0x000E(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLockZRotation : 1;                                      // 0x000E(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideMaxAngularVelocity : 1;                         // 0x000E(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MKG8 : 2;                                    // 0x000E(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bOverrideMaxDepenetrationVelocity : 1;                   // 0x000E(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bOverrideWalkableSlopeOnInstance : 1;                    // 0x000E(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInterpolateWhenSubStepping : 1;                         // 0x000E(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q1XV[0xD];                                   // 0x000F(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CollisionProfileName;                                    // 0x001C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              PositionSolverIterationCount;                            // 0x0024(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              VelocitySolverIterationCount;                            // 0x0025(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKFI[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCollisionResponse                                  CollisionResponses;                                      // 0x0028(0x0030) Edit, NativeAccessSpecifierPrivate
		float                                                      MaxDepenetrationVelocity;                                // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MassInKgOverride;                                        // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MPMP[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearDamping;                                           // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularDamping;                                          // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CustomDOFPlaneNormal;                                    // 0x0070(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             COMNudge;                                                // 0x007C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MassScale;                                               // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InertiaTensorScale;                                      // 0x008C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X9FH[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWalkableSlopeOverride                              WalkableSlopeOverride;                                   // 0x00A8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		class UPhysicalMaterial*                                   PhysMaterialOverride;                                    // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxAngularVelocity;                                      // 0x00C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CustomSleepThresholdMultiplier;                          // 0x00C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StabilizationThresholdMultiplier;                        // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhysicsBlendWeight;                                      // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJJN[0x40];                                  // 0x00D0(0x0040) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
	 * Size -> 0x0008
	 */
	struct FSkeletalMeshSamplingRegionMaterialFilter
	{
	public:
		class FName                                                MaterialName;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
	 * Size -> 0x000C
	 */
	struct FSkeletalMeshSamplingRegionBoneFilter
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIncludeOrExclude : 1;                                   // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplyToChildren : 1;                                    // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98Z6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SkeletalMeshSamplingRegion
	 * Size -> 0x0030
	 */
	struct FSkeletalMeshSamplingRegion
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LODIndex;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportUniformlyDistributedSampling : 1;                // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YD4A[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSkeletalMeshSamplingRegionMaterialFilter>   MaterialFilters;                                         // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSkeletalMeshSamplingRegionBoneFilter>       BoneFilters;                                             // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimNotifyArray
	 * Size -> 0x0010
	 */
	struct FAnimNotifyArray
	{
	public:
		TArray<struct FAnimNotifyEventReference>                   Notifies;                                                // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimNotifyQueue
	 * Size -> 0x0070
	 */
	struct FAnimNotifyQueue
	{
	public:
		unsigned char                                              UnknownData_OH5I[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimNotifyEventReference>                   AnimNotifies;                                            // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TMap<class FName, struct FAnimNotifyArray>                 UnfilteredMontageAnimNotifies;                           // 0x0020(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SmartName
	 * Size -> 0x000C
	 */
	struct FSmartName
	{
	public:
		class FName                                                DisplayName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IPHO[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimCurveBase
	 * Size -> 0x0018
	 */
	struct FAnimCurveBase
	{
	public:
		class FName                                                LastObservedName;                                        // 0x0000(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSmartName                                          Name;                                                    // 0x0008(0x000C) NoDestructor, NativeAccessSpecifierPublic
		int                                                        CurveTypeFlags;                                          // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.RichCurve
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	struct FRichCurve : public FRealCurve
	{
	public:
		TArray<struct FRichCurveKey>                               keys;                                                    // 0x0070(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.FloatCurve
	 * Size -> 0x0080 (FullSize[0x0098] - InheritedSize[0x0018])
	 */
	struct FFloatCurve : public FAnimCurveBase
	{
	public:
		struct FRichCurve                                          FloatCurve;                                              // 0x0018(0x0080) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RawCurveTracks
	 * Size -> 0x0010
	 */
	struct FRawCurveTracks
	{
	public:
		TArray<struct FFloatCurve>                                 FloatCurves;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimSegment
	 * Size -> 0x0020
	 */
	struct FAnimSegment
	{
	public:
		class UAnimSequenceBase*                                   AnimReference;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartPos;                                                // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimStartTime;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimEndTime;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimPlayRate;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LoopingCount;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJVV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.KShapeElem
	 * Size -> 0x0030
	 */
	struct FKShapeElem
	{
	public:
		unsigned char                                              UnknownData_996Y[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RestOffset;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B46P[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bContributeToMass : 1;                                   // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZCOB[0x17];                                  // 0x0019(0x0017) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.KSphereElem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FKSphereElem : public FKShapeElem
	{
	public:
		struct FVector                                             Center;                                                  // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.KBoxElem
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FKBoxElem : public FKShapeElem
	{
	public:
		struct FVector                                             Center;                                                  // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      X;                                                       // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIXM[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.KSphylElem
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FKSphylElem : public FKShapeElem
	{
	public:
		struct FVector                                             Center;                                                  // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.KConvexElem
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	struct FKConvexElem : public FKShapeElem
	{
	public:
		TArray<struct FVector>                                     VertexData;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FBox                                                ElemBox;                                                 // 0x0040(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFMG[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0060(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LDD2[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.KTaperedCapsuleElem
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FKTaperedCapsuleElem : public FKShapeElem
	{
	public:
		struct FVector                                             Center;                                                  // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Radius0;                                                 // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius1;                                                 // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LEZN[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.KAggregateGeom
	 * Size -> 0x0058
	 */
	struct FKAggregateGeom
	{
	public:
		TArray<struct FKSphereElem>                                SphereElems;                                             // 0x0000(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKBoxElem>                                   BoxElems;                                                // 0x0010(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKSphylElem>                                 SphylElems;                                              // 0x0020(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKConvexElem>                                ConvexElems;                                             // 0x0030(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKTaperedCapsuleElem>                        TaperedCapsuleElems;                                     // 0x0040(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FF05[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.RuntimeFloatCurve
	 * Size -> 0x0088
	 */
	struct FRuntimeFloatCurve
	{
	public:
		struct FRichCurve                                          EditorCurveData;                                         // 0x0000(0x0080) NativeAccessSpecifierPublic
		class UCurveFloat*                                         ExternalCurve;                                           // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BaseAttenuationSettings
	 * Size -> 0x00B0
	 */
	struct FBaseAttenuationSettings
	{
	public:
		unsigned char                                              UnknownData_FQIN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_EAttenuationDistanceModel                           DistanceAlgorithm;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAttenuationShape                                   AttenuationShape;                                        // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLE6[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      dBAttenuationAtMax;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AttenuationShapeExtents;                                 // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConeOffset;                                              // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FalloffDistance;                                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0C8S[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  CustomAttenuationCurve;                                  // 0x0028(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SoundAttenuationPluginSettings
	 * Size -> 0x0030
	 */
	struct FSoundAttenuationPluginSettings
	{
	public:
		TArray<class USpatializationPluginSourceSettingsBase*>     SpatializationPluginSettingsArray;                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOcclusionPluginSourceSettingsBase*>          OcclusionPluginSettingsArray;                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UReverbPluginSourceSettingsBase*>             ReverbPluginSettingsArray;                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SoundAttenuationSettings
	 * Size -> 0x0238 (FullSize[0x02E8] - InheritedSize[0x00B0])
	 */
	struct FSoundAttenuationSettings : public FBaseAttenuationSettings
	{
	public:
		unsigned char                                              bAttenuate : 1;                                          // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSpatialize : 1;                                         // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAttenuateWithLPF : 1;                                   // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableListenerFocus : 1;                                // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableFocusInterpolation : 1;                           // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableOcclusion : 1;                                    // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseComplexCollisionForOcclusion : 1;                    // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableReverbSend : 1;                                   // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplyNormalizationToStereoSounds : 1;                   // 0x00B1(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableLogFrequencyScaling : 1;                          // 0x00B1(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ESoundSpatializationAlgorithm                       SpatializationAlgorithm;                                 // 0x00B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAirAbsorptionMethod                                AbsorptionMethod;                                        // 0x00B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionChannel                                   OcclusionTraceChannel;                                   // 0x00B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EReverbSendMethod                                   ReverbSendMethod;                                        // 0x00B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BY6V[0x2];                                   // 0x00B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OmniRadius;                                              // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StereoSpread;                                            // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPFRadiusMin;                                            // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPFRadiusMax;                                            // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  CustomLowpassAirAbsorptionCurve;                         // 0x00C8(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  CustomHighpassAirAbsorptionCurve;                        // 0x0150(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      LPFFrequencyAtMin;                                       // 0x01D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPFFrequencyAtMax;                                       // 0x01DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HPFFrequencyAtMin;                                       // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HPFFrequencyAtMax;                                       // 0x01E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusAzimuth;                                            // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonFocusAzimuth;                                         // 0x01EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusDistanceScale;                                      // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonFocusDistanceScale;                                   // 0x01F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusPriorityScale;                                      // 0x01F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonFocusPriorityScale;                                   // 0x01FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusVolumeAttenuation;                                  // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonFocusVolumeAttenuation;                               // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusAttackInterpSpeed;                                  // 0x0208(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusReleaseInterpSpeed;                                 // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionLowPassFilterFrequency;                         // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionVolumeAttenuation;                              // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionInterpolationTime;                              // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReverbWetLevelMin;                                       // 0x021C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReverbWetLevelMax;                                       // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReverbDistanceMin;                                       // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReverbDistanceMax;                                       // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ManualReverbSendLevel;                                   // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  CustomReverbSendCurve;                                   // 0x0230(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSoundAttenuationPluginSettings                     PluginSettings;                                          // 0x02B8(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MovementProperties
	 * Size -> 0x0001
	 */
	struct FMovementProperties
	{
	public:
		unsigned char                                              bCanCrouch : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanJump : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanWalk : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanSwim : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanFly : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NavAgentProperties
	 * Size -> 0x002F (FullSize[0x0030] - InheritedSize[0x0001])
	 */
	struct FNavAgentProperties : public FMovementProperties
	{
	public:
		unsigned char                                              UnknownData_9OYF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AgentRadius;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentHeight;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentStepHeight;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NavWalkingSearchHeightScale;                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z20X[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      PreferredNavData;                                        // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.FindFloorResult
	 * Size -> 0x0094
	 */
	struct FFindFloorResult
	{
	public:
		unsigned char                                              bBlockingHit : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWalkableFloor : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLineTrace : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9PJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FloorDist;                                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineDist;                                                // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          HitResult;                                               // 0x000C(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NavAvoidanceMask
	 * Size -> 0x0004
	 */
	struct FNavAvoidanceMask
	{
	public:
		unsigned char                                              bGroup0 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup1 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup2 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup3 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup4 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup5 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup6 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup7 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup8 : 1;                                             // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup9 : 1;                                             // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup10 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup11 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup12 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup13 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup14 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup15 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup16 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup17 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup18 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup19 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup20 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup21 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup22 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup23 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup24 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup25 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup26 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup27 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup28 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup29 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup30 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGroup31 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_633L[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.StaticMeshComponentLODInfo
	 * Size -> 0x00A8
	 */
	struct FStaticMeshComponentLODInfo
	{
	public:
		unsigned char                                              UnknownData_9NS1[0xA8];                                  // 0x0000(0x00A8) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.StreamingTextureBuildInfo
	 * Size -> 0x000C
	 */
	struct FStreamingTextureBuildInfo
	{
	public:
		uint32_t                                                   PackedRelativeBox;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        TextureLevelIndex;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TexelFactor;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.LightmassPrimitiveSettings
	 * Size -> 0x0018
	 */
	struct FLightmassPrimitiveSettings
	{
	public:
		unsigned char                                              bUseTwoSidedLighting : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShadowIndirectOnly : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseEmissiveForStaticLighting : 1;                       // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseVertexNormalForHemisphereGather : 1;                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LBD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EmissiveLightFalloffExponent;                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmissiveLightExplicitInfluenceRadius;                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmissiveBoost;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DiffuseBoost;                                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FullyOccludedSamplesFraction;                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.InstancedStaticMeshInstanceData
	 * Size -> 0x0040
	 */
	struct FInstancedStaticMeshInstanceData
	{
	public:
		struct FMatrix                                             Transform;                                               // 0x0000(0x0040) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.InstancedStaticMeshMappingInfo
	 * Size -> 0x0008
	 */
	struct FInstancedStaticMeshMappingInfo
	{
	public:
		unsigned char                                              UnknownData_YB3N[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.GeomSelection
	 * Size -> 0x000C
	 */
	struct FGeomSelection
	{
	public:
		int                                                        Type;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Index;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SelectionIndex;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AudioEQEffect
	 * Size -> 0x0038
	 */
	struct FAudioEQEffect
	{
	public:
		unsigned char                                              UnknownData_826Y[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FrequencyCenter0;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gain0;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bandwidth0;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrequencyCenter1;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gain1;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bandwidth1;                                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrequencyCenter2;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gain2;                                                   // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bandwidth2;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrequencyCenter3;                                        // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gain3;                                                   // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bandwidth3;                                              // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SoundClassAdjuster
	 * Size -> 0x0018
	 */
	struct FSoundClassAdjuster
	{
	public:
		class USoundClass*                                         SoundClassObject;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumeAdjuster;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchAdjuster;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplyToChildren : 1;                                    // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00SL[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VoiceCenterChannelVolumeAdjuster;                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.DialogueContext
	 * Size -> 0x0018
	 */
	struct FDialogueContext
	{
	public:
		class UDialogueVoice*                                      Speaker;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UDialogueVoice*>                              Targets;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.DialogueWaveParameter
	 * Size -> 0x0020
	 */
	struct FDialogueWaveParameter
	{
	public:
		class UDialogueWave*                                       DialogueWave;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDialogueContext                                    Context;                                                 // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.DistanceDatum
	 * Size -> 0x0014
	 */
	struct FDistanceDatum
	{
	public:
		float                                                      FadeInDistanceStart;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInDistanceEnd;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDistanceStart;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDistanceEnd;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ModulatorContinuousParams
	 * Size -> 0x0020
	 */
	struct FModulatorContinuousParams
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Default;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinInput;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxInput;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinOutput;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOutput;                                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EModulationParamMode                                ParamMode;                                               // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NLT[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SplineMeshParams
	 * Size -> 0x0058
	 */
	struct FSplineMeshParams
	{
	public:
		struct FVector                                             StartPos;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartTangent;                                            // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           StartScale;                                              // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartRoll;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           StartOffset;                                             // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndPos;                                                  // 0x002C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndTangent;                                              // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           EndScale;                                                // 0x0044(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndRoll;                                                 // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           EndOffset;                                               // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MeshUVChannelInfo
	 * Size -> 0x0014
	 */
	struct FMeshUVChannelInfo
	{
	public:
		bool                                                       bInitialized;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideDensities;                                      // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZMK[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LocalUVDensities[0x4];                                   // 0x0004(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StaticMaterial
	 * Size -> 0x0030
	 */
	struct FStaticMaterial
	{
	public:
		class UMaterialInterface*                                  MaterialInterface;                                       // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MaterialSlotName;                                        // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ImportedMaterialSlotName;                                // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMeshUVChannelInfo                                  UVChannelData;                                           // 0x0018(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4UNS[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SubsurfaceProfileStruct
	 * Size -> 0x0050
	 */
	struct FSubsurfaceProfileStruct
	{
	public:
		float                                                      ScatterRadius;                                           // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SubsurfaceColor;                                         // 0x0004(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FalloffColor;                                            // 0x0014(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BoundaryColorBleed;                                      // 0x0024(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtinctionScale;                                         // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalScale;                                             // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScatteringDistribution;                                  // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IOR;                                                     // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roughness0;                                              // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roughness1;                                              // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LobeMix;                                                 // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TimelineEventEntry
	 * Size -> 0x0014
	 */
	struct FTimelineEventEntry
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      EventFunc;                                               // 0x0004(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TimelineVectorTrack
	 * Size -> 0x0040
	 */
	struct FTimelineVectorTrack
	{
	public:
		class UCurveVector*                                        VectorCurve;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      InterpFunc;                                              // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                TrackName;                                               // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                VectorPropertyName;                                      // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStructProperty*                                     VectorProperty;                                          // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCGR[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.TimelineFloatTrack
	 * Size -> 0x0040
	 */
	struct FTimelineFloatTrack
	{
	public:
		class UCurveFloat*                                         FloatCurve;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      InterpFunc;                                              // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                TrackName;                                               // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FloatPropertyName;                                       // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatProperty*                                      FloatProperty;                                           // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VSS[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.TimelineLinearColorTrack
	 * Size -> 0x0040
	 */
	struct FTimelineLinearColorTrack
	{
	public:
		class UCurveLinearColor*                                   LinearColorCurve;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      InterpFunc;                                              // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                TrackName;                                               // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LinearColorPropertyName;                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStructProperty*                                     LinearColorProperty;                                     // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KTZD[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.Timeline
	 * Size -> 0x0098
	 */
	struct FTimeline
	{
	public:
		Engine_ETimelineLengthMode                                 LengthMode;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bLooping : 1;                                            // 0x0001(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bReversePlayback : 1;                                    // 0x0001(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bPlaying : 1;                                            // 0x0001(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OI32[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Length;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PlayRate;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Position;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FTimelineEventEntry>                         Events;                                                  // 0x0010(0x0010) ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FTimelineVectorTrack>                        InterpVectors;                                           // 0x0020(0x0010) ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FTimelineFloatTrack>                         InterpFloats;                                            // 0x0030(0x0010) ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FTimelineLinearColorTrack>                   InterpLinearColors;                                      // 0x0040(0x0010) ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class FScriptDelegate                                      TimelinePostUpdateFunc;                                  // 0x0050(0x0010) ZeroConstructor, InstancedReference, RepSkip, NoDestructor, NativeAccessSpecifierPrivate
		class FScriptDelegate                                      TimelineFinishedFunc;                                    // 0x0060(0x0010) ZeroConstructor, InstancedReference, RepSkip, NoDestructor, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UObject>                              PropertySetObject;                                       // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                DirectionPropertyName;                                   // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K10S[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProperty*                                           DirectionProperty;                                       // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.TTTrackBase
	 * Size -> 0x0018
	 */
	struct FTTTrackBase
	{
	public:
		unsigned char                                              UnknownData_Y0UQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TrackName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsExternalCurve;                                        // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SJ7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.TTEventTrack
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FTTEventTrack : public FTTTrackBase
	{
	public:
		class FName                                                FunctionName;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         CurveKeys;                                               // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TTPropertyTrack
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FTTPropertyTrack : public FTTTrackBase
	{
	public:
		class FName                                                PropertyName;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.TTFloatTrack
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FTTFloatTrack : public FTTPropertyTrack
	{
	public:
		class UCurveFloat*                                         CurveFloat;                                              // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TTVectorTrack
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FTTVectorTrack : public FTTPropertyTrack
	{
	public:
		class UCurveVector*                                        CurveVector;                                             // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TTLinearColorTrack
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FTTLinearColorTrack : public FTTPropertyTrack
	{
	public:
		class UCurveLinearColor*                                   CurveLinearColor;                                        // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TouchInputControl
	 * Size -> 0x0068
	 */
	struct FTouchInputControl
	{
	public:
		class UTexture2D*                                          Image1;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Image2;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Center;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           VisualSize;                                              // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ThumbSize;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           InteractionSize;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           InputScale;                                              // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                MainInputKey;                                            // 0x0038(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                AltInputKey;                                             // 0x0050(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.HardwareCursorReference
	 * Size -> 0x0010
	 */
	struct FHardwareCursorReference
	{
	public:
		class FName                                                CursorPath;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           HotSpot;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.LightmassMaterialInterfaceSettings
	 * Size -> 0x0014
	 */
	struct FLightmassMaterialInterfaceSettings
	{
	public:
		unsigned char                                              bCastShadowAsMasked : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CO1S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EmissiveBoost;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DiffuseBoost;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExportResolutionScale;                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideCastShadowAsMasked : 1;                         // 0x0010(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideEmissiveBoost : 1;                              // 0x0010(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideDiffuseBoost : 1;                               // 0x0010(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideExportResolutionScale : 1;                      // 0x0010(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L49B[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.MaterialTextureInfo
	 * Size -> 0x0010
	 */
	struct FMaterialTextureInfo
	{
	public:
		float                                                      SamplingScale;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        UVChannelIndex;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TextureName;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MaterialParameterInfo
	 * Size -> 0x0010
	 */
	struct FMaterialParameterInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EMaterialParameterAssociation                       Association;                                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZO3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        Index;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ScalarParameterValue
	 * Size -> 0x0024
	 */
	struct FScalarParameterValue
	{
	public:
		struct FMaterialParameterInfo                              ParameterInfo;                                           // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ParameterValue;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionGUID;                                          // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.VectorParameterValue
	 * Size -> 0x0030
	 */
	struct FVectorParameterValue
	{
	public:
		struct FMaterialParameterInfo                              ParameterInfo;                                           // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        ParameterValue;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionGUID;                                          // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TextureParameterValue
	 * Size -> 0x0028
	 */
	struct FTextureParameterValue
	{
	public:
		struct FMaterialParameterInfo                              ParameterInfo;                                           // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UTexture*                                            ParameterValue;                                          // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionGUID;                                          // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.FontParameterValue
	 * Size -> 0x0030
	 */
	struct FFontParameterValue
	{
	public:
		struct FMaterialParameterInfo                              ParameterInfo;                                           // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UFont*                                               FontValue;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        FontPage;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionGUID;                                          // 0x001C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86F1[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
	 * Size -> 0x0008
	 */
	struct FMaterialInstanceBasePropertyOverrides
	{
	public:
		unsigned char                                              bOverride_OpacityMaskClipValue : 1;                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BlendMode : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ShadingModel : 1;                              // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DitheredLODTransition : 1;                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_CastDynamicShadowAsMasked : 1;                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_TwoSided : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TwoSided : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DitheredLODTransition : 1;                               // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCastDynamicShadowAsMasked : 1;                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBlendMode                                          BlendMode;                                               // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EMaterialShadingModel                               ShadingModel;                                            // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpacityMaskClipValue;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StaticSwitchParameter
	 * Size -> 0x0024
	 */
	struct FStaticSwitchParameter
	{
	public:
		struct FMaterialParameterInfo                              ParameterInfo;                                           // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Value;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride;                                               // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DM6L[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ExpressionGUID;                                          // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StaticComponentMaskParameter
	 * Size -> 0x0028
	 */
	struct FStaticComponentMaskParameter
	{
	public:
		struct FMaterialParameterInfo                              ParameterInfo;                                           // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       R;                                                       // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       G;                                                       // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       B;                                                       // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       A;                                                       // 0x0013(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride;                                               // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYCB[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ExpressionGUID;                                          // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StaticTerrainLayerWeightParameter
	 * Size -> 0x002C
	 */
	struct FStaticTerrainLayerWeightParameter
	{
	public:
		struct FMaterialParameterInfo                              ParameterInfo;                                           // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIMI[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ExpressionGUID;                                          // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        WeightmapIndex;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWeightBasedBlend;                                       // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5EP[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.MaterialLayersFunctions
	 * Size -> 0x0040
	 */
	struct FMaterialLayersFunctions
	{
	public:
		TArray<class UMaterialFunctionInterface*>                  Layers;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialFunctionInterface*>                  Blends;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>                                               LayerStates;                                             // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              KeyString;                                               // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StaticMaterialLayersParameter
	 * Size -> 0x0068
	 */
	struct FStaticMaterialLayersParameter
	{
	public:
		struct FMaterialParameterInfo                              ParameterInfo;                                           // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FMaterialLayersFunctions                            Value;                                                   // 0x0010(0x0040) NativeAccessSpecifierPublic
		bool                                                       bOverride;                                               // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GDBC[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ExpressionGUID;                                          // 0x0054(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AC8K[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimTrack
	 * Size -> 0x0010
	 */
	struct FAnimTrack
	{
	public:
		TArray<struct FAnimSegment>                                AnimSegments;                                            // 0x0000(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AlphaBlend
	 * Size -> 0x0030
	 */
	struct FAlphaBlend
	{
	public:
		class UCurveFloat*                                         CustomCurve;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendTime;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FMZT[0x18];                                  // 0x000C(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_EAlphaBlendOption                                   BlendOption;                                             // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9P1E[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimSyncMarker
	 * Size -> 0x000C
	 */
	struct FAnimSyncMarker
	{
	public:
		class FName                                                MarkerName;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CompositeSection
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FCompositeSection : public FAnimLinkableElement
	{
	public:
		class FName                                                SectionName;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x0038(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NextSectionName;                                         // 0x003C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AJJX[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimMetaData*>                               MetaData;                                                // 0x0048(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SlotAnimationTrack
	 * Size -> 0x0018
	 */
	struct FSlotAnimationTrack
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimTrack                                          AnimTrack;                                               // 0x0008(0x0010) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BranchingPoint
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FBranchingPoint : public FAnimLinkableElement
	{
	public:
		class FName                                                EventName;                                               // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisplayTime;                                             // 0x0038(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TriggerTimeOffset;                                       // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BranchingPointMarker
	 * Size -> 0x000C
	 */
	struct FBranchingPointMarker
	{
	public:
		int                                                        NotifyIndex;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TriggerTime;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAnimNotifyEventType                                NotifyEventType;                                         // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0D92[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.TimeStretchCurveMarker
	 * Size -> 0x0010
	 */
	struct FTimeStretchCurveMarker
	{
	public:
		float                                                      Time[0x3];                                               // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TimeStretchCurve
	 * Size -> 0x0028
	 */
	struct FTimeStretchCurve
	{
	public:
		float                                                      SamplingRate;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CurveValueMinPrecision;                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FTimeStretchCurveMarker>                     Markers;                                                 // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		float                                                      Sum_dT_i_by_C_i[0x3];                                    // 0x0018(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B9SO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.TrackToSkeletonMap
	 * Size -> 0x0004
	 */
	struct FTrackToSkeletonMap
	{
	public:
		int                                                        BoneTreeIndex;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StaticParameterSet
	 * Size -> 0x0040
	 */
	struct FStaticParameterSet
	{
	public:
		TArray<struct FStaticSwitchParameter>                      StaticSwitchParameters;                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FStaticComponentMaskParameter>               StaticComponentMaskParameters;                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FStaticTerrainLayerWeightParameter>          TerrainLayerWeightParameters;                            // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FStaticMaterialLayersParameter>              MaterialLayersParameters;                                // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
	 * Size -> 0x0018
	 */
	struct FBlueprintComponentChangedPropertyInfo
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ArrayIndex;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5EZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStruct*                                             PropertyScope;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.WeightedBlendable
	 * Size -> 0x0010
	 */
	struct FWeightedBlendable
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_19VJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Object;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.WeightedBlendables
	 * Size -> 0x0010
	 */
	struct FWeightedBlendables
	{
	public:
		TArray<struct FWeightedBlendable>                          Array;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PostProcessSettings
	 * Size -> 0x0530
	 */
	struct FPostProcessSettings
	{
	public:
		unsigned char                                              bOverride_WhiteTemp : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_WhiteTint : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorSaturation : 1;                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorContrast : 1;                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGamma : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGain : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorOffset : 1;                               // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorSaturationShadows : 1;                    // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorContrastShadows : 1;                      // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGammaShadows : 1;                         // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGainShadows : 1;                          // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorOffsetShadows : 1;                        // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorSaturationMidtones : 1;                   // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorContrastMidtones : 1;                     // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGammaMidtones : 1;                        // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGainMidtones : 1;                         // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorOffsetMidtones : 1;                       // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorSaturationHighlights : 1;                 // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorContrastHighlights : 1;                   // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGammaHighlights : 1;                      // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGainHighlights : 1;                       // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorOffsetHighlights : 1;                     // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorCorrectionShadowsMax : 1;                 // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorCorrectionHighlightsMin : 1;              // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BlueCorrection : 1;                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ExpandGamut : 1;                               // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmWhitePoint : 1;                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmSaturation : 1;                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmChannelMixerRed : 1;                       // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmChannelMixerGreen : 1;                     // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmChannelMixerBlue : 1;                      // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmContrast : 1;                              // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmDynamicRange : 1;                          // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmHealAmount : 1;                            // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmToeAmount : 1;                             // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmShadowTint : 1;                            // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmShadowTintBlend : 1;                       // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmShadowTintAmount : 1;                      // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmSlope : 1;                                 // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmToe : 1;                                   // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmShoulder : 1;                              // 0x0005(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmBlackClip : 1;                             // 0x0005(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmWhiteClip : 1;                             // 0x0005(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_SceneColorTint : 1;                            // 0x0005(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_SceneFringeIntensity : 1;                      // 0x0005(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ChromaticAberrationStartOffset : 1;            // 0x0005(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientCubemapTint : 1;                        // 0x0005(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientCubemapIntensity : 1;                   // 0x0005(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomMethod : 1;                               // 0x0006(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomIntensity : 1;                            // 0x0006(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomThreshold : 1;                            // 0x0006(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_Bloom1Tint : 1;                                // 0x0006(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_Bloom1Size : 1;                                // 0x0006(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_Bloom2Size : 1;                                // 0x0006(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_Bloom2Tint : 1;                                // 0x0006(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_Bloom3Tint : 1;                                // 0x0006(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_Bloom3Size : 1;                                // 0x0007(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_Bloom4Tint : 1;                                // 0x0007(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_Bloom4Size : 1;                                // 0x0007(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_Bloom5Tint : 1;                                // 0x0007(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_Bloom5Size : 1;                                // 0x0007(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_Bloom6Tint : 1;                                // 0x0007(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_Bloom6Size : 1;                                // 0x0007(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomSizeScale : 1;                            // 0x0007(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomConvolutionTexture : 1;                   // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomConvolutionSize : 1;                      // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomConvolutionCenterUV : 1;                  // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomConvolutionPreFilter : 1;                 // 0x0008(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomConvolutionPreFilterMin : 1;              // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomConvolutionPreFilterMax : 1;              // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomConvolutionPreFilterMult : 1;             // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomConvolutionBufferScale : 1;               // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomDirtMaskIntensity : 1;                    // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomDirtMaskTint : 1;                         // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_BloomDirtMask : 1;                             // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_CameraShutterSpeed : 1;                        // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_CameraISO : 1;                                 // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AutoExposureMethod : 1;                        // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AutoExposureLowPercent : 1;                    // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AutoExposureHighPercent : 1;                   // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AutoExposureMinBrightness : 1;                 // 0x000A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AutoExposureMaxBrightness : 1;                 // 0x000A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AutoExposureCalibrationConstant : 1;           // 0x000A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AutoExposureSpeedUp : 1;                       // 0x000A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AutoExposureSpeedDown : 1;                     // 0x000A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AutoExposureBias : 1;                          // 0x000A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AutoExposureBiasCurve : 1;                     // 0x000A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_HistogramLogMin : 1;                           // 0x000A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_HistogramLogMax : 1;                           // 0x000B(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LensFlareIntensity : 1;                        // 0x000B(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LensFlareTint : 1;                             // 0x000B(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LensFlareTints : 1;                            // 0x000B(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LensFlareBokehSize : 1;                        // 0x000B(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LensFlareBokehShape : 1;                       // 0x000B(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LensFlareThreshold : 1;                        // 0x000B(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_VignetteIntensity : 1;                         // 0x000B(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_GrainIntensity : 1;                            // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_GrainJitter : 1;                               // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientOcclusionIntensity : 1;                 // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientOcclusionStaticFraction : 1;            // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientOcclusionRadius : 1;                    // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientOcclusionFadeDistance : 1;              // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientOcclusionFadeRadius : 1;                // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientOcclusionDistance : 1;                  // 0x000C(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientOcclusionRadiusInWS : 1;                // 0x000D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientOcclusionPower : 1;                     // 0x000D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientOcclusionBias : 1;                      // 0x000D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientOcclusionQuality : 1;                   // 0x000D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientOcclusionMipBlend : 1;                  // 0x000D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientOcclusionMipScale : 1;                  // 0x000D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AmbientOcclusionMipThreshold : 1;              // 0x000D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PWFK[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bOverride_RayTracingAO : 1;                              // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_RayTracingAOSamplesPerPixel : 1;               // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VBCG[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bOverride_LPVIntensity : 1;                              // 0x0014(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVDirectionalOcclusionIntensity : 1;          // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVDirectionalOcclusionRadius : 1;             // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVDiffuseOcclusionExponent : 1;               // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVSpecularOcclusionExponent : 1;              // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVDiffuseOcclusionIntensity : 1;              // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVSpecularOcclusionIntensity : 1;             // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVSize : 1;                                   // 0x0014(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVSecondaryOcclusionIntensity : 1;            // 0x0015(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVSecondaryBounceIntensity : 1;               // 0x0015(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVGeometryVolumeBias : 1;                     // 0x0015(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVVplInjectionBias : 1;                       // 0x0015(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVEmissiveInjectionIntensity : 1;             // 0x0015(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVFadeRange : 1;                              // 0x0015(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVDirectionalOcclusionFadeRange : 1;          // 0x0015(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_IndirectLightingColor : 1;                     // 0x0015(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_IndirectLightingIntensity : 1;                 // 0x0016(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGradingIntensity : 1;                     // 0x0016(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorGradingLUT : 1;                           // 0x0016(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldFocalDistance : 1;                 // 0x0016(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldFstop : 1;                         // 0x0016(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldMinFstop : 1;                      // 0x0016(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldBladeCount : 1;                    // 0x0016(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldSensorWidth : 1;                   // 0x0016(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldDepthBlurRadius : 1;               // 0x0017(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldDepthBlurAmount : 1;               // 0x0017(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldFocalRegion : 1;                   // 0x0017(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldNearTransitionRegion : 1;          // 0x0017(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldFarTransitionRegion : 1;           // 0x0017(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldScale : 1;                         // 0x0017(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldNearBlurSize : 1;                  // 0x0017(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldFarBlurSize : 1;                   // 0x0017(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_MobileHQGaussian : 1;                          // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldOcclusion : 1;                     // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldSkyFocusDistance : 1;              // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_DepthOfFieldVignetteSize : 1;                  // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_MotionBlurAmount : 1;                          // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_MotionBlurMax : 1;                             // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_MotionBlurTargetFPS : 1;                       // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_MotionBlurPerObjectSize : 1;                   // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ScreenPercentage : 1;                          // 0x0019(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ScreenSpaceReflectionIntensity : 1;            // 0x0019(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ScreenSpaceReflectionQuality : 1;              // 0x0019(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ScreenSpaceReflectionMaxRoughness : 1;         // 0x0019(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ScreenSpaceReflectionRoughnessScale : 1;       // 0x0019(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QEC6[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bOverride_ReflectionsType : 1;                           // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_RayTracingReflectionsMaxRoughness : 1;         // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_RayTracingReflectionsMaxBounces : 1;           // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_RayTracingReflectionsSamplesPerPixel : 1;      // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_RayTracingReflectionsShadows : 1;              // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_TranslucencyType : 1;                          // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_RayTracingTranslucencyMaxRoughness : 1;        // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_RayTracingTranslucencyRefractionRays : 1;      // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_RayTracingTranslucencySamplesPerPixel : 1;     // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_RayTracingTranslucencyShadows : 1;             // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_RayTracingTranslucencyRefraction : 1;          // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_RayTracingGI : 1;                              // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_RayTracingGIMaxBounces : 1;                    // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_RayTracingGISamplesPerPixel : 1;               // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_PathTracingMaxBounces : 1;                     // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_PathTracingSamplesPerPixel : 1;                // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6T1N[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bMobileHQGaussian : 1;                                   // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBloomMethod                                        BloomMethod;                                             // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAutoExposureMethod                                 AutoExposureMethod;                                      // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LR4[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WhiteTemp;                                               // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WhiteTint;                                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LIPK[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            ColorSaturation;                                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorContrast;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGamma;                                              // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGain;                                               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorOffset;                                             // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorSaturationShadows;                                  // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorContrastShadows;                                    // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGammaShadows;                                       // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGainShadows;                                        // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorOffsetShadows;                                      // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorSaturationMidtones;                                 // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorContrastMidtones;                                   // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGammaMidtones;                                      // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGainMidtones;                                       // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorOffsetMidtones;                                     // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorSaturationHighlights;                               // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorContrastHighlights;                                 // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGammaHighlights;                                    // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorGainHighlights;                                     // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorOffsetHighlights;                                   // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorCorrectionHighlightsMin;                            // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorCorrectionShadowsMax;                               // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlueCorrection;                                          // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpandGamut;                                             // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmSlope;                                               // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmToe;                                                 // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmShoulder;                                            // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmBlackClip;                                           // 0x018C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmWhiteClip;                                           // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FilmWhitePoint;                                          // 0x0194(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FilmShadowTint;                                          // 0x01A4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmShadowTintBlend;                                     // 0x01B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmShadowTintAmount;                                    // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmSaturation;                                          // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FilmChannelMixerRed;                                     // 0x01C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FilmChannelMixerGreen;                                   // 0x01D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FilmChannelMixerBlue;                                    // 0x01E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmContrast;                                            // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmToeAmount;                                           // 0x01F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmHealAmount;                                          // 0x01F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmDynamicRange;                                        // 0x01FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SceneColorTint;                                          // 0x0200(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SceneFringeIntensity;                                    // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChromaticAberrationStartOffset;                          // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloomIntensity;                                          // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloomThreshold;                                          // 0x021C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloomSizeScale;                                          // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bloom1Size;                                              // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bloom2Size;                                              // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bloom3Size;                                              // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bloom4Size;                                              // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bloom5Size;                                              // 0x0234(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bloom6Size;                                              // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Bloom1Tint;                                              // 0x023C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Bloom2Tint;                                              // 0x024C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Bloom3Tint;                                              // 0x025C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Bloom4Tint;                                              // 0x026C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Bloom5Tint;                                              // 0x027C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Bloom6Tint;                                              // 0x028C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloomConvolutionSize;                                    // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          BloomConvolutionTexture;                                 // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BloomConvolutionCenterUV;                                // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloomConvolutionPreFilterMin;                            // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloomConvolutionPreFilterMax;                            // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloomConvolutionPreFilterMult;                           // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloomConvolutionBufferScale;                             // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            BloomDirtMask;                                           // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloomDirtMaskIntensity;                                  // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BloomDirtMaskTint;                                       // 0x02CC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        AmbientCubemapTint;                                      // 0x02DC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmbientCubemapIntensity;                                 // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureCube*                                        AmbientCubemap;                                          // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraShutterSpeed;                                      // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraISO;                                               // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFstop;                                       // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldMinFstop;                                    // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        DepthOfFieldBladeCount;                                  // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoExposureBias;                                        // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         AutoExposureBiasCurve;                                   // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoExposureLowPercent;                                  // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoExposureHighPercent;                                 // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoExposureMinBrightness;                               // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoExposureMaxBrightness;                               // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoExposureSpeedUp;                                     // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoExposureSpeedDown;                                   // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HistogramLogMin;                                         // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HistogramLogMax;                                         // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoExposureCalibrationConstant;                         // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LensFlareIntensity;                                      // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LensFlareTint;                                           // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LensFlareBokehSize;                                      // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LensFlareThreshold;                                      // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            LensFlareBokehShape;                                     // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LensFlareTints[0x8];                                     // 0x0360(0x0080) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VignetteIntensity;                                       // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrainJitter;                                             // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrainIntensity;                                          // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmbientOcclusionIntensity;                               // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmbientOcclusionStaticFraction;                          // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmbientOcclusionRadius;                                  // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AmbientOcclusionRadiusInWS : 1;                          // 0x03F8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XT6[0x3];                                   // 0x03F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AmbientOcclusionFadeDistance;                            // 0x03FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmbientOcclusionFadeRadius;                              // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmbientOcclusionDistance;                                // 0x0404(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmbientOcclusionPower;                                   // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmbientOcclusionBias;                                    // 0x040C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmbientOcclusionQuality;                                 // 0x0410(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmbientOcclusionMipBlend;                                // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmbientOcclusionMipScale;                                // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmbientOcclusionMipThreshold;                            // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RayTracingAO : 1;                                        // 0x0420(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CCJ[0x3];                                   // 0x0421(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        RayTracingAOSamplesPerPixel;                             // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        IndirectLightingColor;                                   // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IndirectLightingIntensity;                               // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RayTracingGI : 1;                                        // 0x043C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FXQ6[0x3];                                   // 0x043D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        RayTracingGIMaxBounces;                                  // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        RayTracingGISamplesPerPixel;                             // 0x0444(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorGradingIntensity;                                   // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQHL[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            ColorGradingLUT;                                         // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldSensorWidth;                                 // 0x0458(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFocalDistance;                               // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldDepthBlurAmount;                             // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldDepthBlurRadius;                             // 0x0464(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFocalRegion;                                 // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldNearTransitionRegion;                        // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFarTransitionRegion;                         // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldScale;                                       // 0x0474(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldNearBlurSize;                                // 0x0478(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFarBlurSize;                                 // 0x047C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldOcclusion;                                   // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldSkyFocusDistance;                            // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldVignetteSize;                                // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MotionBlurAmount;                                        // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MotionBlurMax;                                           // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MotionBlurTargetFPS;                                     // 0x0494(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MotionBlurPerObjectSize;                                 // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVIntensity;                                            // 0x049C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVVplInjectionBias;                                     // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSize;                                                 // 0x04A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSecondaryOcclusionIntensity;                          // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSecondaryBounceIntensity;                             // 0x04AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVGeometryVolumeBias;                                   // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVEmissiveInjectionIntensity;                           // 0x04B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDirectionalOcclusionIntensity;                        // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDirectionalOcclusionRadius;                           // 0x04BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDiffuseOcclusionExponent;                             // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSpecularOcclusionExponent;                            // 0x04C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDiffuseOcclusionIntensity;                            // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSpecularOcclusionIntensity;                           // 0x04CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EReflectionsType                                    ReflectionsType;                                         // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHGE[0x3];                                   // 0x04D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScreenSpaceReflectionIntensity;                          // 0x04D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScreenSpaceReflectionQuality;                            // 0x04D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScreenSpaceReflectionMaxRoughness;                       // 0x04DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RayTracingReflectionsMaxRoughness;                       // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        RayTracingReflectionsMaxBounces;                         // 0x04E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        RayTracingReflectionsSamplesPerPixel;                    // 0x04E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EReflectedAndRefractedRayTracedShadows              RayTracingReflectionsShadows;                            // 0x04EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ETranslucencyType                                   TranslucencyType;                                        // 0x04ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2J73[0x2];                                   // 0x04EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RayTracingTranslucencyMaxRoughness;                      // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        RayTracingTranslucencyRefractionRays;                    // 0x04F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        RayTracingTranslucencySamplesPerPixel;                   // 0x04F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EReflectedAndRefractedRayTracedShadows              RayTracingTranslucencyShadows;                           // 0x04FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RayTracingTranslucencyRefraction : 1;                    // 0x04FD(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G67S[0x2];                                   // 0x04FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        PathTracingMaxBounces;                                   // 0x0500(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PathTracingSamplesPerPixel;                              // 0x0504(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVFadeRange;                                            // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDirectionalOcclusionFadeRange;                        // 0x050C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScreenPercentage;                                        // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8ZD[0x4];                                   // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedBlendables                                 WeightedBlendables;                                      // 0x0518(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S17J[0x8];                                   // 0x0528(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.MinimalViewInfo
	 * Size -> 0x05C0
	 */
	struct FMinimalViewInfo
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FOV;                                                     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DesiredFOV;                                              // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrthoWidth;                                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrthoNearClipPlane;                                      // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrthoFarClipPlane;                                       // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AspectRatio;                                             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bConstrainAspectRatio : 1;                               // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseFieldOfViewForLOD : 1;                               // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YNH[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_ECameraProjectionMode                               ProjectionMode;                                          // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEVT[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PostProcessBlendWeight;                                  // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBPA[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                PostProcessSettings;                                     // 0x0040(0x0530) BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector2D                                           OffCenterProjectionOffset;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EOE3[0x48];                                  // 0x0578(0x0048) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SoundConcurrencySettings
	 * Size -> 0x0020
	 */
	struct FSoundConcurrencySettings
	{
	public:
		int                                                        MaxCount;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLimitToOwner : 1;                                       // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQ96[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_EMaxConcurrentResolutionRule                        ResolutionRule;                                          // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UAUT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumeScale;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      VolumeScaleAttackTime;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bVolumeScaleCanRelease : 1;                              // 0x0014(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XIY[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumeScaleReleaseTime;                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VoiceStealReleaseTime;                                   // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SoundSubmixSendInfo
	 * Size -> 0x00B0
	 */
	struct FSoundSubmixSendInfo
	{
	public:
		Engine_ESendLevelControlMethod                             SendLevelControlMethod;                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58D2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundSubmix*                                        SoundSubmix;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SendLevel;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSendLevel;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSendLevel;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSendDistance;                                         // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSendDistance;                                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9N5J[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  CustomSendLevelCurve;                                    // 0x0028(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SoundSourceBusSendInfo
	 * Size -> 0x00B0
	 */
	struct FSoundSourceBusSendInfo
	{
	public:
		Engine_ESourceBusSendLevelControlMethod                    SourceBusSendLevelControlMethod;                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S7G8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundSourceBus*                                     SoundSourceBus;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SendLevel;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSendLevel;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSendLevel;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSendDistance;                                         // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSendDistance;                                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V4LA[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  CustomSendLevelCurve;                                    // 0x0028(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BlueprintCookedComponentInstancingData
	 * Size -> 0x0050
	 */
	struct FBlueprintCookedComponentInstancingData
	{
	public:
		bool                                                       bHasValidCookedData;                                     // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ARJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBlueprintComponentChangedPropertyInfo>      ChangedPropertyList;                                     // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5R8[0x38];                                  // 0x0018(0x0038) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.InterpLookupPoint
	 * Size -> 0x000C
	 */
	struct FInterpLookupPoint
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.InterpLookupTrack
	 * Size -> 0x0010
	 */
	struct FInterpLookupTrack
	{
	public:
		TArray<struct FInterpLookupPoint>                          Points;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SoundWaveSpectralDataEntry
	 * Size -> 0x0008
	 */
	struct FSoundWaveSpectralDataEntry
	{
	public:
		float                                                      Magnitude;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalizedMagnitude;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SoundWaveSpectralTimeData
	 * Size -> 0x0018
	 */
	struct FSoundWaveSpectralTimeData
	{
	public:
		TArray<struct FSoundWaveSpectralDataEntry>                 Data;                                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      TimeSec;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKEU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SoundWaveEnvelopeTimeData
	 * Size -> 0x0008
	 */
	struct FSoundWaveEnvelopeTimeData
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSec;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SubtitleCue
	 * Size -> 0x0020
	 */
	struct FSubtitleCue
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FOQ6[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.InterpolationParameter
	 * Size -> 0x0008
	 */
	struct FInterpolationParameter
	{
	public:
		float                                                      InterpolationTime;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EFilterInterpolationType                            InterpolationType;                                       // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQ0S[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BoneReference
	 * Size -> 0x0010
	 */
	struct FBoneReference
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_49DJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PerBoneInterpolation
	 * Size -> 0x0014
	 */
	struct FPerBoneInterpolation
	{
	public:
		struct FBoneReference                                      BoneReference;                                           // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      InterpolationSpeedPerSec;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BlendSample
	 * Size -> 0x0018
	 */
	struct FBlendSample
	{
	public:
		class UAnimSequence*                                       Animation;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SampleValue;                                             // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RateScale;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.EditorElement
	 * Size -> 0x0018
	 */
	struct FEditorElement
	{
	public:
		int                                                        Indices[0x3];                                            // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weights[0x3];                                            // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BlendParameter
	 * Size -> 0x0020
	 */
	struct FBlendParameter
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Min;                                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        GridNum;                                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPVH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimGroupInfo
	 * Size -> 0x0018
	 */
	struct FAnimGroupInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BakedStateExitTransition
	 * Size -> 0x0020
	 */
	struct FBakedStateExitTransition
	{
	public:
		int                                                        CanTakeDelegateIndex;                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        CustomResultNodeIndex;                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        TransitionIndex;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDesiredTransitionReturnValue;                           // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutomaticRemainingTimeRule;                             // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJS2[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int>                                                PoseEvaluatorLinks;                                      // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BakedAnimationState
	 * Size -> 0x0048
	 */
	struct FBakedAnimationState
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBakedStateExitTransition>                   Transitions;                                             // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int                                                        StateRootNodeIndex;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        StartNotify;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        EndNotify;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        FullyBlendedNotify;                                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAConduit;                                             // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDP6[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        EntryRuleNodeIndex;                                      // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int>                                                PlayerNodeIndices;                                       // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAlwaysResetOnEntry;                                     // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IK67[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimationStateBase
	 * Size -> 0x0008
	 */
	struct FAnimationStateBase
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimationTransitionBetweenStates
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FAnimationTransitionBetweenStates : public FAnimationStateBase
	{
	public:
		int                                                        PreviousState;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        NextState;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrossfadeDuration;                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        StartNotify;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        EndNotify;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        InterruptNotify;                                         // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAlphaBlendOption                                   BlendMode;                                               // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OR9C[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CustomCurve;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendProfile*                                       BlendProfile;                                            // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ETransitionLogicType                                LogicType;                                               // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6KO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CachedPoseIndices
	 * Size -> 0x0010
	 */
	struct FCachedPoseIndices
	{
	public:
		TArray<int>                                                OrderedSavedPoseNodeIndices;                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ExposedValueCopyRecord
	 * Size -> 0x0038
	 */
	struct FExposedValueCopyRecord
	{
	public:
		class FName                                                SourcePropertyName;                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceSubPropertyName;                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SourceArrayIndex;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInstanceIsTarget;                                       // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EPostCopyOperation                                  PostCopyOperation;                                       // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECopyType                                           CopyType;                                                // 0x0016(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GO3U[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProperty*                                           DestProperty;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        DestArrayIndex;                                          // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Size;                                                    // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UProperty*                                           CachedSourceProperty;                                    // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UProperty*                                           CachedSourceStructSubProperty;                           // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ExposedValueHandler
	 * Size -> 0x0030
	 */
	struct FExposedValueHandler
	{
	public:
		class FName                                                BoundFunction;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FExposedValueCopyRecord>                     CopyRecords;                                             // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UFunction*                                           Function;                                                // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStructProperty*                                     ValueHandlerNodeProperty;                                // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VIB[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BakedAnimationStateMachine
	 * Size -> 0x0030
	 */
	struct FBakedAnimationStateMachine
	{
	public:
		class FName                                                MachineName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        InitialState;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHKE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBakedAnimationState>                        States;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAnimationTransitionBetweenStates>           Transitions;                                             // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ActorComponentDuplicatedObjectData
	 * Size -> 0x0010
	 */
	struct FActorComponentDuplicatedObjectData
	{
	public:
		unsigned char                                              UnknownData_KNL7[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ActorComponentInstanceData
	 * Size -> 0x0058
	 */
	struct FActorComponentInstanceData
	{
	public:
		unsigned char                                              UnknownData_ALYM[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             SourceComponentTemplate;                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		Engine_EComponentCreationMethod                            SourceComponentCreationMethod;                           // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MJGQ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        SourceComponentTypeSerializedIndex;                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<unsigned char>                                      SavedProperties;                                         // 0x0018(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FActorComponentDuplicatedObjectData>         DuplicatedObjects;                                       // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UObject*>                                     ReferencedObjects;                                       // 0x0038(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        ReferencedNames;                                         // 0x0048(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct Engine.SceneComponentInstanceData
	 * Size -> 0x0050 (FullSize[0x00A8] - InheritedSize[0x0058])
	 */
	struct FSceneComponentInstanceData : public FActorComponentInstanceData
	{
	public:
		TMap<class USceneComponent*, struct FTransform>            AttachedInstanceComponents;                              // 0x0058(0x0050) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimationGroupReference
	 * Size -> 0x000C
	 */
	struct FAnimationGroupReference
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAnimGroupRole                                      GroupRole;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V49P[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimGroupInstance
	 * Size -> 0x0070
	 */
	struct FAnimGroupInstance
	{
	public:
		unsigned char                                              UnknownData_IDWH[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimTickRecord
	 * Size -> 0x0048
	 */
	struct FAnimTickRecord
	{
	public:
		class UAnimationAsset*                                     SourceAsset;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAGW[0x40];                                  // 0x0008(0x0040) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BlendFilter
	 * Size -> 0x0078
	 */
	struct FBlendFilter
	{
	public:
		unsigned char                                              UnknownData_42K2[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BlendSampleData
	 * Size -> 0x0040
	 */
	struct FBlendSampleData
	{
	public:
		int                                                        SampleDataIndex;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZA75[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       Animation;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalWeight;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviousTime;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SamplePlayRate;                                          // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4KK1[0x20];                                  // 0x0020(0x0020) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimationRecordingSettings
	 * Size -> 0x0010
	 */
	struct FAnimationRecordingSettings
	{
	public:
		bool                                                       bRecordInWorldSpace;                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveRootAnimation;                                    // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSaveAsset;                                          // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HQJ[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SampleRate;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveInterpMode                                InterpMode;                                              // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveTangentMode                               TangentMode;                                             // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6OV[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ComponentSpacePose
	 * Size -> 0x0020
	 */
	struct FComponentSpacePose
	{
	public:
		TArray<struct FTransform>                                  Transforms;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        Names;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.LocalSpacePose
	 * Size -> 0x0020
	 */
	struct FLocalSpacePose
	{
	public:
		TArray<struct FTransform>                                  Transforms;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        Names;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NamedTransform
	 * Size -> 0x0040
	 */
	struct FNamedTransform
	{
	public:
		struct FTransform                                          Value;                                                   // 0x0000(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBQE[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.NamedColor
	 * Size -> 0x000C
	 */
	struct FNamedColor
	{
	public:
		struct FColor                                              Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NamedVector
	 * Size -> 0x0014
	 */
	struct FNamedVector
	{
	public:
		struct FVector                                             Value;                                                   // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NamedFloat
	 * Size -> 0x000C
	 */
	struct FNamedFloat
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimParentNodeAssetOverride
	 * Size -> 0x0018
	 */
	struct FAnimParentNodeAssetOverride
	{
	public:
		class UAnimationAsset*                                     NewAsset;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ParentNodeGuid;                                          // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimBlueprintDebugData
	 * Size -> 0x0001
	 */
	struct FAnimBlueprintDebugData
	{
	public:
		unsigned char                                              UnknownData_D5UG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimationFrameSnapshot
	 * Size -> 0x0001
	 */
	struct FAnimationFrameSnapshot
	{
	public:
		unsigned char                                              UnknownData_M0CQ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.StateMachineDebugData
	 * Size -> 0x00B0
	 */
	struct FStateMachineDebugData
	{
	public:
		unsigned char                                              UnknownData_DJVG[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.RootMotionExtractionStep
	 * Size -> 0x0010
	 */
	struct FRootMotionExtractionStep
	{
	public:
		class UAnimSequence*                                       AnimSequence;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartPosition;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndPosition;                                             // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CompressedSegment
	 * Size -> 0x0010
	 */
	struct FCompressedSegment
	{
	public:
		unsigned char                                              UnknownData_QX4B[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.VectorCurve
	 * Size -> 0x0180 (FullSize[0x0198] - InheritedSize[0x0018])
	 */
	struct FVectorCurve : public FAnimCurveBase
	{
	public:
		struct FRichCurve                                          FloatCurves[0x3];                                        // 0x0018(0x0180) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TransformCurve
	 * Size -> 0x04C8 (FullSize[0x04E0] - InheritedSize[0x0018])
	 */
	struct FTransformCurve : public FAnimCurveBase
	{
	public:
		struct FVectorCurve                                        TranslationCurve;                                        // 0x0018(0x0198) NativeAccessSpecifierPublic
		struct FVectorCurve                                        RotationCurve;                                           // 0x01B0(0x0198) NativeAccessSpecifierPublic
		struct FVectorCurve                                        ScaleCurve;                                              // 0x0348(0x0198) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SlotEvaluationPose
	 * Size -> 0x0040
	 */
	struct FSlotEvaluationPose
	{
	public:
		Engine_EAdditiveAnimationType                              AdditiveType;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_480K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HEE9[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimBlueprintFunction
	 * Size -> 0x0068
	 */
	struct FAnimBlueprintFunction
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Group;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        OutputPoseNodeIndex;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JDJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        InputPoseNames;                                          // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int>                                                InputPoseNodeIndices;                                    // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UStructProperty*                                     OutputPoseNodeProperty;                                  // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UStructProperty*>                             InputPoseNodeProperties;                                 // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UProperty*>                                   InputProperties;                                         // 0x0050(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       bImplemented;                                            // 0x0060(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OW4L[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.A2Pose
	 * Size -> 0x0010
	 */
	struct FA2Pose
	{
	public:
		TArray<struct FTransform>                                  Bones;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.A2CSPose
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FA2CSPose : public FA2Pose
	{
	public:
		unsigned char                                              UnknownData_A4H0[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      ComponentSpaceFlags;                                     // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.QueuedDrawDebugItem
	 * Size -> 0x0068
	 */
	struct FQueuedDrawDebugItem
	{
	public:
		Engine_EDrawDebugItemType                                  ItemType;                                                // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WI5S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StartLoc;                                                // 0x0004(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndLoc;                                                  // 0x0010(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Center;                                                  // 0x001C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0028(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0034(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size;                                                    // 0x0038(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Segments;                                                // 0x003C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0040(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPersistentLines;                                        // 0x0044(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JXX2[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LifeTime;                                                // 0x0048(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x004C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0050(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           TextScale;                                               // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimMontageInstance
	 * Size -> 0x01A8
	 */
	struct FAnimMontageInstance
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6XCM[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bPlaying;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUCY[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultBlendTimeMultiplier;                              // 0x002C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82T6[0xB8];                                  // 0x0030(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int>                                                NextSections;                                            // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int>                                                PrevSections;                                            // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B1DU[0x10];                                  // 0x0108(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimNotifyEvent>                            ActiveStateBranchingPoints;                              // 0x0118(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		float                                                      Position;                                                // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PlayRate;                                                // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAlphaBlend                                         Blend;                                                   // 0x0130(0x0030) Transient, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O2VD[0x20];                                  // 0x0160(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        DisableRootMotionCount;                                  // 0x0180(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EIP7[0x24];                                  // 0x0184(0x0024) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimNode_Base
	 * Size -> 0x0010
	 */
	struct FAnimNode_Base
	{
	public:
		unsigned char                                              UnknownData_EY3Q[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PoseLinkBase
	 * Size -> 0x0010
	 */
	struct FPoseLinkBase
	{
	public:
		int                                                        LinkID;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QATC[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PoseLink
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FPoseLink : public FPoseLinkBase
	{
	};

	/**
	 * ScriptStruct Engine.InputScaleBias
	 * Size -> 0x0008
	 */
	struct FInputScaleBias
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bias;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
	 * Size -> 0x0038 (FullSize[0x0048] - InheritedSize[0x0010])
	 */
	struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Base;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           Additive;                                                // 0x0020(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0034(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int                                                        LODThreshold;                                            // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NS1O[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimNode_CustomProperty
	 * Size -> 0x0048 (FullSize[0x0058] - InheritedSize[0x0010])
	 */
	struct FAnimNode_CustomProperty : public FAnimNode_Base
	{
	public:
		TArray<class FName>                                        SourcePropertyNames;                                     // 0x0010(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        DestPropertyNames;                                       // 0x0020(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UObject*                                             TargetInstance;                                          // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UProperty*>                                   SourceProperties;                                        // 0x0038(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UProperty*>                                   DestProperties;                                          // 0x0048(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct Engine.AnimNode_SubInstance
	 * Size -> 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
	 */
	struct FAnimNode_SubInstance : public FAnimNode_CustomProperty
	{
	public:
		TArray<struct FPoseLink>                                   InputPoses;                                              // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        InputPoseNames;                                          // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              InstanceClass;                                           // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C75E[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimNode_Layer
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	struct FAnimNode_Layer : public FAnimNode_SubInstance
	{
	public:
		class UClass*                                              Interface;                                               // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Layer;                                                   // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimNode_SaveCachedPose
	 * Size -> 0x00A8 (FullSize[0x00B8] - InheritedSize[0x0010])
	 */
	struct FAnimNode_SaveCachedPose : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Pose;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                CachePoseName;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZE7X[0x90];                                  // 0x0028(0x0090) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimNode_AssetPlayerBase
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
	{
	public:
		int                                                        GroupIndex;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAnimGroupRole                                      GroupRole;                                               // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreForRelevancyTest;                                 // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YUQ8[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendWeight;                                             // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InternalTimeAccumulator;                                 // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4652[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.InputRange
	 * Size -> 0x0008
	 */
	struct FInputRange
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.InputScaleBiasClamp
	 * Size -> 0x0030
	 */
	struct FInputScaleBiasClamp
	{
	public:
		bool                                                       bMapRange;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampResult;                                            // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpResult;                                           // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7U4D[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputRange                                         InRange;                                                 // 0x0004(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputRange                                         OutRange;                                                // 0x000C(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bias;                                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampMin;                                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampMax;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpSpeedIncreasing;                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpSpeedDecreasing;                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9H5[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimNode_SequencePlayer
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
	{
	public:
		class UAnimSequenceBase*                                   Sequence;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRateBasis;                                           // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                PlayRateScaleBiasClamp;                                  // 0x0040(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StartPosition;                                           // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoopAnimation;                                          // 0x0074(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXTA[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimNode_StateMachine
	 * Size -> 0x00A0 (FullSize[0x00B0] - InheritedSize[0x0010])
	 */
	struct FAnimNode_StateMachine : public FAnimNode_Base
	{
	public:
		int                                                        StateMachineIndexInClass;                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxTransitionsPerFrame;                                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipFirstUpdateTransition;                              // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReinitializeOnBecomingRelevant;                         // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GDEF[0x96];                                  // 0x001A(0x0096) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimationPotentialTransition
	 * Size -> 0x0030
	 */
	struct FAnimationPotentialTransition
	{
	public:
		unsigned char                                              UnknownData_FH7N[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimationActiveTransitionEntry
	 * Size -> 0x00C8
	 */
	struct FAnimationActiveTransitionEntry
	{
	public:
		unsigned char                                              UnknownData_X7PA[0xB8];                                  // 0x0000(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendProfile*                                       BlendProfile;                                            // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71WR[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimNode_SubInput
	 * Size -> 0x0060 (FullSize[0x0070] - InheritedSize[0x0010])
	 */
	struct FAnimNode_SubInput : public FAnimNode_Base
	{
	public:
		class FName                                                Name;                                                    // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Graph;                                                   // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPoseLink                                           InputPose;                                               // 0x0020(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FEL[0x40];                                  // 0x0030(0x0040) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
	 * Size -> 0x0048 (FullSize[0x0058] - InheritedSize[0x0010])
	 */
	struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
	{
	public:
		unsigned char                                              UnknownData_I2TS[0x38];                                  // 0x0010(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        FramesToCachePose;                                       // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGWI[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_EEvaluatorDataSource                                DataSource;                                              // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EEvaluatorMode                                      EvaluatorMode;                                           // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4F79[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimNode_TransitionResult
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FAnimNode_TransitionResult : public FAnimNode_Base
	{
	public:
		bool                                                       bCanEnterTransition;                                     // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3T9B[0x17];                                  // 0x0011(0x0017) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimNode_UseCachedPose
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FAnimNode_UseCachedPose : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           LinkToCachingNode;                                       // 0x0010(0x0010) NoDestructor, NativeAccessSpecifierPublic
		class FName                                                CachePoseName;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           LocalPose;                                               // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ComponentSpacePoseLink
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FComponentSpacePoseLink : public FPoseLinkBase
	{
	};

	/**
	 * ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             ComponentPose;                                           // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CompressedTrack
	 * Size -> 0x0038
	 */
	struct FCompressedTrack
	{
	public:
		TArray<unsigned char>                                      ByteStream;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Times;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Mins[0x3];                                               // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ranges[0x3];                                             // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CurveTrack
	 * Size -> 0x0018
	 */
	struct FCurveTrack
	{
	public:
		class FName                                                CurveName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              CurveWeights;                                            // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ScaleTrack
	 * Size -> 0x0020
	 */
	struct FScaleTrack
	{
	public:
		TArray<struct FVector>                                     ScaleKeys;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Times;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RotationTrack
	 * Size -> 0x0020
	 */
	struct FRotationTrack
	{
	public:
		TArray<struct FQuat>                                       RotKeys;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Times;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TranslationTrack
	 * Size -> 0x0020
	 */
	struct FTranslationTrack
	{
	public:
		TArray<struct FVector>                                     PosKeys;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Times;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MarkerSyncData
	 * Size -> 0x0020
	 */
	struct FMarkerSyncData
	{
	public:
		TArray<struct FAnimSyncMarker>                             AuthoredSyncMarkers;                                     // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OX3K[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ConstrainComponentPropName
	 * Size -> 0x0008
	 */
	struct FConstrainComponentPropName
	{
	public:
		class FName                                                ComponentName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ConstraintBaseParams
	 * Size -> 0x0014
	 */
	struct FConstraintBaseParams
	{
	public:
		float                                                      Stiffness;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damping;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Restitution;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContactDistance;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSoftConstraint : 1;                                     // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WC8[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LinearConstraint
	 * Size -> 0x0008 (FullSize[0x001C] - InheritedSize[0x0014])
	 */
	struct FLinearConstraint : public FConstraintBaseParams
	{
	public:
		float                                                      Limit;                                                   // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ELinearConstraintMotion                             XMotion;                                                 // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ELinearConstraintMotion                             YMotion;                                                 // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ELinearConstraintMotion                             ZMotion;                                                 // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWRT[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ConeConstraint
	 * Size -> 0x000C (FullSize[0x0020] - InheritedSize[0x0014])
	 */
	struct FConeConstraint : public FConstraintBaseParams
	{
	public:
		float                                                      Swing1LimitDegrees;                                      // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Swing2LimitDegrees;                                      // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAngularConstraintMotion                            Swing1Motion;                                            // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAngularConstraintMotion                            Swing2Motion;                                            // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_55YJ[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.TwistConstraint
	 * Size -> 0x0008 (FullSize[0x001C] - InheritedSize[0x0014])
	 */
	struct FTwistConstraint : public FConstraintBaseParams
	{
	public:
		float                                                      TwistLimitDegrees;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAngularConstraintMotion                            TwistMotion;                                             // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2SN[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ConstraintDrive
	 * Size -> 0x0010
	 */
	struct FConstraintDrive
	{
	public:
		float                                                      Stiffness;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damping;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxForce;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnablePositionDrive : 1;                                // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableVelocityDrive : 1;                                // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0H0K[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LinearDriveConstraint
	 * Size -> 0x004C
	 */
	struct FLinearDriveConstraint
	{
	public:
		struct FVector                                             PositionTarget;                                          // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VelocityTarget;                                          // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FConstraintDrive                                    XDrive;                                                  // 0x0018(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FConstraintDrive                                    YDrive;                                                  // 0x0028(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FConstraintDrive                                    ZDrive;                                                  // 0x0038(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bEnablePositionDrive : 1;                                // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C1E7[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AngularDriveConstraint
	 * Size -> 0x004C
	 */
	struct FAngularDriveConstraint
	{
	public:
		struct FConstraintDrive                                    TwistDrive;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FConstraintDrive                                    SwingDrive;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FConstraintDrive                                    SlerpDrive;                                              // 0x0020(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            OrientationTarget;                                       // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocityTarget;                                   // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAngularDriveMode                                   AngularDriveMode;                                        // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ITDZ[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ConstraintProfileProperties
	 * Size -> 0x0104
	 */
	struct FConstraintProfileProperties
	{
	public:
		float                                                      ProjectionLinearTolerance;                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectionAngularTolerance;                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearBreakThreshold;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularBreakThreshold;                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearConstraint                                   LinearLimit;                                             // 0x0010(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FConeConstraint                                     ConeLimit;                                               // 0x002C(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FTwistConstraint                                    TwistLimit;                                              // 0x004C(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearDriveConstraint                              LinearDrive;                                             // 0x0068(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAngularDriveConstraint                             AngularDrive;                                            // 0x00B4(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bDisableCollision : 1;                                   // 0x0100(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bParentDominates : 1;                                    // 0x0100(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableProjection : 1;                                   // 0x0100(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAngularBreakable : 1;                                   // 0x0100(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLinearBreakable : 1;                                    // 0x0100(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72CX[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ConstraintInstance
	 * Size -> 0x01B8
	 */
	struct FConstraintInstance
	{
	public:
		unsigned char                                              UnknownData_CIJL[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                JointName;                                               // 0x0018(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ConstraintBone1;                                         // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ConstraintBone2;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Pos1;                                                    // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PriAxis1;                                                // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecAxis1;                                                // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Pos2;                                                    // 0x0054(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PriAxis2;                                                // 0x0060(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecAxis2;                                                // 0x006C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AngularRotationOffset;                                   // 0x0078(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bScaleLinearLimits : 1;                                  // 0x0084(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTQF[0x7];                                   // 0x0085(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FConstraintProfileProperties                        ProfileInstance;                                         // 0x008C(0x0104) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W61P[0x28];                                  // 0x0190(0x0028) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PhysicsConstraintProfileHandle
	 * Size -> 0x010C
	 */
	struct FPhysicsConstraintProfileHandle
	{
	public:
		struct FConstraintProfileProperties                        ProfileProperties;                                       // 0x0000(0x0104) NoDestructor, NativeAccessSpecifierPublic
		class FName                                                ProfileName;                                             // 0x0104(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RigidBodyErrorCorrection
	 * Size -> 0x0034
	 */
	struct FRigidBodyErrorCorrection
	{
	public:
		float                                                      PingExtrapolation;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PingLimit;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ErrorPerLinearDifference;                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ErrorPerAngularDifference;                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRestoredStateError;                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLinearHardSnapDistance;                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositionLerp;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleLerp;                                               // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearVelocityCoefficient;                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularVelocityCoefficient;                              // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ErrorAccumulationSeconds;                                // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ErrorAccumulationDistanceSq;                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ErrorAccumulationSimilarity;                             // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PhysicalSurfaceName
	 * Size -> 0x000C
	 */
	struct FPhysicalSurfaceName
	{
	public:
		Engine_EPhysicalSurface                                    Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RGKA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BroadphaseSettings
	 * Size -> 0x0040
	 */
	struct FBroadphaseSettings
	{
	public:
		bool                                                       bUseMBPOnClient;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMBPOnServer;                                         // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMBPOuterBounds;                                      // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S4WN[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                MBPBounds;                                               // 0x0004(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox                                                MBPOuterBounds;                                          // 0x0020(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		uint32_t                                                   MBPNumSubdivs;                                           // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ChaosPhysicsSettings
	 * Size -> 0x0003
	 */
	struct FChaosPhysicsSettings
	{
	public:
		PhysicsCore_EChaosThreadingMode                            DefaultThreadingModel;                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		PhysicsCore_EChaosSolverTickMode                           DedicatedThreadTickMode;                                 // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		PhysicsCore_EChaosBufferMode                               DedicatedThreadBufferMode;                               // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.EngineShowFlagsSetting
	 * Size -> 0x0018
	 */
	struct FEngineShowFlagsSetting
	{
	public:
		class FString                                              ShowFlagName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Enabled;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JW8W[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CameraCacheEntry
	 * Size -> 0x05D0
	 */
	struct FCameraCacheEntry
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BE2L[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinimalViewInfo                                    POV;                                                     // 0x0010(0x05C0) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TViewTarget
	 * Size -> 0x05E0
	 */
	struct FTViewTarget
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BEHW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinimalViewInfo                                    POV;                                                     // 0x0010(0x05C0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class APlayerState*                                        PlayerState;                                             // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QAYR[0x8];                                   // 0x05D8(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.KeyBind
	 * Size -> 0x0030
	 */
	struct FKeyBind
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Command;                                                 // 0x0018(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Control : 1;                                             // 0x0028(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Shift : 1;                                               // 0x0028(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Alt : 1;                                                 // 0x0028(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Cmd : 1;                                                 // 0x0028(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreCtrl : 1;                                         // 0x0028(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreShift : 1;                                        // 0x0028(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreAlt : 1;                                          // 0x0028(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreCmd : 1;                                          // 0x0028(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisabled : 1;                                           // 0x0029(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5W5T[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PoseData
	 * Size -> 0x0070
	 */
	struct FPoseData
	{
	public:
		TArray<struct FTransform>                                  LocalSpacePose;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<int, int>                                             TrackToBufferIndex;                                      // 0x0010(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              CurveData;                                               // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
	 * Size -> 0x0048
	 */
	struct FSkeletalMeshSamplingLODBuiltData
	{
	public:
		unsigned char                                              UnknownData_Y8DR[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
	 * Size -> 0x0078
	 */
	struct FSkeletalMeshSamplingRegionBuiltData
	{
	public:
		unsigned char                                              UnknownData_0QGX[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SkeletalMeshSamplingBuiltData
	 * Size -> 0x0020
	 */
	struct FSkeletalMeshSamplingBuiltData
	{
	public:
		TArray<struct FSkeletalMeshSamplingLODBuiltData>           WholeMeshBuiltData;                                      // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSkeletalMeshSamplingRegionBuiltData>        RegionBuiltData;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SkeletalMeshSamplingInfo
	 * Size -> 0x0030
	 */
	struct FSkeletalMeshSamplingInfo
	{
	public:
		TArray<struct FSkeletalMeshSamplingRegion>                 Regions;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FSkeletalMeshSamplingBuiltData                      BuiltData;                                               // 0x0010(0x0020) NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.AnimSetMeshLinkup
	 * Size -> 0x0010
	 */
	struct FAnimSetMeshLinkup
	{
	public:
		TArray<int>                                                BoneToTrackTable;                                        // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.DirectoryPath
	 * Size -> 0x0010
	 */
	struct FDirectoryPath
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PrimaryAssetRules
	 * Size -> 0x0010
	 */
	struct FPrimaryAssetRules
	{
	public:
		int                                                        Priority;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyRecursively;                                       // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86TH[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        ChunkId;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EPrimaryAssetCookRule                               CookRule;                                                // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UXZD[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PrimaryAssetTypeInfo
	 * Size -> 0x0088
	 */
	struct FPrimaryAssetTypeInfo
	{
	public:
		class FName                                                PrimaryAssetType;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AssetBaseClass[0x28];                                    // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty Engine.PrimaryAssetTypeInfo.AssetBaseClass
		class UClass*                                              AssetBaseClassLoaded;                                    // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBlueprintClasses;                                    // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEditorOnly;                                           // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L2WP[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDirectoryPath>                              Directories;                                             // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSoftObjectPath>                             SpecificAssets;                                          // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		struct FPrimaryAssetRules                                  Rules;                                                   // 0x0060(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      AssetScanPaths;                                          // 0x0070(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       bIsDynamicAsset;                                         // 0x0080(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M33A[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        NumberOfAssets;                                          // 0x0084(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PrimaryAssetRulesOverride
	 * Size -> 0x0020
	 */
	struct FPrimaryAssetRulesOverride
	{
	public:
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0000(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetRules                                  Rules;                                                   // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PrimaryAssetRulesCustomOverride
	 * Size -> 0x0038
	 */
	struct FPrimaryAssetRulesCustomOverride
	{
	public:
		struct FPrimaryAssetType                                   PrimaryAssetType;                                        // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      FilterDirectory;                                         // 0x0008(0x0010) Edit, NativeAccessSpecifierPublic
		class FString                                              FilterString;                                            // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetRules                                  Rules;                                                   // 0x0028(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AssetManagerRedirect
	 * Size -> 0x0020
	 */
	struct FAssetManagerRedirect
	{
	public:
		class FString                                              Old;                                                     // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              New;                                                     // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AssetMapping
	 * Size -> 0x0010
	 */
	struct FAssetMapping
	{
	public:
		class UAnimationAsset*                                     SourceAsset;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimationAsset*                                     TargetAsset;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AtmospherePrecomputeParameters
	 * Size -> 0x002C
	 */
	struct FAtmospherePrecomputeParameters
	{
	public:
		float                                                      DensityHeight;                                           // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecayHeight;                                             // 0x0004(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxScatteringOrder;                                      // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        TransmittanceTexWidth;                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        TransmittanceTexHeight;                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        IrradianceTexWidth;                                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        IrradianceTexHeight;                                     // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        InscatterAltitudeSampleNum;                              // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        InscatterMuNum;                                          // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        InscatterMuSNum;                                         // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        InscatterNuNum;                                          // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AudioQualitySettings
	 * Size -> 0x0020
	 */
	struct FAudioQualitySettings
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		int                                                        MaxChannels;                                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48H1[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ReverbSettings
	 * Size -> 0x0020
	 */
	struct FReverbSettings
	{
	public:
		bool                                                       bApplyReverb;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_57IK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UReverbEffect*                                       ReverbEffect;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundEffectSubmixPreset*                            ReverbPluginEffect;                                      // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeTime;                                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.InteriorSettings
	 * Size -> 0x0024
	 */
	struct FInteriorSettings
	{
	public:
		bool                                                       bIsWorldSettings;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HM16[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExteriorVolume;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExteriorTime;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExteriorLPF;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExteriorLPFTime;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteriorVolume;                                          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteriorTime;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteriorLPF;                                             // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteriorLPFTime;                                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.EditorMapPerformanceTestDefinition
	 * Size -> 0x0020
	 */
	struct FEditorMapPerformanceTestDefinition
	{
	public:
		struct FSoftObjectPath                                     PerformanceTestmap;                                      // 0x0000(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        TestTimer;                                               // 0x0018(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KRUJ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.FilePath
	 * Size -> 0x0010
	 */
	struct FFilePath
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ImportFactorySettingValues
	 * Size -> 0x0020
	 */
	struct FImportFactorySettingValues
	{
	public:
		class FString                                              SettingName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BuildPromotionOpenAssetSettings
	 * Size -> 0x0060
	 */
	struct FBuildPromotionOpenAssetSettings
	{
	public:
		struct FFilePath                                           BlueprintAsset;                                          // 0x0000(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath                                           MaterialAsset;                                           // 0x0010(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath                                           ParticleSystemAsset;                                     // 0x0020(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath                                           SkeletalMeshAsset;                                       // 0x0030(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath                                           StaticMeshAsset;                                         // 0x0040(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath                                           TextureAsset;                                            // 0x0050(0x0010) Edit, Config, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BuildPromotionNewProjectSettings
	 * Size -> 0x0020
	 */
	struct FBuildPromotionNewProjectSettings
	{
	public:
		struct FDirectoryPath                                      NewProjectFolderOverride;                                // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		class FString                                              NewProjectNameOverride;                                  // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.EditorImportWorkflowDefinition
	 * Size -> 0x0020
	 */
	struct FEditorImportWorkflowDefinition
	{
	public:
		struct FFilePath                                           ImportFilePath;                                          // 0x0000(0x0010) Edit, Config, NativeAccessSpecifierPublic
		TArray<struct FImportFactorySettingValues>                 FactorySettings;                                         // 0x0010(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BuildPromotionImportWorkflowSettings
	 * Size -> 0x0150
	 */
	struct FBuildPromotionImportWorkflowSettings
	{
	public:
		struct FEditorImportWorkflowDefinition                     Diffuse;                                                 // 0x0000(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition                     Normal;                                                  // 0x0020(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition                     StaticMesh;                                              // 0x0040(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition                     ReimportStaticMesh;                                      // 0x0060(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition                     BlendShapeMesh;                                          // 0x0080(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition                     MorphMesh;                                               // 0x00A0(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition                     SkeletalMesh;                                            // 0x00C0(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition                     Animation;                                               // 0x00E0(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition                     Sound;                                                   // 0x0100(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition                     SurroundSound;                                           // 0x0120(0x0020) Edit, Config, NativeAccessSpecifierPublic
		TArray<struct FEditorImportWorkflowDefinition>             OtherAssetsToImport;                                     // 0x0140(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BuildPromotionTestSettings
	 * Size -> 0x01F0
	 */
	struct FBuildPromotionTestSettings
	{
	public:
		struct FFilePath                                           DefaultStaticMeshAsset;                                  // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		struct FBuildPromotionImportWorkflowSettings               ImportWorkflow;                                          // 0x0010(0x0150) Edit, NativeAccessSpecifierPublic
		struct FBuildPromotionOpenAssetSettings                    OpenAssets;                                              // 0x0160(0x0060) Edit, NativeAccessSpecifierPublic
		struct FBuildPromotionNewProjectSettings                   NewProjectSettings;                                      // 0x01C0(0x0020) Edit, NativeAccessSpecifierPublic
		struct FFilePath                                           SourceControlMaterial;                                   // 0x01E0(0x0010) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MaterialEditorPromotionSettings
	 * Size -> 0x0030
	 */
	struct FMaterialEditorPromotionSettings
	{
	public:
		struct FFilePath                                           DefaultMaterialAsset;                                    // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		struct FFilePath                                           DefaultDiffuseTexture;                                   // 0x0010(0x0010) Edit, NativeAccessSpecifierPublic
		struct FFilePath                                           DefaultNormalTexture;                                    // 0x0020(0x0010) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ParticleEditorPromotionSettings
	 * Size -> 0x0010
	 */
	struct FParticleEditorPromotionSettings
	{
	public:
		struct FFilePath                                           DefaultParticleAsset;                                    // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BlueprintEditorPromotionSettings
	 * Size -> 0x0030
	 */
	struct FBlueprintEditorPromotionSettings
	{
	public:
		struct FFilePath                                           FirstMeshPath;                                           // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		struct FFilePath                                           SecondMeshPath;                                          // 0x0010(0x0010) Edit, NativeAccessSpecifierPublic
		struct FFilePath                                           DefaultParticleAsset;                                    // 0x0020(0x0010) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ExternalToolDefinition
	 * Size -> 0x0060
	 */
	struct FExternalToolDefinition
	{
	public:
		class FString                                              ToolName;                                                // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilePath                                           ExecutablePath;                                          // 0x0010(0x0010) Edit, Config, NativeAccessSpecifierPublic
		class FString                                              CommandLineOptions;                                      // 0x0020(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      WorkingDirectory;                                        // 0x0030(0x0010) Edit, Config, NativeAccessSpecifierPublic
		class FString                                              ScriptExtension;                                         // 0x0040(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      ScriptDirectory;                                         // 0x0050(0x0010) Edit, Config, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.LaunchOnTestSettings
	 * Size -> 0x0020
	 */
	struct FLaunchOnTestSettings
	{
	public:
		struct FFilePath                                           LaunchOnTestmap;                                         // 0x0000(0x0010) Edit, Config, NativeAccessSpecifierPublic
		class FString                                              DeviceID;                                                // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BoneNode
	 * Size -> 0x0010
	 */
	struct FBoneNode
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ParentIndex;                                             // 0x0008(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBoneTranslationRetargetingMode                     TranslationRetargetingMode;                              // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CODJ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.VirtualBone
	 * Size -> 0x0018
	 */
	struct FVirtualBone
	{
	public:
		class FName                                                SourceBoneName;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TargetBoneName;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                VirtualBoneName;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SmartNameContainer
	 * Size -> 0x0050
	 */
	struct FSmartNameContainer
	{
	public:
		unsigned char                                              UnknownData_SBKB[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimSlotGroup
	 * Size -> 0x0018
	 */
	struct FAnimSlotGroup
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        SlotNames;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BlendProfileBoneEntry
	 * Size -> 0x0014
	 */
	struct FBlendProfileBoneEntry
	{
	public:
		struct FBoneReference                                      BoneReference;                                           // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      BlendScale;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SoundClassProperties
	 * Size -> 0x002C
	 */
	struct FSoundClassProperties
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StereoBleed;                                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LFEBleed;                                                // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VoiceCenterChannelVolume;                                // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RadioFilterVolume;                                       // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RadioFilterVolumeThreshold;                              // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplyEffects : 1;                                       // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlwaysPlay : 1;                                         // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsUISound : 1;                                          // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsMusic : 1;                                            // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReverb : 1;                                             // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FAX1[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Default2DReverbSendAmount;                               // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCenterChannelOnly : 1;                                  // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplyAmbientVolumes : 1;                                // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E9HI[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_EAudioOutputTarget                                  OutputTarget;                                            // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2GNT[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PassiveSoundMixModifier
	 * Size -> 0x0010
	 */
	struct FPassiveSoundMixModifier
	{
	public:
		class USoundMix*                                           SoundMix;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinVolumeThreshold;                                      // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxVolumeThreshold;                                      // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SourceEffectChainEntry
	 * Size -> 0x0010
	 */
	struct FSourceEffectChainEntry
	{
	public:
		class USoundEffectSourcePreset*                            Preset;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBypass : 1;                                             // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DXU6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SoundGroup
	 * Size -> 0x0020
	 */
	struct FSoundGroup
	{
	public:
		Engine_ESoundGroup                                         SoundGroup;                                              // 0x0000(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHEM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayName;                                             // 0x0008(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlwaysDecompressOnLoad : 1;                             // 0x0018(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M8GK[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DecompressedDuration;                                    // 0x001C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RawAnimSequenceTrack
	 * Size -> 0x0030
	 */
	struct FRawAnimSequenceTrack
	{
	public:
		TArray<struct FVector>                                     PosKeys;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FQuat>                                       RotKeys;                                                 // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     ScaleKeys;                                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimSequenceTrackContainer
	 * Size -> 0x0020
	 */
	struct FAnimSequenceTrackContainer
	{
	public:
		TArray<struct FRawAnimSequenceTrack>                       AnimationTracks;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        TrackNames;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimInstanceProxy
	 * Size -> 0x06D0
	 */
	struct FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_5U21[0x6D0];                                 // 0x0000(0x06D0) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimSingleNodeInstanceProxy
	 * Size -> 0x0150 (FullSize[0x0820] - InheritedSize[0x06D0])
	 */
	struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_KW0I[0x150];                                 // 0x06D0(0x0150) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimNode_SingleNode
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FAnimNode_SingleNode : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_REOU[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimationTransitionRule
	 * Size -> 0x0010
	 */
	struct FAnimationTransitionRule
	{
	public:
		class FName                                                RuleToExecute;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TransitionReturnVal;                                     // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L2VI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        TransitionIndex;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimationState
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAnimationState : public FAnimationStateBase
	{
	public:
		TArray<struct FAnimationTransitionRule>                    Transitions;                                             // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int                                                        StateRootNodeIndex;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        StartNotify;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        EndNotify;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        FullyBlendedNotify;                                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimNotifyTrack
	 * Size -> 0x0038
	 */
	struct FAnimNotifyTrack
	{
	public:
		class FName                                                TrackName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        TrackColor;                                              // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNZ5[0x20];                                  // 0x0018(0x0020) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.StringCurveKey
	 * Size -> 0x0018
	 */
	struct FStringCurveKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LDT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Value;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StringCurve
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	struct FStringCurve : public FIndexedCurve
	{
	public:
		class FString                                              DefaultValue;                                            // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStringCurveKey>                             keys;                                                    // 0x0078(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TextureFormatSettings
	 * Size -> 0x0002
	 */
	struct FTextureFormatSettings
	{
	public:
		Engine_ETextureCompressionSettings                         CompressionSettings;                                     // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CompressionNoAlpha : 1;                                  // 0x0001(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CompressionNone : 1;                                     // 0x0001(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SRGB : 1;                                                // 0x0001(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TexturePlatformData
	 * Size -> 0x0028
	 */
	struct FTexturePlatformData
	{
	public:
		unsigned char                                              UnknownData_CHPX[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.TextureSource
	 * Size -> 0x00A0
	 */
	struct FTextureSource
	{
	public:
		unsigned char                                              UnknownData_KXHP[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.TextureSourceBlock
	 * Size -> 0x0018
	 */
	struct FTextureSourceBlock
	{
	public:
		int                                                        BlockX;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        BlockY;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SizeX;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SizeY;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        NumSlices;                                               // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        NumMips;                                                 // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
	 * Size -> 0x0030
	 */
	struct FStreamingRenderAssetPrimitiveInfo
	{
	public:
		class UStreamableRenderAsset*                              RenderAsset;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x0008(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TexelFactor;                                             // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PackedRelativeBox;                                       // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowInvalidTexelFactorWhenUnregistered : 1;            // 0x002C(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5A8[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.TimeStretchCurveInstance
	 * Size -> 0x0030
	 */
	struct FTimeStretchCurveInstance
	{
	public:
		bool                                                       bHasValidData;                                           // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1HGK[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.EndPhysicsTickFunction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FEndPhysicsTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_ZE3W[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.StartPhysicsTickFunction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FStartPhysicsTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_VSKE[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LevelViewportInfo
	 * Size -> 0x0020
	 */
	struct FLevelViewportInfo
	{
	public:
		struct FVector                                             CamPosition;                                             // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CamRotation;                                             // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CamOrthoZoom;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CamUpdated;                                              // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5PEN[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LightmassWorldInfoSettings
	 * Size -> 0x004C
	 */
	struct FLightmassWorldInfoSettings
	{
	public:
		float                                                      StaticLightingLevelScale;                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        NumIndirectLightingBounces;                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        NumSkyLightingBounces;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IndirectLightingQuality;                                 // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IndirectLightingSmoothness;                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              EnvironmentColor;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnvironmentIntensity;                                    // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmissiveBoost;                                           // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DiffuseBoost;                                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EVolumeLightingMethod                               VolumeLightingMethod;                                    // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseAmbientOcclusion : 1;                                // 0x0025(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGenerateAmbientOcclusionMaterialMask : 1;               // 0x0025(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bVisualizeMaterialDiffuse : 1;                           // 0x0025(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bVisualizeAmbientOcclusion : 1;                          // 0x0025(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCompressLightmaps : 1;                                  // 0x0025(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SC0N[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumetricLightmapDetailCellSize;                        // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumetricLightmapMaximumBrickMemoryMb;                  // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumetricLightmapSphericalHarmonicSmoothing;            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumeLightSamplePlacementScale;                         // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectIlluminationOcclusionFraction;                     // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IndirectIlluminationOcclusionFraction;                   // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionExponent;                                       // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FullyOccludedSamplesFraction;                            // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOcclusionDistance;                                    // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NameCurveKey
	 * Size -> 0x000C
	 */
	struct FNameCurveKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Value;                                                   // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NameCurve
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	struct FNameCurve : public FIndexedCurve
	{
	public:
		TArray<struct FNameCurveKey>                               keys;                                                    // 0x0068(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NavDataConfig
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	struct FNavDataConfig : public FNavAgentProperties
	{
	public:
		class FName                                                Name;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DefaultQueryExtent;                                      // 0x003C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              NavigationDataClass;                                     // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      NavigationDataClassName;                                 // 0x0050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PacketSimulationSettings
	 * Size -> 0x001C
	 */
	struct FPacketSimulationSettings
	{
	public:
		int                                                        PktLoss;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PktLossMaxSize;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PktLossMinSize;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PktOrder;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PktDup;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PktLag;                                                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PktLagVariance;                                          // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.FastArraySerializer
	 * Size -> 0x0108
	 */
	struct FFastArraySerializer
	{
	public:
		unsigned char                                              UnknownData_5MXS[0x54];                                  // 0x0000(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        ArrayReplicationKey;                                     // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8B2[0xA8];                                  // 0x0058(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_EFastArraySerializerDeltaFlags                      DeltaFlags;                                              // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XW2S[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.FastArraySerializerItem
	 * Size -> 0x000C
	 */
	struct FFastArraySerializerItem
	{
	public:
		int                                                        ReplicationID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ReplicationKey;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MostRecentArrayReplicationKey;                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ParticleCurvePair
	 * Size -> 0x0018
	 */
	struct FParticleCurvePair
	{
	public:
		class FString                                              CurveName;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             CurveObject;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BeamTargetData
	 * Size -> 0x000C
	 */
	struct FBeamTargetData
	{
	public:
		class FName                                                TargetName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetPercentage;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FParticleSystemWorldManagerTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_8XWG[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ParticleSystemReplayFrame
	 * Size -> 0x0010
	 */
	struct FParticleSystemReplayFrame
	{
	public:
		unsigned char                                              UnknownData_23XA[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ParticleEmitterReplayFrame
	 * Size -> 0x0010
	 */
	struct FParticleEmitterReplayFrame
	{
	public:
		unsigned char                                              UnknownData_VL0Z[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PlayerMuteList
	 * Size -> 0x0038
	 */
	struct FPlayerMuteList
	{
	public:
		unsigned char                                              UnknownData_I7XO[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHasVoiceHandshakeCompleted;                             // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POPI[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        VoiceChannelIdx;                                         // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PreviewAttachedObjectPair
	 * Size -> 0x0038
	 */
	struct FPreviewAttachedObjectPair
	{
	public:
		unsigned char                                              AttachedObject[0x28];                                    // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.PreviewAttachedObjectPair.AttachedObject
		class UObject*                                             Object;                                                  // 0x0028(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                AttachedTo;                                              // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PreviewAssetAttachContainer
	 * Size -> 0x0010
	 */
	struct FPreviewAssetAttachContainer
	{
	public:
		TArray<struct FPreviewAttachedObjectPair>                  AttachedObjects;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.PrimitiveComponentInstanceData
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	struct FPrimitiveComponentInstanceData : public FSceneComponentInstanceData
	{
	public:
		unsigned char                                              UnknownData_ELFY[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ComponentTransform;                                      // 0x00B0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		int                                                        VisibilityId;                                            // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SWXW[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 LODParent;                                               // 0x00E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.SpriteCategoryInfo
	 * Size -> 0x0038
	 */
	struct FSpriteCategoryInfo
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0008(0x0018) NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CompressedRichCurve
	 * Size -> 0x0018
	 */
	struct FCompressedRichCurve
	{
	public:
		unsigned char                                              UnknownData_GRAN[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.RootMotionSourceStatus
	 * Size -> 0x0001
	 */
	struct FRootMotionSourceStatus
	{
	public:
		unsigned char                                              Flags;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RootMotionFinishVelocitySettings
	 * Size -> 0x0014
	 */
	struct FRootMotionFinishVelocitySettings
	{
	public:
		Engine_ERootMotionFinishVelocityMode                       Mode;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2CN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SetVelocity;                                             // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampVelocity;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RootMotionSource
	 * Size -> 0x00A0
	 */
	struct FRootMotionSource
	{
	public:
		unsigned char                                              UnknownData_65KA[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   Priority;                                                // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   LocalID;                                                 // 0x0012(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERootMotionAccumulateMode                           AccumulateMode;                                          // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6SSW[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                InstanceName;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentTime;                                             // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviousTime;                                            // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRootMotionSourceStatus                             Status;                                                  // 0x0030(0x0001) NoDestructor, NativeAccessSpecifierPublic
		struct FRootMotionSourceSettings                           Settings;                                                // 0x0031(0x0001) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInLocalSpace;                                           // 0x0032(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXEQ[0xD];                                   // 0x0033(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRootMotionMovementParams                           RootMotionParams;                                        // 0x0040(0x0040) NoDestructor, NativeAccessSpecifierPublic
		struct FRootMotionFinishVelocitySettings                   FinishVelocityParams;                                    // 0x0080(0x0014) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EP1T[0xC];                                   // 0x0094(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.RootMotionSource_JumpForce
	 * Size -> 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
	 */
	struct FRootMotionSource_JumpForce : public FRootMotionSource
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0098(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableTimeout;                                         // 0x00AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2UYT[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AU4[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
	 * Size -> 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
	 */
	struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0098(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialTargetLocation;                                   // 0x00A4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetLocation;                                          // 0x00B0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestrictSpeedToExpected;                                // 0x00BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9POX[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RootMotionSource_MoveToForce
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	struct FRootMotionSource_MoveToForce : public FRootMotionSource
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0098(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetLocation;                                          // 0x00A4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestrictSpeedToExpected;                                // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YD1O[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RootMotionSource_RadialForce
	 * Size -> 0x0040 (FullSize[0x00E0] - InheritedSize[0x00A0])
	 */
	struct FRootMotionSource_RadialForce : public FRootMotionSource
	{
	public:
		struct FVector                                             Location;                                                // 0x0098(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MIVL[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LocationActor;                                           // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPush;                                                 // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoZForce;                                               // 0x00B9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FXZO[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         StrengthDistanceFalloff;                                 // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         StrengthOverTime;                                        // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFixedWorldDirection;                                 // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8E2[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            FixedWorldDirection;                                     // 0x00D4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RootMotionSource_ConstantForce
	 * Size -> 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
	 */
	struct FRootMotionSource_ConstantForce : public FRootMotionSource
	{
	public:
		struct FVector                                             Force;                                                   // 0x0098(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D65E[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         StrengthOverTime;                                        // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CameraExposureSettings
	 * Size -> 0x0038
	 */
	struct FCameraExposureSettings
	{
	public:
		Engine_EAutoExposureMethod                                 Method;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XCO2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LowPercent;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighPercent;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinBrightness;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBrightness;                                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedUp;                                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedDown;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bias;                                                    // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         BiasCurve;                                               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HistogramLogMin;                                         // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HistogramLogMax;                                         // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CalibrationConstant;                                     // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCXF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.GaussianSumBloomSettings
	 * Size -> 0x0084
	 */
	struct FGaussianSumBloomSettings
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Threshold;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SizeScale;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Filter1Size;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Filter2Size;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Filter3Size;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Filter4Size;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Filter5Size;                                             // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Filter6Size;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Filter1Tint;                                             // 0x0024(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Filter2Tint;                                             // 0x0034(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Filter3Tint;                                             // 0x0044(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Filter4Tint;                                             // 0x0054(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Filter5Tint;                                             // 0x0064(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Filter6Tint;                                             // 0x0074(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ConvolutionBloomSettings
	 * Size -> 0x0028
	 */
	struct FConvolutionBloomSettings
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           CenterUV;                                                // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreFilterMin;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreFilterMax;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreFilterMult;                                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BufferScale;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VN52[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LensBloomSettings
	 * Size -> 0x00B8
	 */
	struct FLensBloomSettings
	{
	public:
		struct FGaussianSumBloomSettings                           GaussianSum;                                             // 0x0000(0x0084) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3AYV[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FConvolutionBloomSettings                           Convolution;                                             // 0x0088(0x0028) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		Engine_EBloomMethod                                        Method;                                                  // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MQS[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LensImperfectionSettings
	 * Size -> 0x0020
	 */
	struct FLensImperfectionSettings
	{
	public:
		class UTexture*                                            DirtMask;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirtMaskIntensity;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DirtMaskTint;                                            // 0x000C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TKRX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LensSettings
	 * Size -> 0x00E0
	 */
	struct FLensSettings
	{
	public:
		struct FLensBloomSettings                                  Bloom;                                                   // 0x0000(0x00B8) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FLensImperfectionSettings                           Imperfections;                                           // 0x00B8(0x0020) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ChromaticAberration;                                     // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1FX[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.FilmStockSettings
	 * Size -> 0x0014
	 */
	struct FFilmStockSettings
	{
	public:
		float                                                      Slope;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Toe;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Shoulder;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlackClip;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WhiteClip;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ColorGradePerRangeSettings
	 * Size -> 0x0050
	 */
	struct FColorGradePerRangeSettings
	{
	public:
		struct FVector4                                            Saturation;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Contrast;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Gamma;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Gain;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Offset;                                                  // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ColorGradingSettings
	 * Size -> 0x0150
	 */
	struct FColorGradingSettings
	{
	public:
		struct FColorGradePerRangeSettings                         Global;                                                  // 0x0000(0x0050) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FColorGradePerRangeSettings                         Shadows;                                                 // 0x0050(0x0050) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FColorGradePerRangeSettings                         Midtones;                                                // 0x00A0(0x0050) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FColorGradePerRangeSettings                         Highlights;                                              // 0x00F0(0x0050) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ShadowsMax;                                              // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighlightsMin;                                           // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TJV[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SimpleCurveKey
	 * Size -> 0x0008
	 */
	struct FSimpleCurveKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.EditorImportExportTestDefinition
	 * Size -> 0x0038
	 */
	struct FEditorImportExportTestDefinition
	{
	public:
		struct FFilePath                                           ImportFilePath;                                          // 0x0000(0x0010) Edit, Config, NativeAccessSpecifierPublic
		class FString                                              ExportFileExtension;                                     // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipExport;                                             // 0x0020(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQ5J[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FImportFactorySettingValues>                 FactorySettings;                                         // 0x0028(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BranchFilter
	 * Size -> 0x000C
	 */
	struct FBranchFilter
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        BlendDepth;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ImportanceTexture
	 * Size -> 0x0050
	 */
	struct FImportanceTexture
	{
	public:
		struct FIntPoint                                           Size;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        NumMips;                                                 // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PB9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              MarginalCDF;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ConditionalCDF;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FColor>                                      TextureData;                                             // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UTexture2D>                           Texture;                                                 // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EImportanceWeight                                   Weighting;                                               // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJNR[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ComponentKey
	 * Size -> 0x0020
	 */
	struct FComponentKey
	{
	public:
		class UClass*                                              OwnerClass;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                SCSVariableName;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               AssociatedGuid;                                          // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.ComponentOverrideRecord
	 * Size -> 0x0080
	 */
	struct FComponentOverrideRecord
	{
	public:
		class UClass*                                              ComponentClass;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UActorComponent*                                     ComponentTemplate;                                       // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FComponentKey                                       ComponentKey;                                            // 0x0010(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FBlueprintCookedComponentInstancingData             CookedComponentInstancingData;                           // 0x0030(0x0050) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BlueprintInputDelegateBinding
	 * Size -> 0x0004
	 */
	struct FBlueprintInputDelegateBinding
	{
	public:
		unsigned char                                              bConsumeInput : 1;                                       // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bExecuteWhenPaused : 1;                                  // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideParentBinding : 1;                              // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIQE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BlueprintInputActionDelegateBinding
	 * Size -> 0x0014 (FullSize[0x0018] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		class FName                                                InputActionName;                                         // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EInputEvent                                         InputKeyEvent;                                           // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KX42[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PoseDataContainer
	 * Size -> 0x0090
	 */
	struct FPoseDataContainer
	{
	public:
		TArray<struct FSmartName>                                  PoseNames;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class FName>                                        Tracks;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, int>                                     TrackMap;                                                // 0x0020(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FPoseData>                                   Poses;                                                   // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FAnimCurveBase>                              Curves;                                                  // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.PreviewMeshCollectionEntry
	 * Size -> 0x0028
	 */
	struct FPreviewMeshCollectionEntry
	{
	public:
		unsigned char                                              SkeletalMesh[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.PreviewMeshCollectionEntry.SkeletalMesh

	};

	/**
	 * ScriptStruct Engine.SimpleCurve
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	struct FSimpleCurve : public FRealCurve
	{
	public:
		Engine_ERichCurveInterpMode                                InterpMode;                                              // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SDRX[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSimpleCurveKey>                             keys;                                                    // 0x0078(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ClothPhysicsProperties_Legacy
	 * Size -> 0x0050
	 */
	struct FClothPhysicsProperties_Legacy
	{
	public:
		float                                                      VerticalResistance;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalResistance;                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BendResistance;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShearResistance;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Friction;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damping;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TetherStiffness;                                         // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TetherLimit;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Drag;                                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StiffnessFrequency;                                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MassScale;                                               // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InertiaBlend;                                            // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelfCollisionThickness;                                  // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelfCollisionSquashScale;                                // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelfCollisionStiffness;                                  // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SolverFrequency;                                         // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FiberCompression;                                        // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FiberExpansion;                                          // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FiberResistance;                                         // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ClothingAssetData_Legacy
	 * Size -> 0x0078
	 */
	struct FClothingAssetData_Legacy
	{
	public:
		class FName                                                AssetName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ApexFileName;                                            // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClothPropertiesChanged;                                 // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U004[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClothPhysicsProperties_Legacy                      PhysicsProperties;                                       // 0x001C(0x0050) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QP1N[0xC];                                   // 0x006C(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SkeletalMeshClothBuildParams
	 * Size -> 0x0058
	 */
	struct FSkeletalMeshClothBuildParams
	{
	public:
		TWeakObjectPtr<class UClothingAssetBase>                   TargetAsset;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        TargetLod;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemapParameters;                                        // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3079[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AssetName;                                               // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LODIndex;                                                // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SourceSection;                                           // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveFromMesh;                                         // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F49S[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PhysicsAsset[0x28];                                      // 0x0029(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.SkeletalMeshClothBuildParams.PhysicsAsset

	};

	/**
	 * ScriptStruct Engine.BoneMirrorExport
	 * Size -> 0x0014
	 */
	struct FBoneMirrorExport
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceBoneName;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		CoreUObject_EAxis                                          BoneFlipAxis;                                            // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E5QP[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_3OTI[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_4UJT[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.NameMapping
	 * Size -> 0x0010
	 */
	struct FNameMapping
	{
	public:
		class FName                                                NodeName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.InputBlendPose
	 * Size -> 0x0010
	 */
	struct FInputBlendPose
	{
	public:
		TArray<struct FBranchFilter>                               BranchFilters;                                           // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BuilderPoly
	 * Size -> 0x0020
	 */
	struct FBuilderPoly
	{
	public:
		TArray<int>                                                VertexIndices;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int                                                        Direction;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ItemName;                                                // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PolyFlags;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PooledCameraShakes
	 * Size -> 0x0010
	 */
	struct FPooledCameraShakes
	{
	public:
		TArray<class UCameraShake*>                                PooledShakes;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.FOscillator
	 * Size -> 0x000C
	 */
	struct FFOscillator
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EInitialOscillatorOffset                            InitialOffset;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EOscillatorWaveform                                 Waveform;                                                // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9XV4[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ROscillator
	 * Size -> 0x0024
	 */
	struct FROscillator
	{
	public:
		struct FFOscillator                                        Pitch;                                                   // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        Yaw;                                                     // 0x000C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        Roll;                                                    // 0x0018(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.VOscillator
	 * Size -> 0x0024
	 */
	struct FVOscillator
	{
	public:
		struct FFOscillator                                        X;                                                       // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        Y;                                                       // 0x000C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        Z;                                                       // 0x0018(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CanvasUVTri
	 * Size -> 0x0060
	 */
	struct FCanvasUVTri
	{
	public:
		struct FVector2D                                           V0_Pos;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           V0_UV;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        V0_Color;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           V1_Pos;                                                  // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           V1_UV;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        V1_Color;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           V2_Pos;                                                  // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           V2_UV;                                                   // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        V2_Color;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.DelegateArray
	 * Size -> 0x0010
	 */
	struct FDelegateArray
	{
	public:
		TArray<class FScriptDelegate>                              Delegates;                                               // 0x0000(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CollisionResponseTemplate
	 * Size -> 0x0060
	 */
	struct FCollisionResponseTemplate
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionEnabled                                   CollisionEnabled;                                        // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1GF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ObjectTypeName;                                          // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0JE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FResponseChannel>                            CustomResponses;                                         // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              HelpMessage;                                             // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanModify;                                              // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7FB[0x27];                                  // 0x0039(0x0027) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CustomChannelSetup
	 * Size -> 0x0010
	 */
	struct FCustomChannelSetup
	{
	public:
		Engine_ECollisionChannel                                   Channel;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I8BF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionResponse                                  DefaultResponse;                                         // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceType;                                              // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStaticObject;                                           // 0x000E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ML70[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.Redirector
	 * Size -> 0x0010
	 */
	struct FRedirector
	{
	public:
		class FName                                                OldName;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NewName;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ReferencePose
	 * Size -> 0x0018
	 */
	struct FReferencePose
	{
	public:
		class FName                                                PoseName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ReferencePose;                                           // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SkeletonToMeshLinkup
	 * Size -> 0x0020
	 */
	struct FSkeletonToMeshLinkup
	{
	public:
		TArray<int>                                                SkeletonToMeshTable;                                     // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int>                                                MeshToSkeletonTable;                                     // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PrecomputedSkyLightInstanceData
	 * Size -> 0x00B8 (FullSize[0x0160] - InheritedSize[0x00A8])
	 */
	struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData
	{
	public:
		struct FGuid                                               LightGuid;                                               // 0x00A8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageBrightness;                                       // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7DX4[0xA4];                                  // 0x00BC(0x00A4) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SmartNameMapping
	 * Size -> 0x0060
	 */
	struct FSmartNameMapping
	{
	public:
		unsigned char                                              UnknownData_GWJD[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CurveMetaData
	 * Size -> 0x0020
	 */
	struct FCurveMetaData
	{
	public:
		unsigned char                                              UnknownData_YOZ3[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SoundClassEditorData
	 * Size -> 0x0008
	 */
	struct FSoundClassEditorData
	{
	public:
		unsigned char                                              UnknownData_BXKQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SoundNodeEditorData
	 * Size -> 0x0008
	 */
	struct FSoundNodeEditorData
	{
	public:
		unsigned char                                              UnknownData_OU00[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.StreamedAudioPlatformData
	 * Size -> 0x0020
	 */
	struct FStreamedAudioPlatformData
	{
	public:
		unsigned char                                              UnknownData_ZBRU[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SplineInstanceData
	 * Size -> 0x00D8 (FullSize[0x0180] - InheritedSize[0x00A8])
	 */
	struct FSplineInstanceData : public FSceneComponentInstanceData
	{
	public:
		bool                                                       bSplineHasBeenEdited;                                    // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZBE[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSplineCurves                                       SplineCurves;                                            // 0x00B0(0x0068) NativeAccessSpecifierPublic
		struct FSplineCurves                                       SplineCurvesPreUCS;                                      // 0x0118(0x0068) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SplineMeshInstanceData
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	struct FSplineMeshInstanceData : public FSceneComponentInstanceData
	{
	public:
		struct FVector                                             StartPos;                                                // 0x00A8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndPos;                                                  // 0x00B4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartTangent;                                            // 0x00C0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndTangent;                                              // 0x00CC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MaterialRemapIndex
	 * Size -> 0x0018
	 */
	struct FMaterialRemapIndex
	{
	public:
		uint32_t                                                   ImportVersionKey;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTJ6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int>                                                MaterialRemap;                                           // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AssetEditorOrbitCameraPosition
	 * Size -> 0x0028
	 */
	struct FAssetEditorOrbitCameraPosition
	{
	public:
		bool                                                       bIsSet;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FU71[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CamOrbitPoint;                                           // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CamOrbitZoom;                                            // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CamOrbitRotation;                                        // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MeshSectionInfo
	 * Size -> 0x0008
	 */
	struct FMeshSectionInfo
	{
	public:
		int                                                        MaterialIndex;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCollision;                                        // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastShadow;                                             // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2D7[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.MeshSectionInfoMap
	 * Size -> 0x0050
	 */
	struct FMeshSectionInfoMap
	{
	public:
		TMap<uint32_t, struct FMeshSectionInfo>                    Map;                                                     // 0x0000(0x0050) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MeshBuildSettings
	 * Size -> 0x0030
	 */
	struct FMeshBuildSettings
	{
	public:
		unsigned char                                              bUseMikkTSpace : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRecomputeNormals : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRecomputeTangents : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRemoveDegenerates : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBuildAdjacencyBuffer : 1;                               // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBuildReversedIndexBuffer : 1;                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseHighPrecisionTangentBasis : 1;                       // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseFullPrecisionUVs : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGenerateLightmapUVs : 1;                                // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGenerateDistanceFieldAsIfTwoSided : 1;                  // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JEL3[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        MinLightmapResolution;                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SrcLightmapIndex;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        DstLightmapIndex;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BuildScale;                                              // 0x0010(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BuildScale3D;                                            // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceFieldResolutionScale;                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHQC[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         DistanceFieldReplacementMesh;                            // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MeshReductionSettings
	 * Size -> 0x0024
	 */
	struct FMeshReductionSettings
	{
	public:
		float                                                      PercentTriangles;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentVertices;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDeviation;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PixelError;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeldingThreshold;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HardAngleThreshold;                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        BaseLODModel;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EMeshFeatureImportance                              SilhouetteImportance;                                    // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EMeshFeatureImportance                              TextureImportance;                                       // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EMeshFeatureImportance                              ShadingImportance;                                       // 0x001E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRecalculateNormals : 1;                                 // 0x001F(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGenerateUniqueLightmapUVs : 1;                          // 0x001F(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bKeepSymmetry : 1;                                       // 0x001F(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bVisibilityAided : 1;                                    // 0x001F(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCullOccluded : 1;                                       // 0x001F(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EStaticMeshReductionTerimationCriterion             TerminationCriterion;                                    // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EMeshFeatureImportance                              VisibilityAggressiveness;                                // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EMeshFeatureImportance                              VertexColorImportance;                                   // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EDD[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PerPlatformFloat
	 * Size -> 0x0004
	 */
	struct FPerPlatformFloat
	{
	public:
		float                                                      Default;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StaticMeshSourceModel
	 * Size -> 0x0070
	 */
	struct FStaticMeshSourceModel
	{
	public:
		struct FMeshBuildSettings                                  BuildSettings;                                           // 0x0000(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMeshReductionSettings                              ReductionSettings;                                       // 0x0030(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LODDistance;                                             // 0x0054(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerPlatformFloat                                   ScreenSize;                                              // 0x0058(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F8LF[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SourceImportFilename;                                    // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StaticMeshOptimizationSettings
	 * Size -> 0x001C
	 */
	struct FStaticMeshOptimizationSettings
	{
	public:
		Engine_EOptimizationType                                   ReductionMethod;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3KA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NumOfTrianglesPercentage;                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDeviationPercentage;                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeldingThreshold;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecalcNormals;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C3LR[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NormalsThreshold;                                        // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SilhouetteImportance;                                    // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TextureImportance;                                       // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ShadingImportance;                                       // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LZT[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PaintedVertex
	 * Size -> 0x0020
	 */
	struct FPaintedVertex
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Normal;                                                  // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StaticMeshVertexColorLODData
	 * Size -> 0x0028
	 */
	struct FStaticMeshVertexColorLODData
	{
	public:
		TArray<struct FPaintedVertex>                              PaintedVertices;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FColor>                                      VertexBufferColors;                                      // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		uint32_t                                                   LODIndex;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A4JP[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CustomProfile
	 * Size -> 0x0018
	 */
	struct FCustomProfile
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FResponseChannel>                            CustomResponses;                                         // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SoundTrackKey
	 * Size -> 0x0018
	 */
	struct FSoundTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RMZV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          Sound;                                                   // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ToggleTrackKey
	 * Size -> 0x0008
	 */
	struct FToggleTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ETrackToggleAction                                  ToggleAction;                                            // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1KLF[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.VisibilityTrackKey
	 * Size -> 0x0008
	 */
	struct FVisibilityTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EVisibilityTrackAction                              Action;                                                  // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EVisibilityTrackCondition                           ActiveCondition;                                         // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCEF[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.VectorSpringState
	 * Size -> 0x0018
	 */
	struct FVectorSpringState
	{
	public:
		unsigned char                                              UnknownData_K13H[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.FloatSpringState
	 * Size -> 0x0008
	 */
	struct FFloatSpringState
	{
	public:
		unsigned char                                              UnknownData_BXYN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.DrawToRenderTargetContext
	 * Size -> 0x0010
	 */
	struct FDrawToRenderTargetContext
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2O2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.UserActivity
	 * Size -> 0x0018
	 */
	struct FUserActivity
	{
	public:
		class FString                                              ActionName;                                              // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4REF[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.GenericStruct
	 * Size -> 0x0004
	 */
	struct FGenericStruct
	{
	public:
		int                                                        Data;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CollisionProfileName
	 * Size -> 0x0008
	 */
	struct FCollisionProfileName
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TimerHandle
	 * Size -> 0x0008
	 */
	struct FTimerHandle
	{
	public:
		uint64_t                                                   Handle;                                                  // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.DebugFloatHistory
	 * Size -> 0x0020
	 */
	struct FDebugFloatHistory
	{
	public:
		TArray<float>                                              Samples;                                                 // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		float                                                      MaxSamples;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoAdjustMinMax;                                       // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L9YP[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.FormatArgumentData
	 * Size -> 0x0040
	 */
	struct FFormatArgumentData
	{
	public:
		class FString                                              ArgumentName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EFormatArgumentType                                 ArgumentValueType;                                       // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVKZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ArgumentValue;                                           // 0x0018(0x0018) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		int                                                        ArgumentValueInt;                                        // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArgumentValueFloat;                                      // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ETextGender                                         ArgumentValueGender;                                     // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CN63[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LayerActorStats
	 * Size -> 0x0010
	 */
	struct FLayerActorStats
	{
	public:
		class UClass*                                              Type;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Total;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NC1X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.WorldPSCPool
	 * Size -> 0x0058
	 */
	struct FWorldPSCPool
	{
	public:
		TMap<class UParticleSystem*, struct FPSCPool>              WorldParticleSystemPools;                                // 0x0000(0x0050) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SLV0[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LightmassLightSettings
	 * Size -> 0x000C
	 */
	struct FLightmassLightSettings
	{
	public:
		float                                                      IndirectLightingSaturation;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShadowExponent;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAreaShadowsForStationaryLight;                       // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WJ6W[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LightmassPointLightSettings
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FLightmassPointLightSettings : public FLightmassLightSettings
	{
	};

	/**
	 * ScriptStruct Engine.MaterialInput
	 * Size -> 0x000C
	 */
	struct FMaterialInput
	{
	public:
		int                                                        OutputIndex;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ExpressionName;                                          // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ScalarMaterialInput
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FScalarMaterialInput : public FMaterialInput
	{
	};

	/**
	 * ScriptStruct Engine.VectorMaterialInput
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVectorMaterialInput : public FMaterialInput
	{
	};

	/**
	 * ScriptStruct Engine.ColorMaterialInput
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FColorMaterialInput : public FMaterialInput
	{
	};

	/**
	 * ScriptStruct Engine.MaterialShadingModelField
	 * Size -> 0x0002
	 */
	struct FMaterialShadingModelField
	{
	public:
		uint16_t                                                   ShadingModelField;                                       // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.MaterialAttributesInput
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FMaterialAttributesInput : public FExpressionInput
	{
	public:
		int                                                        PropertyConnectedBitmask;                                // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ShadingModelMaterialInput
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FShadingModelMaterialInput : public FMaterialInput
	{
	};

	/**
	 * ScriptStruct Engine.MaterialFunctionInfo
	 * Size -> 0x0018
	 */
	struct FMaterialFunctionInfo
	{
	public:
		struct FGuid                                               StateId;                                                 // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialFunctionInterface*                          Function;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MaterialParameterCollectionInfo
	 * Size -> 0x0018
	 */
	struct FMaterialParameterCollectionInfo
	{
	public:
		struct FGuid                                               StateId;                                                 // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialParameterCollection*                        ParameterCollection;                                     // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MaterialSpriteElement
	 * Size -> 0x0028
	 */
	struct FMaterialSpriteElement
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         DistanceToOpacityCurve;                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSizeIsInScreenSpace : 1;                                // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T41G[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseSizeX;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseSizeY;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H9AF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DistanceToSizeCurve;                                     // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CustomInput
	 * Size -> 0x001C
	 */
	struct FCustomInput
	{
	public:
		class FName                                                InputName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FExpressionInput                                    Input;                                                   // 0x0008(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQUR[0x8];                                   // 0x0014(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.RigTransformConstraint
	 * Size -> 0x0010
	 */
	struct FRigTransformConstraint
	{
	public:
		Engine_EConstraintTransform                                TranformType;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJQK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParentSpace;                                             // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TransformBaseConstraint
	 * Size -> 0x0010
	 */
	struct FTransformBaseConstraint
	{
	public:
		TArray<struct FRigTransformConstraint>                     TransformConstraints;                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TransformBase
	 * Size -> 0x0028
	 */
	struct FTransformBase
	{
	public:
		class FName                                                Node;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransformBaseConstraint                            Constraints[0x2];                                        // 0x0008(0x0020) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BlueprintComponentDelegateBinding
	 * Size -> 0x0018
	 */
	struct FBlueprintComponentDelegateBinding
	{
	public:
		class FName                                                ComponentPropertyName;                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DelegatePropertyName;                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionNameToBind;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StatColorMapEntry
	 * Size -> 0x0008
	 */
	struct FStatColorMapEntry
	{
	public:
		float                                                      In;                                                      // 0x0000(0x0004) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Out;                                                     // 0x0004(0x0004) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StatColorMapping
	 * Size -> 0x0028
	 */
	struct FStatColorMapping
	{
	public:
		class FString                                              StatName;                                                // 0x0000(0x0010) ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStatColorMapEntry>                          ColorMap;                                                // 0x0010(0x0010) ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic
		unsigned char                                              DisableBlend : 1;                                        // 0x0020(0x0001) BIT_FIELD Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6L8[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.GameNameRedirect
	 * Size -> 0x0010
	 */
	struct FGameNameRedirect
	{
	public:
		class FName                                                OldGameName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NewGameName;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ClassRedirect
	 * Size -> 0x003C
	 */
	struct FClassRedirect
	{
	public:
		class FName                                                ObjectName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OldClassName;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NewClassName;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OldSubobjName;                                           // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NewSubobjName;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NewClassClass;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NewClassPackage;                                         // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InstanceOnly;                                            // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDY6[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PluginRedirect
	 * Size -> 0x0020
	 */
	struct FPluginRedirect
	{
	public:
		class FString                                              OldPluginName;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NewPluginName;                                           // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StructRedirect
	 * Size -> 0x0010
	 */
	struct FStructRedirect
	{
	public:
		class FName                                                OldStructName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NewStructName;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.DropNoteInfo
	 * Size -> 0x0028
	 */
	struct FDropNoteInfo
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              Comment;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NetDriverDefinition
	 * Size -> 0x0018
	 */
	struct FNetDriverDefinition
	{
	public:
		class FName                                                DefName;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DriverClassName;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DriverClassNameFallback;                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.DebugDisplayProperty
	 * Size -> 0x0020
	 */
	struct FDebugDisplayProperty
	{
	public:
		class UObject*                                             Obj;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              WithinClass;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0B18[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CullDistanceSizePair
	 * Size -> 0x0008
	 */
	struct FCullDistanceSizePair
	{
	public:
		float                                                      Size;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CullDistance;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NamedCurveValue
	 * Size -> 0x000C
	 */
	struct FNamedCurveValue
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TableRowBase
	 * Size -> 0x0008
	 */
	struct FTableRowBase
	{
	public:
		unsigned char                                              UnknownData_GT3S[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
	 * Size -> 0x0010
	 */
	struct FDebugCameraControllerSettingsViewModeIndex
	{
	public:
		unsigned char                                              UnknownData_DCYK[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_EViewModeIndex                                      ViewModeIndex;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TLCD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.DebugTextInfo
	 * Size -> 0x0060
	 */
	struct FDebugTextInfo
	{
	public:
		class AActor*                                              SrcActor;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SrcActorOffset;                                          // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SrcActorDesiredOffset;                                   // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DebugText;                                               // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeRemaining;                                           // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              TextColor;                                               // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAbsoluteLocation : 1;                                   // 0x003C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bKeepAttachedToActor : 1;                                // 0x003C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawShadow : 1;                                         // 0x003C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OUJ[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OrigActorLocation;                                       // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29B2[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFont*                                               Font;                                                    // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FontScale;                                               // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZJU[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.RollbackNetStartupActorInfo
	 * Size -> 0x00A0
	 */
	struct FRollbackNetStartupActorInfo
	{
	public:
		unsigned char                                              UnknownData_ZSJZ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Archetype;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJM2[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevel*                                              Level;                                                   // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CN8[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     ObjReferences;                                           // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MulticastRecordOptions
	 * Size -> 0x0018
	 */
	struct FMulticastRecordOptions
	{
	public:
		class FString                                              FuncPathName;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bServerSkip;                                             // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClientSkip;                                             // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WLCM[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.TextureLODGroup
	 * Size -> 0x0054
	 */
	struct FTextureLODGroup
	{
	public:
		Engine_ETextureGroup                                       Group;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3D4N[0xB];                                   // 0x0001(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        LODBias;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LODBias_Smaller;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LODBias_Smallest;                                        // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X5HJ[0x4];                                   // 0x0018(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        NumStreamedMips;                                         // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ETextureMipGenSettings                              MipGenSettings;                                          // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C8SS[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        MinLODSize;                                              // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxLODSize;                                              // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxLODSize_Smaller;                                      // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxLODSize_Smallest;                                     // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        OptionalLODBias;                                         // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        OptionalMaxLODSize;                                      // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWMF[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MinMagFilter;                                            // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MipFilter;                                               // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ETextureMipLoadOptions                              MipLoadOptions;                                          // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZNI[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.DialogueContextMapping
	 * Size -> 0x0038
	 */
	struct FDialogueContextMapping
	{
	public:
		struct FDialogueContext                                    Context;                                                 // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class USoundWave*                                          SoundWave;                                               // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LocalizationKeyFormat;                                   // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogueSoundWaveProxy*                             Proxy;                                                   // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.LightmassDirectionalLightSettings
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
	{
	public:
		float                                                      LightSourceAngle;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.EdGraphTerminalType
	 * Size -> 0x001C
	 */
	struct FEdGraphTerminalType
	{
	public:
		class FName                                                TerminalCategory;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TerminalSubCategory;                                     // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              TerminalSubCategoryObject;                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTerminalIsConst;                                        // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTerminalIsWeakPointer;                                  // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YFLA[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.EdGraphPinType
	 * Size -> 0x0058
	 */
	struct FEdGraphPinType
	{
	public:
		class FName                                                PinCategory;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PinSubCategory;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              PinSubCategoryObject;                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSimpleMemberReference                              PinSubCategoryMemberReference;                           // 0x0018(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FEdGraphTerminalType                                PinValueType;                                            // 0x0038(0x001C) NoDestructor, NativeAccessSpecifierPublic
		Engine_EPinContainerType                                   ContainerType;                                           // 0x0054(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsArray : 1;                                            // 0x0055(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bIsReference : 1;                                        // 0x0055(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsConst : 1;                                            // 0x0055(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsWeakPointer : 1;                                      // 0x0055(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OAMF[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ExponentialHeightFogData
	 * Size -> 0x000C
	 */
	struct FExponentialHeightFogData
	{
	public:
		float                                                      FogDensity;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogHeightFalloff;                                        // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogHeightOffset;                                         // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.FontCharacter
	 * Size -> 0x0018
	 */
	struct FFontCharacter
	{
	public:
		int                                                        StartU;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        StartV;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        USize;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        VSize;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TextureIndex;                                            // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6W9Y[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        VerticalOffset;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.FontImportOptionsData
	 * Size -> 0x00B0
	 */
	struct FFontImportOptionsData
	{
	public:
		class FString                                              FontName;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableAntialiasing : 1;                                 // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableBold : 1;                                         // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableItalic : 1;                                       // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableUnderline : 1;                                    // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlphaOnly : 1;                                          // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MINB[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_EFontImportCharacterSet                             CharacterSet;                                            // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F8KI[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Chars;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnicodeRange;                                            // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharsFilePath;                                           // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharsFileWildcard;                                       // 0x0050(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCreatePrintableOnly : 1;                                // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIncludeASCIIRange : 1;                                  // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AJIJ[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ForegroundColor;                                         // 0x0064(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableDropShadow : 1;                                   // 0x0074(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1DP[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        TexturePageWidth;                                        // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        TexturePageMaxHeight;                                    // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        XPadding;                                                // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        YPadding;                                                // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ExtendBoxTop;                                            // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ExtendBoxBottom;                                         // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ExtendBoxRight;                                          // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ExtendBoxLeft;                                           // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableLegacyMode : 1;                                   // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E460[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        Kerning;                                                 // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseDistanceFieldAlpha : 1;                              // 0x00A0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1EAH[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        DistanceFieldScaleFactor;                                // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceFieldScanRadiusScale;                            // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAW2[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ForceFeedbackAttenuationSettings
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings
	{
	};

	/**
	 * ScriptStruct Engine.ForceFeedbackChannelDetails
	 * Size -> 0x0090
	 */
	struct FForceFeedbackChannelDetails
	{
	public:
		unsigned char                                              bAffectsLeftLarge : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectsLeftSmall : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectsRightLarge : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectsRightSmall : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z19Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PredictProjectilePathParams
	 * Size -> 0x0060
	 */
	struct FPredictProjectilePathParams
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LaunchVelocity;                                          // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceWithCollision;                                     // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUXT[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProjectileRadius;                                        // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSimTime;                                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceWithChannel;                                       // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionChannel                                   TraceChannel;                                            // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FP1V[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<Engine_EObjectTypeQuery>                            ObjectTypes;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		float                                                      SimFrequency;                                            // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverrideGravityZ;                                        // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EDrawDebugTrace                                     DrawDebugType;                                           // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UU9[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrawDebugTime;                                           // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceComplex;                                           // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYTY[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PredictProjectilePathPointData
	 * Size -> 0x001C
	 */
	struct FPredictProjectilePathPointData
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PredictProjectilePathResult
	 * Size -> 0x00B8
	 */
	struct FPredictProjectilePathResult
	{
	public:
		TArray<struct FPredictProjectilePathPointData>             PathData;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FPredictProjectilePathPointData                     LastTraceDestination;                                    // 0x0010(0x001C) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FHitResult                                          HitResult;                                               // 0x002C(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8PB7[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.HapticFeedbackDetails_Curve
	 * Size -> 0x0110
	 */
	struct FHapticFeedbackDetails_Curve
	{
	public:
		struct FRuntimeFloatCurve                                  Frequency;                                               // 0x0000(0x0088) Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  Amplitude;                                               // 0x0088(0x0088) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.HLODProxyMesh
	 * Size -> 0x0030
	 */
	struct FHLODProxyMesh
	{
	public:
		TLazyObjectPtr<class ALODActor>                            LODActor;                                                // 0x0000(0x001C) Edit, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S58D[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0020(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                Key;                                                     // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.BlueprintInputAxisDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0014] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		class FName                                                InputAxisName;                                           // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionNameToBind;                                      // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
	 * Size -> 0x0024 (FullSize[0x0028] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		unsigned char                                              UnknownData_A997[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                AxisKey;                                                 // 0x0008(0x0018) HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionNameToBind;                                      // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CachedKeyToActionInfo
	 * Size -> 0x0070
	 */
	struct FCachedKeyToActionInfo
	{
	public:
		class UPlayerInput*                                        PlayerInput;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HYTQ[0x68];                                  // 0x0008(0x0068) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BlueprintInputKeyDelegateBinding
	 * Size -> 0x0034 (FullSize[0x0038] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		unsigned char                                              UnknownData_XPRY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputChord                                         InputChord;                                              // 0x0008(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EInputEvent                                         InputKeyEvent;                                           // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AEIX[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JF72[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.InputAxisProperties
	 * Size -> 0x0010
	 */
	struct FInputAxisProperties
	{
	public:
		float                                                      DeadZone;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Sensitivity;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Exponent;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInvert : 1;                                             // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULGB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.InputAxisConfigEntry
	 * Size -> 0x0018
	 */
	struct FInputAxisConfigEntry
	{
	public:
		class FName                                                AxisKeyName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputAxisProperties                                AxisProperties;                                          // 0x0008(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.InputActionKeyMapping
	 * Size -> 0x0028
	 */
	struct FInputActionKeyMapping
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShift : 1;                                              // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCtrl : 1;                                               // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlt : 1;                                                // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCmd : 1;                                                // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AA8H[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                Key;                                                     // 0x0010(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.InputAxisKeyMapping
	 * Size -> 0x0028
	 */
	struct FInputAxisKeyMapping
	{
	public:
		class FName                                                AxisName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3R8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                Key;                                                     // 0x0010(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.InputActionSpeechMapping
	 * Size -> 0x0010
	 */
	struct FInputActionSpeechMapping
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                SpeechKeyword;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.BlueprintInputTouchDelegateBinding
	 * Size -> 0x000C (FullSize[0x0010] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		Engine_EInputEvent                                         InputKeyEvent;                                           // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A993[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ChildActorAttachedActorInfo
	 * Size -> 0x0040
	 */
	struct FChildActorAttachedActorInfo
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          RelativeTransform;                                       // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ChildActorComponentInstanceData
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	struct FChildActorComponentInstanceData : public FSceneComponentInstanceData
	{
	public:
		class FName                                                ChildActorName;                                          // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FChildActorAttachedActorInfo>                AttachedActors;                                          // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CVZ5[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AutoCompleteNode
	 * Size -> 0x0028
	 */
	struct FAutoCompleteNode
	{
	public:
		int                                                        IndexChar;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G5TO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int>                                                AutoCompleteListIndices;                                 // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JW4Q[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.RuntimeCurveLinearColor
	 * Size -> 0x0208
	 */
	struct FRuntimeCurveLinearColor
	{
	public:
		struct FRichCurve                                          ColorCurves[0x4];                                        // 0x0000(0x0200) NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   ExternalCurve;                                           // 0x0200(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CurveTableRowHandle
	 * Size -> 0x0010
	 */
	struct FCurveTableRowHandle
	{
	public:
		class UCurveTable*                                         CurveTable;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RowName;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.DataTableCategoryHandle
	 * Size -> 0x0018
	 */
	struct FDataTableCategoryHandle
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ColumnName;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RowContents;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.DataTableRowHandle
	 * Size -> 0x0010
	 */
	struct FDataTableRowHandle
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RowName;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.LevelNameAndTime
	 * Size -> 0x0018
	 */
	struct FLevelNameAndTime
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   LevelChangeTimeInMS;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UJNE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.GraphReference
	 * Size -> 0x0020
	 */
	struct FGraphReference
	{
	public:
		class UEdGraph*                                            MacroGraph;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBlueprint*                                          GraphBlueprint;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               GraphGuid;                                               // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct Engine.EdGraphPinReference
	 * Size -> 0x0018
	 */
	struct FEdGraphPinReference
	{
	public:
		TWeakObjectPtr<class UEdGraphNode>                         OwningNode;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               PinId;                                                   // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.EdGraphSchemaAction
	 * Size -> 0x0100
	 */
	struct FEdGraphSchemaAction
	{
	public:
		unsigned char                                              UnknownData_IOEN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                MenuDescription;                                         // 0x0008(0x0018) NativeAccessSpecifierPrivate
		class FText                                                TooltipDescription;                                      // 0x0020(0x0018) NativeAccessSpecifierPrivate
		class FText                                                Category;                                                // 0x0038(0x0018) NativeAccessSpecifierPrivate
		class FText                                                Keywords;                                                // 0x0050(0x0018) NativeAccessSpecifierPrivate
		int                                                        Grouping;                                                // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SectionID;                                               // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      MenuDescriptionArray;                                    // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      FullSearchTitlesArray;                                   // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      FullSearchKeywordsArray;                                 // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      FullSearchCategoryArray;                                 // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      LocalizedMenuDescriptionArray;                           // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      LocalizedFullSearchTitlesArray;                          // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      LocalizedFullSearchKeywordsArray;                        // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      LocalizedFullSearchCategoryArray;                        // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              SearchText;                                              // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.EdGraphSchemaAction_NewNode
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
	{
	public:
		class UEdGraphNode*                                        NodeTemplate;                                            // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ScreenMessageString
	 * Size -> 0x0030
	 */
	struct FScreenMessageString
	{
	public:
		uint64_t                                                   Key;                                                     // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ScreenMessage;                                           // 0x0008(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              DisplayColor;                                            // 0x0018(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToDisplay;                                           // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentTimeDisplayed;                                    // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           TextScale;                                               // 0x0024(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04ZS[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.URL
	 * Size -> 0x0068
	 */
	struct FURL
	{
	public:
		class FString                                              Protocol;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Host;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Port;                                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Valid;                                                   // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Map;                                                     // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RedirectURL;                                             // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Op;                                                      // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Portal;                                                  // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.FullyLoadedPackagesInfo
	 * Size -> 0x0038
	 */
	struct FFullyLoadedPackagesInfo
	{
	public:
		Engine_EFullyLoadPackageType                               FullyLoadType;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QWWC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Tag;                                                     // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        PackagesToLoad;                                          // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     LoadedObjects;                                           // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.LevelStreamingStatus
	 * Size -> 0x0010
	 */
	struct FLevelStreamingStatus
	{
	public:
		class FName                                                PackageName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShouldBeLoaded : 1;                                     // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShouldBeVisible : 1;                                    // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8F9S[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   LODIndex;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NamedNetDriver
	 * Size -> 0x0010
	 */
	struct FNamedNetDriver
	{
	public:
		class UNetDriver*                                          NetDriver;                                               // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DI85[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CurveEdEntry
	 * Size -> 0x0038
	 */
	struct FCurveEdEntry
	{
	public:
		class UObject*                                             CurveObject;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              CurveColor;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GBQO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurveName;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        bHideCurve;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        bColorCurve;                                             // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        bFloatingPointColorCurve;                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        bClamp;                                                  // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampLow;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampHigh;                                               // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CurveEdTab
	 * Size -> 0x0030
	 */
	struct FCurveEdTab
	{
	public:
		class FString                                              TabName;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCurveEdEntry>                               Curves;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ViewStartInput;                                          // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ViewEndInput;                                            // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ViewStartOutput;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ViewEndOutput;                                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.InterpControlPoint
	 * Size -> 0x001C
	 */
	struct FInterpControlPoint
	{
	public:
		struct FVector                                             PositionControlPoint;                                    // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPositionIsRelative;                                     // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H48N[0xF];                                   // 0x000D(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimControlTrackKey
	 * Size -> 0x0020
	 */
	struct FAnimControlTrackKey
	{
	public:
		float                                                      StartTime;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHY9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       AnimSeq;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimStartOffset;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimEndOffset;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimPlayRate;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLooping : 1;                                            // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReverse : 1;                                            // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSI0[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BoolTrackKey
	 * Size -> 0x0008
	 */
	struct FBoolTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Value : 1;                                               // 0x0004(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KIYX[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.DirectorTrackCut
	 * Size -> 0x0014
	 */
	struct FDirectorTrackCut
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransitionTime;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TargetCamGroup;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ShotNumber;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.EventTrackKey
	 * Size -> 0x000C
	 */
	struct FEventTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EventName;                                               // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PrimitiveMaterialRef
	 * Size -> 0x0018
	 */
	struct FPrimitiveMaterialRef
	{
	public:
		class UPrimitiveComponent*                                 Primitive;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDecalComponent*                                     Decal;                                                   // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ElementIndex;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TAU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ParticleReplayTrackKey
	 * Size -> 0x000C
	 */
	struct FParticleReplayTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ClipIDNumber;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
	 * Size -> 0x0038
	 */
	struct FReplicatedStaticActorDestructionInfo
	{
	public:
		unsigned char                                              UnknownData_TFIJ[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ObjClass;                                                // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.StreamingLevelsToConsider
	 * Size -> 0x0028
	 */
	struct FStreamingLevelsToConsider
	{
	public:
		TArray<struct FLevelStreamingWrapper>                      StreamingLevels;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FSJS[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CollectionParameterBase
	 * Size -> 0x0018
	 */
	struct FCollectionParameterBase
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ID;                                                      // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CollectionScalarParameter
	 * Size -> 0x0004 (FullSize[0x001C] - InheritedSize[0x0018])
	 */
	struct FCollectionScalarParameter : public FCollectionParameterBase
	{
	public:
		float                                                      DefaultValue;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CollectionVectorParameter
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FCollectionVectorParameter : public FCollectionParameterBase
	{
	public:
		struct FLinearColor                                        DefaultValue;                                            // 0x0018(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.InterpGroupActorInfo
	 * Size -> 0x0018
	 */
	struct FInterpGroupActorInfo
	{
	public:
		class FName                                                ObjectName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      Actors;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CameraCutInfo
	 * Size -> 0x0010
	 */
	struct FCameraCutInfo
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Timestamp;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PurchaseInfo
	 * Size -> 0x0040
	 */
	struct FPurchaseInfo
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayDescription;                                      // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayPrice;                                            // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NavAgentSelector
	 * Size -> 0x0004
	 */
	struct FNavAgentSelector
	{
	public:
		unsigned char                                              bSupportsAgent0 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent1 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent2 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent3 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent4 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent5 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent6 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent7 : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent8 : 1;                                     // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent9 : 1;                                     // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent10 : 1;                                    // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent11 : 1;                                    // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent12 : 1;                                    // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent13 : 1;                                    // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent14 : 1;                                    // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent15 : 1;                                    // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJ2E[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.NavigationLinkBase
	 * Size -> 0x0038
	 */
	struct FNavigationLinkBase
	{
	public:
		float                                                      LeftProjectHeight;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFallDownLength;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ENavLinkDirection                                   Direction;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9YB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SnapRadius;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SnapHeight;                                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNavAgentSelector                                   SupportedAgents;                                         // 0x0018(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent0 : 1;                                     // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent1 : 1;                                     // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent2 : 1;                                     // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent3 : 1;                                     // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent4 : 1;                                     // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent5 : 1;                                     // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent6 : 1;                                     // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent7 : 1;                                     // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent8 : 1;                                     // 0x001D(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent9 : 1;                                     // 0x001D(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent10 : 1;                                    // 0x001D(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent11 : 1;                                    // 0x001D(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent12 : 1;                                    // 0x001D(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent13 : 1;                                    // 0x001D(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent14 : 1;                                    // 0x001D(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent15 : 1;                                    // 0x001D(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6ZP[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bUseSnapHeight : 1;                                      // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSnapToCheapestArea : 1;                                 // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCustomFlag0 : 1;                                        // 0x0020(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCustomFlag1 : 1;                                        // 0x0020(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCustomFlag2 : 1;                                        // 0x0020(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCustomFlag3 : 1;                                        // 0x0020(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCustomFlag4 : 1;                                        // 0x0020(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCustomFlag5 : 1;                                        // 0x0020(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCustomFlag6 : 1;                                        // 0x0021(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCustomFlag7 : 1;                                        // 0x0021(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NQDO[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AreaClass;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UQK6[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.NavigationLink
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	struct FNavigationLink : public FNavigationLinkBase
	{
	public:
		struct FVector                                             Left;                                                    // 0x0038(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Right;                                                   // 0x0044(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NavigationSegmentLink
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	struct FNavigationSegmentLink : public FNavigationLinkBase
	{
	public:
		struct FVector                                             LeftStart;                                               // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeftEnd;                                                 // 0x0044(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RightStart;                                              // 0x0050(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RightEnd;                                                // 0x005C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NodeItem
	 * Size -> 0x0040
	 */
	struct FNodeItem
	{
	public:
		class FName                                                ParentName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6C2I[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.DistributionLookupTable
	 * Size -> 0x0028
	 */
	struct FDistributionLookupTable
	{
	public:
		unsigned char                                              Op;                                                      // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EntryCount;                                              // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EntryStride;                                             // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SubEntryStride;                                          // 0x0003(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeScale;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBias;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E01Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Values;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              LockFlag;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KCL6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.RawDistribution
	 * Size -> 0x0028
	 */
	struct FRawDistribution
	{
	public:
		struct FDistributionLookupTable                            Table;                                                   // 0x0000(0x0028) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RawDistributionVector
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FRawDistributionVector : public FRawDistribution
	{
	public:
		float                                                      MinValue;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxValue;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             MinValueVec;                                             // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             MaxValueVec;                                             // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDistributionVector*                                 Distribution;                                            // 0x0048(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RawDistributionFloat
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRawDistributionFloat : public FRawDistribution
	{
	public:
		float                                                      MinValue;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxValue;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDistributionFloat*                                  Distribution;                                            // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BeamModifierOptions
	 * Size -> 0x0004
	 */
	struct FBeamModifierOptions
	{
	public:
		unsigned char                                              bModify : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bScale : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLock : 1;                                               // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F7U8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ParticleRandomSeedInfo
	 * Size -> 0x0020
	 */
	struct FParticleRandomSeedInfo
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGetSeedFromInstance : 1;                                // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInstanceSeedIsIndex : 1;                                // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bResetSeedOnEmitterLooping : 1;                          // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRandomlySelectSeedArray : 1;                            // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2P37[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int>                                                RandomSeeds;                                             // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ParticleEvent_GenerateInfo
	 * Size -> 0x0028
	 */
	struct FParticleEvent_GenerateInfo
	{
	public:
		Engine_EParticleEventType                                  Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9AZR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        Frequency;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ParticleFrequency;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FirstTimeOnly : 1;                                       // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LastTimeOnly : 1;                                        // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UseReflectedImpactVector : 1;                            // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseOrbitOffset : 1;                                     // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4MR[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CustomName;                                              // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UParticleModuleEventSendToGame*>              ParticleModuleEventsToSendToGame;                        // 0x0018(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CollectionReference
	 * Size -> 0x0008
	 */
	struct FCollectionReference
	{
	public:
		class FName                                                CollectionName;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.Node
	 * Size -> 0x0060
	 */
	struct FNode
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ParentName;                                              // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdvanced;                                               // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BAQY[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BPVariableMetaDataEntry
	 * Size -> 0x0018
	 */
	struct FBPVariableMetaDataEntry
	{
	public:
		class FName                                                DataKey;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DataValue;                                               // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SkeletalMaterial
	 * Size -> 0x0028
	 */
	struct FSkeletalMaterial
	{
	public:
		class UMaterialInterface*                                  MaterialInterface;                                       // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MaterialSlotName;                                        // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMeshUVChannelInfo                                  UVChannelData;                                           // 0x0010(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OO5B[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BoneMirrorInfo
	 * Size -> 0x0008
	 */
	struct FBoneMirrorInfo
	{
	public:
		int                                                        SourceIndex;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		CoreUObject_EAxis                                          BoneFlipAxis;                                            // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWJ3[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SkeletalMeshOptimizationSettings
	 * Size -> 0x003C
	 */
	struct FSkeletalMeshOptimizationSettings
	{
	public:
		Engine_ESkeletalMeshTerminationCriterion                   TerminationCriterion;                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H13U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NumOfTrianglesPercentage;                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NumOfVertPercentage;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxNumOfTriangles;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxNumOfVerts;                                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDeviationPercentage;                                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ESkeletalMeshOptimizationType                       ReductionMethod;                                         // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ESkeletalMeshOptimizationImportance                 SilhouetteImportance;                                    // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ESkeletalMeshOptimizationImportance                 TextureImportance;                                       // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ESkeletalMeshOptimizationImportance                 ShadingImportance;                                       // 0x001B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ESkeletalMeshOptimizationImportance                 SkinningImportance;                                      // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRemapMorphTargets : 1;                                  // 0x001D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRecalcNormals : 1;                                      // 0x001D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5G6F[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeldingThreshold;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalsThreshold;                                        // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxBonesPerVertex;                                       // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnforceBoneBoundaries : 1;                              // 0x002C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AWL7[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumeImportance;                                        // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLockEdges : 1;                                          // 0x0034(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HYVT[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        BaseLOD;                                                 // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SkeletalMeshLODInfo
	 * Size -> 0x00A8
	 */
	struct FSkeletalMeshLODInfo
	{
	public:
		struct FPerPlatformFloat                                   ScreenSize;                                              // 0x0000(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LODHysteresis;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int>                                                LODMaterialMap;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FSkeletalMeshOptimizationSettings                   ReductionSettings;                                       // 0x0018(0x003C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NAG[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneReference>                              BonesToRemove;                                           // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              BonesToPrioritize;                                       // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      WeightOfPrioritization;                                  // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OYI[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       BakePose;                                                // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       BakePoseOverride;                                        // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SourceImportFilename;                                    // 0x0090(0x0010) Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHasBeenSimplified : 1;                                  // 0x00A0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHasPerLODVertexColors : 1;                              // 0x00A0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowCPUAccess : 1;                                     // 0x00A0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportUniformlyDistributedSampling : 1;                // 0x00A0(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKLZ[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PerPlatformInt
	 * Size -> 0x0004
	 */
	struct FPerPlatformInt
	{
	public:
		int                                                        Default;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PerPlatformBool
	 * Size -> 0x0001
	 */
	struct FPerPlatformBool
	{
	public:
		bool                                                       Default;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SkinWeightProfileInfo
	 * Size -> 0x0010
	 */
	struct FSkinWeightProfileInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerPlatformBool                                    DefaultProfile;                                          // 0x0008(0x0001) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FPG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPerPlatformInt                                     DefaultProfileFromLODIndex;                              // 0x000C(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BoneFilter
	 * Size -> 0x000C
	 */
	struct FBoneFilter
	{
	public:
		bool                                                       bExcludeSelf;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_152A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BoneName;                                                // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SkeletalMeshLODGroupSettings
	 * Size -> 0x0080
	 */
	struct FSkeletalMeshLODGroupSettings
	{
	public:
		struct FPerPlatformFloat                                   ScreenSize;                                              // 0x0000(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LODHysteresis;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBoneFilterActionOption                             BoneFilterActionOption;                                  // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EYY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneFilter>                                 BoneList;                                                // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        BonesToPrioritize;                                       // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      WeightOfPrioritization;                                  // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BB38[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       BakePose;                                                // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSkeletalMeshOptimizationSettings                   ReductionSettings;                                       // 0x0040(0x003C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NQP[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LocationBoneSocketInfo
	 * Size -> 0x0014
	 */
	struct FLocationBoneSocketInfo
	{
	public:
		class FName                                                BoneSocketName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Offset;                                                  // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.OrbitOptions
	 * Size -> 0x0004
	 */
	struct FOrbitOptions
	{
	public:
		unsigned char                                              bProcessDuringSpawn : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bProcessDuringUpdate : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseEmitterTime : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5JZ5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.EmitterDynamicParameter
	 * Size -> 0x0050
	 */
	struct FEmitterDynamicParameter
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseEmitterTime : 1;                                     // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSpawnTimeOnly : 1;                                      // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L8ZZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_EEmitterDynamicParameterValue                       ValueMethod;                                             // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IVE4[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bScaleVelocityByParamValue : 1;                          // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K4FY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRawDistributionFloat                               ParamValue;                                              // 0x0018(0x0038) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ParticleBurst
	 * Size -> 0x000C
	 */
	struct FParticleBurst
	{
	public:
		int                                                        Count;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        CountLow;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
	 * Size -> 0x0070
	 */
	struct FGPUSpriteLocalVectorFieldInfo
	{
	public:
		class UVectorField*                                        Field;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2R1N[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            MinInitialRotation;                                      // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            MaxInitialRotation;                                      // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            RotationRate;                                            // 0x0058(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tightness;                                               // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreComponentTransform : 1;                           // 0x006C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTileX : 1;                                              // 0x006C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTileY : 1;                                              // 0x006C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTileZ : 1;                                              // 0x006C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseFixDT : 1;                                           // 0x006C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5DA[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.FloatDistribution
	 * Size -> 0x0028
	 */
	struct FFloatDistribution
	{
	public:
		struct FDistributionLookupTable                            Table;                                                   // 0x0000(0x0028) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.GPUSpriteEmitterInfo
	 * Size -> 0x02C0
	 */
	struct FGPUSpriteEmitterInfo
	{
	public:
		class UParticleModuleRequired*                             RequiredModule;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleModuleSpawn*                                SpawnModule;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleModuleSpawnPerUnit*                         SpawnPerUnitModule;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UParticleModule*>                             SpawnModules;                                            // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YB3R[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGPUSpriteLocalVectorFieldInfo                      LocalVectorField;                                        // 0x0030(0x0070) NoDestructor, NativeAccessSpecifierPublic
		struct FFloatDistribution                                  VectorFieldScale;                                        // 0x00A0(0x0028) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatDistribution                                  DragCoefficient;                                         // 0x00C8(0x0028) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatDistribution                                  PointAttractorStrength;                                  // 0x00F0(0x0028) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatDistribution                                  Resilience;                                              // 0x0118(0x0028) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ConstantAcceleration;                                    // 0x0140(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PointAttractorPosition;                                  // 0x014C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointAttractorRadiusSq;                                  // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OrbitOffsetBase;                                         // 0x015C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OrbitOffsetRange;                                        // 0x0168(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           InvMaxSize;                                              // 0x0174(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InvRotationRateScale;                                    // 0x017C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLifetime;                                             // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxParticleCount;                                        // 0x0184(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EParticleScreenAlignment                            ScreenAlignment;                                         // 0x0188(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EParticleAxisLock                                   LockAxisFlag;                                            // 0x0189(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7Y2D[0x2];                                   // 0x018A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bEnableCollision : 1;                                    // 0x018C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMDU[0x3];                                   // 0x018D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_EParticleCollisionMode                              CollisionMode;                                           // 0x0190(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RH8Y[0x3];                                   // 0x0191(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bRemoveHMDRoll : 1;                                      // 0x0194(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RNS[0x3];                                   // 0x0195(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinFacingCameraBlendDistance;                            // 0x0198(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFacingCameraBlendDistance;                            // 0x019C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRawDistributionVector                              DynamicColor;                                            // 0x01A0(0x0050) ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRawDistributionFloat                               DynamicAlpha;                                            // 0x01F0(0x0038) ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRawDistributionVector                              DynamicColorScale;                                       // 0x0228(0x0050) ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRawDistributionFloat                               DynamicAlphaScale;                                       // 0x0278(0x0038) ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNR2[0x10];                                  // 0x02B0(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.GPUSpriteResourceData
	 * Size -> 0x0160
	 */
	struct FGPUSpriteResourceData
	{
	public:
		TArray<struct FColor>                                      QuantizedColorSamples;                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FColor>                                      QuantizedMiscSamples;                                    // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FColor>                                      QuantizedSimulationAttrSamples;                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector4                                            ColorScale;                                              // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorBias;                                               // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            MiscScale;                                               // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            MiscBias;                                                // 0x0060(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            SimulationAttrCurveScale;                                // 0x0070(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            SimulationAttrCurveBias;                                 // 0x0080(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            SubImageSize;                                            // 0x0090(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            SizeBySpeed;                                             // 0x00A0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ConstantAcceleration;                                    // 0x00B0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OrbitOffsetBase;                                         // 0x00BC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OrbitOffsetRange;                                        // 0x00C8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OrbitFrequencyBase;                                      // 0x00D4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OrbitFrequencyRange;                                     // 0x00E0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OrbitPhaseBase;                                          // 0x00EC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OrbitPhaseRange;                                         // 0x00F8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlobalVectorFieldScale;                                  // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlobalVectorFieldTightness;                              // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerParticleVectorFieldScale;                             // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerParticleVectorFieldBias;                              // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragCoefficientScale;                                    // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragCoefficientBias;                                     // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ResilienceScale;                                         // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ResilienceBias;                                          // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionRadiusScale;                                    // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionRadiusBias;                                     // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionTimeBias;                                       // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionRandomSpread;                                   // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionRandomDistribution;                             // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OneMinusFriction;                                        // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationRateScale;                                       // 0x013C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraMotionBlurAmount;                                  // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EParticleScreenAlignment                            ScreenAlignment;                                         // 0x0144(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EParticleAxisLock                                   LockAxisFlag;                                            // 0x0145(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BUZ[0x2];                                   // 0x0146(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           PivotOffset;                                             // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRemoveHMDRoll : 1;                                      // 0x0150(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F979[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinFacingCameraBlendDistance;                            // 0x0154(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFacingCameraBlendDistance;                            // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q4EA[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ParticleSystemLOD
	 * Size -> 0x0001
	 */
	struct FParticleSystemLOD
	{
	public:
		unsigned char                                              UnknownData_NWDJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LODSoloTrack
	 * Size -> 0x0010
	 */
	struct FLODSoloTrack
	{
	public:
		TArray<unsigned char>                                      SoloEnableSetting;                                       // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NamedEmitterMaterial
	 * Size -> 0x0010
	 */
	struct FNamedEmitterMaterial
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ParticleSysParam
	 * Size -> 0x0080
	 */
	struct FParticleSysParam
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EParticleSysParamType                               ParamType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YA2I[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scalar;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scalar_Low;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vector;                                                  // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vector_Low;                                              // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Actor;                                                   // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Material;                                                // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVA3[0x40];                                  // 0x0040(0x0040) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PhysicalAnimationData
	 * Size -> 0x0024
	 */
	struct FPhysicalAnimationData
	{
	public:
		class FName                                                BodyName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsLocalSimulation : 1;                                  // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8872[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OrientationStrength;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularVelocityStrength;                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositionStrength;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VelocityStrength;                                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLinearForce;                                          // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAngularForce;                                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TireFrictionScalePair
	 * Size -> 0x0010
	 */
	struct FTireFrictionScalePair
	{
	public:
		class UTireType*                                           TireType;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrictionScale;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_101Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PhysicalAnimationProfile
	 * Size -> 0x002C
	 */
	struct FPhysicalAnimationProfile
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPhysicalAnimationData                              PhysicalAnimationData;                                   // 0x0008(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.VirtualTextureSpacePoolConfig
	 * Size -> 0x000C
	 */
	struct FVirtualTextureSpacePoolConfig
	{
	public:
		int                                                        SizeInMegabyte;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        TileSize;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		CoreUObject_EPixelFormat                                   Format;                                                  // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IVF3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.StaticMeshComponentInstanceData
	 * Size -> 0x0040 (FullSize[0x0130] - InheritedSize[0x00F0])
	 */
	struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStaticMeshVertexColorLODData>               VertexColorLODs;                                         // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       CachedStaticLighting;                                    // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FStreamingTextureBuildInfo>                  StreamingTextureData;                                    // 0x0118(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29HX[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.VoiceSettings
	 * Size -> 0x0018
	 */
	struct FVoiceSettings
	{
	public:
		class USceneComponent*                                     ComponentToAttachTo;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundEffectSourcePresetChain*                       SourceEffectChain;                                       // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MaterialProxySettings
	 * Size -> 0x0074
	 */
	struct FMaterialProxySettings
	{
	public:
		struct FIntPoint                                           TextureSize;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GutterSpace;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MetallicConstant;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RoughnessConstant;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpecularConstant;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpacityConstant;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpacityMaskConstant;                                     // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmbientOcclusionConstant;                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ETextureSizingType                                  TextureSizingType;                                       // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EMaterialMergeType                                  MaterialMergeType;                                       // 0x0025(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EBlendMode                                          BlendMode;                                               // 0x0026(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowTwoSidedMaterial : 1;                              // 0x0027(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNormalMap : 1;                                          // 0x0027(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMetallicMap : 1;                                        // 0x0027(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRoughnessMap : 1;                                       // 0x0027(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSpecularMap : 1;                                        // 0x0027(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEmissiveMap : 1;                                        // 0x0027(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOpacityMap : 1;                                         // 0x0027(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOpacityMaskMap : 1;                                     // 0x0027(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAmbientOcclusionMap : 1;                                // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PN77[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           DiffuseTextureSize;                                      // 0x002C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           NormalTextureSize;                                       // 0x0034(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           MetallicTextureSize;                                     // 0x003C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           RoughnessTextureSize;                                    // 0x0044(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           SpecularTextureSize;                                     // 0x004C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           EmissiveTextureSize;                                     // 0x0054(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           OpacityTextureSize;                                      // 0x005C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           OpacityMaskTextureSize;                                  // 0x0064(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           AmbientOcclusionTextureSize;                             // 0x006C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MeshProxySettings
	 * Size -> 0x0094
	 */
	struct FMeshProxySettings
	{
	public:
		int                                                        ScreenSize;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VoxelSize;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMaterialProxySettings                              MaterialSettings;                                        // 0x0008(0x0074) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MergeDistance;                                           // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              UnresolvedGeometryColor;                                 // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRayCastDist;                                          // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HardAngleThreshold;                                      // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LightMapResolution;                                      // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EProxyNormalComputationMethod                       NormalCalculationMethod;                                 // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ELandscapeCullingPrecision                          LandscapeCullingPrecision;                               // 0x0091(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCalculateCorrectLODModel : 1;                           // 0x0092(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideVoxelSize : 1;                                  // 0x0092(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideTransferDistance : 1;                           // 0x0092(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseHardAngleThreshold : 1;                              // 0x0092(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bComputeLightMapResolution : 1;                          // 0x0092(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRecalculateNormals : 1;                                 // 0x0092(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseLandscapeCulling : 1;                                // 0x0092(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowAdjacency : 1;                                     // 0x0092(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowDistanceField : 1;                                 // 0x0093(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReuseMeshLightmapUVs : 1;                               // 0x0093(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCreateCollision : 1;                                    // 0x0093(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowVertexColors : 1;                                  // 0x0093(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGenerateLightmapUVs : 1;                                // 0x0093(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MeshMergingSettings
	 * Size -> 0x008C
	 */
	struct FMeshMergingSettings
	{
	public:
		int                                                        TargetLightMapResolution;                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EUVOutput                                           OutputUVs[0x8];                                          // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMaterialProxySettings                              MaterialSettings;                                        // 0x000C(0x0074) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int                                                        GutterSize;                                              // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SpecificLOD;                                             // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EMeshLODSelectionType                               LODSelectionType;                                        // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGenerateLightMapUV : 1;                                 // 0x0089(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bComputedLightMapResolution : 1;                         // 0x0089(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPivotPointAtZero : 1;                                   // 0x0089(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMergePhysicsData : 1;                                   // 0x0089(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMergeMaterials : 1;                                     // 0x0089(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBakeVertexDataToMesh : 1;                               // 0x0089(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseVertexDataForBakingMaterial : 1;                     // 0x0089(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseTextureBinning : 1;                                  // 0x0089(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReuseMeshLightmapUVs : 1;                               // 0x008A(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMergeEquivalentMaterials : 1;                           // 0x008A(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseLandscapeCulling : 1;                                // 0x008A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIncludeImposters : 1;                                   // 0x008A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowDistanceField : 1;                                 // 0x008A(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKJ6[0x1];                                   // 0x008B(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.HierarchicalSimplification
	 * Size -> 0x0138
	 */
	struct FHierarchicalSimplification
	{
	public:
		float                                                      TransitionScreenSize;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverrideDrawDistance;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseOverrideDrawDistance : 1;                            // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowSpecificExclusion : 1;                             // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSimplifyMesh : 1;                                       // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOnlyGenerateClustersForVolumes : 1;                     // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReusePreviousLevelClusters : 1;                         // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WD5G[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMeshProxySettings                                  ProxySetting;                                            // 0x000C(0x0094) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FMeshMergingSettings                                MergeSetting;                                            // 0x00A0(0x008C) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		float                                                      DesiredBoundRadius;                                      // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DesiredFillingPercentage;                                // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MinNumberOfActorsToBuild;                                // 0x0134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.NetViewer
	 * Size -> 0x0030
	 */
	struct FNetViewer
	{
	public:
		class UNetConnection*                                      Connection;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              InViewer;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ViewTarget;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ViewLocation;                                            // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ViewDir;                                                 // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.VectorDistribution
	 * Size -> 0x0028
	 */
	struct FVectorDistribution
	{
	public:
		struct FDistributionLookupTable                            Table;                                                   // 0x0000(0x0028) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.Vector4Distribution
	 * Size -> 0x0028
	 */
	struct FVector4Distribution
	{
	public:
		struct FDistributionLookupTable                            Table;                                                   // 0x0000(0x0028) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.FloatRK4SpringInterpolator
	 * Size -> 0x0008
	 */
	struct FFloatRK4SpringInterpolator
	{
	public:
		float                                                      StiffnessConstant;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampeningRatio;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.VectorRK4SpringInterpolator
	 * Size -> 0x0008
	 */
	struct FVectorRK4SpringInterpolator
	{
	public:
		float                                                      StiffnessConstant;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampeningRatio;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ExpressionOutput
	 * Size -> 0x0008
	 */
	struct FExpressionOutput
	{
	public:
		class FName                                                OutputName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.Vector2MaterialInput
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector2MaterialInput : public FMaterialInput
	{
	};

	/**
	 * ScriptStruct Engine.BranchingPointNotifyPayload
	 * Size -> 0x0020
	 */
	struct FBranchingPointNotifyPayload
	{
	public:
		unsigned char                                              UnknownData_B4VF[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PlatformInterfaceData
	 * Size -> 0x0030
	 */
	struct FPlatformInterfaceData
	{
	public:
		class FName                                                DataName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EPlatformInterfaceDataType                          Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80NI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        IntValue;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YRHK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StringValue;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ObjectValue;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PlatformInterfaceDelegateResult
	 * Size -> 0x0038
	 */
	struct FPlatformInterfaceDelegateResult
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHBM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlatformInterfaceData                              Data;                                                    // 0x0008(0x0030) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.KeyHandleLookupTable
	 * Size -> 0x0060
	 */
	struct FKeyHandleLookupTable
	{
	public:
		unsigned char                                              UnknownData_R2RS[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.InputAlphaBoolBlend
	 * Size -> 0x0048
	 */
	struct FInputAlphaBoolBlend
	{
	public:
		float                                                      BlendInTime;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EAlphaBlendOption                                   BlendOption;                                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitialized;                                            // 0x0009(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3CU[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CustomCurve;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAlphaBlend                                         AlphaBlend;                                              // 0x0018(0x0030) Transient, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PerBoneBlendWeight
	 * Size -> 0x0008
	 */
	struct FPerBoneBlendWeight
	{
	public:
		int                                                        SourceIndex;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendWeight;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimNode_Root
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FAnimNode_Root : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Result;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Group;                                                   // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimCurveParam
	 * Size -> 0x000C
	 */
	struct FAnimCurveParam
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8EN[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
	 * Size -> 0x0040
	 */
	struct FInstancedStaticMeshLightMapInstanceData
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       MapBuildDataIds;                                         // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
	 * Size -> 0x0088 (FullSize[0x0130] - InheritedSize[0x00A8])
	 */
	struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInstancedStaticMeshLightMapInstanceData            CachedStaticLighting;                                    // 0x00B0(0x0040) NativeAccessSpecifierPublic
		TArray<struct FInstancedStaticMeshInstanceData>            PerInstanceSMData;                                       // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRF0[0x20];                                  // 0x0100(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        InstancingRandomSeed;                                    // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_08GS[0xC];                                   // 0x0124(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.IntegralKey
	 * Size -> 0x0008
	 */
	struct FIntegralKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Value;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.IntegralCurve
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	struct FIntegralCurve : public FIndexedCurve
	{
	public:
		TArray<struct FIntegralKey>                                keys;                                                    // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		int                                                        DefaultValue;                                            // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseDefaultValueBeforeFirstKey;                          // 0x007C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WOT0[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.InterpEdSelKey
	 * Size -> 0x0018
	 */
	struct FInterpEdSelKey
	{
	public:
		class UInterpGroup*                                        Group;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInterpTrack*                                        Track;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        KeyIndex;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnsnappedPosition;                                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CameraPreviewInfo
	 * Size -> 0x0030
	 */
	struct FCameraPreviewInfo
	{
	public:
		class UClass*                                              PawnClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       AnimSeq;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0010(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class APawn*                                               PawnInst;                                                // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.SubTrackGroup
	 * Size -> 0x0028
	 */
	struct FSubTrackGroup
	{
	public:
		class FString                                              GroupName;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int>                                                TrackIndices;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bIsCollapsed : 1;                                        // 0x0020(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsSelected : 1;                                         // 0x0020(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSZP[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SupportedSubTrackInfo
	 * Size -> 0x0020
	 */
	struct FSupportedSubTrackInfo
	{
	public:
		class UClass*                                              SupportedClass;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SubTrackName;                                            // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        GroupIndex;                                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDY3[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LatentActionManager
	 * Size -> 0x0060
	 */
	struct FLatentActionManager
	{
	public:
		unsigned char                                              UnknownData_061Z[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LevelSimplificationDetails
	 * Size -> 0x0104
	 */
	struct FLevelSimplificationDetails
	{
	public:
		bool                                                       bCreatePackagePerAsset;                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPZE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DetailsPercentage;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMaterialProxySettings                              StaticMeshMaterialSettings;                              // 0x0008(0x0074) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideLandscapeExportLOD;                             // 0x007C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1OYL[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        LandscapeExportLOD;                                      // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMaterialProxySettings                              LandscapeMaterialSettings;                               // 0x0084(0x0074) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bBakeFoliageToLandscape;                                 // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBakeGrassToLandscape;                                   // 0x00F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateMeshNormalMap;                                  // 0x00FA(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateMeshMetallicMap;                                // 0x00FB(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateMeshRoughnessMap;                               // 0x00FC(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateMeshSpecularMap;                                // 0x00FD(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateLandscapeNormalMap;                             // 0x00FE(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateLandscapeMetallicMap;                           // 0x00FF(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateLandscapeRoughnessMap;                          // 0x0100(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateLandscapeSpecularMap;                           // 0x0101(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01DY[0x2];                                   // 0x0102(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.StreamableTextureInstance
	 * Size -> 0x0028
	 */
	struct FStreamableTextureInstance
	{
	public:
		unsigned char                                              UnknownData_3OZT[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.DynamicTextureInstance
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FDynamicTextureInstance : public FStreamableTextureInstance
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttached;                                               // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_414L[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OriginalRadius;                                          // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PrecomputedLightInstanceData
	 * Size -> 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
	 */
	struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData
	{
	public:
		unsigned char                                              UnknownData_9KC0[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00B0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FGuid                                               LightGuid;                                               // 0x00E0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PreviewShadowMapChannel;                                 // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9BK[0xC];                                   // 0x00F4(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BatchedPoint
	 * Size -> 0x0028
	 */
	struct FBatchedPoint
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointSize;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemainingLifeTime;                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DepthPriority;                                           // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_23MG[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BatchedLine
	 * Size -> 0x0034
	 */
	struct FBatchedLine
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             End;                                                     // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemainingLifeTime;                                       // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DepthPriority;                                           // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OMKW[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ClientReceiveData
	 * Size -> 0x0040
	 */
	struct FClientReceiveData
	{
	public:
		class APlayerController*                                   LocalPC;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MessageType;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MessageIndex;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQ0G[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MessageString;                                           // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerState*                                        RelatedPlayerState_2;                                    // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerState*                                        RelatedPlayerState_3;                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             OptionalObject;                                          // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ParameterGroupData
	 * Size -> 0x0018
	 */
	struct FParameterGroupData
	{
	public:
		class FString                                              GroupName;                                               // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        GroupSortPriority;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJPC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.FunctionExpressionOutput
	 * Size -> 0x0020
	 */
	struct FFunctionExpressionOutput
	{
	public:
		class UMaterialExpressionFunctionOutput*                   ExpressionOutput;                                        // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionOutputId;                                      // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FExpressionOutput                                   Output;                                                  // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.FunctionExpressionInput
	 * Size -> 0x0030
	 */
	struct FFunctionExpressionInput
	{
	public:
		class UMaterialExpressionFunctionInput*                    ExpressionInput;                                         // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionInputId;                                       // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FExpressionInput                                    Input;                                                   // 0x0018(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16UY[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ScalarParameterAtlasInstanceData
	 * Size -> 0x0058
	 */
	struct FScalarParameterAtlasInstanceData
	{
	public:
		bool                                                       bIsUsedAsAtlasPosition;                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZQF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Curve[0x28];                                             // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.ScalarParameterAtlasInstanceData.Curve
		unsigned char                                              Atlas[0x28];                                             // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.ScalarParameterAtlasInstanceData.Atlas

	};

	/**
	 * ScriptStruct Engine.MemberReference
	 * Size -> 0x0038
	 */
	struct FMemberReference
	{
	public:
		class UObject*                                             MemberParent;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              MemberScope;                                             // 0x0008(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MemberName;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               MemberGuid;                                              // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSelfContext;                                            // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWasDeprecated;                                          // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_06C6[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.MeshInstancingSettings
	 * Size -> 0x0018
	 */
	struct FMeshInstancingSettings
	{
	public:
		class UClass*                                              ActorClassToUse;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        InstanceReplacementThreshold;                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_EMeshInstancingReplacementMethod                    MeshReplacementMethod;                                   // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipMeshesWithVertexColors;                             // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHLODVolumes;                                         // 0x000E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_76RU[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ISMComponentToUse;                                       // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PerBoneBlendWeights
	 * Size -> 0x0010
	 */
	struct FPerBoneBlendWeights
	{
	public:
		TArray<struct FPerBoneBlendWeight>                         BoneBlendWeights;                                        // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AssetImportInfo
	 * Size -> 0x0001
	 */
	struct FAssetImportInfo
	{
	public:
		unsigned char                                              UnknownData_23GD[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AtmospherePrecomputeInstanceData
	 * Size -> 0x01E0 (FullSize[0x0288] - InheritedSize[0x00A8])
	 */
	struct FAtmospherePrecomputeInstanceData : public FSceneComponentInstanceData
	{
	public:
		unsigned char                                              UnknownData_TVOE[0x1E0];                                 // 0x00A8(0x01E0) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.NavAvoidanceData
	 * Size -> 0x003C
	 */
	struct FNavAvoidanceData
	{
	public:
		unsigned char                                              UnknownData_423S[0x3C];                                  // 0x0000(0x003C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.GridBlendSample
	 * Size -> 0x001C
	 */
	struct FGridBlendSample
	{
	public:
		struct FEditorElement                                      GridElement;                                             // 0x0000(0x0018) NoDestructor, NativeAccessSpecifierPublic
		float                                                      BlendWeight;                                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BPEditorBookmarkNode
	 * Size -> 0x0038
	 */
	struct FBPEditorBookmarkNode
	{
	public:
		struct FGuid                                               NodeGuid;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ParentGuid;                                              // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0020(0x0018) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.EditedDocumentInfo
	 * Size -> 0x0030
	 */
	struct FEditedDocumentInfo
	{
	public:
		struct FSoftObjectPath                                     EditedObjectPath;                                        // 0x0000(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SavedViewOffset;                                         // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SavedZoomAmount;                                         // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7QU[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             EditedObject;                                            // 0x0028(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Engine.BPInterfaceDescription
	 * Size -> 0x0018
	 */
	struct FBPInterfaceDescription
	{
	public:
		class UClass*                                              Interface;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UEdGraph*>                                    Graphs;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BPVariableDescription
	 * Size -> 0x00D0
	 */
	struct FBPVariableDescription
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               VarGuid;                                                 // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEdGraphPinType                                     VarType;                                                 // 0x0018(0x0058) Edit, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              FriendlyName;                                            // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Category;                                                // 0x0080(0x0018) Edit, NativeAccessSpecifierPublic
		uint64_t                                                   PropertyFlags;                                           // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RepNotifyFunc;                                           // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		CoreUObject_ELifetimeCondition                             ReplicationCondition;                                    // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WHLB[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBPVariableMetaDataEntry>                    MetaDataArray;                                           // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              DefaultValue;                                            // 0x00C0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BlueprintMacroCosmeticInfo
	 * Size -> 0x0001
	 */
	struct FBlueprintMacroCosmeticInfo
	{
	public:
		unsigned char                                              UnknownData_HQ6V[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CompilerNativizationOptions
	 * Size -> 0x0080
	 */
	struct FCompilerNativizationOptions
	{
	public:
		class FName                                                PlatformName;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ServerOnlyPlatform;                                      // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClientOnlyPlatform;                                      // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExcludeMonolithicHeaders;                               // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VRM[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ExcludedModules;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              ExcludedAssets[0x50];                                    // 0x0020(0x0050) UNKNOWN PROPERTY: SetProperty Engine.CompilerNativizationOptions.ExcludedAssets
		TArray<class FString>                                      ExcludedFolderPaths;                                     // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.EventGraphFastCallPair
	 * Size -> 0x0010
	 */
	struct FEventGraphFastCallPair
	{
	public:
		class UFunction*                                           FunctionToPatch;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        EventGraphCallOffset;                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YF4G[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BlueprintDebugData
	 * Size -> 0x0001
	 */
	struct FBlueprintDebugData
	{
	public:
		unsigned char                                              UnknownData_1NQT[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.PointerToUberGraphFrame
	 * Size -> 0x0008
	 */
	struct FPointerToUberGraphFrame
	{
	public:
		unsigned char                                              UnknownData_NQF8[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.DebuggingInfoForSingleFunction
	 * Size -> 0x0190
	 */
	struct FDebuggingInfoForSingleFunction
	{
	public:
		unsigned char                                              UnknownData_9YEK[0x190];                                 // 0x0000(0x0190) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.NodeToCodeAssociation
	 * Size -> 0x0014
	 */
	struct FNodeToCodeAssociation
	{
	public:
		unsigned char                                              UnknownData_9BJV[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.AnimCurveType
	 * Size -> 0x0002
	 */
	struct FAnimCurveType
	{
	public:
		unsigned char                                              UnknownData_X7J4[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BookmarkBaseJumpToSettings
	 * Size -> 0x0001
	 */
	struct FBookmarkBaseJumpToSettings
	{
	public:
		unsigned char                                              UnknownData_WPSD[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.BookmarkJumpToSettings
	 * Size -> 0x0000 (FullSize[0x0001] - InheritedSize[0x0001])
	 */
	struct FBookmarkJumpToSettings : public FBookmarkBaseJumpToSettings
	{
	};

	/**
	 * ScriptStruct Engine.Bookmark2DJumpToSettings
	 * Size -> 0x0001
	 */
	struct FBookmark2DJumpToSettings
	{
	public:
		unsigned char                                              UnknownData_H9C4[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CachedAnimTransitionData
	 * Size -> 0x0024
	 */
	struct FCachedAnimTransitionData
	{
	public:
		class FName                                                StateMachineName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FromStateName;                                           // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToStateName;                                             // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MFWI[0xC];                                   // 0x0018(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CachedAnimRelevancyData
	 * Size -> 0x001C
	 */
	struct FCachedAnimRelevancyData
	{
	public:
		class FName                                                StateMachineName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StateName;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKW6[0xC];                                   // 0x0010(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CachedAnimAssetPlayerData
	 * Size -> 0x0018
	 */
	struct FCachedAnimAssetPlayerData
	{
	public:
		class FName                                                StateMachineName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StateName;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JCX[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CachedAnimStateData
	 * Size -> 0x001C
	 */
	struct FCachedAnimStateData
	{
	public:
		class FName                                                StateMachineName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StateName;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKM0[0xC];                                   // 0x0010(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CachedAnimStateArray
	 * Size -> 0x0018
	 */
	struct FCachedAnimStateArray
	{
	public:
		TArray<struct FCachedAnimStateData>                        States;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GHX[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.DummySpacerCameraTypes
	 * Size -> 0x0001
	 */
	struct FDummySpacerCameraTypes
	{
	public:
		unsigned char                                              UnknownData_P973[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.CanvasIcon
	 * Size -> 0x0018
	 */
	struct FCanvasIcon
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      U;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      V;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UL;                                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VL;                                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.WrappedStringElement
	 * Size -> 0x0018
	 */
	struct FWrappedStringElement
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           LineExtent;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.TextSizingParameters
	 * Size -> 0x0028
	 */
	struct FTextSizingParameters
	{
	public:
		float                                                      DrawX;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DrawY;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DrawXL;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DrawYL;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Scaling;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFont*                                               DrawFont;                                                // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SpacingAdjust;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.WorldContext
	 * Size -> 0x0280
	 */
	struct FWorldContext
	{
	public:
		unsigned char                                              UnknownData_BNGE[0xD0];                                  // 0x0000(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FURL                                                LastURL;                                                 // 0x00D0(0x0068) NativeAccessSpecifierPublic
		struct FURL                                                LastRemoteURL;                                           // 0x0138(0x0068) NativeAccessSpecifierPublic
		class UPendingNetGame*                                     PendingNetGame;                                          // 0x01A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFullyLoadedPackagesInfo>                    PackagesToFullyLoad;                                     // 0x01A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KTZ0[0x10];                                  // 0x01B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULevel*>                                      LoadedLevelsForPendingMapChange;                         // 0x01C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87SL[0x18];                                  // 0x01D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObjectReferencer*>                           ObjectReferencers;                                       // 0x01F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLevelStreamingStatus>                       PendingLevelStreamingStatusUpdates;                      // 0x0200(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UGameViewportClient*                                 GameViewport;                                            // 0x0210(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameInstance*                                       OwningGameInstance;                                      // 0x0218(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNamedNetDriver>                             ActiveNetDrivers;                                        // 0x0220(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1I20[0x50];                                  // 0x0230(0x0050) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ExposureSettings
	 * Size -> 0x0008
	 */
	struct FExposureSettings
	{
	public:
		float                                                      FixedEV100;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFixed;                                                  // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSBG[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.TickPrerequisite
	 * Size -> 0x0010
	 */
	struct FTickPrerequisite
	{
	public:
		unsigned char                                              UnknownData_8455[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.DepthFieldGlowInfo
	 * Size -> 0x0024
	 */
	struct FDepthFieldGlowInfo
	{
	public:
		unsigned char                                              bEnableGlow : 1;                                         // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0X7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        GlowColor;                                               // 0x0004(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           GlowOuterRadius;                                         // 0x0014(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           GlowInnerRadius;                                         // 0x001C(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.FontRenderInfo
	 * Size -> 0x0028
	 */
	struct FFontRenderInfo
	{
	public:
		unsigned char                                              bClipText : 1;                                           // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableShadow : 1;                                       // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BRCX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDepthFieldGlowInfo                                 GlowInfo;                                                // 0x0004(0x0024) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ComponentReference
	 * Size -> 0x0028
	 */
	struct FComponentReference
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ComponentProperty;                                       // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PathToComponent;                                         // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0FY[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.DamageEvent
	 * Size -> 0x0010
	 */
	struct FDamageEvent
	{
	public:
		unsigned char                                              UnknownData_WR98[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageTypeClass;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RadialDamageParams
	 * Size -> 0x0014
	 */
	struct FRadialDamageParams
	{
	public:
		float                                                      BaseDamage;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumDamage;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InnerRadius;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterRadius;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageFalloff;                                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RadialDamageEvent
	 * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
	 */
	struct FRadialDamageEvent : public FDamageEvent
	{
	public:
		struct FRadialDamageParams                                 Params;                                                  // 0x0010(0x0014) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Origin;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FHitResult>                                  ComponentHits;                                           // 0x0030(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.PointDamageEvent
	 * Size -> 0x0098 (FullSize[0x00A8] - InheritedSize[0x0010])
	 */
	struct FPointDamageEvent : public FDamageEvent
	{
	public:
		float                                                      Damage;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           ShotDirection;                                           // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          HitInfo;                                                 // 0x0020(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.POV
	 * Size -> 0x001C
	 */
	struct FPOV
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FOV;                                                     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimUpdateRateParameters
	 * Size -> 0x0088
	 */
	struct FAnimUpdateRateParameters
	{
	public:
		unsigned char                                              UnknownData_1UH8[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Engine_EUpdateRateShiftBucket                              ShiftBucket;                                             // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInterpolateSkippedFrames : 1;                           // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShouldUseLodMap : 1;                                    // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShouldUseMinLod : 1;                                    // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSkipUpdate : 1;                                         // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSkipEvaluation : 1;                                     // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B8U5[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        UpdateRate;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        EvaluationRate;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickedPoseOffestTime;                                    // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdditionalTime;                                          // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JWB3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        BaseNonRenderedUpdateRate;                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxEvalRateForInterpolation;                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              BaseVisibleDistanceFactorThesholds;                      // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<int, int>                                             LODToFrameSkipMap;                                       // 0x0030(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		int                                                        SkippedUpdateFrames;                                     // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SkippedEvalFrames;                                       // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimSlotDesc
	 * Size -> 0x000C
	 */
	struct FAnimSlotDesc
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        NumChannels;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.AnimSlotInfo
	 * Size -> 0x0018
	 */
	struct FAnimSlotInfo
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              ChannelWeights;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.MTDResult
	 * Size -> 0x0010
	 */
	struct FMTDResult
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.OverlapResult
	 * Size -> 0x0018
	 */
	struct FOverlapResult
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPrimitiveComponent>                  Component;                                               // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TLVZ[0x4];                                   // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bBlockingHit : 1;                                        // 0x0014(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LK0R[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.SwarmDebugOptions
	 * Size -> 0x0004
	 */
	struct FSwarmDebugOptions
	{
	public:
		unsigned char                                              bDistributionEnabled : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bForceContentExport : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInitialized : 1;                                        // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03P0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.LightmassDebugOptions
	 * Size -> 0x0010
	 */
	struct FLightmassDebugOptions
	{
	public:
		unsigned char                                              bDebugMode : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStatsEnabled : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGatherBSPSurfacesAcrossComponents : 1;                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9LH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CoplanarTolerance;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseImmediateImport : 1;                                 // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bImmediateProcessMappings : 1;                           // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSortMappings : 1;                                       // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDumpBinaryFiles : 1;                                    // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDebugMaterials : 1;                                     // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPadMappings : 1;                                        // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDebugPaddings : 1;                                      // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOnlyCalcDebugTexelMappings : 1;                         // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseRandomColors : 1;                                    // 0x0009(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bColorBordersGreen : 1;                                  // 0x0009(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bColorByExecutionTime : 1;                               // 0x0009(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ML34[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExecutionTimeDivisor;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BasedPosition
	 * Size -> 0x0038
	 */
	struct FBasedPosition
	{
	public:
		class AActor*                                              Base;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CachedBaseLocation;                                      // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CachedBaseRotation;                                      // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CachedTransPosition;                                     // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.FractureEffect
	 * Size -> 0x0010
	 */
	struct FFractureEffect
	{
	public:
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Sound;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RigidBodyContactInfo
	 * Size -> 0x0030
	 */
	struct FRigidBodyContactInfo
	{
	public:
		struct FVector                                             ContactPosition;                                         // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ContactNormal;                                           // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContactPenetration;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYVR[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   PhysMaterial[0x2];                                       // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.CollisionImpactData
	 * Size -> 0x0028
	 */
	struct FCollisionImpactData
	{
	public:
		TArray<struct FRigidBodyContactInfo>                       ContactInfos;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             TotalNormalImpulse;                                      // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TotalFrictionImpulse;                                    // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RigidBodyState
	 * Size -> 0x0040
	 */
	struct FRigidBodyState
	{
	public:
		struct FVector_NetQuantize100                              Position;                                                // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7Y5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Quaternion;                                              // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              LinVel;                                                  // 0x0020(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              AngVel;                                                  // 0x002C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Flags;                                                   // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLF3[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ActiveHapticFeedbackEffect
	 * Size -> 0x0018
	 */
	struct FActiveHapticFeedbackEffect
	{
	public:
		class UHapticFeedbackEffect_Base*                          HapticEffect;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCSE[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Engine.ClusterNode
	 * Size -> 0x0040
	 */
	struct FClusterNode
	{
	public:
		struct FVector                                             BoundMin;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        FirstChild;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoundMax;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LastChild;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        FirstInstance;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LastInstance;                                            // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MinInstanceScale;                                        // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxInstanceScale;                                        // 0x0034(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.ClusterNode_DEPRECATED
	 * Size -> 0x0028
	 */
	struct FClusterNode_DEPRECATED
	{
	public:
		struct FVector                                             BoundMin;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        FirstChild;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoundMax;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LastChild;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        FirstInstance;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LastInstance;                                            // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.RigConfiguration
	 * Size -> 0x0018
	 */
	struct FRigConfiguration
	{
	public:
		class URig*                                                Rig;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNameMapping>                                BoneMappingTable;                                        // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Engine.BoneReductionSetting
	 * Size -> 0x0010
	 */
	struct FBoneReductionSetting
	{
	public:
		TArray<class FName>                                        BonesToRemove;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
