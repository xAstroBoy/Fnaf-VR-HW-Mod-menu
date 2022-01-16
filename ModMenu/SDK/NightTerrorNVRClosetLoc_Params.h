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
	 * Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.GetHoverCursorState
	 */
	struct ANightTerrorNVRClosetLoc_C_GetHoverCursorState_Params
	{
	public:
		CursorState_ECursorState                                   CursorState;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ReceiveTick
	 */
	struct ANightTerrorNVRClosetLoc_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ZoomInteract
	 */
	struct ANightTerrorNVRClosetLoc_C_ZoomInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Hit_Component;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ReceiveBeginPlay
	 */
	struct ANightTerrorNVRClosetLoc_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ZoomEndInteract
	 */
	struct ANightTerrorNVRClosetLoc_C_ZoomEndInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UActorComponent*                                     HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.OnVRHoverBegin
	 */
	struct ANightTerrorNVRClosetLoc_C_OnVRHoverBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.OnVRHoverEnd
	 */
	struct ANightTerrorNVRClosetLoc_C_OnVRHoverEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ExecuteUbergraph_NightTerrorNVRClosetLoc
	 */
	struct ANightTerrorNVRClosetLoc_C_ExecuteUbergraph_NightTerrorNVRClosetLoc_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
