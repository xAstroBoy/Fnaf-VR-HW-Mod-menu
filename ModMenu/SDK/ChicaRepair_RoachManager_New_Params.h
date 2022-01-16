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
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.AttemptGrab
	 */
	struct AChicaRepair_RoachManager_New_C_AttemptGrab_Params
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
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.AttemptRelease
	 */
	struct AChicaRepair_RoachManager_New_C_AttemptRelease_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.RemoveClosestRoach
	 */
	struct AChicaRepair_RoachManager_New_C_RemoveClosestRoach_Params
	{
	public:
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RoachRemoved;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ForceAplicator__FinishedFunc
	 */
	struct AChicaRepair_RoachManager_New_C_ForceAplicator__FinishedFunc_Params
	{
	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ForceAplicator__UpdateFunc
	 */
	struct AChicaRepair_RoachManager_New_C_ForceAplicator__UpdateFunc_Params
	{
	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverComponentBegin
	 */
	struct AChicaRepair_RoachManager_New_C_OnVRHoverComponentBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HoveredComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverComponentEnd
	 */
	struct AChicaRepair_RoachManager_New_C_OnVRHoverComponentEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HoveredComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRGrabbed
	 */
	struct AChicaRepair_RoachManager_New_C_OnVRGrabbed_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRReleased
	 */
	struct AChicaRepair_RoachManager_New_C_OnVRReleased_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReleaseVelocity;                                         // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.SpawnRoach
	 */
	struct AChicaRepair_RoachManager_New_C_SpawnRoach_Params
	{
	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ReceiveBeginPlay
	 */
	struct AChicaRepair_RoachManager_New_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.CleanRoaches
	 */
	struct AChicaRepair_RoachManager_New_C_CleanRoaches_Params
	{
	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.BeginRoachInfestation
	 */
	struct AChicaRepair_RoachManager_New_C_BeginRoachInfestation_Params
	{
	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ReceiveTick
	 */
	struct AChicaRepair_RoachManager_New_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.StopSound
	 */
	struct AChicaRepair_RoachManager_New_C_StopSound_Params
	{
	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.GrabAttempt
	 */
	struct AChicaRepair_RoachManager_New_C_GrabAttempt_Params
	{
	public:
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverBegin
	 */
	struct AChicaRepair_RoachManager_New_C_OnVRHoverBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverEnd
	 */
	struct AChicaRepair_RoachManager_New_C_OnVRHoverEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ExecuteUbergraph_ChicaRepair_RoachManager_New
	 */
	struct AChicaRepair_RoachManager_New_C_ExecuteUbergraph_ChicaRepair_RoachManager_New_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
