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
	 * Function GrabbablePhone.GrabbablePhone_C.ReceiveBeginPlay
	 */
	struct AGrabbablePhone_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function GrabbablePhone.GrabbablePhone_C.ReceiveTick
	 */
	struct AGrabbablePhone_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrabbablePhone.GrabbablePhone_C.OnVRGrabbed
	 */
	struct AGrabbablePhone_C_OnVRGrabbed_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrabbablePhone.GrabbablePhone_C.OnVRReleased
	 */
	struct AGrabbablePhone_C_OnVRReleased_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReleaseVelocity;                                         // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrabbablePhone.GrabbablePhone_C.ExecuteUbergraph_GrabbablePhone
	 */
	struct AGrabbablePhone_C_ExecuteUbergraph_GrabbablePhone_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrabbablePhone.GrabbablePhone_C.Released__DelegateSignature
	 */
	struct AGrabbablePhone_C_Released__DelegateSignature_Params
	{
	};

	/**
	 * Function GrabbablePhone.GrabbablePhone_C.Grabbed__DelegateSignature
	 */
	struct AGrabbablePhone_C_Grabbed__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
