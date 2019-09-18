
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

// Function TeleportSpot_BP.TeleportSpot_BP_C.DisableCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleportSpot_BP_C::DisableCollision(bool Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.DisableCollision");

	ATeleportSpot_BP_C_DisableCollision_Params params;
	params.Disable = Disable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_BP.TeleportSpot_BP_C.SetRecentlyTeleportedFalse
// (Public, BlueprintCallable, BlueprintEvent)

void ATeleportSpot_BP_C::SetRecentlyTeleportedFalse()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.SetRecentlyTeleportedFalse");

	ATeleportSpot_BP_C_SetRecentlyTeleportedFalse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_BP.TeleportSpot_BP_C.TeleportSelected
// (Public, BlueprintCallable, BlueprintEvent)

void ATeleportSpot_BP_C::TeleportSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.TeleportSelected");

	ATeleportSpot_BP_C_TeleportSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_BP.TeleportSpot_BP_C.EnableCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleportSpot_BP_C::EnableCollision(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.EnableCollision");

	ATeleportSpot_BP_C_EnableCollision_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_BP.TeleportSpot_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATeleportSpot_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.UserConstructionScript");

	ATeleportSpot_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_BP.TeleportSpot_BP_C.TeleportGlow__FinishedFunc
// (BlueprintEvent)

void ATeleportSpot_BP_C::TeleportGlow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.TeleportGlow__FinishedFunc");

	ATeleportSpot_BP_C_TeleportGlow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_BP.TeleportSpot_BP_C.TeleportGlow__UpdateFunc
// (BlueprintEvent)

void ATeleportSpot_BP_C::TeleportGlow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.TeleportGlow__UpdateFunc");

	ATeleportSpot_BP_C_TeleportGlow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_BP.TeleportSpot_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATeleportSpot_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.ReceiveBeginPlay");

	ATeleportSpot_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_BP.TeleportSpot_BP_C.TriggerTeleportGlow
// (BlueprintCallable, BlueprintEvent)

void ATeleportSpot_BP_C::TriggerTeleportGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.TriggerTeleportGlow");

	ATeleportSpot_BP_C_TriggerTeleportGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_BP.TeleportSpot_BP_C.TriggerTeleportFade
// (BlueprintCallable, BlueprintEvent)

void ATeleportSpot_BP_C::TriggerTeleportFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.TriggerTeleportFade");

	ATeleportSpot_BP_C_TriggerTeleportFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_BP.TeleportSpot_BP_C.ExecuteUbergraph_TeleportSpot_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleportSpot_BP_C::ExecuteUbergraph_TeleportSpot_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.ExecuteUbergraph_TeleportSpot_BP");

	ATeleportSpot_BP_C_ExecuteUbergraph_TeleportSpot_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
