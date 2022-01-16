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
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.GetHoverCursorState
	 */
	struct ABonnie_BTN_Sound_C_GetHoverCursorState_Params
	{
	public:
		CursorState_ECursorState                                   CursorState;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Create_Material_Instance
	 */
	struct ABonnie_BTN_Sound_C_Create_Material_Instance_Params
	{
	public:
		class UMaterialInstance*                                   Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Move BTN
	 */
	struct ABonnie_BTN_Sound_C_Move_BTN_Params
	{
	public:
		float                                                      Y;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.UserConstructionScript
	 */
	struct ABonnie_BTN_Sound_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Press BTN Down__FinishedFunc
	 */
	struct ABonnie_BTN_Sound_C_Press_BTN_Down__FinishedFunc_Params
	{
	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Press BTN Down__UpdateFunc
	 */
	struct ABonnie_BTN_Sound_C_Press_BTN_Down__UpdateFunc_Params
	{
	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Material Instance Param__FinishedFunc
	 */
	struct ABonnie_BTN_Sound_C_Material_Instance_Param__FinishedFunc_Params
	{
	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Material Instance Param__UpdateFunc
	 */
	struct ABonnie_BTN_Sound_C_Material_Instance_Param__UpdateFunc_Params
	{
	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverEnd
	 */
	struct ABonnie_BTN_Sound_C_OnVRHoverEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABonnie_BTN_Sound_C_BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverComponentEnd
	 */
	struct ABonnie_BTN_Sound_C_OnVRHoverComponentEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HoveredComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverComponentBegin
	 */
	struct ABonnie_BTN_Sound_C_OnVRHoverComponentBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HoveredComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Reset_BTN
	 */
	struct ABonnie_BTN_Sound_C_Reset_BTN_Params
	{
	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverBegin
	 */
	struct ABonnie_BTN_Sound_C_OnVRHoverBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.ReceiveBeginPlay
	 */
	struct ABonnie_BTN_Sound_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.ButtonBypass
	 */
	struct ABonnie_BTN_Sound_C_ButtonBypass_Params
	{
	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.NonVRClickButton
	 */
	struct ABonnie_BTN_Sound_C_NonVRClickButton_Params
	{
	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnNonVRLineTraceInteract
	 */
	struct ABonnie_BTN_Sound_C_OnNonVRLineTraceInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.ExecuteUbergraph_Bonnie_BTN_Sound
	 */
	struct ABonnie_BTN_Sound_C_ExecuteUbergraph_Bonnie_BTN_Sound_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
