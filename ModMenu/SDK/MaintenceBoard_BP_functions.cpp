
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

// Function MaintenceBoard_BP.MaintenceBoard_BP_C.RumbleControllers
// (Public, BlueprintCallable, BlueprintEvent)

void AMaintenceBoard_BP_C::RumbleControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.RumbleControllers");

	AMaintenceBoard_BP_C_RumbleControllers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.DeSelectAllOptions
// (Public, BlueprintCallable, BlueprintEvent)

void AMaintenceBoard_BP_C::DeSelectAllOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.DeSelectAllOptions");

	AMaintenceBoard_BP_C_DeSelectAllOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.InitializeMaintenceBoard
// (Public, BlueprintCallable, BlueprintEvent)

void AMaintenceBoard_BP_C::InitializeMaintenceBoard()
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.InitializeMaintenceBoard");

	AMaintenceBoard_BP_C_InitializeMaintenceBoard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMaintenceBoard_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.UserConstructionScript");

	AMaintenceBoard_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMaintenceBoard_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.ReceiveTick");

	AMaintenceBoard_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.BndEvt__Collider_All_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMaintenceBoard_BP_C::BndEvt__Collider_All_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.BndEvt__Collider_All_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	AMaintenceBoard_BP_C_BndEvt__Collider_All_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.BndEvt__Collider_Vent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMaintenceBoard_BP_C::BndEvt__Collider_Vent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.BndEvt__Collider_Vent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AMaintenceBoard_BP_C_BndEvt__Collider_Vent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.BndEvt__Collider_Audio_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMaintenceBoard_BP_C::BndEvt__Collider_Audio_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.BndEvt__Collider_Audio_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AMaintenceBoard_BP_C_BndEvt__Collider_Audio_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.BndEvt__Collider_Cam_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMaintenceBoard_BP_C::BndEvt__Collider_Cam_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.BndEvt__Collider_Cam_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AMaintenceBoard_BP_C_BndEvt__Collider_Cam_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.Event Btn Interactable Is Held
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsBeingHeld                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMaintenceBoard_BP_C::Event_Btn_Interactable_Is_Held(bool* IsBeingHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.Event Btn Interactable Is Held");

	AMaintenceBoard_BP_C_Event_Btn_Interactable_Is_Held_Params params;
	params.IsBeingHeld = IsBeingHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.Event Btn Interactable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLightBtn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsVentBtn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsAudioBtn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMusicBoxBtn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsRebootBtn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsHeldDown                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMaintenceBoard_BP_C::Event_Btn_Interactable(bool* IsLightBtn, bool* IsVentBtn, bool* IsAudioBtn, bool* IsMusicBoxBtn, bool* IsRebootBtn, bool* IsHeldDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.Event Btn Interactable");

	AMaintenceBoard_BP_C_Event_Btn_Interactable_Params params;
	params.IsLightBtn = IsLightBtn;
	params.IsVentBtn = IsVentBtn;
	params.IsAudioBtn = IsAudioBtn;
	params.IsMusicBoxBtn = IsMusicBoxBtn;
	params.IsRebootBtn = IsRebootBtn;
	params.IsHeldDown = IsHeldDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetDoOnceNodes
// (BlueprintCallable, BlueprintEvent)

void AMaintenceBoard_BP_C::ResetDoOnceNodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetDoOnceNodes");

	AMaintenceBoard_BP_C_ResetDoOnceNodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMaintenceBoard_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.ReceiveBeginPlay");

	AMaintenceBoard_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetAudio
// (BlueprintCallable, BlueprintEvent)

void AMaintenceBoard_BP_C::ResetAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetAudio");

	AMaintenceBoard_BP_C_ResetAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetCamera
// (BlueprintCallable, BlueprintEvent)

void AMaintenceBoard_BP_C::ResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetCamera");

	AMaintenceBoard_BP_C_ResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetVent
// (BlueprintCallable, BlueprintEvent)

void AMaintenceBoard_BP_C::ResetVent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetVent");

	AMaintenceBoard_BP_C_ResetVent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetAll
// (BlueprintCallable, BlueprintEvent)

void AMaintenceBoard_BP_C::ResetAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetAll");

	AMaintenceBoard_BP_C_ResetAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetButtonInteraction
// (BlueprintCallable, BlueprintEvent)

void AMaintenceBoard_BP_C::ResetButtonInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetButtonInteraction");

	AMaintenceBoard_BP_C_ResetButtonInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MaintenceBoard_BP.MaintenceBoard_BP_C.ExecuteUbergraph_MaintenceBoard_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMaintenceBoard_BP_C::ExecuteUbergraph_MaintenceBoard_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MaintenceBoard_BP.MaintenceBoard_BP_C.ExecuteUbergraph_MaintenceBoard_BP");

	AMaintenceBoard_BP_C_ExecuteUbergraph_MaintenceBoard_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
