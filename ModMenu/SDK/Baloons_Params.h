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
	 * Function Baloons.Baloons_C.PickRandomBaloonColor
	 */
	struct ABaloons_C_PickRandomBaloonColor_Params
	{
	public:
		int                                                        BaloonID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Baloons.Baloons_C.nightmare mode triggered
	 */
	struct ABaloons_C_nightmare_mode_triggered_Params
	{
	};

	/**
	 * Function Baloons.Baloons_C.Nightmare Mode Disabled
	 */
	struct ABaloons_C_Nightmare_Mode_Disabled_Params
	{
	};

	/**
	 * Function Baloons.Baloons_C.ExecuteUbergraph_Baloons
	 */
	struct ABaloons_C_ExecuteUbergraph_Baloons_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
