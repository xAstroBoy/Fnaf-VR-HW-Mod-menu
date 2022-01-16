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
	 * Function Office02_BalloonBoy.Office02_BalloonBoy_C.CheckForMaskType
	 */
	struct AOffice02_BalloonBoy_C_CheckForMaskType_Params
	{
	};

	/**
	 * Function Office02_BalloonBoy.Office02_BalloonBoy_C.ReceiveTick
	 */
	struct AOffice02_BalloonBoy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office02_BalloonBoy.Office02_BalloonBoy_C.ReachedKillZone
	 */
	struct AOffice02_BalloonBoy_C_ReachedKillZone_Params
	{
	};

	/**
	 * Function Office02_BalloonBoy.Office02_BalloonBoy_C.BalloonBoysEndGame
	 */
	struct AOffice02_BalloonBoy_C_BalloonBoysEndGame_Params
	{
	};

	/**
	 * Function Office02_BalloonBoy.Office02_BalloonBoy_C.MoveAi
	 */
	struct AOffice02_BalloonBoy_C_MoveAi_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ALocPoint_BP_C*                                      Location;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office02_BalloonBoy.Office02_BalloonBoy_C.ExecuteUbergraph_Office02_BalloonBoy
	 */
	struct AOffice02_BalloonBoy_C_ExecuteUbergraph_Office02_BalloonBoy_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
