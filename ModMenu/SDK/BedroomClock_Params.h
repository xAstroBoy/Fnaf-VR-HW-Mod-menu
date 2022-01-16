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
	 * Function BedroomClock.BedroomClock_C.UpdatesClock
	 */
	struct ABedroomClock_C_UpdatesClock_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BedroomClock.BedroomClock_C.ReceiveTick
	 */
	struct ABedroomClock_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BedroomClock.BedroomClock_C.TimeOver
	 */
	struct ABedroomClock_C_TimeOver_Params
	{
	};

	/**
	 * Function BedroomClock.BedroomClock_C.ReceiveBeginPlay
	 */
	struct ABedroomClock_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BedroomClock.BedroomClock_C.ExecuteUbergraph_BedroomClock
	 */
	struct ABedroomClock_C_ExecuteUbergraph_BedroomClock_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
