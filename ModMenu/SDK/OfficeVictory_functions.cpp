
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

// Function OfficeVictory.OfficeVictory_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)

void UOfficeVictory_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeVictory.OfficeVictory_C.NewFunction_1");

	UOfficeVictory_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeVictory.OfficeVictory_C.VictorySequence
// (BlueprintCallable, BlueprintEvent)

void UOfficeVictory_C::VictorySequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeVictory.OfficeVictory_C.VictorySequence");

	UOfficeVictory_C_VictorySequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeVictory.OfficeVictory_C.ExecuteUbergraph_OfficeVictory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOfficeVictory_C::ExecuteUbergraph_OfficeVictory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeVictory.OfficeVictory_C.ExecuteUbergraph_OfficeVictory");

	UOfficeVictory_C_ExecuteUbergraph_OfficeVictory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
