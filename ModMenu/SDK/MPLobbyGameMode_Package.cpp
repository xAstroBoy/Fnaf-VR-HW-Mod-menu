/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MPLobbyGameMode_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyGameMode.MPLobbyGameMode_C.AllPlayersReady
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AllPlayersReady                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMPLobbyGameMode_C::AllPlayersReady(bool* AllPlayersReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.AllPlayersReady");
		
		AMPLobbyGameMode_C_AllPlayersReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllPlayersReady != nullptr)
			*AllPlayersReady = params.AllPlayersReady;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyGameMode.MPLobbyGameMode_C.StartMatch
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void AMPLobbyGameMode_C::StartMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.StartMatch");
		
		AMPLobbyGameMode_C_StartMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyGameMode.MPLobbyGameMode_C.CheckIfPlayerHasValidSelection
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ALobbyPlayerController_C*                    Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlayerIsValid                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMPLobbyGameMode_C::CheckIfPlayerHasValidSelection(class ALobbyPlayerController_C* Controller, bool* PlayerIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.CheckIfPlayerHasValidSelection");
		
		AMPLobbyGameMode_C_CheckIfPlayerHasValidSelection_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerIsValid != nullptr)
			*PlayerIsValid = params.PlayerIsValid;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyGameMode.MPLobbyGameMode_C.SelectCharacter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALobbyPlayerController_C*                    Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Desired_Character_ID                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                New_Character_ID                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterInfo                              New_Character_Info                                         (Parm, OutParm, HasGetValueTypeHash)
	 */
	void AMPLobbyGameMode_C::SelectCharacter(class ALobbyPlayerController_C* Controller, int Desired_Character_ID, int* New_Character_ID, struct FCharacterInfo* New_Character_Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.SelectCharacter");
		
		AMPLobbyGameMode_C_SelectCharacter_Params params {};
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

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyGameMode.MPLobbyGameMode_C.AddLocalPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALobbyPlayerController_C*                    Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPLobbyGameMode_C::AddLocalPlayer(class ALobbyPlayerController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.AddLocalPlayer");
		
		AMPLobbyGameMode_C_AddLocalPlayer_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyGameMode.MPLobbyGameMode_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMPLobbyGameMode_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.ReceiveBeginPlay");
		
		AMPLobbyGameMode_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyGameMode.MPLobbyGameMode_C.SwitchCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALobbyPlayerController_C*                    Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                DesiredCharacterID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPLobbyGameMode_C::SwitchCharacter(class ALobbyPlayerController_C* Controller, int DesiredCharacterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.SwitchCharacter");
		
		AMPLobbyGameMode_C_SwitchCharacter_Params params {};
		params.Controller = Controller;
		params.DesiredCharacterID = DesiredCharacterID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyGameMode.MPLobbyGameMode_C.PlayerReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALobbyPlayerController_C*                    Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPLobbyGameMode_C::PlayerReady(class ALobbyPlayerController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.PlayerReady");
		
		AMPLobbyGameMode_C_PlayerReady_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyGameMode.MPLobbyGameMode_C.ExecuteUbergraph_MPLobbyGameMode
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPLobbyGameMode_C::ExecuteUbergraph_MPLobbyGameMode(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyGameMode.MPLobbyGameMode_C.ExecuteUbergraph_MPLobbyGameMode");
		
		AMPLobbyGameMode_C_ExecuteUbergraph_MPLobbyGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMPLobbyGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMPLobbyGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MPLobbyGameMode.MPLobbyGameMode_C");
		return ptr;
	}

}


