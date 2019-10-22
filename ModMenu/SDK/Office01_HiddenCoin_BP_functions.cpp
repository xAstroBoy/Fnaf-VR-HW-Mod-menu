
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

// Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.DisableCoin
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice01_HiddenCoin_BP_C::DisableCoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.DisableCoin");

	AOffice01_HiddenCoin_BP_C_DisableCoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.EnableCoin
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice01_HiddenCoin_BP_C::EnableCoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.EnableCoin");

	AOffice01_HiddenCoin_BP_C_EnableCoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice01_HiddenCoin_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.UserConstructionScript");

	AOffice01_HiddenCoin_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice01_HiddenCoin_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.ReceiveBeginPlay");

	AOffice01_HiddenCoin_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.MonitorFlickerEvent
// (BlueprintCallable, BlueprintEvent)

void AOffice01_HiddenCoin_BP_C::MonitorFlickerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.MonitorFlickerEvent");

	AOffice01_HiddenCoin_BP_C_MonitorFlickerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.BndEvt__VisionCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AOffice01_HiddenCoin_BP_C::BndEvt__VisionCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.BndEvt__VisionCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AOffice01_HiddenCoin_BP_C_BndEvt__VisionCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.ExecuteUbergraph_Office01_HiddenCoin_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_HiddenCoin_BP_C::ExecuteUbergraph_Office01_HiddenCoin_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_HiddenCoin_BP.Office01_HiddenCoin_BP_C.ExecuteUbergraph_Office01_HiddenCoin_BP");

	AOffice01_HiddenCoin_BP_C_ExecuteUbergraph_Office01_HiddenCoin_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
