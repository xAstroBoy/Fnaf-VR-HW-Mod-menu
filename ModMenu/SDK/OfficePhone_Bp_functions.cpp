
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

// Function OfficePhone_Bp.OfficePhone_Bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOfficePhone_Bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.UserConstructionScript");

	AOfficePhone_Bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneButtonPulse__FinishedFunc
// (BlueprintEvent)

void AOfficePhone_Bp_C::PhoneButtonPulse__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneButtonPulse__FinishedFunc");

	AOfficePhone_Bp_C_PhoneButtonPulse__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneButtonPulse__UpdateFunc
// (BlueprintEvent)

void AOfficePhone_Bp_C::PhoneButtonPulse__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneButtonPulse__UpdateFunc");

	AOfficePhone_Bp_C_PhoneButtonPulse__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOfficePhone_Bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.ReceiveBeginPlay");

	AOfficePhone_Bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOfficePhone_Bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.ReceiveTick");

	AOfficePhone_Bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__MuteCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AOfficePhone_Bp_C::BndEvt__MuteCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__MuteCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AOfficePhone_Bp_C_BndEvt__MuteCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneHasBeenGrabbed
// (BlueprintCallable, BlueprintEvent)

void AOfficePhone_Bp_C::PhoneHasBeenGrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneHasBeenGrabbed");

	AOfficePhone_Bp_C_PhoneHasBeenGrabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.ObjectHasBeenDropped_Event_1
// (BlueprintCallable, BlueprintEvent)

void AOfficePhone_Bp_C::ObjectHasBeenDropped_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.ObjectHasBeenDropped_Event_1");

	AOfficePhone_Bp_C_ObjectHasBeenDropped_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AOfficePhone_Bp_C::BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AOfficePhone_Bp_C_BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOfficePhone_Bp_C::BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	AOfficePhone_Bp_C_BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.OnAudioPlayback_AudioSpeaker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*              PlayingSoundWave               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackPercent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOfficePhone_Bp_C::OnAudioPlayback_AudioSpeaker(class USoundWave* PlayingSoundWave, float PlaybackPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.OnAudioPlayback_AudioSpeaker");

	AOfficePhone_Bp_C_OnAudioPlayback_AudioSpeaker_Params params;
	params.PlayingSoundWave = PlayingSoundWave;
	params.PlaybackPercent = PlaybackPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.ResetDoOnces
// (BlueprintCallable, BlueprintEvent)

void AOfficePhone_Bp_C::ResetDoOnces()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.ResetDoOnces");

	AOfficePhone_Bp_C_ResetDoOnces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneFellIntoZone
// (BlueprintCallable, BlueprintEvent)

void AOfficePhone_Bp_C::PhoneFellIntoZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneFellIntoZone");

	AOfficePhone_Bp_C_PhoneFellIntoZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.ShutOffPhone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player_Won_Game                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOfficePhone_Bp_C::ShutOffPhone(bool Player_Won_Game)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.ShutOffPhone");

	AOfficePhone_Bp_C_ShutOffPhone_Params params;
	params.Player_Won_Game = Player_Won_Game;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.SpeakerOn
// (BlueprintCallable, BlueprintEvent)

void AOfficePhone_Bp_C::SpeakerOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.SpeakerOn");

	AOfficePhone_Bp_C_SpeakerOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.SpeakerOff
// (BlueprintCallable, BlueprintEvent)

void AOfficePhone_Bp_C::SpeakerOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.SpeakerOff");

	AOfficePhone_Bp_C_SpeakerOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__SpeakerCollider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AOfficePhone_Bp_C::BndEvt__SpeakerCollider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__SpeakerCollider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	AOfficePhone_Bp_C_BndEvt__SpeakerCollider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function OfficePhone_Bp.OfficePhone_Bp_C.TriggerButtomPulse
// (BlueprintCallable, BlueprintEvent)

void AOfficePhone_Bp_C::TriggerButtomPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.TriggerButtomPulse");

	AOfficePhone_Bp_C_TriggerButtomPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.TurnOffPhoneButtons
// (BlueprintCallable, BlueprintEvent)

void AOfficePhone_Bp_C::TurnOffPhoneButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.TurnOffPhoneButtons");

	AOfficePhone_Bp_C_TurnOffPhoneButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.StopButtonPulse
// (BlueprintCallable, BlueprintEvent)

void AOfficePhone_Bp_C::StopButtonPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.StopButtonPulse");

	AOfficePhone_Bp_C_StopButtonPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficePhone_Bp.OfficePhone_Bp_C.ExecuteUbergraph_OfficePhone_Bp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOfficePhone_Bp_C::ExecuteUbergraph_OfficePhone_Bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.ExecuteUbergraph_OfficePhone_Bp");

	AOfficePhone_Bp_C_ExecuteUbergraph_OfficePhone_Bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
