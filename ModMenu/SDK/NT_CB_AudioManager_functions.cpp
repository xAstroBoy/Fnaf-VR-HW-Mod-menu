
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

// Function NT_CB_AudioManager.NT_CB_AudioManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANT_CB_AudioManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NT_CB_AudioManager.NT_CB_AudioManager_C.UserConstructionScript");

	ANT_CB_AudioManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NT_CB_AudioManager.NT_CB_AudioManager_C.TriggerSoloSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              SoundFile                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANT_CB_AudioManager_C::TriggerSoloSound(class USoundBase* SoundFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function NT_CB_AudioManager.NT_CB_AudioManager_C.TriggerSoloSound");

	ANT_CB_AudioManager_C_TriggerSoloSound_Params params;
	params.SoundFile = SoundFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NT_CB_AudioManager.NT_CB_AudioManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANT_CB_AudioManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NT_CB_AudioManager.NT_CB_AudioManager_C.ReceiveBeginPlay");

	ANT_CB_AudioManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NT_CB_AudioManager.NT_CB_AudioManager_C.TriggerSound2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANT_CB_AudioManager_C::TriggerSound2D(class USoundBase* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function NT_CB_AudioManager.NT_CB_AudioManager_C.TriggerSound2D");

	ANT_CB_AudioManager_C_TriggerSound2D_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NT_CB_AudioManager.NT_CB_AudioManager_C.StopSound
// (BlueprintCallable, BlueprintEvent)

void ANT_CB_AudioManager_C::StopSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function NT_CB_AudioManager.NT_CB_AudioManager_C.StopSound");

	ANT_CB_AudioManager_C_StopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NT_CB_AudioManager.NT_CB_AudioManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANT_CB_AudioManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NT_CB_AudioManager.NT_CB_AudioManager_C.ReceiveTick");

	ANT_CB_AudioManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NT_CB_AudioManager.NT_CB_AudioManager_C.ExecuteUbergraph_NT_CB_AudioManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANT_CB_AudioManager_C::ExecuteUbergraph_NT_CB_AudioManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NT_CB_AudioManager.NT_CB_AudioManager_C.ExecuteUbergraph_NT_CB_AudioManager");

	ANT_CB_AudioManager_C_ExecuteUbergraph_NT_CB_AudioManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
