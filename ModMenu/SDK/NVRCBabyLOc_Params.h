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
	 * Function NVRCBabyLOc.NVRCBabyLoc_C.GetHoverCursorState
	 */
	struct ANVRCBabyLoc_C_GetHoverCursorState_Params
	{
	public:
		CursorState_ECursorState                                   CursorState;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NVRCBabyLOc.NVRCBabyLoc_C.ZoomInteract
	 */
	struct ANVRCBabyLoc_C_ZoomInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Hit_Component;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NVRCBabyLOc.NVRCBabyLoc_C.ZoomEndInteract
	 */
	struct ANVRCBabyLoc_C_ZoomEndInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UActorComponent*                                     HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NVRCBabyLOc.NVRCBabyLoc_C.OnVRHoverBegin
	 */
	struct ANVRCBabyLoc_C_OnVRHoverBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NVRCBabyLOc.NVRCBabyLoc_C.OnVRHoverEnd
	 */
	struct ANVRCBabyLoc_C_OnVRHoverEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NVRCBabyLOc.NVRCBabyLoc_C.ExecuteUbergraph_NVRCBabyLoc
	 */
	struct ANVRCBabyLoc_C_ExecuteUbergraph_NVRCBabyLoc_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
