#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen
	 */
	struct UOculusFunctionLibrary_ShowLoadingSplashScreen_Params
	{
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon
	 */
	struct UOculusFunctionLibrary_ShowLoadingIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetTiledMultiresLevel
	 */
	struct UOculusFunctionLibrary_SetTiledMultiresLevel_Params
	{
	public:
		OculusHMD_ETiledMultiResLevel                              Level;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter
	 */
	struct UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Params
	{
	public:
		bool                                                       recenterMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D
	 */
	struct UOculusFunctionLibrary_SetPositionScale3D_Params
	{
	public:
		struct FVector                                             PosScale3D;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams
	 */
	struct UOculusFunctionLibrary_SetLoadingSplashParams_Params
	{
	public:
		class FString                                              TexturePath;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DistanceInMeters;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           SizeInMeters;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             RotationAxis;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RotationDeltaInDeg;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility
	 */
	struct UOculusFunctionLibrary_SetGuardianVisibility_Params
	{
	public:
		bool                                                       GuardianVisible;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
	 */
	struct UOculusFunctionLibrary_SetDisplayFrequency_Params
	{
	public:
		float                                                      RequestedFrequency;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
	 */
	struct UOculusFunctionLibrary_SetCPUAndGPULevels_Params
	{
	public:
		int                                                        CPULevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        GPULevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset
	 */
	struct UOculusFunctionLibrary_SetColorScaleAndOffset_Params
	{
	public:
		struct FLinearColor                                        ColorScale;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ColorOffset;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bApplyToAllLayers;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
	 */
	struct UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params
	{
	public:
		struct FRotator                                            BaseRot;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             PosOffset;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		HeadMountedDisplay_EOrientPositionSelector                 Options;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
	 */
	struct UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             BaseOffsetInMeters;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		HeadMountedDisplay_EOrientPositionSelector                 Options;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled
	 */
	struct UOculusFunctionLibrary_IsLoadingIconEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed
	 */
	struct UOculusFunctionLibrary_IsGuardianDisplayed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured
	 */
	struct UOculusFunctionLibrary_IsGuardianConfigured_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked
	 */
	struct UOculusFunctionLibrary_IsDeviceTracked_Params
	{
	public:
		OculusHMD_ETrackedDeviceType                               DeviceType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled
	 */
	struct UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen
	 */
	struct UOculusFunctionLibrary_HideLoadingSplashScreen_Params
	{
	public:
		bool                                                       bClear;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon
	 */
	struct UOculusFunctionLibrary_HideLoadingIcon_Params
	{
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
	 */
	struct UOculusFunctionLibrary_HasSystemOverlayPresent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.HasInputFocus
	 */
	struct UOculusFunctionLibrary_HasInputFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetUserProfile
	 */
	struct UOculusFunctionLibrary_GetUserProfile_Params
	{
	public:
		struct FHmdUserProfile                                     Profile;                                                 // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetTiledMultiresLevel
	 */
	struct UOculusFunctionLibrary_GetTiledMultiresLevel_Params
	{
	public:
		OculusHMD_ETiledMultiResLevel                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetRawSensorData
	 */
	struct UOculusFunctionLibrary_GetRawSensorData_Params
	{
	public:
		struct FVector                                             AngularAcceleration;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinearAcceleration;                                      // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             AngularVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinearVelocity;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeInSeconds;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		OculusHMD_ETrackedDeviceType                               DeviceType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetPose
	 */
	struct UOculusFunctionLibrary_GetPose_Params
	{
	public:
		struct FRotator                                            DeviceRotation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             DevicePosition;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NeckPosition;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseOrienationForPlayerCamera;                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsePositionForPlayerCamera;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             PositionScale;                                           // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection
	 */
	struct UOculusFunctionLibrary_GetPointGuardianIntersection_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		OculusHMD_EBoundaryType                                    BoundaryType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuardianTestResult                                 ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform
	 */
	struct UOculusFunctionLibrary_GetPlayAreaTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection
	 */
	struct UOculusFunctionLibrary_GetNodeGuardianIntersection_Params
	{
	public:
		OculusHMD_ETrackedDeviceType                               DeviceType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		OculusHMD_EBoundaryType                                    BoundaryType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuardianTestResult                                 ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams
	 */
	struct UOculusFunctionLibrary_GetLoadingSplashParams_Params
	{
	public:
		class FString                                              TexturePath;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DistanceInMeters;                                        // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           SizeInMeters;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             RotationAxis;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RotationDeltaInDeg;                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints
	 */
	struct UOculusFunctionLibrary_GetGuardianPoints_Params
	{
	public:
		OculusHMD_EBoundaryType                                    BoundaryType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       UsePawnSpace;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions
	 */
	struct UOculusFunctionLibrary_GetGuardianDimensions_Params
	{
	public:
		OculusHMD_EBoundaryType                                    BoundaryType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization
	 */
	struct UOculusFunctionLibrary_GetGPUUtilization_Params
	{
	public:
		bool                                                       IsGPUAvailable;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GPUUtilization;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime
	 */
	struct UOculusFunctionLibrary_GetGPUFrameTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetDeviceName
	 */
	struct UOculusFunctionLibrary_GetDeviceName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
	 */
	struct UOculusFunctionLibrary_GetCurrentDisplayFrequency_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
	 */
	struct UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params
	{
	public:
		struct FRotator                                            OutRot;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutPosOffset;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
	 */
	struct UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params
	{
	public:
		struct FRotator                                            OutRotation;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutBaseOffsetInMeters;                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
	 */
	struct UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Params
	{
	public:
		TArray<float>                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking
	 */
	struct UOculusFunctionLibrary_EnablePositionTracking_Params
	{
	public:
		bool                                                       bPositionTracking;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking
	 */
	struct UOculusFunctionLibrary_EnableOrientationTracking_Params
	{
	public:
		bool                                                       bOrientationTracking;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen
	 */
	struct UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Params
	{
	public:
		bool                                                       bAutoShowEnabled;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
	 */
	struct UOculusFunctionLibrary_ClearLoadingSplashScreens_Params
	{
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
	 */
	struct UOculusFunctionLibrary_AddLoadingSplashScreen_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TranslationInMeters;                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           SizeInMeters;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            DeltaRotation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bClearBeforeAdd;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
