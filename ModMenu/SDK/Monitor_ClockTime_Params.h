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
	 * Function Monitor_ClockTime.Monitor_ClockTime_C.PaddingForTranslation
	 */
	struct UMonitor_ClockTime_C_PaddingForTranslation_Params
	{
	};

	/**
	 * Function Monitor_ClockTime.Monitor_ClockTime_C.GetText_2
	 */
	struct UMonitor_ClockTime_C_GetText_2_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Monitor_ClockTime.Monitor_ClockTime_C.GetText_1
	 */
	struct UMonitor_ClockTime_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Monitor_ClockTime.Monitor_ClockTime_C.Tick
	 */
	struct UMonitor_ClockTime_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Monitor_ClockTime.Monitor_ClockTime_C.Construct
	 */
	struct UMonitor_ClockTime_C_Construct_Params
	{
	};

	/**
	 * Function Monitor_ClockTime.Monitor_ClockTime_C.ExecuteUbergraph_Monitor_ClockTime
	 */
	struct UMonitor_ClockTime_C_ExecuteUbergraph_Monitor_ClockTime_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
