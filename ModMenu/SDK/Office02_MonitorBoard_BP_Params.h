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
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Timeline_0__FinishedFunc
	 */
	struct AOffice02_MonitorBoard_BP_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Timeline_0__UpdateFunc
	 */
	struct AOffice02_MonitorBoard_BP_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Pressed
	 */
	struct AOffice02_MonitorBoard_BP_C_Event_Btn_Pressed_Params
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
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Interactable
	 */
	struct AOffice02_MonitorBoard_BP_C_Event_Btn_Interactable_Params
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
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Interactable Is Held
	 */
	struct AOffice02_MonitorBoard_BP_C_Event_Btn_Interactable_Is_Held_Params
	{
	public:
		bool                                                       IsBeingHeld;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ReceiveTick
	 */
	struct AOffice02_MonitorBoard_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.EventMusicBoxCountDown
	 */
	struct AOffice02_MonitorBoard_BP_C_EventMusicBoxCountDown_Params
	{
	};

	/**
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ReceiveBeginPlay
	 */
	struct AOffice02_MonitorBoard_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Office02_Lights_Disabled
	 */
	struct AOffice02_MonitorBoard_BP_C_Event_Office02_Lights_Disabled_Params
	{
	};

	/**
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.DisableAllLightFunctions
	 */
	struct AOffice02_MonitorBoard_BP_C_DisableAllLightFunctions_Params
	{
	};

	/**
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.EnableFreddyStaticOverride
	 */
	struct AOffice02_MonitorBoard_BP_C_EnableFreddyStaticOverride_Params
	{
	};

	/**
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.DisableFreddyStaticOverride
	 */
	struct AOffice02_MonitorBoard_BP_C_DisableFreddyStaticOverride_Params
	{
	};

	/**
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.LightbuttonHit
	 */
	struct AOffice02_MonitorBoard_BP_C_LightbuttonHit_Params
	{
	public:
		bool                                                       Is_Pressed;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.MusicbuttonHit
	 */
	struct AOffice02_MonitorBoard_BP_C_MusicbuttonHit_Params
	{
	public:
		bool                                                       Is_Pressed;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.NonVR_HeldDownByPassMusicRelease
	 */
	struct AOffice02_MonitorBoard_BP_C_NonVR_HeldDownByPassMusicRelease_Params
	{
	};

	/**
	 * Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ExecuteUbergraph_Office02_MonitorBoard_BP
	 */
	struct AOffice02_MonitorBoard_BP_C_ExecuteUbergraph_Office02_MonitorBoard_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
