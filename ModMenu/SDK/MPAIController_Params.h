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
	 * Function MPAIController.MPAIController_C.ReceiveBeginPlay
	 */
	struct AMPAIController_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MPAIController.MPAIController_C.ChangeFlashLightStatus
	 */
	struct AMPAIController_C_ChangeFlashLightStatus_Params
	{
	public:
		bool                                                       IsInFlashlight;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MPAIController.MPAIController_C.ChangePlayerVisStatus
	 */
	struct AMPAIController_C_ChangePlayerVisStatus_Params
	{
	public:
		bool                                                       IsInPlayerVis;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MPAIController.MPAIController_C.ExecuteUbergraph_MPAIController
	 */
	struct AMPAIController_C_ExecuteUbergraph_MPAIController_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
