
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

// Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChicaRepairAudioManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.UserConstructionScript");

	AChicaRepairAudioManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.TriggerInstructions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepairAudioManager_C::TriggerInstructions(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.TriggerInstructions");

	AChicaRepairAudioManager_C_TriggerInstructions_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChicaRepairAudioManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.ReceiveBeginPlay");

	AChicaRepairAudioManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.FindCupcake
// (BlueprintCallable, BlueprintEvent)

void AChicaRepairAudioManager_C::FindCupcake()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.FindCupcake");

	AChicaRepairAudioManager_C_FindCupcake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepairAudioManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.ReceiveTick");

	AChicaRepairAudioManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.Eat pizza
// (BlueprintCallable, BlueprintEvent)

void AChicaRepairAudioManager_C::Eat_pizza()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.Eat pizza");

	AChicaRepairAudioManager_C_Eat_pizza_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.Stop Audio
// (BlueprintCallable, BlueprintEvent)

void AChicaRepairAudioManager_C::Stop_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.Stop Audio");

	AChicaRepairAudioManager_C_Stop_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.ExecuteUbergraph_ChicaRepairAudioManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepairAudioManager_C::ExecuteUbergraph_ChicaRepairAudioManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.ExecuteUbergraph_ChicaRepairAudioManager");

	AChicaRepairAudioManager_C_ExecuteUbergraph_ChicaRepairAudioManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
