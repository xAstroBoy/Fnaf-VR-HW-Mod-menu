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
	 * Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.NotFlashed
	 */
	struct AOffice02_WitheredFoxy_C_NotFlashed_Params
	{
	};

	/**
	 * Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ResetFoxyValues
	 */
	struct AOffice02_WitheredFoxy_C_ResetFoxyValues_Params
	{
	};

	/**
	 * Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.IncreaseTimer
	 */
	struct AOffice02_WitheredFoxy_C_IncreaseTimer_Params
	{
	};

	/**
	 * Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.HasBeenFlashed
	 */
	struct AOffice02_WitheredFoxy_C_HasBeenFlashed_Params
	{
	};

	/**
	 * Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ReceiveTick
	 */
	struct AOffice02_WitheredFoxy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ReachedKillZone
	 */
	struct AOffice02_WitheredFoxy_C_ReachedKillZone_Params
	{
	};

	/**
	 * Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.MoveAi
	 */
	struct AOffice02_WitheredFoxy_C_MoveAi_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ALocPoint_BP_C*                                      Location;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.UnleashFoxy
	 */
	struct AOffice02_WitheredFoxy_C_UnleashFoxy_Params
	{
	};

	/**
	 * Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ReceiveBeginPlay
	 */
	struct AOffice02_WitheredFoxy_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.WitheredFoxyForcedToMove
	 */
	struct AOffice02_WitheredFoxy_C_WitheredFoxyForcedToMove_Params
	{
	};

	/**
	 * Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ExecuteUbergraph_Office02_WitheredFoxy
	 */
	struct AOffice02_WitheredFoxy_C_ExecuteUbergraph_Office02_WitheredFoxy_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
