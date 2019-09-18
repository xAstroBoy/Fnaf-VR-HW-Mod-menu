#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function FlashLight_Power.FlashLight_Power_C.Get_ProgressBar_Flashlight_Battery_Percent_1
struct UFlashLight_Power_C_Get_ProgressBar_Flashlight_Battery_Percent_1_Params
{
	float                                              SetPower;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FlashLight_Power.FlashLight_Power_C.Battery should be Blue
struct UFlashLight_Power_C_Battery_should_be_Blue_Params
{
};

// Function FlashLight_Power.FlashLight_Power_C.Battery Should be Green
struct UFlashLight_Power_C_Battery_Should_be_Green_Params
{
};

// Function FlashLight_Power.FlashLight_Power_C.Tick
struct UFlashLight_Power_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashLight_Power.FlashLight_Power_C.PreConstruct
struct UFlashLight_Power_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashLight_Power.FlashLight_Power_C.ExecuteUbergraph_FlashLight_Power
struct UFlashLight_Power_C_ExecuteUbergraph_FlashLight_Power_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
