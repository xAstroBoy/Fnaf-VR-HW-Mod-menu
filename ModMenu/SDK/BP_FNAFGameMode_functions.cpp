
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

// Function BP_FNAFGameMode.BP_FNAFGameMode_C.InitializeReferences
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FNAFGameMode_C::InitializeReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameMode.BP_FNAFGameMode_C.InitializeReferences");

	ABP_FNAFGameMode_C_InitializeReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAFGameMode.BP_FNAFGameMode_C.SetGameState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGLGameState                   NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FNAFGameMode_C::SetGameState(EGLGameState NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameMode.BP_FNAFGameMode_C.SetGameState");

	ABP_FNAFGameMode_C_SetGameState_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAFGameMode.BP_FNAFGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FNAFGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameMode.BP_FNAFGameMode_C.UserConstructionScript");

	ABP_FNAFGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAFGameMode.BP_FNAFGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FNAFGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameMode.BP_FNAFGameMode_C.ReceiveBeginPlay");

	ABP_FNAFGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAFGameMode.BP_FNAFGameMode_C.ExecuteUbergraph_BP_FNAFGameMode
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FNAFGameMode_C::ExecuteUbergraph_BP_FNAFGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAFGameMode.BP_FNAFGameMode_C.ExecuteUbergraph_BP_FNAFGameMode");

	ABP_FNAFGameMode_C_ExecuteUbergraph_BP_FNAFGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
