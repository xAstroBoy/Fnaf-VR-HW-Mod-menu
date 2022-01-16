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
	 * Function GrabbableToken.GrabbableToken_C.AttemptGrab
	 */
	struct AGrabbableToken_C_AttemptGrab_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       canGrab;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		SWGVR_EGrabSnapType                                        SnapType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       snapLocation;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       snapRotation;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AttachmentOffsetLocation;                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            AttachmentOffsetRotation;                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GrabbableToken.GrabbableToken_C.AttemptRelease
	 */
	struct AGrabbableToken_C_AttemptRelease_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GrabbableToken.GrabbableToken_C.UserConstructionScript
	 */
	struct AGrabbableToken_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function GrabbableToken.GrabbableToken_C.OnVRInteract
	 */
	struct AGrabbableToken_C_OnVRInteract_Params
	{
	public:
		class ASWGVRCharacter*                                     VRCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrabbableToken.GrabbableToken_C.OnVRGrabbed
	 */
	struct AGrabbableToken_C_OnVRGrabbed_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrabbableToken.GrabbableToken_C.OnVRReleased
	 */
	struct AGrabbableToken_C_OnVRReleased_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReleaseVelocity;                                         // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrabbableToken.GrabbableToken_C.ReceiveBeginPlay
	 */
	struct AGrabbableToken_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function GrabbableToken.GrabbableToken_C.ExecuteUbergraph_GrabbableToken
	 */
	struct AGrabbableToken_C_ExecuteUbergraph_GrabbableToken_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
