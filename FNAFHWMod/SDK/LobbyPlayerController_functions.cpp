
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

// Function LobbyPlayerController.LobbyPlayerController_C.GetPlayerNumber
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            PlayerNumber                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyPlayerController_C::GetPlayerNumber(int* PlayerNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.GetPlayerNumber");

	ALobbyPlayerController_C_GetPlayerNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerNumber != nullptr)
		*PlayerNumber = params.PlayerNumber;
}


// Function LobbyPlayerController.LobbyPlayerController_C.IsPlayerReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsConfirmed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyPlayerController_C::IsPlayerReady(bool* IsConfirmed)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.IsPlayerReady");

	ALobbyPlayerController_C_IsPlayerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsConfirmed != nullptr)
		*IsConfirmed = params.IsConfirmed;
}


// Function LobbyPlayerController.LobbyPlayerController_C.GetCharacterID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Character_ID                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyPlayerController_C::GetCharacterID(int* Character_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.GetCharacterID");

	ALobbyPlayerController_C_GetCharacterID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character_ID != nullptr)
		*Character_ID = params.Character_ID;
}


// Function LobbyPlayerController.LobbyPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobbyPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.UserConstructionScript");

	ALobbyPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerController.LobbyPlayerController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ALobbyPlayerController_C::InpActEvt_JoinGame_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_2");

	ALobbyPlayerController_C_InpActEvt_JoinGame_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerController.LobbyPlayerController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ALobbyPlayerController_C::InpActEvt_JoinGame_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_1");

	ALobbyPlayerController_C_InpActEvt_JoinGame_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerController.LobbyPlayerController_C.InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyPlayerController_C::InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1");

	ALobbyPlayerController_C_InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerController.LobbyPlayerController_C.ActivatePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyPlayerController_C::ActivatePlayer(int PlayerNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.ActivatePlayer");

	ALobbyPlayerController_C_ActivatePlayer_Params params;
	params.PlayerNumber = PlayerNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerController.LobbyPlayerController_C.UpdateCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Character_ID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyPlayerController_C::UpdateCharacter(int Character_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.UpdateCharacter");

	ALobbyPlayerController_C_UpdateCharacter_Params params;
	params.Character_ID = Character_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerController.LobbyPlayerController_C.OnPlayerAccepted
// (BlueprintCallable, BlueprintEvent)

void ALobbyPlayerController_C::OnPlayerAccepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.OnPlayerAccepted");

	ALobbyPlayerController_C_OnPlayerAccepted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerController.LobbyPlayerController_C.OnPlayerRejected
// (BlueprintCallable, BlueprintEvent)

void ALobbyPlayerController_C::OnPlayerRejected()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.OnPlayerRejected");

	ALobbyPlayerController_C_OnPlayerRejected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerController.LobbyPlayerController_C.ExecuteUbergraph_LobbyPlayerController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyPlayerController_C::ExecuteUbergraph_LobbyPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.ExecuteUbergraph_LobbyPlayerController");

	ALobbyPlayerController_C_ExecuteUbergraph_LobbyPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
