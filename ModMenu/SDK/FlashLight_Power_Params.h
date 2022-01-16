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
	 * Function FlashLight_Power.FlashLight_Power_C.Get_ProgressBar_Flashlight_Battery_Percent_1
	 */
	struct UFlashLight_Power_C_Get_ProgressBar_Flashlight_Battery_Percent_1_Params
	{
	public:
		float                                                      SetPower;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FlashLight_Power.FlashLight_Power_C.Battery should be Blue
	 */
	struct UFlashLight_Power_C_Battery_should_be_Blue_Params
	{
	};

	/**
	 * Function FlashLight_Power.FlashLight_Power_C.Battery Should be Green
	 */
	struct UFlashLight_Power_C_Battery_Should_be_Green_Params
	{
	};

	/**
	 * Function FlashLight_Power.FlashLight_Power_C.Tick
	 */
	struct UFlashLight_Power_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FlashLight_Power.FlashLight_Power_C.PreConstruct
	 */
	struct UFlashLight_Power_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FlashLight_Power.FlashLight_Power_C.ExecuteUbergraph_FlashLight_Power
	 */
	struct UFlashLight_Power_C_ExecuteUbergraph_FlashLight_Power_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
