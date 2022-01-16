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
	 * Function NonVRCrosshair.NonVRCrosshair_C.Get_Center_Brush_1
	 */
	struct UNonVRCrosshair_C_Get_Center_Brush_1_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NonVRCrosshair.NonVRCrosshair_C.Tick
	 */
	struct UNonVRCrosshair_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NonVRCrosshair.NonVRCrosshair_C.RecticleLookAt
	 */
	struct UNonVRCrosshair_C_RecticleLookAt_Params
	{
	};

	/**
	 * Function NonVRCrosshair.NonVRCrosshair_C.RecticleReset
	 */
	struct UNonVRCrosshair_C_RecticleReset_Params
	{
	};

	/**
	 * Function NonVRCrosshair.NonVRCrosshair_C.ReticleInteract
	 */
	struct UNonVRCrosshair_C_ReticleInteract_Params
	{
	};

	/**
	 * Function NonVRCrosshair.NonVRCrosshair_C.ExecuteUbergraph_NonVRCrosshair
	 */
	struct UNonVRCrosshair_C_ExecuteUbergraph_NonVRCrosshair_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
