
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

// Function HiddenCoin.HiddenCoin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHiddenCoin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HiddenCoin.HiddenCoin_C.UserConstructionScript");

	AHiddenCoin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HiddenCoin.HiddenCoin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHiddenCoin_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HiddenCoin.HiddenCoin_C.ReceiveBeginPlay");

	AHiddenCoin_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HiddenCoin.HiddenCoin_C.Grabbed
// (BlueprintCallable, BlueprintEvent)

void AHiddenCoin_C::Grabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HiddenCoin.HiddenCoin_C.Grabbed");

	AHiddenCoin_C_Grabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HiddenCoin.HiddenCoin_C.Released
// (BlueprintCallable, BlueprintEvent)

void AHiddenCoin_C::Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function HiddenCoin.HiddenCoin_C.Released");

	AHiddenCoin_C_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HiddenCoin.HiddenCoin_C.Activate
// (BlueprintCallable, BlueprintEvent)

void AHiddenCoin_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function HiddenCoin.HiddenCoin_C.Activate");

	AHiddenCoin_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HiddenCoin.HiddenCoin_C.BndEvt__GazeSphereCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AHiddenCoin_C::BndEvt__GazeSphereCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function HiddenCoin.HiddenCoin_C.BndEvt__GazeSphereCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AHiddenCoin_C_BndEvt__GazeSphereCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function HiddenCoin.HiddenCoin_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHiddenCoin_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function HiddenCoin.HiddenCoin_C.ReceiveTick");

	AHiddenCoin_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HiddenCoin.HiddenCoin_C.TriggerWithoutDelay
// (BlueprintCallable, BlueprintEvent)

void AHiddenCoin_C::TriggerWithoutDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HiddenCoin.HiddenCoin_C.TriggerWithoutDelay");

	AHiddenCoin_C_TriggerWithoutDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HiddenCoin.HiddenCoin_C.ExecuteUbergraph_HiddenCoin
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHiddenCoin_C::ExecuteUbergraph_HiddenCoin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HiddenCoin.HiddenCoin_C.ExecuteUbergraph_HiddenCoin");

	AHiddenCoin_C_ExecuteUbergraph_HiddenCoin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
