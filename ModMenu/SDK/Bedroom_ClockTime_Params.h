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
	 * Function Bedroom_ClockTime.Bedroom_ClockTime_C.GetText_2
	 */
	struct UBedroom_ClockTime_C_GetText_2_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Bedroom_ClockTime.Bedroom_ClockTime_C.GetText_1
	 */
	struct UBedroom_ClockTime_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Bedroom_ClockTime.Bedroom_ClockTime_C.Tick
	 */
	struct UBedroom_ClockTime_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Bedroom_ClockTime.Bedroom_ClockTime_C.Construct
	 */
	struct UBedroom_ClockTime_C_Construct_Params
	{
	};

	/**
	 * Function Bedroom_ClockTime.Bedroom_ClockTime_C.ExecuteUbergraph_Bedroom_ClockTime
	 */
	struct UBedroom_ClockTime_C_ExecuteUbergraph_Bedroom_ClockTime_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
