
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

// Function FlashLight_Power.FlashLight_Power_C.Get_ProgressBar_Flashlight_Battery_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SetPower                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFlashLight_Power_C::Get_ProgressBar_Flashlight_Battery_Percent_1(float SetPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashLight_Power.FlashLight_Power_C.Get_ProgressBar_Flashlight_Battery_Percent_1");

	UFlashLight_Power_C_Get_ProgressBar_Flashlight_Battery_Percent_1_Params params;
	params.SetPower = SetPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FlashLight_Power.FlashLight_Power_C.Battery should be Blue
// (BlueprintCallable, BlueprintEvent)

void UFlashLight_Power_C::Battery_should_be_Blue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashLight_Power.FlashLight_Power_C.Battery should be Blue");

	UFlashLight_Power_C_Battery_should_be_Blue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashLight_Power.FlashLight_Power_C.Battery Should be Green
// (BlueprintCallable, BlueprintEvent)

void UFlashLight_Power_C::Battery_Should_be_Green()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashLight_Power.FlashLight_Power_C.Battery Should be Green");

	UFlashLight_Power_C_Battery_Should_be_Green_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashLight_Power.FlashLight_Power_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlashLight_Power_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashLight_Power.FlashLight_Power_C.Tick");

	UFlashLight_Power_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashLight_Power.FlashLight_Power_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlashLight_Power_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashLight_Power.FlashLight_Power_C.PreConstruct");

	UFlashLight_Power_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashLight_Power.FlashLight_Power_C.ExecuteUbergraph_FlashLight_Power
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlashLight_Power_C::ExecuteUbergraph_FlashLight_Power(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashLight_Power.FlashLight_Power_C.ExecuteUbergraph_FlashLight_Power");

	UFlashLight_Power_C_ExecuteUbergraph_FlashLight_Power_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
