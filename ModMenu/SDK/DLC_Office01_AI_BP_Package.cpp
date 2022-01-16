/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "DLC_Office01_AI_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.FindLowerAssignedRoom
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              RandomRoom                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ALocPoint_BP_C*                              RoomLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_Office01_AI_BP_C::FindLowerAssignedRoom(class ARoomInfo_Bp_C** RandomRoom, class ALocPoint_BP_C** RoomLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.FindLowerAssignedRoom");
		
		ADLC_Office01_AI_BP_C_FindLowerAssignedRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomRoom != nullptr)
			*RandomRoom = params.RandomRoom;
		if (RoomLocation != nullptr)
			*RoomLocation = params.RoomLocation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.AdjustAnimationSpeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_AI_BP_C::AdjustAnimationSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.AdjustAnimationSpeed");
		
		ADLC_Office01_AI_BP_C_AdjustAnimationSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ResetPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_AI_BP_C::ResetPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ResetPosition");
		
		ADLC_Office01_AI_BP_C_ResetPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.SendToHiddenRoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_AI_BP_C::SendToHiddenRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.SendToHiddenRoom");
		
		ADLC_Office01_AI_BP_C_SendToHiddenRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.FindPreviousRoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              RoomToCheck                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_Office01_AI_BP_C::FindPreviousRoom(class ARoomInfo_Bp_C* RoomToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.FindPreviousRoom");
		
		ADLC_Office01_AI_BP_C_FindPreviousRoom_Params params {};
		params.RoomToCheck = RoomToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.BeingFlashed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AttackingDoor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADLC_Office01_AI_BP_C::BeingFlashed(bool AttackingDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.BeingFlashed");
		
		ADLC_Office01_AI_BP_C_BeingFlashed_Params params {};
		params.AttackingDoor = AttackingDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_Office01_AI_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReceiveTick");
		
		ADLC_Office01_AI_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.PickNextRoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_AI_BP_C::PickNextRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.PickNextRoom");
		
		ADLC_Office01_AI_BP_C_PickNextRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADLC_Office01_AI_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReceiveBeginPlay");
		
		ADLC_Office01_AI_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReachedKillZone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_AI_BP_C::ReachedKillZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReachedKillZone");
		
		ADLC_Office01_AI_BP_C_ReachedKillZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.CaughtByFlash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_AI_BP_C::CaughtByFlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.CaughtByFlash");
		
		ADLC_Office01_AI_BP_C_CaughtByFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.CheckBeingWatched
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_AI_BP_C::CheckBeingWatched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.CheckBeingWatched");
		
		ADLC_Office01_AI_BP_C_CheckBeingWatched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.RoomDelayTrigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_AI_BP_C::RoomDelayTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.RoomDelayTrigger");
		
		ADLC_Office01_AI_BP_C_RoomDelayTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ExecuteUbergraph_DLC_Office01_AI_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_Office01_AI_BP_C::ExecuteUbergraph_DLC_Office01_AI_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ExecuteUbergraph_DLC_Office01_AI_BP");
		
		ADLC_Office01_AI_BP_C_ExecuteUbergraph_DLC_Office01_AI_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ADLC_Office01_AI_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADLC_Office01_AI_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DLC_Office01_AI_BP.DLC_Office01_AI_BP_C");
		return ptr;
	}

}


