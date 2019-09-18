
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

// Function Vent_Repair_Power.Vent_Repair_Power_C.Get_Vent_Repair_Power_Meter_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVent_Repair_Power_C::Get_Vent_Repair_Power_Meter_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vent_Repair_Power.Vent_Repair_Power_C.Get_Vent_Repair_Power_Meter_Percent_1");

	UVent_Repair_Power_C_Get_Vent_Repair_Power_Meter_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
