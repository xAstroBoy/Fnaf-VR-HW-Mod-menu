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
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.NonVR_StoringMonitorInteractions
	 */
	struct AOffice03_MonitorBoard_BP_C_NonVR_StoringMonitorInteractions_Params
	{
	public:
		bool                                                       IsVent;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int                                                        ReturnButtonID;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.DisableCoin
	 */
	struct AOffice03_MonitorBoard_BP_C_DisableCoin_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.EnableCoin
	 */
	struct AOffice03_MonitorBoard_BP_C_EnableCoin_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.TurnOffVentLights
	 */
	struct AOffice03_MonitorBoard_BP_C_TurnOffVentLights_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.UpdateVentLights
	 */
	struct AOffice03_MonitorBoard_BP_C_UpdateVentLights_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.GetLockedVentInfo
	 */
	struct AOffice03_MonitorBoard_BP_C_GetLockedVentInfo_Params
	{
	public:
		TArray<struct FOffice03_VentRoomLockOff_struct>            BlockedRooms;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.PhantomAttack
	 */
	struct AOffice03_MonitorBoard_BP_C_PhantomAttack_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.TriggerVentilation
	 */
	struct AOffice03_MonitorBoard_BP_C_TriggerVentilation_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootVentilation
	 */
	struct AOffice03_MonitorBoard_BP_C_RebootVentilation_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootCameras
	 */
	struct AOffice03_MonitorBoard_BP_C_RebootCameras_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootAudio
	 */
	struct AOffice03_MonitorBoard_BP_C_RebootAudio_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.AudioDelay
	 */
	struct AOffice03_MonitorBoard_BP_C_AudioDelay_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.OpenVent
	 */
	struct AOffice03_MonitorBoard_BP_C_OpenVent_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ClosingVent
	 */
	struct AOffice03_MonitorBoard_BP_C_ClosingVent_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Timeline_0__FinishedFunc
	 */
	struct AOffice03_MonitorBoard_BP_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Timeline_0__UpdateFunc
	 */
	struct AOffice03_MonitorBoard_BP_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ReceiveBeginPlay
	 */
	struct AOffice03_MonitorBoard_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Event Btn Pressed
	 */
	struct AOffice03_MonitorBoard_BP_C_Event_Btn_Pressed_Params
	{
	public:
		int                                                        ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UMaterial*                                           CameraMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ARoomInfo_Bp_C*>                              Room;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UStaticMesh*                                         VentLight;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AFNAFCamera_Blueprint_C*                             FNAFCamera;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Event Btn Interactable
	 */
	struct AOffice03_MonitorBoard_BP_C_Event_Btn_Interactable_Params
	{
	public:
		bool                                                       IsLightBtn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsVentBtn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAudioBtn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsMusicBoxBtn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRebootBtn;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHeldDown;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ReceiveTick
	 */
	struct AOffice03_MonitorBoard_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentilationDamaged
	 */
	struct AOffice03_MonitorBoard_BP_C_VentilationDamaged_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Flash Alarm Light
	 */
	struct AOffice03_MonitorBoard_BP_C_Flash_Alarm_Light_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RandomPhantomAttacks
	 */
	struct AOffice03_MonitorBoard_BP_C_RandomPhantomAttacks_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.AttackTrigger
	 */
	struct AOffice03_MonitorBoard_BP_C_AttackTrigger_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentTriggerToAccelerateSpringtrap
	 */
	struct AOffice03_MonitorBoard_BP_C_VentTriggerToAccelerateSpringtrap_Params
	{
	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.SetVisualStatic
	 */
	struct AOffice03_MonitorBoard_BP_C_SetVisualStatic_Params
	{
	public:
		bool                                                       EnableStatic;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ZoomInteract
	 */
	struct AOffice03_MonitorBoard_BP_C_ZoomInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Hit_Component;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VoiceButtonChange
	 */
	struct AOffice03_MonitorBoard_BP_C_VoiceButtonChange_Params
	{
	public:
		bool                                                       Is_Pressed;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentButtonChange
	 */
	struct AOffice03_MonitorBoard_BP_C_VentButtonChange_Params
	{
	public:
		bool                                                       Is_Pressed;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ExecuteUbergraph_Office03_MonitorBoard_BP
	 */
	struct AOffice03_MonitorBoard_BP_C_ExecuteUbergraph_Office03_MonitorBoard_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
