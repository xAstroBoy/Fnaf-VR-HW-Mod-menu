/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MPLobbyUIPlayerSlot_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.JoinPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMPLobbyUIPlayerSlot_C::JoinPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.JoinPlayer");
		
		UMPLobbyUIPlayerSlot_C_JoinPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.UpdateCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        CharacterName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMPLobbyUIPlayerSlot_C::UpdateCharacter(const class FText& CharacterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.UpdateCharacter");
		
		UMPLobbyUIPlayerSlot_C_UpdateCharacter_Params params {};
		params.CharacterName = CharacterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.Init
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                PlayerNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMPLobbyUIPlayerSlot_C::Init(int PlayerNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.Init");
		
		UMPLobbyUIPlayerSlot_C_Init_Params params {};
		params.PlayerNumber = PlayerNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.ExecuteUbergraph_MPLobbyUIPlayerSlot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMPLobbyUIPlayerSlot_C::ExecuteUbergraph_MPLobbyUIPlayerSlot(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.ExecuteUbergraph_MPLobbyUIPlayerSlot");
		
		UMPLobbyUIPlayerSlot_C_ExecuteUbergraph_MPLobbyUIPlayerSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMPLobbyUIPlayerSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMPLobbyUIPlayerSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C");
		return ptr;
	}

}


