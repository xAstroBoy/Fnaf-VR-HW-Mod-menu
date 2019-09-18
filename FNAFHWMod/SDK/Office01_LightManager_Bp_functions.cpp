
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

// Function Office01_LightManager_Bp.Office01_LightManager_Bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice01_LightManager_Bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_LightManager_Bp.Office01_LightManager_Bp_C.UserConstructionScript");

	AOffice01_LightManager_Bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_LightManager_Bp.Office01_LightManager_Bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice01_LightManager_Bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_LightManager_Bp.Office01_LightManager_Bp_C.ReceiveBeginPlay");

	AOffice01_LightManager_Bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_LightManager_Bp.Office01_LightManager_Bp_C.PowerOutageLights
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player_Won_Game                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_LightManager_Bp_C::PowerOutageLights(bool Player_Won_Game)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_LightManager_Bp.Office01_LightManager_Bp_C.PowerOutageLights");

	AOffice01_LightManager_Bp_C_PowerOutageLights_Params params;
	params.Player_Won_Game = Player_Won_Game;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_LightManager_Bp.Office01_LightManager_Bp_C.ExecuteUbergraph_Office01_LightManager_Bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_LightManager_Bp_C::ExecuteUbergraph_Office01_LightManager_Bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_LightManager_Bp.Office01_LightManager_Bp_C.ExecuteUbergraph_Office01_LightManager_Bp");

	AOffice01_LightManager_Bp_C_ExecuteUbergraph_Office01_LightManager_Bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
