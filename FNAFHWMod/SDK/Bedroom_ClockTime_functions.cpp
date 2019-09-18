
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

// Function Bedroom_ClockTime.Bedroom_ClockTime_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBedroom_ClockTime_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_ClockTime.Bedroom_ClockTime_C.GetText_2");

	UBedroom_ClockTime_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bedroom_ClockTime.Bedroom_ClockTime_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBedroom_ClockTime_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_ClockTime.Bedroom_ClockTime_C.GetText_1");

	UBedroom_ClockTime_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bedroom_ClockTime.Bedroom_ClockTime_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBedroom_ClockTime_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_ClockTime.Bedroom_ClockTime_C.Tick");

	UBedroom_ClockTime_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bedroom_ClockTime.Bedroom_ClockTime_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBedroom_ClockTime_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_ClockTime.Bedroom_ClockTime_C.Construct");

	UBedroom_ClockTime_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bedroom_ClockTime.Bedroom_ClockTime_C.ExecuteUbergraph_Bedroom_ClockTime
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBedroom_ClockTime_C::ExecuteUbergraph_Bedroom_ClockTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_ClockTime.Bedroom_ClockTime_C.ExecuteUbergraph_Bedroom_ClockTime");

	UBedroom_ClockTime_C_ExecuteUbergraph_Bedroom_ClockTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
