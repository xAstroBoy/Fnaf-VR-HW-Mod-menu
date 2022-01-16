/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Office_BaseGamemanager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetTwoPreviousRoomTransitions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FName                                        Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOfficeRoomTransition_Struct>        RoomTransitions                                            (Parm, OutParm, ZeroConstructor)
	 */
	void AOffice_BaseGamemanager_C::GetTwoPreviousRoomTransitions(const class FName& Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetTwoPreviousRoomTransitions");
		
		AOffice_BaseGamemanager_C_GetTwoPreviousRoomTransitions_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoomTransitions != nullptr)
			*RoomTransitions = params.RoomTransitions;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetPreviousRoomTransitions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FName                                        Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOfficeRoomTransition_Struct>        RoomTransitions                                            (Parm, OutParm, ZeroConstructor)
	 */
	void AOffice_BaseGamemanager_C::GetPreviousRoomTransitions(const class FName& Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetPreviousRoomTransitions");
		
		AOffice_BaseGamemanager_C_GetPreviousRoomTransitions_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoomTransitions != nullptr)
			*RoomTransitions = params.RoomTransitions;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetAIData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		FreddyCharacterType_EFreddyCharacterType           CharacterType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FOfficeAIDataStruct                         AIDataStruct                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DataWasFound                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice_BaseGamemanager_C::GetAIData(FreddyCharacterType_EFreddyCharacterType CharacterType, struct FOfficeAIDataStruct* AIDataStruct, bool* DataWasFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetAIData");
		
		AOffice_BaseGamemanager_C_GetAIData_Params params {};
		params.CharacterType = CharacterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AIDataStruct != nullptr)
			*AIDataStruct = params.AIDataStruct;
		if (DataWasFound != nullptr)
			*DataWasFound = params.DataWasFound;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.ClockCountDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_BaseGamemanager_C::ClockCountDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.ClockCountDown");
		
		AOffice_BaseGamemanager_C_ClockCountDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRoomInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        RoomName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARoomInfo_Bp_C*                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice_BaseGamemanager_C::GetRoomInfo(const class FName& RoomName, class ARoomInfo_Bp_C** Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRoomInfo");
		
		AOffice_BaseGamemanager_C_GetRoomInfo_Params params {};
		params.RoomName = RoomName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRoomTransitions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FName                                        Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOfficeRoomTransition_Struct>        RoomTransitions                                            (Parm, OutParm, ZeroConstructor)
	 */
	void AOffice_BaseGamemanager_C::GetRoomTransitions(const class FName& Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRoomTransitions");
		
		AOffice_BaseGamemanager_C_GetRoomTransitions_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoomTransitions != nullptr)
			*RoomTransitions = params.RoomTransitions;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRooms
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ARoomInfo_Bp_C*>                      ListOfRoomBps                                              (Parm, OutParm, ZeroConstructor)
	 */
	void AOffice_BaseGamemanager_C::GetRooms(TArray<class ARoomInfo_Bp_C*>* ListOfRoomBps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRooms");
		
		AOffice_BaseGamemanager_C_GetRooms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ListOfRoomBps != nullptr)
			*ListOfRoomBps = params.ListOfRoomBps;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_BaseGamemanager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.UserConstructionScript");
		
		AOffice_BaseGamemanager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice_BaseGamemanager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.ReceiveBeginPlay");
		
		AOffice_BaseGamemanager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.EventStartClock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_BaseGamemanager_C::EventStartClock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.EventStartClock");
		
		AOffice_BaseGamemanager_C_EventStartClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.CountDownClock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_BaseGamemanager_C::CountDownClock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.CountDownClock");
		
		AOffice_BaseGamemanager_C_CountDownClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.SetStatic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EnableStatic                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice_BaseGamemanager_C::SetStatic(bool EnableStatic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.SetStatic");
		
		AOffice_BaseGamemanager_C_SetStatic_Params params {};
		params.EnableStatic = EnableStatic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.CharacterStartingMove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOfficeAiBase_Bp_C*                          OfficeCharacterAI                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARoomInfo_Bp_C*                              PrevRom                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice_BaseGamemanager_C::CharacterStartingMove(class AOfficeAiBase_Bp_C* OfficeCharacterAI, class ARoomInfo_Bp_C* PrevRom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.CharacterStartingMove");
		
		AOffice_BaseGamemanager_C_CharacterStartingMove_Params params {};
		params.OfficeCharacterAI = OfficeCharacterAI;
		params.PrevRom = PrevRom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.StartLightFade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOfficeAiBase_Bp_C*                          AIWaiting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice_BaseGamemanager_C::StartLightFade(class AOfficeAiBase_Bp_C* AIWaiting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.StartLightFade");
		
		AOffice_BaseGamemanager_C_StartLightFade_Params params {};
		params.AIWaiting = AIWaiting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.ScreenFaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_BaseGamemanager_C::ScreenFaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.ScreenFaded");
		
		AOffice_BaseGamemanager_C_ScreenFaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice_BaseGamemanager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.ReceiveTick");
		
		AOffice_BaseGamemanager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.StartupStaticCounter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_BaseGamemanager_C::StartupStaticCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.StartupStaticCounter");
		
		AOffice_BaseGamemanager_C_StartupStaticCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.GameLost_Error_Fix
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_BaseGamemanager_C::GameLost_Error_Fix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.GameLost_Error_Fix");
		
		AOffice_BaseGamemanager_C_GameLost_Error_Fix_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.ExecuteUbergraph_Office_BaseGamemanager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice_BaseGamemanager_C::ExecuteUbergraph_Office_BaseGamemanager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.ExecuteUbergraph_Office_BaseGamemanager");
		
		AOffice_BaseGamemanager_C_ExecuteUbergraph_Office_BaseGamemanager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.DestroyProblemAI__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_BaseGamemanager_C::DestroyProblemAI__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.DestroyProblemAI__DelegateSignature");
		
		AOffice_BaseGamemanager_C_DestroyProblemAI__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.FlickerLights__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice_BaseGamemanager_C::FlickerLights__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.FlickerLights__DelegateSignature");
		
		AOffice_BaseGamemanager_C_FlickerLights__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office_BaseGamemanager.Office_BaseGamemanager_C.DisableAi__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player_Won_Game                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice_BaseGamemanager_C::DisableAi__DelegateSignature(bool Player_Won_Game)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.DisableAi__DelegateSignature");
		
		AOffice_BaseGamemanager_C_DisableAi__DelegateSignature_Params params {};
		params.Player_Won_Game = Player_Won_Game;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice_BaseGamemanager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice_BaseGamemanager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office_BaseGamemanager.Office_BaseGamemanager_C");
		return ptr;
	}

}


