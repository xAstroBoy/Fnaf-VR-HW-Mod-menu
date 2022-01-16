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
	 * Function MonitorButton_BP.MonitorButton_BP_C.FlatInteraction_ButtonPress
	 */
	struct AMonitorButton_BP_C_FlatInteraction_ButtonPress_Params
	{
	public:
		class AMonitorButton_BP_C*                                 MonitorButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.CheckForFreddyMask
	 */
	struct AMonitorButton_BP_C_CheckForFreddyMask_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.SetOfficeManager
	 */
	struct AMonitorButton_BP_C_SetOfficeManager_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.TurnOffVent
	 */
	struct AMonitorButton_BP_C_TurnOffVent_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.MonitorBtnStateReset
	 */
	struct AMonitorButton_BP_C_MonitorBtnStateReset_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.ToggleVent
	 */
	struct AMonitorButton_BP_C_ToggleVent_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.PlayBtnAudio
	 */
	struct AMonitorButton_BP_C_PlayBtnAudio_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.TurnLightOn
	 */
	struct AMonitorButton_BP_C_TurnLightOn_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.TurnLightOff
	 */
	struct AMonitorButton_BP_C_TurnLightOff_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.UserConstructionScript
	 */
	struct AMonitorButton_BP_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.Timeline_0__FinishedFunc
	 */
	struct AMonitorButton_BP_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.Timeline_0__UpdateFunc
	 */
	struct AMonitorButton_BP_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.Timeline_2__FinishedFunc
	 */
	struct AMonitorButton_BP_C_Timeline_2__FinishedFunc_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.Timeline_2__UpdateFunc
	 */
	struct AMonitorButton_BP_C_Timeline_2__UpdateFunc_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.ReceiveBeginPlay
	 */
	struct AMonitorButton_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.ReceiveTick
	 */
	struct AMonitorButton_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.StopFlicker
	 */
	struct AMonitorButton_BP_C_StopFlicker_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AMonitorButton_BP_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function MonitorButton_BP.MonitorButton_BP_C.OnNonVRLineTraceInteract
	 */
	struct AMonitorButton_BP_C_OnNonVRLineTraceInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.PressButton
	 */
	struct AMonitorButton_BP_C_PressButton_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.ReEnableButtons
	 */
	struct AMonitorButton_BP_C_ReEnableButtons_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.Disable Button
	 */
	struct AMonitorButton_BP_C_Disable_Button_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.Debug_EventInput
	 */
	struct AMonitorButton_BP_C_Debug_EventInput_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.CheckForGamePad
	 */
	struct AMonitorButton_BP_C_CheckForGamePad_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.SetButtonEnableInput
	 */
	struct AMonitorButton_BP_C_SetButtonEnableInput_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.SetButtonDisableInput
	 */
	struct AMonitorButton_BP_C_SetButtonDisableInput_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.NonVr_InputOverride_Left
	 */
	struct AMonitorButton_BP_C_NonVr_InputOverride_Left_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.NonVr_InputOverride_Right
	 */
	struct AMonitorButton_BP_C_NonVr_InputOverride_Right_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.NonVr_InputOverride_Down
	 */
	struct AMonitorButton_BP_C_NonVr_InputOverride_Down_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.NonVr_InputOverride_Up
	 */
	struct AMonitorButton_BP_C_NonVr_InputOverride_Up_Params
	{
	};

	/**
	 * Function MonitorButton_BP.MonitorButton_BP_C.ExecuteUbergraph_MonitorButton_BP
	 */
	struct AMonitorButton_BP_C_ExecuteUbergraph_MonitorButton_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
