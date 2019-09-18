
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

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.SetLeftDoorState
// (Public, BlueprintCallable, BlueprintEvent)

void ABigToy_Office04_BP_C::SetLeftDoorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.SetLeftDoorState");

	ABigToy_Office04_BP_C_SetLeftDoorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.EnableLightBoxCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableCollision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBoxComponent*           LightBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABigToy_Office04_BP_C::EnableLightBoxCollision(bool EnableCollision, class UBoxComponent* LightBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.EnableLightBoxCollision");

	ABigToy_Office04_BP_C_EnableLightBoxCollision_Params params;
	params.EnableCollision = EnableCollision;
	params.LightBox = LightBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.SetRightDoorState
// (Public, BlueprintCallable, BlueprintEvent)

void ABigToy_Office04_BP_C::SetRightDoorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.SetRightDoorState");

	ABigToy_Office04_BP_C_SetRightDoorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.Big_Toy_Anim BP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBigToy_Office04_AnimBP_C* Fun_With_Plush_Trap_Anim_BP_Ref (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABigToy_Office04_BP_C::Big_Toy_Anim_BP(class UBigToy_Office04_AnimBP_C** Fun_With_Plush_Trap_Anim_BP_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.Big_Toy_Anim BP");

	ABigToy_Office04_BP_C_Big_Toy_Anim_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Fun_With_Plush_Trap_Anim_BP_Ref != nullptr)
		*Fun_With_Plush_Trap_Anim_BP_Ref = params.Fun_With_Plush_Trap_Anim_BP_Ref;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.GetBigToyState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBigToy_O4_State_C*      BigToy_State                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABigToy_Office04_BP_C::GetBigToyState(class UBigToy_O4_State_C** BigToy_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.GetBigToyState");

	ABigToy_Office04_BP_C_GetBigToyState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BigToy_State != nullptr)
		*BigToy_State = params.BigToy_State;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.SetBigToyState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Big_Toy_Ref                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABigToy_Office04_BP_C::SetBigToyState(class UClass* Big_Toy_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.SetBigToyState");

	ABigToy_Office04_BP_C_SetBigToyState_Params params;
	params.Big_Toy_Ref = Big_Toy_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABigToy_Office04_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.UserConstructionScript");

	ABigToy_Office04_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABigToy_Office04_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABigToy_Office04_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABigToy_Office04_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABigToy_Office04_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.PlayerKilled
// (BlueprintCallable, BlueprintEvent)

void ABigToy_Office04_BP_C::PlayerKilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.PlayerKilled");

	ABigToy_Office04_BP_C_PlayerKilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABigToy_Office04_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.ReceiveBeginPlay");

	ABigToy_Office04_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABigToy_Office04_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.ReceiveTick");

	ABigToy_Office04_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABigToy_Office04_BP_C::BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABigToy_Office04_BP_C_BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABigToy_Office04_BP_C::BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	ABigToy_Office04_BP_C_BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.PlayerWonOffice04
// (BlueprintCallable, BlueprintEvent)

void ABigToy_Office04_BP_C::PlayerWonOffice04()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.PlayerWonOffice04");

	ABigToy_Office04_BP_C_PlayerWonOffice04_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.StartFredBear
// (BlueprintCallable, BlueprintEvent)

void ABigToy_Office04_BP_C::StartFredBear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.StartFredBear");

	ABigToy_Office04_BP_C_StartFredBear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.SFX
// (BlueprintCallable, BlueprintEvent)

void ABigToy_Office04_BP_C::SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.SFX");

	ABigToy_Office04_BP_C_SFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.ExecuteUbergraph_BigToy_Office04_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABigToy_Office04_BP_C::ExecuteUbergraph_BigToy_Office04_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.ExecuteUbergraph_BigToy_Office04_BP");

	ABigToy_Office04_BP_C_ExecuteUbergraph_BigToy_Office04_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.OnRightDoorClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AButton_Hold_C*          ButtonHoldCheck                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABigToy_Office04_BP_C::OnRightDoorClosed__DelegateSignature(class AButton_Hold_C* ButtonHoldCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.OnRightDoorClosed__DelegateSignature");

	ABigToy_Office04_BP_C_OnRightDoorClosed__DelegateSignature_Params params;
	params.ButtonHoldCheck = ButtonHoldCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigToy_Office04_BP.BigToy_Office04_BP_C.OnBigToyStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBigToy_O4_State_C*      BigBoyState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABigToy_Office04_BP_C::OnBigToyStateChanged__DelegateSignature(class UBigToy_O4_State_C* BigBoyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigToy_Office04_BP.BigToy_Office04_BP_C.OnBigToyStateChanged__DelegateSignature");

	ABigToy_Office04_BP_C_OnBigToyStateChanged__DelegateSignature_Params params;
	params.BigBoyState = BigBoyState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
