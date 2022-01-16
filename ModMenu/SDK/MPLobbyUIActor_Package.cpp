/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "MPLobbyUIActor_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUIActor.MPLobbyUIActor_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMPLobbyUIActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.ReceiveBeginPlay");
		
		AMPLobbyUIActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUIActor.MPLobbyUIActor_C.Init
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMPLobbyGameMode_C*                          LobbyGameMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPLobbyUIActor_C::Init(class AMPLobbyGameMode_C* LobbyGameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.Init");
		
		AMPLobbyUIActor_C_Init_Params params {};
		params.LobbyGameMode = LobbyGameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUIActor.MPLobbyUIActor_C.JoinPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPLobbyUIActor_C::JoinPlayer(int PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.JoinPlayer");
		
		AMPLobbyUIActor_C_JoinPlayer_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUIActor.MPLobbyUIActor_C.UpdatePlayerCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CharacterName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AMPLobbyUIActor_C::UpdatePlayerCharacter(int PlayerId, const class FText& CharacterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.UpdatePlayerCharacter");
		
		AMPLobbyUIActor_C_UpdatePlayerCharacter_Params params {};
		params.PlayerId = PlayerId;
		params.CharacterName = CharacterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUIActor.MPLobbyUIActor_C.StartingMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimerHandle                                TimerHandle                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPLobbyUIActor_C::StartingMatch(const struct FTimerHandle& TimerHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.StartingMatch");
		
		AMPLobbyUIActor_C_StartingMatch_Params params {};
		params.TimerHandle = TimerHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUIActor.MPLobbyUIActor_C.StopMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMPLobbyUIActor_C::StopMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.StopMatch");
		
		AMPLobbyUIActor_C_StopMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUIActor.MPLobbyUIActor_C.ExecuteUbergraph_MPLobbyUIActor
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPLobbyUIActor_C::ExecuteUbergraph_MPLobbyUIActor(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.ExecuteUbergraph_MPLobbyUIActor");
		
		AMPLobbyUIActor_C_ExecuteUbergraph_MPLobbyUIActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMPLobbyUIActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMPLobbyUIActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MPLobbyUIActor.MPLobbyUIActor_C");
		return ptr;
	}

}


