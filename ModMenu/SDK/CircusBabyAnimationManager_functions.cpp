
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

// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.Initalize
// (Public, BlueprintCallable, BlueprintEvent)

void ACircusBabyAnimationManager_C::Initalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.Initalize");

	ACircusBabyAnimationManager_C_Initalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACircusBabyAnimationManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.UserConstructionScript");

	ACircusBabyAnimationManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.EyeLights__FinishedFunc
// (BlueprintEvent)

void ACircusBabyAnimationManager_C::EyeLights__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.EyeLights__FinishedFunc");

	ACircusBabyAnimationManager_C_EyeLights__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.EyeLights__UpdateFunc
// (BlueprintEvent)

void ACircusBabyAnimationManager_C::EyeLights__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.EyeLights__UpdateFunc");

	ACircusBabyAnimationManager_C_EyeLights__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACircusBabyAnimationManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ReceiveBeginPlay");

	ACircusBabyAnimationManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.WalkDone
// (BlueprintCallable, BlueprintEvent)

void ACircusBabyAnimationManager_C::WalkDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.WalkDone");

	ACircusBabyAnimationManager_C_WalkDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACircusBabyAnimationManager_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ACircusBabyAnimationManager_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ResetAnimState
// (BlueprintCallable, BlueprintEvent)

void ACircusBabyAnimationManager_C::ResetAnimState()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ResetAnimState");

	ACircusBabyAnimationManager_C_ResetAnimState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACircusBabyAnimationManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ReceiveTick");

	ACircusBabyAnimationManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ResetUnfucking
// (BlueprintCallable, BlueprintEvent)

void ACircusBabyAnimationManager_C::ResetUnfucking()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ResetUnfucking");

	ACircusBabyAnimationManager_C_ResetUnfucking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.LightsToWhite
// (BlueprintCallable, BlueprintEvent)

void ACircusBabyAnimationManager_C::LightsToWhite()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.LightsToWhite");

	ACircusBabyAnimationManager_C_LightsToWhite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ResetSpawn
// (BlueprintCallable, BlueprintEvent)

void ACircusBabyAnimationManager_C::ResetSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ResetSpawn");

	ACircusBabyAnimationManager_C_ResetSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ActivateWalkdone
// (BlueprintCallable, BlueprintEvent)

void ACircusBabyAnimationManager_C::ActivateWalkdone()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ActivateWalkdone");

	ACircusBabyAnimationManager_C_ActivateWalkdone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.CheckForTeleportTime
// (BlueprintCallable, BlueprintEvent)

void ACircusBabyAnimationManager_C::CheckForTeleportTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.CheckForTeleportTime");

	ACircusBabyAnimationManager_C_CheckForTeleportTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.EyesRedJtop
// (BlueprintCallable, BlueprintEvent)

void ACircusBabyAnimationManager_C::EyesRedJtop()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.EyesRedJtop");

	ACircusBabyAnimationManager_C_EyesRedJtop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.BndEvt__RefToNightmareClosetDoor_K2Node_ComponentBoundEvent_1_SendDoorsOpen__DelegateSignature
// (BlueprintEvent)

void ACircusBabyAnimationManager_C::BndEvt__RefToNightmareClosetDoor_K2Node_ComponentBoundEvent_1_SendDoorsOpen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.BndEvt__RefToNightmareClosetDoor_K2Node_ComponentBoundEvent_1_SendDoorsOpen__DelegateSignature");

	ACircusBabyAnimationManager_C_BndEvt__RefToNightmareClosetDoor_K2Node_ComponentBoundEvent_1_SendDoorsOpen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.OpenedDoor
// (BlueprintCallable, BlueprintEvent)

void ACircusBabyAnimationManager_C::OpenedDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.OpenedDoor");

	ACircusBabyAnimationManager_C_OpenedDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ExecuteUbergraph_CircusBabyAnimationManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACircusBabyAnimationManager_C::ExecuteUbergraph_CircusBabyAnimationManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ExecuteUbergraph_CircusBabyAnimationManager");

	ACircusBabyAnimationManager_C_ExecuteUbergraph_CircusBabyAnimationManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
