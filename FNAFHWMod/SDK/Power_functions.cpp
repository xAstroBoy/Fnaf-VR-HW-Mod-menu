
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

// Function Power.Power_C.SetDoorPowerUsage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DoorPower                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPower_C::SetDoorPowerUsage(float DoorPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Power.Power_C.SetDoorPowerUsage");

	UPower_C_SetDoorPowerUsage_Params params;
	params.DoorPower = DoorPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Power.Power_C.SetScreenPowerUsage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScreenPower                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPower_C::SetScreenPowerUsage(float ScreenPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Power.Power_C.SetScreenPowerUsage");

	UPower_C_SetScreenPowerUsage_Params params;
	params.ScreenPower = ScreenPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Power.Power_C.Countdown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPower_C::Countdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Power.Power_C.Countdown");

	UPower_C_Countdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Power.Power_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPower_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Power.Power_C.PreConstruct");

	UPower_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Power.Power_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPower_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Power.Power_C.Tick");

	UPower_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Power.Power_C.CopyVis
// (BlueprintCallable, BlueprintEvent)

void UPower_C::CopyVis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Power.Power_C.CopyVis");

	UPower_C_CopyVis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Power.Power_C.ExecuteUbergraph_Power
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPower_C::ExecuteUbergraph_Power(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Power.Power_C.ExecuteUbergraph_Power");

	UPower_C_ExecuteUbergraph_Power_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
