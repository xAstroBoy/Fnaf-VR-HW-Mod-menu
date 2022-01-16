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
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PirateCoveCameraState
	 */
	struct ADLC_MonitorBoard_Office01_C_PirateCoveCameraState_Params
	{
	public:
		bool                                                       PirateCoveCameraBroke;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.SubscribeMonitorBtn
	 */
	struct ADLC_MonitorBoard_Office01_C_SubscribeMonitorBtn_Params
	{
	public:
		class AMonitorButton_BP_C*                                 ItemToFind;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        BtnID;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Timeline_0_0__FinishedFunc
	 */
	struct ADLC_MonitorBoard_Office01_C_Timeline_0_0__FinishedFunc_Params
	{
	};

	/**
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Timeline_0_0__UpdateFunc
	 */
	struct ADLC_MonitorBoard_Office01_C_Timeline_0_0__UpdateFunc_Params
	{
	};

	/**
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Event Btn Pressed
	 */
	struct ADLC_MonitorBoard_Office01_C_Event_Btn_Pressed_Params
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
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ReceiveBeginPlay
	 */
	struct ADLC_MonitorBoard_Office01_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.DisableMonitorInteractions
	 */
	struct ADLC_MonitorBoard_Office01_C_DisableMonitorInteractions_Params
	{
	public:
		bool                                                       Player_Won_Game;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ReceiveTick
	 */
	struct ADLC_MonitorBoard_Office01_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.EventBtnInteractableIsHeld
	 */
	struct ADLC_MonitorBoard_Office01_C_EventBtnInteractableIsHeld_Params
	{
	public:
		bool                                                       IsBeingHeld;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Event Btn Interactable
	 */
	struct ADLC_MonitorBoard_Office01_C_Event_Btn_Interactable_Params
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
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.RestartPower
	 */
	struct ADLC_MonitorBoard_Office01_C_RestartPower_Params
	{
	};

	/**
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerOutageHasOccured
	 */
	struct ADLC_MonitorBoard_Office01_C_PowerOutageHasOccured_Params
	{
	};

	/**
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerRebooted
	 */
	struct ADLC_MonitorBoard_Office01_C_PowerRebooted_Params
	{
	};

	/**
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerOutageEvent
	 */
	struct ADLC_MonitorBoard_Office01_C_PowerOutageEvent_Params
	{
	};

	/**
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.SetVisualStatic
	 */
	struct ADLC_MonitorBoard_Office01_C_SetVisualStatic_Params
	{
	public:
		bool                                                       EnableStatic;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ExecuteUbergraph_DLC_MonitorBoard_Office01
	 */
	struct ADLC_MonitorBoard_Office01_C_ExecuteUbergraph_DLC_MonitorBoard_Office01_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
