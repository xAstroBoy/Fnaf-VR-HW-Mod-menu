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
	 * Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckForAnimatronicCatagory
	 */
	struct AOffice02_AiBase_BP_C_CheckForAnimatronicCatagory_Params
	{
	};

	/**
	 * Function Office02_AiBase_BP.Office02_AiBase_BP_C.MoveBackToStarting
	 */
	struct AOffice02_AiBase_BP_C_MoveBackToStarting_Params
	{
	};

	/**
	 * Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckForMaskType
	 */
	struct AOffice02_AiBase_BP_C_CheckForMaskType_Params
	{
	};

	/**
	 * Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckLightFixture
	 */
	struct AOffice02_AiBase_BP_C_CheckLightFixture_Params
	{
	};

	/**
	 * Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReceiveTick
	 */
	struct AOffice02_AiBase_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office02_AiBase_BP.Office02_AiBase_BP_C.ResetDoOnceNodes
	 */
	struct AOffice02_AiBase_BP_C_ResetDoOnceNodes_Params
	{
	};

	/**
	 * Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReachedKillZone
	 */
	struct AOffice02_AiBase_BP_C_ReachedKillZone_Params
	{
	};

	/**
	 * Function Office02_AiBase_BP.Office02_AiBase_BP_C.MoveAi
	 */
	struct AOffice02_AiBase_BP_C_MoveAi_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ALocPoint_BP_C*                                      Location;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office02_AiBase_BP.Office02_AiBase_BP_C.ForcedJumpScare
	 */
	struct AOffice02_AiBase_BP_C_ForcedJumpScare_Params
	{
	};

	/**
	 * Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReceiveBeginPlay
	 */
	struct AOffice02_AiBase_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office02_AiBase_BP.Office02_AiBase_BP_C.ExecuteUbergraph_Office02_AiBase_BP
	 */
	struct AOffice02_AiBase_BP_C_ExecuteUbergraph_Office02_AiBase_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
