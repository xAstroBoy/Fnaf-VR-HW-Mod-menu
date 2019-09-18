
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

// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.GetEnableState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFNAFCamera_Blueprint_C::GetEnableState(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.GetEnableState");

	AFNAFCamera_Blueprint_C_GetEnableState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
}


// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.DisableCam
// (Public, BlueprintCallable, BlueprintEvent)

void AFNAFCamera_Blueprint_C::DisableCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.DisableCam");

	AFNAFCamera_Blueprint_C_DisableCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.EnableCam
// (Public, BlueprintCallable, BlueprintEvent)

void AFNAFCamera_Blueprint_C::EnableCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.EnableCam");

	AFNAFCamera_Blueprint_C_EnableCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.RotateCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFNAFCamera_Blueprint_C::RotateCamera(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.RotateCamera");

	AFNAFCamera_Blueprint_C_RotateCamera_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFNAFCamera_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.UserConstructionScript");

	AFNAFCamera_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFNAFCamera_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ReceiveBeginPlay");

	AFNAFCamera_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFNAFCamera_Blueprint_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ReceiveTick");

	AFNAFCamera_Blueprint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ExecuteUbergraph_FNAFCamera_Blueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFNAFCamera_Blueprint_C::ExecuteUbergraph_FNAFCamera_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ExecuteUbergraph_FNAFCamera_Blueprint");

	AFNAFCamera_Blueprint_C_ExecuteUbergraph_FNAFCamera_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
