/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Office01_Freddy_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.CheckIfGameWonDuringPowerOut
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Freddy_C::CheckIfGameWonDuringPowerOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.CheckIfGameWonDuringPowerOut");
		
		AOffice01_Freddy_C_CheckIfGameWonDuringPowerOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.CanEnterRoom
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOfficeRoomTransition_Struct                TransitionInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class ARoomInfo_Bp_C*                              RoomBP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanEnterRoom                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice01_Freddy_C::CanEnterRoom(struct FOfficeRoomTransition_Struct* TransitionInfo, class ARoomInfo_Bp_C* RoomBP, bool* CanEnterRoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.CanEnterRoom");
		
		AOffice01_Freddy_C_CanEnterRoom_Params params {};
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
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.Flashing Eyes__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_Freddy_C::Flashing_Eyes__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Flashing Eyes__FinishedFunc");
		
		AOffice01_Freddy_C_Flashing_Eyes__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.Flashing Eyes__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_Freddy_C::Flashing_Eyes__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Flashing Eyes__UpdateFunc");
		
		AOffice01_Freddy_C_Flashing_Eyes__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.EyeFlickerTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_Freddy_C::EyeFlickerTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.EyeFlickerTimeline__FinishedFunc");
		
		AOffice01_Freddy_C_EyeFlickerTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.EyeFlickerTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_Freddy_C::EyeFlickerTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.EyeFlickerTimeline__UpdateFunc");
		
		AOffice01_Freddy_C_EyeFlickerTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_Freddy_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Timeline_1__FinishedFunc");
		
		AOffice01_Freddy_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_Freddy_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Timeline_1__UpdateFunc");
		
		AOffice01_Freddy_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.Timeline_1__StopTrackHere__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_Freddy_C::Timeline_1__StopTrackHere__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Timeline_1__StopTrackHere__EventFunc");
		
		AOffice01_Freddy_C_Timeline_1__StopTrackHere__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.Timeline_1__LightOn__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_Freddy_C::Timeline_1__LightOn__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Timeline_1__LightOn__EventFunc");
		
		AOffice01_Freddy_C_Timeline_1__LightOn__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.Timeline_1__LightOff__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_Freddy_C::Timeline_1__LightOff__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Timeline_1__LightOff__EventFunc");
		
		AOffice01_Freddy_C_Timeline_1__LightOff__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice01_Freddy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.ReceiveBeginPlay");
		
		AOffice01_Freddy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.EventDisableAi
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player_Won_Game                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice01_Freddy_C::EventDisableAi(bool Player_Won_Game)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.EventDisableAi");
		
		AOffice01_Freddy_C_EventDisableAi_Params params {};
		params.Player_Won_Game = Player_Won_Game;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.FreddySongSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Freddy_C::FreddySongSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.FreddySongSequence");
		
		AOffice01_Freddy_C_FreddySongSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.FlickerEyes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Freddy_C::FlickerEyes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.FlickerEyes");
		
		AOffice01_Freddy_C_FlickerEyes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.StopFlickerEyes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Freddy_C::StopFlickerEyes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.StopFlickerEyes");
		
		AOffice01_Freddy_C_StopFlickerEyes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.MoveAi
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ALocPoint_BP_C*                              Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_Freddy_C::MoveAi(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.MoveAi");
		
		AOffice01_Freddy_C_MoveAi_Params params {};
		params.Room = Room;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_Freddy_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.ReceiveTick");
		
		AOffice01_Freddy_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.DestroyFreddy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Freddy_C::DestroyFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.DestroyFreddy");
		
		AOffice01_Freddy_C_DestroyFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.ReachedKillZone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Freddy_C::ReachedKillZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.ReachedKillZone");
		
		AOffice01_Freddy_C_ReachedKillZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Freddy.Office01_Freddy_C.ExecuteUbergraph_Office01_Freddy
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_Freddy_C::ExecuteUbergraph_Office01_Freddy(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.ExecuteUbergraph_Office01_Freddy");
		
		AOffice01_Freddy_C_ExecuteUbergraph_Office01_Freddy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice01_Freddy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice01_Freddy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office01_Freddy.Office01_Freddy_C");
		return ptr;
	}

}


