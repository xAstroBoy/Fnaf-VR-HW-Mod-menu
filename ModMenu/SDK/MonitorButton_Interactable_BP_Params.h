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
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.CheckForFreddieMask
	 */
	struct AMonitorButton_Interactable_BP_C_CheckForFreddieMask_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.SetOfficeManager
	 */
	struct AMonitorButton_Interactable_BP_C_SetOfficeManager_Params
	{
	};

	/**
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.AdjustBtnPosition
	 */
	struct AMonitorButton_Interactable_BP_C_AdjustBtnPosition_Params
	{
	};

	/**
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.ResetBtnPosition
	 */
	struct AMonitorButton_Interactable_BP_C_ResetBtnPosition_Params
	{
	};

	/**
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.UserConstructionScript
	 */
	struct AMonitorButton_Interactable_BP_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.ReceiveBeginPlay
	 */
	struct AMonitorButton_Interactable_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AMonitorButton_Interactable_BP_C_BndEvt__BoxCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AMonitorButton_Interactable_BP_C_BndEvt__BoxCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.ReceiveTick
	 */
	struct AMonitorButton_Interactable_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.NonVRRelease
	 */
	struct AMonitorButton_Interactable_BP_C_NonVRRelease_Params
	{
	};

	/**
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.OnNonVRLineTraceInteract
	 */
	struct AMonitorButton_Interactable_BP_C_OnNonVRLineTraceInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.Debug_InputEvent
	 */
	struct AMonitorButton_Interactable_BP_C_Debug_InputEvent_Params
	{
	};

	/**
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.NonVR_GamePad
	 */
	struct AMonitorButton_Interactable_BP_C_NonVR_GamePad_Params
	{
	};

	/**
	 * Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.ExecuteUbergraph_MonitorButton_Interactable_BP
	 */
	struct AMonitorButton_Interactable_BP_C_ExecuteUbergraph_MonitorButton_Interactable_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
