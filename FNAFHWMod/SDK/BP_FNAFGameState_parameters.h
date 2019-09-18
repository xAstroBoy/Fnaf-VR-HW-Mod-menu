#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_FNAFGameState.BP_FNAFGameState_C.GetGameState
struct ABP_FNAFGameState_C_GetGameState_Params
{
	EGLGameState                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FNAFGameState.BP_FNAFGameState_C.UserConstructionScript
struct ABP_FNAFGameState_C_UserConstructionScript_Params
{
};

// Function BP_FNAFGameState.BP_FNAFGameState_C.ReceiveBeginPlay
struct ABP_FNAFGameState_C_ReceiveBeginPlay_Params
{
};

// Function BP_FNAFGameState.BP_FNAFGameState_C.OnVictoryCondition
struct ABP_FNAFGameState_C_OnVictoryCondition_Params
{
};

// Function BP_FNAFGameState.BP_FNAFGameState_C.SetGameState
struct ABP_FNAFGameState_C_SetGameState_Params
{
	EGLGameState*                                      State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAFGameState.BP_FNAFGameState_C.SetVictoryCondition
struct ABP_FNAFGameState_C_SetVictoryCondition_Params
{
	EGLVictoryState*                                   victory;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAFGameState.BP_FNAFGameState_C.ExecuteUbergraph_BP_FNAFGameState
struct ABP_FNAFGameState_C_ExecuteUbergraph_BP_FNAFGameState_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAFGameState.BP_FNAFGameState_C.GamePreLossMode__DelegateSignature
struct ABP_FNAFGameState_C_GamePreLossMode__DelegateSignature_Params
{
};

// Function BP_FNAFGameState.BP_FNAFGameState_C.GamePreVictoryMode__DelegateSignature
struct ABP_FNAFGameState_C_GamePreVictoryMode__DelegateSignature_Params
{
};

// Function BP_FNAFGameState.BP_FNAFGameState_C.WinConditionChanged__DelegateSignature
struct ABP_FNAFGameState_C_WinConditionChanged__DelegateSignature_Params
{
	EGLVictoryState                                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAFGameState.BP_FNAFGameState_C.GameStateChanged__DelegateSignature
struct ABP_FNAFGameState_C_GameStateChanged__DelegateSignature_Params
{
	EGLGameState                                       GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
