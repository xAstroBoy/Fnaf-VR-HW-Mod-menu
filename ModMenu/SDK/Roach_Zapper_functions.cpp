
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

// Function Roach_Zapper.Roach_Zapper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARoach_Zapper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Roach_Zapper.Roach_Zapper_C.UserConstructionScript");

	ARoach_Zapper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Roach_Zapper.Roach_Zapper_C.Flash__FinishedFunc
// (BlueprintEvent)

void ARoach_Zapper_C::Flash__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Roach_Zapper.Roach_Zapper_C.Flash__FinishedFunc");

	ARoach_Zapper_C_Flash__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Roach_Zapper.Roach_Zapper_C.Flash__UpdateFunc
// (BlueprintEvent)

void ARoach_Zapper_C::Flash__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Roach_Zapper.Roach_Zapper_C.Flash__UpdateFunc");

	ARoach_Zapper_C_Flash__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Roach_Zapper.Roach_Zapper_C.FireParticles
// (BlueprintCallable, BlueprintEvent)

void ARoach_Zapper_C::FireParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Roach_Zapper.Roach_Zapper_C.FireParticles");

	ARoach_Zapper_C_FireParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Roach_Zapper.Roach_Zapper_C.BndEvt__SM_Button_01a_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ARoach_Zapper_C::BndEvt__SM_Button_01a_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Roach_Zapper.Roach_Zapper_C.BndEvt__SM_Button_01a_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ARoach_Zapper_C_BndEvt__SM_Button_01a_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Roach_Zapper.Roach_Zapper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARoach_Zapper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Roach_Zapper.Roach_Zapper_C.ReceiveBeginPlay");

	ARoach_Zapper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Roach_Zapper.Roach_Zapper_C.Simulate button press
// (BlueprintCallable, BlueprintEvent)

void ARoach_Zapper_C::Simulate_button_press()
{
	static auto fn = UObject::FindObject<UFunction>("Function Roach_Zapper.Roach_Zapper_C.Simulate button press");

	ARoach_Zapper_C_Simulate_button_press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Roach_Zapper.Roach_Zapper_C.ExecuteUbergraph_Roach_Zapper
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARoach_Zapper_C::ExecuteUbergraph_Roach_Zapper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Roach_Zapper.Roach_Zapper_C.ExecuteUbergraph_Roach_Zapper");

	ARoach_Zapper_C_ExecuteUbergraph_Roach_Zapper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Roach_Zapper.Roach_Zapper_C.TurnOffLights__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ARoach_Zapper_C::TurnOffLights__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Roach_Zapper.Roach_Zapper_C.TurnOffLights__DelegateSignature");

	ARoach_Zapper_C_TurnOffLights__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
