
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

// Function PowerLVL.PowerLVL_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerLVL_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerLVL.PowerLVL_C.UserConstructionScript");

	APowerLVL_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerLVL.PowerLVL_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APowerLVL_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerLVL.PowerLVL_C.ReceiveBeginPlay");

	APowerLVL_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerLVL.PowerLVL_C.ExecuteUbergraph_PowerLVL
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerLVL_C::ExecuteUbergraph_PowerLVL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerLVL.PowerLVL_C.ExecuteUbergraph_PowerLVL");

	APowerLVL_C_ExecuteUbergraph_PowerLVL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
