
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

// Function Office01_GameManager.Office01_GameManager_C.PlayFoxySound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::PlayFoxySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.PlayFoxySound");

	AOffice01_GameManager_C_PlayFoxySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.PlayCircusSound
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::PlayCircusSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.PlayCircusSound");

	AOffice01_GameManager_C_PlayCircusSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.PlayFreddieKitchenSounds
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::PlayFreddieKitchenSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.PlayFreddieKitchenSounds");

	AOffice01_GameManager_C_PlayFreddieKitchenSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.PlayChicaKitchenSounds
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::PlayChicaKitchenSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.PlayChicaKitchenSounds");

	AOffice01_GameManager_C_PlayChicaKitchenSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.DecremenPowerUsage
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::DecremenPowerUsage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.DecremenPowerUsage");

	AOffice01_GameManager_C_DecremenPowerUsage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.IncrementPowerUsage
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::IncrementPowerUsage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.IncrementPowerUsage");

	AOffice01_GameManager_C_IncrementPowerUsage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.UserConstructionScript");

	AOffice01_GameManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice01_GameManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.ReceiveBeginPlay");

	AOffice01_GameManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_GameManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.ReceiveTick");

	AOffice01_GameManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.CheckDoorStates
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOffice01_Doors>   DoorList                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_GameManager_C::CheckDoorStates(TEnumAsByte<EOffice01_Doors> DoorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.CheckDoorStates");

	AOffice01_GameManager_C_CheckDoorStates_Params params;
	params.DoorList = DoorList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.FoxyKnockingAtTheDoor
// (BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::FoxyKnockingAtTheDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.FoxyKnockingAtTheDoor");

	AOffice01_GameManager_C_FoxyKnockingAtTheDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.Player Looking at kitchen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           False                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_GameManager_C::Player_Looking_at_kitchen(bool False)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.Player Looking at kitchen");

	AOffice01_GameManager_C_Player_Looking_at_kitchen_Params params;
	params.False = False;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.ExecuteUbergraph_Office01_GameManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_GameManager_C::ExecuteUbergraph_Office01_GameManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.ExecuteUbergraph_Office01_GameManager");

	AOffice01_GameManager_C_ExecuteUbergraph_Office01_GameManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.RoomSounds_Circus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::RoomSounds_Circus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.RoomSounds_Circus__DelegateSignature");

	AOffice01_GameManager_C_RoomSounds_Circus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.RoomSounds_Foxy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::RoomSounds_Foxy__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.RoomSounds_Foxy__DelegateSignature");

	AOffice01_GameManager_C_RoomSounds_Foxy__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.KitchenSounds_Freddy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::KitchenSounds_Freddy__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.KitchenSounds_Freddy__DelegateSignature");

	AOffice01_GameManager_C_KitchenSounds_Freddy__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.KitchenSounds_Chica__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::KitchenSounds_Chica__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.KitchenSounds_Chica__DelegateSignature");

	AOffice01_GameManager_C_KitchenSounds_Chica__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.CheckDoorLights__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::CheckDoorLights__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.CheckDoorLights__DelegateSignature");

	AOffice01_GameManager_C_CheckDoorLights__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.TriggerPowerOutage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::TriggerPowerOutage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.TriggerPowerOutage__DelegateSignature");

	AOffice01_GameManager_C_TriggerPowerOutage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.DisableDoorInteraction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::DisableDoorInteraction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.DisableDoorInteraction__DelegateSignature");

	AOffice01_GameManager_C_DisableDoorInteraction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.CheckDoorForLightSound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::CheckDoorForLightSound__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.CheckDoorForLightSound__DelegateSignature");

	AOffice01_GameManager_C_CheckDoorForLightSound__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_GameManager.Office01_GameManager_C.FreddySongTimer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AOffice01_GameManager_C::FreddySongTimer__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.FreddySongTimer__DelegateSignature");

	AOffice01_GameManager_C_FreddySongTimer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
