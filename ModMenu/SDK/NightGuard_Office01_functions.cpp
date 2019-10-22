
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

// Function NightGuard_Office01.NightGuard_Office01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANightGuard_Office01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightGuard_Office01.NightGuard_Office01_C.ReceiveBeginPlay");

	ANightGuard_Office01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightGuard_Office01.NightGuard_Office01_C.ExecuteUbergraph_NightGuard_Office01
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightGuard_Office01_C::ExecuteUbergraph_NightGuard_Office01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightGuard_Office01.NightGuard_Office01_C.ExecuteUbergraph_NightGuard_Office01");

	ANightGuard_Office01_C_ExecuteUbergraph_NightGuard_Office01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
