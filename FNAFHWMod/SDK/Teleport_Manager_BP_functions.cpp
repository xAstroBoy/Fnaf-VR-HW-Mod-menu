
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

// Function Teleport_Manager_BP.Teleport_Manager_BP_C.CurrentTeleportSpot
// (Public, BlueprintCallable, BlueprintEvent)

void ATeleport_Manager_BP_C::CurrentTeleportSpot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.CurrentTeleportSpot");

	ATeleport_Manager_BP_C_CurrentTeleportSpot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Teleport_Manager_BP.Teleport_Manager_BP_C.EnableAttachedComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATeleportSpot_BP_C*      TeleportSpots                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleport_Manager_BP_C::EnableAttachedComponents(class ATeleportSpot_BP_C* TeleportSpots)
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.EnableAttachedComponents");

	ATeleport_Manager_BP_C_EnableAttachedComponents_Params params;
	params.TeleportSpots = TeleportSpots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Teleport_Manager_BP.Teleport_Manager_BP_C.DisableAll
// (Public, BlueprintCallable, BlueprintEvent)

void ATeleport_Manager_BP_C::DisableAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.DisableAll");

	ATeleport_Manager_BP_C_DisableAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Teleport_Manager_BP.Teleport_Manager_BP_C.EnableTeleport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeleportID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleport_Manager_BP_C::EnableTeleport(int TeleportID, bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.EnableTeleport");

	ATeleport_Manager_BP_C_EnableTeleport_Params params;
	params.TeleportID = TeleportID;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Teleport_Manager_BP.Teleport_Manager_BP_C.UpdateTeleportSpots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATeleportSpot_BP_C*      TeleportSpotChange             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleport_Manager_BP_C::UpdateTeleportSpots(class ATeleportSpot_BP_C* TeleportSpotChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.UpdateTeleportSpots");

	ATeleport_Manager_BP_C_UpdateTeleportSpots_Params params;
	params.TeleportSpotChange = TeleportSpotChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Teleport_Manager_BP.Teleport_Manager_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATeleport_Manager_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.UserConstructionScript");

	ATeleport_Manager_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Teleport_Manager_BP.Teleport_Manager_BP_C.Check Location
// (BlueprintCallable, BlueprintEvent)

void ATeleport_Manager_BP_C::Check_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.Check Location");

	ATeleport_Manager_BP_C_Check_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Teleport_Manager_BP.Teleport_Manager_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATeleport_Manager_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.ReceiveBeginPlay");

	ATeleport_Manager_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Teleport_Manager_BP.Teleport_Manager_BP_C.ExecuteUbergraph_Teleport_Manager_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleport_Manager_BP_C::ExecuteUbergraph_Teleport_Manager_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.ExecuteUbergraph_Teleport_Manager_BP");

	ATeleport_Manager_BP_C_ExecuteUbergraph_Teleport_Manager_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Teleport_Manager_BP.Teleport_Manager_BP_C.Player Is Teleporting__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player_Location                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleport_Manager_BP_C::Player_Is_Teleporting__DelegateSignature(int Player_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.Player Is Teleporting__DelegateSignature");

	ATeleport_Manager_BP_C_Player_Is_Teleporting__DelegateSignature_Params params;
	params.Player_Location = Player_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
