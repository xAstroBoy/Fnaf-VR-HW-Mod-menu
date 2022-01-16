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
	 * Function MainMenuPlayer.MainMenuPlayer_C.ReceiveBeginPlay
	 */
	struct AMainMenuPlayer_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MainMenuPlayer.MainMenuPlayer_C.ReceiveTick
	 */
	struct AMainMenuPlayer_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuPlayer.MainMenuPlayer_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AMainMenuPlayer_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function MainMenuPlayer.MainMenuPlayer_C.Deactivate
	 */
	struct AMainMenuPlayer_C_Deactivate_Params
	{
	};

	/**
	 * Function MainMenuPlayer.MainMenuPlayer_C.Activate
	 */
	struct AMainMenuPlayer_C_Activate_Params
	{
	};

	/**
	 * Function MainMenuPlayer.MainMenuPlayer_C.Teleporting to Prize Counter
	 */
	struct AMainMenuPlayer_C_Teleporting_to_Prize_Counter_Params
	{
	public:
		class AMasterButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuPlayer.MainMenuPlayer_C.Teleporting to Main Hub
	 */
	struct AMainMenuPlayer_C_Teleporting_to_Main_Hub_Params
	{
	public:
		class AMasterButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuPlayer.MainMenuPlayer_C.Camera Fade
	 */
	struct AMainMenuPlayer_C_Camera_Fade_Params
	{
	};

	/**
	 * Function MainMenuPlayer.MainMenuPlayer_C.OnFinished_Event_1
	 */
	struct AMainMenuPlayer_C_OnFinished_Event_1_Params
	{
	};

	/**
	 * Function MainMenuPlayer.MainMenuPlayer_C.ExecuteUbergraph_MainMenuPlayer
	 */
	struct AMainMenuPlayer_C_ExecuteUbergraph_MainMenuPlayer_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
