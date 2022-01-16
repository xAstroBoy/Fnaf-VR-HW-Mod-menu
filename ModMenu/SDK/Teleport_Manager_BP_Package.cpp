/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Teleport_Manager_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Teleport_Manager_BP.Teleport_Manager_BP_C.CurrentTeleportSpot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATeleport_Manager_BP_C::CurrentTeleportSpot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.CurrentTeleportSpot");
		
		ATeleport_Manager_BP_C_CurrentTeleportSpot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Teleport_Manager_BP.Teleport_Manager_BP_C.EnableAttachedComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATeleportSpot_BP_C*                          TeleportSpots                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleport_Manager_BP_C::EnableAttachedComponents(class ATeleportSpot_BP_C* TeleportSpots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.EnableAttachedComponents");
		
		ATeleport_Manager_BP_C_EnableAttachedComponents_Params params {};
		params.TeleportSpots = TeleportSpots;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Teleport_Manager_BP.Teleport_Manager_BP_C.DisableAll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATeleport_Manager_BP_C::DisableAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.DisableAll");
		
		ATeleport_Manager_BP_C_DisableAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Teleport_Manager_BP.Teleport_Manager_BP_C.EnableTeleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                TeleportID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATeleport_Manager_BP_C::EnableTeleport(int TeleportID, bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.EnableTeleport");
		
		ATeleport_Manager_BP_C_EnableTeleport_Params params {};
		params.TeleportID = TeleportID;
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Teleport_Manager_BP.Teleport_Manager_BP_C.UpdateTeleportSpots
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATeleportSpot_BP_C*                          TeleportSpotChange                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleport_Manager_BP_C::UpdateTeleportSpots(class ATeleportSpot_BP_C* TeleportSpotChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.UpdateTeleportSpots");
		
		ATeleport_Manager_BP_C_UpdateTeleportSpots_Params params {};
		params.TeleportSpotChange = TeleportSpotChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Teleport_Manager_BP.Teleport_Manager_BP_C.Check Location
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATeleport_Manager_BP_C::Check_Location()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.Check Location");
		
		ATeleport_Manager_BP_C_Check_Location_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Teleport_Manager_BP.Teleport_Manager_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATeleport_Manager_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.ReceiveBeginPlay");
		
		ATeleport_Manager_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Teleport_Manager_BP.Teleport_Manager_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleport_Manager_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.ReceiveTick");
		
		ATeleport_Manager_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Teleport_Manager_BP.Teleport_Manager_BP_C.ExecuteUbergraph_Teleport_Manager_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleport_Manager_BP_C::ExecuteUbergraph_Teleport_Manager_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.ExecuteUbergraph_Teleport_Manager_BP");
		
		ATeleport_Manager_BP_C_ExecuteUbergraph_Teleport_Manager_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Teleport_Manager_BP.Teleport_Manager_BP_C.Player Is Teleporting__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Player_Location                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleport_Manager_BP_C::Player_Is_Teleporting__DelegateSignature(int Player_Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Teleport_Manager_BP.Teleport_Manager_BP_C.Player Is Teleporting__DelegateSignature");
		
		ATeleport_Manager_BP_C_Player_Is_Teleporting__DelegateSignature_Params params {};
		params.Player_Location = Player_Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATeleport_Manager_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATeleport_Manager_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Teleport_Manager_BP.Teleport_Manager_BP_C");
		return ptr;
	}

}


