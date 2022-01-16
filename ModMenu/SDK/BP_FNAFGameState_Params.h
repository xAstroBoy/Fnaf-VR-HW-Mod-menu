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
	 * Function BP_FNAFGameState.BP_FNAFGameState_C.GetGameState
	 */
	struct ABP_FNAFGameState_C_GetGameState_Params
	{
	public:
		freddys_EGLGameState                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAFGameState.BP_FNAFGameState_C.ReceiveBeginPlay
	 */
	struct ABP_FNAFGameState_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_FNAFGameState.BP_FNAFGameState_C.OnVictoryCondition
	 */
	struct ABP_FNAFGameState_C_OnVictoryCondition_Params
	{
	};

	/**
	 * Function BP_FNAFGameState.BP_FNAFGameState_C.SetGameState
	 */
	struct ABP_FNAFGameState_C_SetGameState_Params
	{
	public:
		freddys_EGLGameState                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAFGameState.BP_FNAFGameState_C.SetVictoryCondition
	 */
	struct ABP_FNAFGameState_C_SetVictoryCondition_Params
	{
	public:
		freddys_EGLVictoryState                                    victory;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAFGameState.BP_FNAFGameState_C.ExecuteUbergraph_BP_FNAFGameState
	 */
	struct ABP_FNAFGameState_C_ExecuteUbergraph_BP_FNAFGameState_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAFGameState.BP_FNAFGameState_C.GamePreLossMode__DelegateSignature
	 */
	struct ABP_FNAFGameState_C_GamePreLossMode__DelegateSignature_Params
	{
	};

	/**
	 * Function BP_FNAFGameState.BP_FNAFGameState_C.GamePreVictoryMode__DelegateSignature
	 */
	struct ABP_FNAFGameState_C_GamePreVictoryMode__DelegateSignature_Params
	{
	};

	/**
	 * Function BP_FNAFGameState.BP_FNAFGameState_C.WinConditionChanged__DelegateSignature
	 */
	struct ABP_FNAFGameState_C_WinConditionChanged__DelegateSignature_Params
	{
	public:
		freddys_EGLVictoryState                                    NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAFGameState.BP_FNAFGameState_C.GameStateChanged__DelegateSignature
	 */
	struct ABP_FNAFGameState_C_GameStateChanged__DelegateSignature_Params
	{
	public:
		freddys_EGLGameState                                       GameState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
