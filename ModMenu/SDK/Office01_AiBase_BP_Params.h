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
	 * Function Office01_AiBase_BP.Office01_AiBase_BP_C.CheckDoorLights
	 */
	struct AOffice01_AiBase_BP_C_CheckDoorLights_Params
	{
	};

	/**
	 * Function Office01_AiBase_BP.Office01_AiBase_BP_C.ResetPosition
	 */
	struct AOffice01_AiBase_BP_C_ResetPosition_Params
	{
	};

	/**
	 * Function Office01_AiBase_BP.Office01_AiBase_BP_C.CameraFadeFlicker__FinishedFunc
	 */
	struct AOffice01_AiBase_BP_C_CameraFadeFlicker__FinishedFunc_Params
	{
	};

	/**
	 * Function Office01_AiBase_BP.Office01_AiBase_BP_C.CameraFadeFlicker__UpdateFunc
	 */
	struct AOffice01_AiBase_BP_C_CameraFadeFlicker__UpdateFunc_Params
	{
	};

	/**
	 * Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReceiveTick
	 */
	struct AOffice01_AiBase_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReachedKillZone
	 */
	struct AOffice01_AiBase_BP_C_ReachedKillZone_Params
	{
	};

	/**
	 * Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReceiveBeginPlay
	 */
	struct AOffice01_AiBase_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office01_AiBase_BP.Office01_AiBase_BP_C.TriggerLightSound
	 */
	struct AOffice01_AiBase_BP_C_TriggerLightSound_Params
	{
	};

	/**
	 * Function Office01_AiBase_BP.Office01_AiBase_BP_C.MoveAi
	 */
	struct AOffice01_AiBase_BP_C_MoveAi_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ALocPoint_BP_C*                                      Location;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office01_AiBase_BP.Office01_AiBase_BP_C.ResetAudioTriggerForDoor
	 */
	struct AOffice01_AiBase_BP_C_ResetAudioTriggerForDoor_Params
	{
	};

	/**
	 * Function Office01_AiBase_BP.Office01_AiBase_BP_C.TESTINGONLY_ForceJumpscare
	 */
	struct AOffice01_AiBase_BP_C_TESTINGONLY_ForceJumpscare_Params
	{
	};

	/**
	 * Function Office01_AiBase_BP.Office01_AiBase_BP_C.ExecuteUbergraph_Office01_AiBase_BP
	 */
	struct AOffice01_AiBase_BP_C_ExecuteUbergraph_Office01_AiBase_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
