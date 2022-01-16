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
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.UserConstructionScript
	 */
	struct AOfficePhone_Bp_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneButtonPulse__FinishedFunc
	 */
	struct AOfficePhone_Bp_C_PhoneButtonPulse__FinishedFunc_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneButtonPulse__UpdateFunc
	 */
	struct AOfficePhone_Bp_C_PhoneButtonPulse__UpdateFunc_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.ReceiveBeginPlay
	 */
	struct AOfficePhone_Bp_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.ReceiveTick
	 */
	struct AOfficePhone_Bp_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__MuteCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AOfficePhone_Bp_C_BndEvt__MuteCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneHasBeenGrabbed
	 */
	struct AOfficePhone_Bp_C_PhoneHasBeenGrabbed_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.ObjectHasBeenDropped_Event_1
	 */
	struct AOfficePhone_Bp_C_ObjectHasBeenDropped_Event_1_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AOfficePhone_Bp_C_BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AOfficePhone_Bp_C_BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.OnAudioPlayback_AudioSpeaker
	 */
	struct AOfficePhone_Bp_C_OnAudioPlayback_AudioSpeaker_Params
	{
	public:
		class USoundWave*                                          PlayingSoundWave;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlaybackPercent;                                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.ResetDoOnces
	 */
	struct AOfficePhone_Bp_C_ResetDoOnces_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneFellIntoZone
	 */
	struct AOfficePhone_Bp_C_PhoneFellIntoZone_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.ShutOffPhone
	 */
	struct AOfficePhone_Bp_C_ShutOffPhone_Params
	{
	public:
		bool                                                       Player_Won_Game;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.SpeakerOn
	 */
	struct AOfficePhone_Bp_C_SpeakerOn_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.SpeakerOff
	 */
	struct AOfficePhone_Bp_C_SpeakerOff_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__SpeakerCollider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AOfficePhone_Bp_C_BndEvt__SpeakerCollider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.TriggerButtomPulse
	 */
	struct AOfficePhone_Bp_C_TriggerButtomPulse_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.TurnOffPhoneButtons
	 */
	struct AOfficePhone_Bp_C_TurnOffPhoneButtons_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.StopButtonPulse
	 */
	struct AOfficePhone_Bp_C_StopButtonPulse_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.TriggerClitch
	 */
	struct AOfficePhone_Bp_C_TriggerClitch_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.ExecuteUbergraph_OfficePhone_Bp
	 */
	struct AOfficePhone_Bp_C_ExecuteUbergraph_OfficePhone_Bp_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.Released__DelegateSignature
	 */
	struct AOfficePhone_Bp_C_Released__DelegateSignature_Params
	{
	};

	/**
	 * Function OfficePhone_Bp.OfficePhone_Bp_C.Grabbed__DelegateSignature
	 */
	struct AOfficePhone_Bp_C_Grabbed__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
