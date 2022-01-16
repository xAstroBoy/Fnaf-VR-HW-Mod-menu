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
	 * Function MonitorBoard_BP.MonitorBoard_BP_C.InitializeClock
	 */
	struct AMonitorBoard_BP_C_InitializeClock_Params
	{
	};

	/**
	 * Function MonitorBoard_BP.MonitorBoard_BP_C.ArrayOfBtnStateFunction
	 */
	struct AMonitorBoard_BP_C_ArrayOfBtnStateFunction_Params
	{
	};

	/**
	 * Function MonitorBoard_BP.MonitorBoard_BP_C.SubscribeMonitorBtn
	 */
	struct AMonitorBoard_BP_C_SubscribeMonitorBtn_Params
	{
	public:
		class AMonitorButton_BP_C*                                 ItemToFind;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        BtnID;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MonitorBoard_BP.MonitorBoard_BP_C.UserConstructionScript
	 */
	struct AMonitorBoard_BP_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Pressed
	 */
	struct AMonitorBoard_BP_C_Event_Btn_Pressed_Params
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
	 * Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Interactable
	 */
	struct AMonitorBoard_BP_C_Event_Btn_Interactable_Params
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
	 * Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Interactable Is Held
	 */
	struct AMonitorBoard_BP_C_Event_Btn_Interactable_Is_Held_Params
	{
	public:
		bool                                                       IsBeingHeld;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MonitorBoard_BP.MonitorBoard_BP_C.LevelWon
	 */
	struct AMonitorBoard_BP_C_LevelWon_Params
	{
	};

	/**
	 * Function MonitorBoard_BP.MonitorBoard_BP_C.SetVisualStatic
	 */
	struct AMonitorBoard_BP_C_SetVisualStatic_Params
	{
	public:
		bool                                                       EnableStatic;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MonitorBoard_BP.MonitorBoard_BP_C.CharacterStartingMove
	 */
	struct AMonitorBoard_BP_C_CharacterStartingMove_Params
	{
	public:
		class AOfficeAiBase_Bp_C*                                  OfficeAI;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MonitorBoard_BP.MonitorBoard_BP_C.ReceiveBeginPlay
	 */
	struct AMonitorBoard_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MonitorBoard_BP.MonitorBoard_BP_C.ReceiveTick
	 */
	struct AMonitorBoard_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MonitorBoard_BP.MonitorBoard_BP_C.ExecuteUbergraph_MonitorBoard_BP
	 */
	struct AMonitorBoard_BP_C_ExecuteUbergraph_MonitorBoard_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
