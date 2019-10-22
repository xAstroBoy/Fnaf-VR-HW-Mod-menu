
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

// Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.GetHideLocationAndRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Return_Value_Z__Yaw_           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HideWorldLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACornFieldHideSpot_Master_C::GetHideLocationAndRotation(float* Return_Value_Z__Yaw_, struct FVector* HideWorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.GetHideLocationAndRotation");

	ACornFieldHideSpot_Master_C_GetHideLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value_Z__Yaw_ != nullptr)
		*Return_Value_Z__Yaw_ = params.Return_Value_Z__Yaw_;
	if (HideWorldLocation != nullptr)
		*HideWorldLocation = params.HideWorldLocation;
}


// Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACornFieldHideSpot_Master_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.UserConstructionScript");

	ACornFieldHideSpot_Master_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACornFieldHideSpot_Master_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.ReceiveBeginPlay");

	ACornFieldHideSpot_Master_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.OnPlayerVisionEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFNAFPlayerPawn_C*       PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACornFieldHideSpot_Master_C::OnPlayerVisionEnter(class AFNAFPlayerPawn_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.OnPlayerVisionEnter");

	ACornFieldHideSpot_Master_C_OnPlayerVisionEnter_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.OnPlayerVisionExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFNAFPlayerPawn_C*       PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACornFieldHideSpot_Master_C::OnPlayerVisionExit(class AFNAFPlayerPawn_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.OnPlayerVisionExit");

	ACornFieldHideSpot_Master_C_OnPlayerVisionExit_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.ExecuteUbergraph_CornFieldHideSpot_Master
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACornFieldHideSpot_Master_C::ExecuteUbergraph_CornFieldHideSpot_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.ExecuteUbergraph_CornFieldHideSpot_Master");

	ACornFieldHideSpot_Master_C_ExecuteUbergraph_CornFieldHideSpot_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
