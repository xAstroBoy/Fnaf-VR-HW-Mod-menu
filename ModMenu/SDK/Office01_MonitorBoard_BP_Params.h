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
	 * Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.Timeline_0__FinishedFunc
	 */
	struct AOffice01_MonitorBoard_BP_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.Timeline_0__UpdateFunc
	 */
	struct AOffice01_MonitorBoard_BP_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.OnNonVRLineTraceInteract
	 */
	struct AOffice01_MonitorBoard_BP_C_OnNonVRLineTraceInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.Event Btn Pressed
	 */
	struct AOffice01_MonitorBoard_BP_C_Event_Btn_Pressed_Params
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
	 * Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.ReceiveBeginPlay
	 */
	struct AOffice01_MonitorBoard_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.DisableMonitorInteractions
	 */
	struct AOffice01_MonitorBoard_BP_C_DisableMonitorInteractions_Params
	{
	public:
		bool                                                       Player_Won_Game;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.ReceiveTick
	 */
	struct AOffice01_MonitorBoard_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.ZoomInteract
	 */
	struct AOffice01_MonitorBoard_BP_C_ZoomInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Hit_Component;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.ExecuteUbergraph_Office01_MonitorBoard_BP
	 */
	struct AOffice01_MonitorBoard_BP_C_ExecuteUbergraph_Office01_MonitorBoard_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
