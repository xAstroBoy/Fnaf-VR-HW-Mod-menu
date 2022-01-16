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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum OculusMR.EOculusMR_BoundaryType
	 */
	enum class OculusMR_EOculusMR_BoundaryType : uint8_t
	{
		EOculusMR_BoundaryType__BT_OuterBoundary = 0,
		EOculusMR_BoundaryType__BT_PlayArea      = 1,
		EOculusMR_BoundaryType__BT_MAX           = 2
	};

	/**
	 * Enum OculusMR.EOculusMR_CompositionMethod
	 */
	enum class OculusMR_EOculusMR_CompositionMethod : uint8_t
	{
		EOculusMR_CompositionMethod__ExternalComposition = 0,
		EOculusMR_CompositionMethod__DirectComposition   = 1,
		EOculusMR_CompositionMethod__EOculusMR_MAX       = 2
	};

	/**
	 * Enum OculusMR.EOculusMR_DepthQuality
	 */
	enum class OculusMR_EOculusMR_DepthQuality : uint8_t
	{
		EOculusMR_DepthQuality__DQ_Low    = 0,
		EOculusMR_DepthQuality__DQ_Medium = 1,
		EOculusMR_DepthQuality__DQ_High   = 2,
		EOculusMR_DepthQuality__DQ_MAX    = 3
	};

	/**
	 * Enum OculusMR.EOculusMR_PostProcessEffects
	 */
	enum class OculusMR_EOculusMR_PostProcessEffects : uint8_t
	{
		EOculusMR_PostProcessEffects__PPE_Off = 0,
		EOculusMR_PostProcessEffects__PPE_On  = 1,
		EOculusMR_PostProcessEffects__PPE_MAX = 2
	};

	/**
	 * Enum OculusMR.EOculusMR_VirtualGreenScreenType
	 */
	enum class OculusMR_EOculusMR_VirtualGreenScreenType : uint8_t
	{
		EOculusMR_VirtualGreenScreenType__VGS_Off           = 0,
		EOculusMR_VirtualGreenScreenType__VGS_OuterBoundary = 1,
		EOculusMR_VirtualGreenScreenType__VGS_PlayArea      = 2,
		EOculusMR_VirtualGreenScreenType__VGS_MAX           = 3
	};

	/**
	 * Enum OculusMR.EOculusMR_ClippingReference
	 */
	enum class OculusMR_EOculusMR_ClippingReference : uint8_t
	{
		EOculusMR_ClippingReference__CR_TrackingReference = 0,
		EOculusMR_ClippingReference__CR_Head              = 1,
		EOculusMR_ClippingReference__CR_MAX               = 2
	};

	/**
	 * Enum OculusMR.EOculusMR_CameraDeviceEnum
	 */
	enum class OculusMR_EOculusMR_CameraDeviceEnum : uint8_t
	{
		EOculusMR_CameraDeviceEnum__CD_None       = 0,
		EOculusMR_CameraDeviceEnum__CD_WebCamera0 = 1,
		EOculusMR_CameraDeviceEnum__CD_WebCamera1 = 2,
		EOculusMR_CameraDeviceEnum__CD_ZEDCamera  = 3,
		EOculusMR_CameraDeviceEnum__CD_MAX        = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OculusMR.OculusMR_PlaneMeshTriangle
	 * Size -> 0x003C
	 */
	struct FOculusMR_PlaneMeshTriangle
	{
	public:
		struct FVector                                             Vertex0;                                                 // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV0;                                                     // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vertex1;                                                 // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV1;                                                     // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vertex2;                                                 // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV2;                                                     // 0x0034(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct OculusMR.TrackedCamera
	 * Size -> 0x0058
	 */
	struct FTrackedCamera
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y8TS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FieldOfView;                                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SizeX;                                                   // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SizeY;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		OculusHMD_ETrackedDeviceType                               AttachedTrackedDevice;                                   // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B4Q4[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CalibratedRotation;                                      // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CalibratedOffset;                                        // 0x0034(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            UserRotation;                                            // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             UserOffset;                                              // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
