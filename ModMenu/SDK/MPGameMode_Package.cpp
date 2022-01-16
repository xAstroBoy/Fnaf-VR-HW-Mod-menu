/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MPGameMode_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.SpawnControllers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMPGameMode_C::SpawnControllers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.SpawnControllers");
		
		AMPGameMode_C_SpawnControllers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.SetupAvailableCharacters
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMPGameMode_C::SetupAvailableCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.SetupAvailableCharacters");
		
		AMPGameMode_C_SetupAvailableCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.PickRandomCharacterClass
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      PawnClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPGameMode_C::PickRandomCharacterClass(class UClass** PawnClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.PickRandomCharacterClass");
		
		AMPGameMode_C_PickRandomCharacterClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PawnClass != nullptr)
			*PawnClass = params.PawnClass;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.RunCharacterStatuses
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSec                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPGameMode_C::RunCharacterStatuses(float DeltaSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.RunCharacterStatuses");
		
		AMPGameMode_C_RunCharacterStatuses_Params params {};
		params.DeltaSec = DeltaSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.CheckCharacterStatusByTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMPFreddyPawnBase_C*                         CharacterPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPGameMode_C::CheckCharacterStatusByTimer(class AMPFreddyPawnBase_C* CharacterPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.CheckCharacterStatusByTimer");
		
		AMPGameMode_C_CheckCharacterStatusByTimer_Params params {};
		params.CharacterPawn = CharacterPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.CheckCharacterStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMPFreddyPawnBase_C*                         CharacterPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPGameMode_C::CheckCharacterStatus(class AMPFreddyPawnBase_C* CharacterPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.CheckCharacterStatus");
		
		AMPGameMode_C_CheckCharacterStatus_Params params {};
		params.CharacterPawn = CharacterPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.SpawnDefaultPawnFor
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      StartSpot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class APawn* AMPGameMode_C::SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.SpawnDefaultPawnFor");
		
		AMPGameMode_C_SpawnDefaultPawnFor_Params params {};
		params.NewPlayer = NewPlayer;
		params.StartSpot = StartSpot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.K2_PostLogin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPGameMode_C::K2_PostLogin(class APlayerController* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.K2_PostLogin");
		
		AMPGameMode_C_K2_PostLogin_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPGameMode_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.ReceiveTick");
		
		AMPGameMode_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.PerformScare
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMPFreddyPawnBase_C*                         ScareActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPGameMode_C::PerformScare(class AMPFreddyPawnBase_C* ScareActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.PerformScare");
		
		AMPGameMode_C_PerformScare_Params params {};
		params.ScareActor = ScareActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.K2_OnSwapPlayerControllers
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           OldPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           NewPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPGameMode_C::K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.K2_OnSwapPlayerControllers");
		
		AMPGameMode_C_K2_OnSwapPlayerControllers_Params params {};
		params.OldPC = OldPC;
		params.NewPC = NewPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.TimerUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMPGameMode_C::TimerUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.TimerUp");
		
		AMPGameMode_C_TimerUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.AddLocalPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMPController_C*                             Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPGameMode_C::AddLocalPlayer(class AMPController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.AddLocalPlayer");
		
		AMPGameMode_C_AddLocalPlayer_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMPGameMode_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.ReceiveBeginPlay");
		
		AMPGameMode_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPGameMode.MPGameMode_C.ExecuteUbergraph_MPGameMode
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPGameMode_C::ExecuteUbergraph_MPGameMode(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.ExecuteUbergraph_MPGameMode");
		
		AMPGameMode_C_ExecuteUbergraph_MPGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMPGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMPGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MPGameMode.MPGameMode_C");
		return ptr;
	}

}


