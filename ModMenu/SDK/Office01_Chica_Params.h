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
	 * Function Office01_Chica.Office01_Chica_C.ReceiveBeginPlay
	 */
	struct AOffice01_Chica_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office01_Chica.Office01_Chica_C.MoveAi
	 */
	struct AOffice01_Chica_C_MoveAi_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ALocPoint_BP_C*                                      Location;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office01_Chica.Office01_Chica_C.ReceiveTick
	 */
	struct AOffice01_Chica_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office01_Chica.Office01_Chica_C.Chica_SpecialDoorMove
	 */
	struct AOffice01_Chica_C_Chica_SpecialDoorMove_Params
	{
	};

	/**
	 * Function Office01_Chica.Office01_Chica_C.ExecuteUbergraph_Office01_Chica
	 */
	struct AOffice01_Chica_C_ExecuteUbergraph_Office01_Chica_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
