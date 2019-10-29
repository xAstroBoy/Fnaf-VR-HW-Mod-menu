
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

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.IsInPlayerVis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsInvis                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMPFreddyPawnBase_C::IsInPlayerVis(bool* IsInvis)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.IsInPlayerVis");

	AMPFreddyPawnBase_C_IsInPlayerVis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInvis != nullptr)
		*IsInvis = params.IsInvis;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.ChangePlayerVisStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInVision                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPFreddyPawnBase_C::ChangePlayerVisStatus(bool IsInVision)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.ChangePlayerVisStatus");

	AMPFreddyPawnBase_C_ChangePlayerVisStatus_Params params;
	params.IsInVision = IsInVision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.IsInFlashLight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           InFlashLight                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMPFreddyPawnBase_C::IsInFlashLight(bool* InFlashLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.IsInFlashLight");

	AMPFreddyPawnBase_C_IsInFlashLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InFlashLight != nullptr)
		*InFlashLight = params.InFlashLight;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.ChangeFlashStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInFlashLight                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPFreddyPawnBase_C::ChangeFlashStatus(bool IsInFlashLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.ChangeFlashStatus");

	AMPFreddyPawnBase_C_ChangeFlashStatus_Params params;
	params.IsInFlashLight = IsInFlashLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMPFreddyPawnBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.UserConstructionScript");

	AMPFreddyPawnBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMPFreddyPawnBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.ReceiveBeginPlay");

	AMPFreddyPawnBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnFlashLightBeginHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFlashlight_Battery_C*   Flashlight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPFreddyPawnBase_C::OnFlashLightBeginHover(class AFlashlight_Battery_C* Flashlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnFlashLightBeginHover");

	AMPFreddyPawnBase_C_OnFlashLightBeginHover_Params params;
	params.Flashlight = Flashlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnFlashLightEndHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFlashlight_Battery_C*   Flashlight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPFreddyPawnBase_C::OnFlashLightEndHover(class AFlashlight_Battery_C* Flashlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnFlashLightEndHover");

	AMPFreddyPawnBase_C_OnFlashLightEndHover_Params params;
	params.Flashlight = Flashlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPFreddyPawnBase_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.ReceivePossessed");

	AMPFreddyPawnBase_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.RestartPlayer
// (BlueprintCallable, BlueprintEvent)

void AMPFreddyPawnBase_C::RestartPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.RestartPlayer");

	AMPFreddyPawnBase_C_RestartPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnPlayerVisionExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFNAFPlayerPawn_C*       PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPFreddyPawnBase_C::OnPlayerVisionExit(class AFNAFPlayerPawn_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnPlayerVisionExit");

	AMPFreddyPawnBase_C_OnPlayerVisionExit_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnPlayerVisionEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFNAFPlayerPawn_C*       PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPFreddyPawnBase_C::OnPlayerVisionEnter(class AFNAFPlayerPawn_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnPlayerVisionEnter");

	AMPFreddyPawnBase_C_OnPlayerVisionEnter_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMPFreddyPawnBase_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AMPFreddyPawnBase_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPFreddyPawnBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.ReceiveTick");

	AMPFreddyPawnBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPFreddyPawnBase.MPFreddyPawnBase_C.ExecuteUbergraph_MPFreddyPawnBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPFreddyPawnBase_C::ExecuteUbergraph_MPFreddyPawnBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPFreddyPawnBase.MPFreddyPawnBase_C.ExecuteUbergraph_MPFreddyPawnBase");

	AMPFreddyPawnBase_C_ExecuteUbergraph_MPFreddyPawnBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
