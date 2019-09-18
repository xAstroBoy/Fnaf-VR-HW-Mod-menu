
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

// Function MPLobbyGameMode.MPLobbyGameMode_C.AllPlayersReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllPlayersReady                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMPLobbyGameMode_C::AllPlayersReady(bool* AllPlayersReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.AllPlayersReady");

	AMPLobbyGameMode_C_AllPlayersReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllPlayersReady != nullptr)
		*AllPlayersReady = params.AllPlayersReady;
}


// Function MPLobbyGameMode.MPLobbyGameMode_C.StartMatch
// (Private, BlueprintCallable, BlueprintEvent)

void AMPLobbyGameMode_C::StartMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.StartMatch");

	AMPLobbyGameMode_C_StartMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyGameMode.MPLobbyGameMode_C.CheckIfPlayerHasValidSelection
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ALobbyPlayerController_C* Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayerIsValid                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMPLobbyGameMode_C::CheckIfPlayerHasValidSelection(class ALobbyPlayerController_C* Controller, bool* PlayerIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.CheckIfPlayerHasValidSelection");

	AMPLobbyGameMode_C_CheckIfPlayerHasValidSelection_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerIsValid != nullptr)
		*PlayerIsValid = params.PlayerIsValid;
}


// Function MPLobbyGameMode.MPLobbyGameMode_C.SelectCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALobbyPlayerController_C* Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Desired_Character_ID           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            New_Character_ID               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FCharacterInfo          New_Character_Info             (Parm, OutParm)

void AMPLobbyGameMode_C::SelectCharacter(class ALobbyPlayerController_C* Controller, int Desired_Character_ID, int* New_Character_ID, struct FCharacterInfo* New_Character_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.SelectCharacter");

	AMPLobbyGameMode_C_SelectCharacter_Params params;
	params.Controller = Controller;
	params.Desired_Character_ID = Desired_Character_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (New_Character_ID != nullptr)
		*New_Character_ID = params.New_Character_ID;
	if (New_Character_Info != nullptr)
		*New_Character_Info = params.New_Character_Info;
}


// Function MPLobbyGameMode.MPLobbyGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMPLobbyGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.UserConstructionScript");

	AMPLobbyGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyGameMode.MPLobbyGameMode_C.AddLocalPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALobbyPlayerController_C* Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPLobbyGameMode_C::AddLocalPlayer(class ALobbyPlayerController_C* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.AddLocalPlayer");

	AMPLobbyGameMode_C_AddLocalPlayer_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyGameMode.MPLobbyGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMPLobbyGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.ReceiveBeginPlay");

	AMPLobbyGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyGameMode.MPLobbyGameMode_C.SwitchCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALobbyPlayerController_C* Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DesiredCharacterID             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPLobbyGameMode_C::SwitchCharacter(class ALobbyPlayerController_C* Controller, int DesiredCharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.SwitchCharacter");

	AMPLobbyGameMode_C_SwitchCharacter_Params params;
	params.Controller = Controller;
	params.DesiredCharacterID = DesiredCharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyGameMode.MPLobbyGameMode_C.PlayerReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALobbyPlayerController_C* Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPLobbyGameMode_C::PlayerReady(class ALobbyPlayerController_C* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.PlayerReady");

	AMPLobbyGameMode_C_PlayerReady_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyGameMode.MPLobbyGameMode_C.ExecuteUbergraph_MPLobbyGameMode
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPLobbyGameMode_C::ExecuteUbergraph_MPLobbyGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.ExecuteUbergraph_MPLobbyGameMode");

	AMPLobbyGameMode_C_ExecuteUbergraph_MPLobbyGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
