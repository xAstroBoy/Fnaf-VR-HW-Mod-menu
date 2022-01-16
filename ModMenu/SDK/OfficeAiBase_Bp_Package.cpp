/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "OfficeAiBase_Bp_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.SetActivationTimeRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::SetActivationTimeRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.SetActivationTimeRange");
		
		AOfficeAiBase_Bp_C_SetActivationTimeRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PlayerWatchingAi
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta_Time                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WaitMoveTimer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimerCap                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsThereTimeCap                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MoveTimer                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficeAiBase_Bp_C::PlayerWatchingAi(float Delta_Time, float WaitMoveTimer, float TimerCap, bool* IsThereTimeCap, float* MoveTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PlayerWatchingAi");
		
		AOfficeAiBase_Bp_C_PlayerWatchingAi_Params params {};
		params.Delta_Time = Delta_Time;
		params.WaitMoveTimer = WaitMoveTimer;
		params.TimerCap = TimerCap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsThereTimeCap != nullptr)
			*IsThereTimeCap = params.IsThereTimeCap;
		if (MoveTimer != nullptr)
			*MoveTimer = params.MoveTimer;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.CanEnterRoom
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOfficeRoomTransition_Struct                TransitionInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class ARoomInfo_Bp_C*                              RoomBP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanEnterRoom                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOfficeAiBase_Bp_C::CanEnterRoom(struct FOfficeRoomTransition_Struct* TransitionInfo, class ARoomInfo_Bp_C* RoomBP, bool* CanEnterRoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.CanEnterRoom");
		
		AOfficeAiBase_Bp_C_CanEnterRoom_Params params {};
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
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.OnAnimJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::OnAnimJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.OnAnimJump");
		
		AOfficeAiBase_Bp_C_OnAnimJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.FinishMove
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::FinishMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.FinishMove");
		
		AOfficeAiBase_Bp_C_FinishMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.StartingMove
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              PrevRoom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ALocPoint_BP_C*                              PrevLoc                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficeAiBase_Bp_C::StartingMove(class ARoomInfo_Bp_C* PrevRoom, class ALocPoint_BP_C* PrevLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.StartingMove");
		
		AOfficeAiBase_Bp_C_StartingMove_Params params {};
		params.PrevRoom = PrevRoom;
		params.PrevLoc = PrevLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetCurrentLocationName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class FString AOfficeAiBase_Bp_C::GetCurrentLocationName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetCurrentLocationName");
		
		AOfficeAiBase_Bp_C_GetCurrentLocationName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetCurrentRoomName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class FString AOfficeAiBase_Bp_C::GetCurrentRoomName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetCurrentRoomName");
		
		AOfficeAiBase_Bp_C_GetCurrentRoomName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.CollectNextRoomInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class ARoomInfo_Bp_C*, int>                   AllRoomChances                                             (Parm, OutParm, ZeroConstructor)
	 * 		int                                                TotalOfRoomChance                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficeAiBase_Bp_C::CollectNextRoomInfo(TMap<class ARoomInfo_Bp_C*, int>* AllRoomChances, int* TotalOfRoomChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.CollectNextRoomInfo");
		
		AOfficeAiBase_Bp_C_CollectNextRoomInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllRoomChances != nullptr)
			*AllRoomChances = params.AllRoomChances;
		if (TotalOfRoomChance != nullptr)
			*TotalOfRoomChance = params.TotalOfRoomChance;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ResetMoveTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::ResetMoveTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ResetMoveTimer");
		
		AOfficeAiBase_Bp_C_ResetMoveTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.Temp_Office02_MaskTransition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::Temp_Office02_MaskTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.Temp_Office02_MaskTransition");
		
		AOfficeAiBase_Bp_C_Temp_Office02_MaskTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.SetJumpScareRef
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::SetJumpScareRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.SetJumpScareRef");
		
		AOfficeAiBase_Bp_C_SetJumpScareRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetJumpScareRef
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AJumpScare_C*                                Ref_Jumpscare_Bp                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficeAiBase_Bp_C::GetJumpScareRef(class AJumpScare_C** Ref_Jumpscare_Bp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetJumpScareRef");
		
		AOfficeAiBase_Bp_C_GetJumpScareRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref_Jumpscare_Bp != nullptr)
			*Ref_Jumpscare_Bp = params.Ref_Jumpscare_Bp;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReachedKillZone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::ReachedKillZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReachedKillZone");
		
		AOfficeAiBase_Bp_C_ReachedKillZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetRandomLocationForRoom
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ALocPoint_BP_C*                              RoomLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficeAiBase_Bp_C::GetRandomLocationForRoom(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C** RoomLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetRandomLocationForRoom");
		
		AOfficeAiBase_Bp_C_GetRandomLocationForRoom_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoomLocation != nullptr)
			*RoomLocation = params.RoomLocation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetOfficeManager
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AOffice_BaseGamemanager_C*                   OfficeManager                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficeAiBase_Bp_C::GetOfficeManager(class AOffice_BaseGamemanager_C** OfficeManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetOfficeManager");
		
		AOfficeAiBase_Bp_C_GetOfficeManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OfficeManager != nullptr)
			*OfficeManager = params.OfficeManager;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PickNextRoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::PickNextRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PickNextRoom");
		
		AOfficeAiBase_Bp_C_PickNextRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.NotifyLocationOwner
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::NotifyLocationOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.NotifyLocationOwner");
		
		AOfficeAiBase_Bp_C_NotifyLocationOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PlayerLookLogic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::PlayerLookLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PlayerLookLogic");
		
		AOfficeAiBase_Bp_C_PlayerLookLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.MoveAi
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ALocPoint_BP_C*                              Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficeAiBase_Bp_C::MoveAi(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.MoveAi");
		
		AOfficeAiBase_Bp_C_MoveAi_Params params {};
		params.Room = Room;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.UpdateTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::UpdateTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.UpdateTimer");
		
		AOfficeAiBase_Bp_C_UpdateTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetRoomLocationName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        RoomType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARoomInfo_Bp_C*                              RoomInfo_Bp                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        WhatIsCurrentRoom                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficeAiBase_Bp_C::GetRoomLocationName(const class FName& RoomType, class ARoomInfo_Bp_C** RoomInfo_Bp, class FName* WhatIsCurrentRoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetRoomLocationName");
		
		AOfficeAiBase_Bp_C_GetRoomLocationName_Params params {};
		params.RoomType = RoomType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoomInfo_Bp != nullptr)
			*RoomInfo_Bp = params.RoomInfo_Bp;
		if (WhatIsCurrentRoom != nullptr)
			*WhatIsCurrentRoom = params.WhatIsCurrentRoom;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.UserConstructionScript");
		
		AOfficeAiBase_Bp_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReceiveBeginPlay");
		
		AOfficeAiBase_Bp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficeAiBase_Bp_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReceiveTick");
		
		AOfficeAiBase_Bp_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.EventDisableAi
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player_Won_Game                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOfficeAiBase_Bp_C::EventDisableAi(bool Player_Won_Game)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.EventDisableAi");
		
		AOfficeAiBase_Bp_C_EventDisableAi_Params params {};
		params.Player_Won_Game = Player_Won_Game;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.FlickerAssignedLights
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOfficeAiBase_Bp_C::FlickerAssignedLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.FlickerAssignedLights");
		
		AOfficeAiBase_Bp_C_FlickerAssignedLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ExecuteUbergraph_OfficeAiBase-Bp
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficeAiBase_Bp_C::ExecuteUbergraph_OfficeAiBase_Bp(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ExecuteUbergraph_OfficeAiBase-Bp");
		
		AOfficeAiBase_Bp_C_ExecuteUbergraph_OfficeAiBase_Bp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOfficeAiBase_Bp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOfficeAiBase_Bp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OfficeAiBase_Bp.OfficeAiBase-Bp_C");
		return ptr;
	}

}


