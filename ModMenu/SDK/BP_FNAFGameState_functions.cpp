
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_FNAFGameState.BP_FNAFGameState_C.GetGameState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGLGameState                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGLGameState ABP_FNAFGameState_C::GetGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.GetGameState");

	ABP_FNAFGameState_C_GetGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FNAFGameState.BP_FNAFGameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FNAFGameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.UserConstructionScript");

	ABP_FNAFGameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAFGameState.BP_FNAFGameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FNAFGameState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.ReceiveBeginPlay");

	ABP_FNAFGameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAFGameState.BP_FNAFGameState_C.OnVictoryCondition
// (BlueprintCallable, BlueprintEvent)

void ABP_FNAFGameState_C::OnVictoryCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.OnVictoryCondition");

	ABP_FNAFGameState_C_OnVictoryCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAFGameState.BP_FNAFGameState_C.SetGameState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGLGameState*                  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FNAFGameState_C::SetGameState(EGLGameState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.SetGameState");

	ABP_FNAFGameState_C_SetGameState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAFGameState.BP_FNAFGameState_C.SetVictoryCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGLVictoryState*               victory                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FNAFGameState_C::SetVictoryCondition(EGLVictoryState* victory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.SetVictoryCondition");

	ABP_FNAFGameState_C_SetVictoryCondition_Params params;
	params.victory = victory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAFGameState.BP_FNAFGameState_C.ExecuteUbergraph_BP_FNAFGameState
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FNAFGameState_C::ExecuteUbergraph_BP_FNAFGameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.ExecuteUbergraph_BP_FNAFGameState");

	ABP_FNAFGameState_C_ExecuteUbergraph_BP_FNAFGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAFGameState.BP_FNAFGameState_C.GamePreLossMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_FNAFGameState_C::GamePreLossMode__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.GamePreLossMode__DelegateSignature");

	ABP_FNAFGameState_C_GamePreLossMode__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAFGameState.BP_FNAFGameState_C.GamePreVictoryMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_FNAFGameState_C::GamePreVictoryMode__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.GamePreVictoryMode__DelegateSignature");

	ABP_FNAFGameState_C_GamePreVictoryMode__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAFGameState.BP_FNAFGameState_C.WinConditionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGLVictoryState                NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FNAFGameState_C::WinConditionChanged__DelegateSignature(EGLVictoryState NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.WinConditionChanged__DelegateSignature");

	ABP_FNAFGameState_C_WinConditionChanged__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAFGameState.BP_FNAFGameState_C.GameStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGLGameState                   GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FNAFGameState_C::GameStateChanged__DelegateSignature(EGLGameState GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.GameStateChanged__DelegateSignature");

	ABP_FNAFGameState_C_GameStateChanged__DelegateSignature_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
