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
	 * Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.GetEnableState
	 */
	struct AFNAFCamera_Blueprint_C_GetEnableState_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.DisableCam
	 */
	struct AFNAFCamera_Blueprint_C_DisableCam_Params
	{
	};

	/**
	 * Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.EnableCam
	 */
	struct AFNAFCamera_Blueprint_C_EnableCam_Params
	{
	};

	/**
	 * Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.RotateCamera
	 */
	struct AFNAFCamera_Blueprint_C_RotateCamera_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ReceiveTick
	 */
	struct AFNAFCamera_Blueprint_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ReceiveBeginPlay
	 */
	struct AFNAFCamera_Blueprint_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ExecuteUbergraph_FNAFCamera_Blueprint
	 */
	struct AFNAFCamera_Blueprint_C_ExecuteUbergraph_FNAFCamera_Blueprint_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
