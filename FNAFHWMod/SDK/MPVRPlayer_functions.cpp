
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

// Function MPVRPlayer.MPVRPlayer_C.Get Flash Light
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFlashlightBase_C*       Flashlight                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMPVRPlayer_C::Get_Flash_Light(class AFlashlightBase_C** Flashlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPVRPlayer.MPVRPlayer_C.Get Flash Light");

	AMPVRPlayer_C_Get_Flash_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Flashlight != nullptr)
		*Flashlight = params.Flashlight;
}


// Function MPVRPlayer.MPVRPlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMPVRPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPVRPlayer.MPVRPlayer_C.UserConstructionScript");

	AMPVRPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPVRPlayer.MPVRPlayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMPVRPlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPVRPlayer.MPVRPlayer_C.ReceiveBeginPlay");

	AMPVRPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPVRPlayer.MPVRPlayer_C.OnFlashlightChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FlashLightOn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPVRPlayer_C::OnFlashlightChanged(bool FlashLightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPVRPlayer.MPVRPlayer_C.OnFlashlightChanged");

	AMPVRPlayer_C_OnFlashlightChanged_Params params;
	params.FlashLightOn = FlashLightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPVRPlayer.MPVRPlayer_C.ExecuteUbergraph_MPVRPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPVRPlayer_C::ExecuteUbergraph_MPVRPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPVRPlayer.MPVRPlayer_C.ExecuteUbergraph_MPVRPlayer");

	AMPVRPlayer_C_ExecuteUbergraph_MPVRPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
