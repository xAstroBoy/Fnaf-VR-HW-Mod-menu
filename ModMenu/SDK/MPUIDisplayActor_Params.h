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
	 * Function MPUIDisplayActor.MPUIDisplayActor_C.ReceiveBeginPlay
	 */
	struct AMPUIDisplayActor_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MPUIDisplayActor.MPUIDisplayActor_C.ReceiveTick
	 */
	struct AMPUIDisplayActor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPUIDisplayActor.MPUIDisplayActor_C.ExecuteUbergraph_MPUIDisplayActor
	 */
	struct AMPUIDisplayActor_C_ExecuteUbergraph_MPUIDisplayActor_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
