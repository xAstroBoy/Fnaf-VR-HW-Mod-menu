
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

// Function Monitor_ClockTime.Monitor_ClockTime_C.PaddingForTranslation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMonitor_ClockTime_C::PaddingForTranslation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Monitor_ClockTime.Monitor_ClockTime_C.PaddingForTranslation");

	UMonitor_ClockTime_C_PaddingForTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Monitor_ClockTime.Monitor_ClockTime_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMonitor_ClockTime_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Monitor_ClockTime.Monitor_ClockTime_C.GetText_2");

	UMonitor_ClockTime_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Monitor_ClockTime.Monitor_ClockTime_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMonitor_ClockTime_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Monitor_ClockTime.Monitor_ClockTime_C.GetText_1");

	UMonitor_ClockTime_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Monitor_ClockTime.Monitor_ClockTime_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMonitor_ClockTime_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Monitor_ClockTime.Monitor_ClockTime_C.Tick");

	UMonitor_ClockTime_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Monitor_ClockTime.Monitor_ClockTime_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMonitor_ClockTime_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Monitor_ClockTime.Monitor_ClockTime_C.Construct");

	UMonitor_ClockTime_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Monitor_ClockTime.Monitor_ClockTime_C.ExecuteUbergraph_Monitor_ClockTime
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMonitor_ClockTime_C::ExecuteUbergraph_Monitor_ClockTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Monitor_ClockTime.Monitor_ClockTime_C.ExecuteUbergraph_Monitor_ClockTime");

	UMonitor_ClockTime_C_ExecuteUbergraph_Monitor_ClockTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
