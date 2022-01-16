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
	 * Function BP_FNAFGameMode.BP_FNAFGameMode_C.InitializeReferences
	 */
	struct ABP_FNAFGameMode_C_InitializeReferences_Params
	{
	};

	/**
	 * Function BP_FNAFGameMode.BP_FNAFGameMode_C.SetGameState
	 */
	struct ABP_FNAFGameMode_C_SetGameState_Params
	{
	public:
		freddys_EGLGameState                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAFGameMode.BP_FNAFGameMode_C.ReceiveBeginPlay
	 */
	struct ABP_FNAFGameMode_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_FNAFGameMode.BP_FNAFGameMode_C.ExecuteUbergraph_BP_FNAFGameMode
	 */
	struct ABP_FNAFGameMode_C_ExecuteUbergraph_BP_FNAFGameMode_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
