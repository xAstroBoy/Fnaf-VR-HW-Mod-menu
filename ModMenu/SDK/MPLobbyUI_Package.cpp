/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MPLobbyUI_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUI.MPLobbyUI_C.Get_MatchStartingText_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UMPLobbyUI_C::Get_MatchStartingText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.Get_MatchStartingText_Text_1");
		
		UMPLobbyUI_C_Get_MatchStartingText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUI.MPLobbyUI_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMPLobbyUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.PreConstruct");
		
		UMPLobbyUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUI.MPLobbyUI_C.JoinPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMPLobbyUI_C::JoinPlayer(int PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.JoinPlayer");
		
		UMPLobbyUI_C_JoinPlayer_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUI.MPLobbyUI_C.UpdatePlayerCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CharacterName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMPLobbyUI_C::UpdatePlayerCharacter(int PlayerId, const class FText& CharacterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.UpdatePlayerCharacter");
		
		UMPLobbyUI_C_UpdatePlayerCharacter_Params params {};
		params.PlayerId = PlayerId;
		params.CharacterName = CharacterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUI.MPLobbyUI_C.StartingMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimerHandle                                TimerHandle                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UMPLobbyUI_C::StartingMatch(const struct FTimerHandle& TimerHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.StartingMatch");
		
		UMPLobbyUI_C_StartingMatch_Params params {};
		params.TimerHandle = TimerHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUI.MPLobbyUI_C.StopMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMPLobbyUI_C::StopMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.StopMatch");
		
		UMPLobbyUI_C_StopMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUI.MPLobbyUI_C.ExecuteUbergraph_MPLobbyUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMPLobbyUI_C::ExecuteUbergraph_MPLobbyUI(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.ExecuteUbergraph_MPLobbyUI");
		
		UMPLobbyUI_C_ExecuteUbergraph_MPLobbyUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMPLobbyUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMPLobbyUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MPLobbyUI.MPLobbyUI_C");
		return ptr;
	}

}


