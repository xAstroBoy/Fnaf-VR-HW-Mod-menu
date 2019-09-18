
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

// Function PhoneCable.PhoneCable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APhoneCable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhoneCable.PhoneCable_C.UserConstructionScript");

	APhoneCable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhoneCable.PhoneCable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APhoneCable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhoneCable.PhoneCable_C.ReceiveBeginPlay");

	APhoneCable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhoneCable.PhoneCable_C.ExecuteUbergraph_PhoneCable
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APhoneCable_C::ExecuteUbergraph_PhoneCable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhoneCable.PhoneCable_C.ExecuteUbergraph_PhoneCable");

	APhoneCable_C_ExecuteUbergraph_PhoneCable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
