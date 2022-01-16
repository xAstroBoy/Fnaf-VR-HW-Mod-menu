/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office_SpringTrap_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_SpringTrap.Office_SpringTrap_C.GetBlockedRooms
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_SpringTrap_C::GetBlockedRooms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.GetBlockedRooms");
		
		AOffice_SpringTrap_C_GetBlockedRooms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_SpringTrap.Office_SpringTrap_C.CanEnterRoom
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOfficeRoomTransition_Struct                TransitionInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class ARoomInfo_Bp_C*                              RoomBP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanEnterRoom                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice_SpringTrap_C::CanEnterRoom(struct FOfficeRoomTransition_Struct* TransitionInfo, class ARoomInfo_Bp_C* RoomBP, bool* CanEnterRoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.CanEnterRoom");
		
		AOffice_SpringTrap_C_CanEnterRoom_Params params {};
		params.RoomBP = RoomBP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TransitionInfo != nullptr)
			*TransitionInfo = params.TransitionInfo;
		if (CanEnterRoom != nullptr)
			*CanEnterRoom = params.CanEnterRoom;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_SpringTrap.Office_SpringTrap_C.CheckVentDoor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              DestinationRoom                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice_SpringTrap_C::CheckVentDoor(class ARoomInfo_Bp_C* DestinationRoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.CheckVentDoor");
		
		AOffice_SpringTrap_C_CheckVentDoor_Params params {};
		params.DestinationRoom = DestinationRoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_SpringTrap.Office_SpringTrap_C.FindAdjacentRoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              RoomToCheck                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice_SpringTrap_C::FindAdjacentRoom(class ARoomInfo_Bp_C* RoomToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.FindAdjacentRoom");
		
		AOffice_SpringTrap_C_FindAdjacentRoom_Params params {};
		params.RoomToCheck = RoomToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_SpringTrap.Office_SpringTrap_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice_SpringTrap_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.ReceiveBeginPlay");
		
		AOffice_SpringTrap_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_SpringTrap.Office_SpringTrap_C.PickNextRoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_SpringTrap_C::PickNextRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.PickNextRoom");
		
		AOffice_SpringTrap_C_PickNextRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_SpringTrap.Office_SpringTrap_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice_SpringTrap_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.ReceiveTick");
		
		AOffice_SpringTrap_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_SpringTrap.Office_SpringTrap_C.ReachedKillZone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_SpringTrap_C::ReachedKillZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.ReachedKillZone");
		
		AOffice_SpringTrap_C_ReachedKillZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_SpringTrap.Office_SpringTrap_C.MoveAi
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ALocPoint_BP_C*                              Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice_SpringTrap_C::MoveAi(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.MoveAi");
		
		AOffice_SpringTrap_C_MoveAi_Params params {};
		params.Room = Room;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_SpringTrap.Office_SpringTrap_C.SpeedupSpringTrap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_SpringTrap_C::SpeedupSpringTrap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.SpeedupSpringTrap");
		
		AOffice_SpringTrap_C_SpeedupSpringTrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_SpringTrap.Office_SpringTrap_C.ResetSpringtrapSpeed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_SpringTrap_C::ResetSpringtrapSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.ResetSpringtrapSpeed");
		
		AOffice_SpringTrap_C_ResetSpringtrapSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_SpringTrap.Office_SpringTrap_C.ExecuteUbergraph_Office_SpringTrap
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice_SpringTrap_C::ExecuteUbergraph_Office_SpringTrap(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.ExecuteUbergraph_Office_SpringTrap");
		
		AOffice_SpringTrap_C_ExecuteUbergraph_Office_SpringTrap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice_SpringTrap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice_SpringTrap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office_SpringTrap.Office_SpringTrap_C");
		return ptr;
	}

}


