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
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.IsInPlayerVis
	 */
	struct AMPFreddyPawnBase_C_IsInPlayerVis_Params
	{
	public:
		bool                                                       IsInVis;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.ChangePlayerVisStatus
	 */
	struct AMPFreddyPawnBase_C_ChangePlayerVisStatus_Params
	{
	public:
		bool                                                       IsInVision;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.IsInFlashlight
	 */
	struct AMPFreddyPawnBase_C_IsInFlashlight_Params
	{
	public:
		bool                                                       InFlashLight;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.ChangeFlashStatus
	 */
	struct AMPFreddyPawnBase_C_ChangeFlashStatus_Params
	{
	public:
		bool                                                       IsInFlashlight;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.ReceiveBeginPlay
	 */
	struct AMPFreddyPawnBase_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnFlashLightBeginHover
	 */
	struct AMPFreddyPawnBase_C_OnFlashLightBeginHover_Params
	{
	public:
		class AFlashlight_Battery_C*                               Flashlight;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnFlashLightEndHover
	 */
	struct AMPFreddyPawnBase_C_OnFlashLightEndHover_Params
	{
	public:
		class AFlashlight_Battery_C*                               Flashlight;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.ReceivePossessed
	 */
	struct AMPFreddyPawnBase_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.RestartPlayer
	 */
	struct AMPFreddyPawnBase_C_RestartPlayer_Params
	{
	};

	/**
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnPlayerVisionExit
	 */
	struct AMPFreddyPawnBase_C_OnPlayerVisionExit_Params
	{
	public:
		class AFNAFPlayerPawn_C*                                   PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnPlayerVisionEnter
	 */
	struct AMPFreddyPawnBase_C_OnPlayerVisionEnter_Params
	{
	public:
		class AFNAFPlayerPawn_C*                                   PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AMPFreddyPawnBase_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.ReceiveTick
	 */
	struct AMPFreddyPawnBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPFreddyPawnBase.MPFreddyPawnBase_C.ExecuteUbergraph_MPFreddyPawnBase
	 */
	struct AMPFreddyPawnBase_C_ExecuteUbergraph_MPFreddyPawnBase_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
