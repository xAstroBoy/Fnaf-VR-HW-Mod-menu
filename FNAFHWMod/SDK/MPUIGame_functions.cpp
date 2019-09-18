
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

// Function MPUIGame.MPUIGame_C.UpdateVision
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ConeWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMPUIGame_C::UpdateVision(class UWidget* ConeWidget, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIGame.MPUIGame_C.UpdateVision");

	UMPUIGame_C_UpdateVision_Params params;
	params.ConeWidget = ConeWidget;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPUIGame.MPUIGame_C.UpdateFlashlightVision
// (Public, BlueprintCallable, BlueprintEvent)

void UMPUIGame_C::UpdateFlashlightVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIGame.MPUIGame_C.UpdateFlashlightVision");

	UMPUIGame_C_UpdateFlashlightVision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPUIGame.MPUIGame_C.ChangeLightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMPUIGame_C::ChangeLightState(bool LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIGame.MPUIGame_C.ChangeLightState");

	UMPUIGame_C_ChangeLightState_Params params;
	params.LightOn = LightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPUIGame.MPUIGame_C.UpdatePlayerVision
// (Public, BlueprintCallable, BlueprintEvent)

void UMPUIGame_C::UpdatePlayerVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIGame.MPUIGame_C.UpdatePlayerVision");

	UMPUIGame_C_UpdatePlayerVision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPUIGame.MPUIGame_C.UpdateCharacterLocations
// (Private, BlueprintCallable, BlueprintEvent)

void UMPUIGame_C::UpdateCharacterLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIGame.MPUIGame_C.UpdateCharacterLocations");

	UMPUIGame_C_UpdateCharacterLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPUIGame.MPUIGame_C.SetupCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMPFreddyPawnBase_C*     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMPUIGame_C::SetupCharacter(class AMPFreddyPawnBase_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIGame.MPUIGame_C.SetupCharacter");

	UMPUIGame_C_SetupCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPUIGame.MPUIGame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMPUIGame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIGame.MPUIGame_C.Construct");

	UMPUIGame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPUIGame.MPUIGame_C.UpdateLight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LightActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMPUIGame_C::UpdateLight(class AActor* LightActor, bool IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIGame.MPUIGame_C.UpdateLight");

	UMPUIGame_C_UpdateLight_Params params;
	params.LightActor = LightActor;
	params.IsOn = IsOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPUIGame.MPUIGame_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMPUIGame_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIGame.MPUIGame_C.Tick");

	UMPUIGame_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPUIGame.MPUIGame_C.ExecuteUbergraph_MPUIGame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMPUIGame_C::ExecuteUbergraph_MPUIGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIGame.MPUIGame_C.ExecuteUbergraph_MPUIGame");

	UMPUIGame_C_ExecuteUbergraph_MPUIGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
