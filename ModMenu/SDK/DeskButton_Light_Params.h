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
	 * Function DeskButton_Light.DeskButton_Light_C.TurnOffAllOtherLightButtons
	 */
	struct ADeskButton_Light_C_TurnOffAllOtherLightButtons_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.DisableLightCall
	 */
	struct ADeskButton_Light_C_DisableLightCall_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.PuppetOffState
	 */
	struct ADeskButton_Light_C_PuppetOffState_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.PuppetOnState
	 */
	struct ADeskButton_Light_C_PuppetOnState_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.ReleasedState
	 */
	struct ADeskButton_Light_C_ReleasedState_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.PressedState
	 */
	struct ADeskButton_Light_C_PressedState_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.CheckForEnemy
	 */
	struct ADeskButton_Light_C_CheckForEnemy_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.UserConstructionScript
	 */
	struct ADeskButton_Light_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.FlickerLight__FinishedFunc
	 */
	struct ADeskButton_Light_C_FlickerLight__FinishedFunc_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.FlickerLight__UpdateFunc
	 */
	struct ADeskButton_Light_C_FlickerLight__UpdateFunc_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.FlickerLight__DisableLight__EventFunc
	 */
	struct ADeskButton_Light_C_FlickerLight__DisableLight__EventFunc_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.Timeline_0__FinishedFunc
	 */
	struct ADeskButton_Light_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.Timeline_0__UpdateFunc
	 */
	struct ADeskButton_Light_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.ReceiveBeginPlay
	 */
	struct ADeskButton_Light_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.BndEvt__InteractionCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ADeskButton_Light_C_BndEvt__InteractionCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function DeskButton_Light.DeskButton_Light_C.BndEvt__InteractionCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ADeskButton_Light_C_BndEvt__InteractionCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.ReceiveTick
	 */
	struct ADeskButton_Light_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.TriggerFlickerLights
	 */
	struct ADeskButton_Light_C_TriggerFlickerLights_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.PuppetFlickerTime
	 */
	struct ADeskButton_Light_C_PuppetFlickerTime_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.CheckForAiAgain
	 */
	struct ADeskButton_Light_C_CheckForAiAgain_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.OnNonVRLineTraceInteract
	 */
	struct ADeskButton_Light_C_OnNonVRLineTraceInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.NonVRButtonRelease
	 */
	struct ADeskButton_Light_C_NonVRButtonRelease_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.NonVR ReleaseButtonBypass
	 */
	struct ADeskButton_Light_C_NonVR_ReleaseButtonBypass_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.NonVR PressButtonBypass
	 */
	struct ADeskButton_Light_C_NonVR_PressButtonBypass_Params
	{
	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.ButtonChange
	 */
	struct ADeskButton_Light_C_ButtonChange_Params
	{
	public:
		bool                                                       Is_Pressed;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DeskButton_Light.DeskButton_Light_C.ExecuteUbergraph_DeskButton_Light
	 */
	struct ADeskButton_Light_C_ExecuteUbergraph_DeskButton_Light_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
