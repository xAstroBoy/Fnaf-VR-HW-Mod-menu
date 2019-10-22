
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

// Function GenericDrawer_Bp.GenericDrawer_Bp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGenericDrawer_Bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericDrawer_Bp.GenericDrawer_Bp_C.UserConstructionScript");

	AGenericDrawer_Bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericDrawer_Bp.GenericDrawer_Bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericDrawer_Bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericDrawer_Bp.GenericDrawer_Bp_C.ReceiveTick");

	AGenericDrawer_Bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericDrawer_Bp.GenericDrawer_Bp_C.ResetHandlePosition
// (BlueprintCallable, BlueprintEvent)

void AGenericDrawer_Bp_C::ResetHandlePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericDrawer_Bp.GenericDrawer_Bp_C.ResetHandlePosition");

	AGenericDrawer_Bp_C_ResetHandlePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericDrawer_Bp.GenericDrawer_Bp_C.ExecuteUbergraph_GenericDrawer_Bp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericDrawer_Bp_C::ExecuteUbergraph_GenericDrawer_Bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericDrawer_Bp.GenericDrawer_Bp_C.ExecuteUbergraph_GenericDrawer_Bp");

	AGenericDrawer_Bp_C_ExecuteUbergraph_GenericDrawer_Bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
