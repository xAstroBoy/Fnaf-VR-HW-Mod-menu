/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "LobbyPlayerController_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LobbyPlayerController.LobbyPlayerController_C.GetPlayerNumber
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                PlayerNumber                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALobbyPlayerController_C::GetPlayerNumber(int* PlayerNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.GetPlayerNumber");
		
		ALobbyPlayerController_C_GetPlayerNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerNumber != nullptr)
			*PlayerNumber = params.PlayerNumber;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LobbyPlayerController.LobbyPlayerController_C.IsPlayerReady
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               IsConfirmed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALobbyPlayerController_C::IsPlayerReady(bool* IsConfirmed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.IsPlayerReady");
		
		ALobbyPlayerController_C_IsPlayerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsConfirmed != nullptr)
			*IsConfirmed = params.IsConfirmed;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LobbyPlayerController.LobbyPlayerController_C.GetCharacterID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                Character_ID                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALobbyPlayerController_C::GetCharacterID(int* Character_ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.GetCharacterID");
		
		ALobbyPlayerController_C_GetCharacterID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character_ID != nullptr)
			*Character_ID = params.Character_ID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LobbyPlayerController.LobbyPlayerController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ALobbyPlayerController_C::InpActEvt_JoinGame_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_2");
		
		ALobbyPlayerController_C_InpActEvt_JoinGame_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LobbyPlayerController.LobbyPlayerController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ALobbyPlayerController_C::InpActEvt_JoinGame_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_1");
		
		ALobbyPlayerController_C_InpActEvt_JoinGame_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LobbyPlayerController.LobbyPlayerController_C.InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALobbyPlayerController_C::InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1");
		
		ALobbyPlayerController_C_InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LobbyPlayerController.LobbyPlayerController_C.ActivatePlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                PlayerNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALobbyPlayerController_C::ActivatePlayer(int PlayerNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.ActivatePlayer");
		
		ALobbyPlayerController_C_ActivatePlayer_Params params {};
		params.PlayerNumber = PlayerNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LobbyPlayerController.LobbyPlayerController_C.UpdateCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Character_ID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALobbyPlayerController_C::UpdateCharacter(int Character_ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.UpdateCharacter");
		
		ALobbyPlayerController_C_UpdateCharacter_Params params {};
		params.Character_ID = Character_ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LobbyPlayerController.LobbyPlayerController_C.OnPlayerAccepted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALobbyPlayerController_C::OnPlayerAccepted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.OnPlayerAccepted");
		
		ALobbyPlayerController_C_OnPlayerAccepted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LobbyPlayerController.LobbyPlayerController_C.OnPlayerRejected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALobbyPlayerController_C::OnPlayerRejected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.OnPlayerRejected");
		
		ALobbyPlayerController_C_OnPlayerRejected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LobbyPlayerController.LobbyPlayerController_C.ExecuteUbergraph_LobbyPlayerController
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALobbyPlayerController_C::ExecuteUbergraph_LobbyPlayerController(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyPlayerController.LobbyPlayerController_C.ExecuteUbergraph_LobbyPlayerController");
		
		ALobbyPlayerController_C_ExecuteUbergraph_LobbyPlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ALobbyPlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALobbyPlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LobbyPlayerController.LobbyPlayerController_C");
		return ptr;
	}

}


