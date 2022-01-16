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
	 * Enum SWGVR.EVRHandType
	 */
	enum class SWGVR_EVRHandType : uint8_t
	{
		EVRHandType__None            = 0,
		EVRHandType__Left            = 1,
		EVRHandType__Right           = 2,
		EVRHandType__Both            = 3,
		EVRHandType__EVRHandType_MAX = 4
	};

	/**
	 * Enum SWGVR.ESWGVRControllerType
	 */
	enum class SWGVR_ESWGVRControllerType : uint8_t
	{
		ESWGVRControllerType__SteamVR                  = 0,
		ESWGVRControllerType__Oculus                   = 1,
		ESWGVRControllerType__PS4Move                  = 2,
		ESWGVRControllerType__DUALSHOCK4               = 3,
		ESWGVRControllerType__DUALSHOCK4_VR            = 4,
		ESWGVRControllerType__MouseAndKeyboard         = 5,
		ESWGVRControllerType__Switch                   = 6,
		ESWGVRControllerType__XBox                     = 7,
		ESWGVRControllerType__ESWGVRControllerType_MAX = 8
	};

	/**
	 * Enum SWGVR.EGrabSnapType
	 */
	enum class SWGVR_EGrabSnapType : uint8_t
	{
		EGrabSnapType__LocationToHand    = 0,
		EGrabSnapType__SnapToHand        = 1,
		EGrabSnapType__None              = 2,
		EGrabSnapType__EGrabSnapType_MAX = 3
	};

	/**
	 * Enum SWGVR.EVRPlayType
	 */
	enum class SWGVR_EVRPlayType : uint8_t
	{
		EVRPlayType__UsingVR         = 0,
		EVRPlayType__NotUsingVR      = 1,
		EVRPlayType__EVRPlayType_MAX = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SWGVR.HeldCollisionInfo
	 * Size -> 0x0002
	 */
	struct FHeldCollisionInfo
	{
	public:
		bool                                                       bUsePhysics;                                             // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionEnabled                                   Collision;                                               // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SWGVR.HeldGrabbableInfo
	 * Size -> 0x0078
	 */
	struct FHeldGrabbableInfo
	{
	public:
		bool                                                       bUsePhysics;                                             // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionEnabled                                   Collision;                                               // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNPN[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UPrimitiveComponent*, struct FHeldCollisionInfo> PrimitiveCollisionInfo;                                  // 0x0008(0x0050) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		SWGVR_EGrabSnapType                                        GrabSnapType;                                            // 0x0058(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNHI[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AttachmentRelativeLocation;                              // 0x005C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AttachmentRelativeRotation;                              // 0x0068(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsLerpingToHand;                                         // 0x0074(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TBMY[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SWGVR.MotionControllerInfo
	 * Size -> 0x00E0
	 */
	struct FMotionControllerInfo
	{
	public:
		struct FVector                                             OldWorldPosition;                                        // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x000C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InstantaneousVelocity;                                   // 0x0018(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQG7[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     PreviousPositions;                                       // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      HoveredObjects;                                          // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      HoveredGrabbables;                                       // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      HeldGrabbables;                                          // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class AActor*, struct FHeldGrabbableInfo>             HeldInfo;                                                // 0x0068(0x0050) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class AActor*                                              ClosestGrabbableActor;                                   // 0x00B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClosestGrabbableDistance;                                // 0x00C0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5JG[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ClosestHoveredActor;                                     // 0x00C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 ClosestHoveredComponent;                                 // 0x00D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClosestDistance;                                         // 0x00D8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTracked;                                              // 0x00DC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFTW[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
