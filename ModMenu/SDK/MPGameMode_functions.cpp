
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function MPGameMode.MPGameMode_C.SpawnControllers
// (Public, BlueprintCallable, BlueprintEvent)

void AMPGameMode_C::SpawnControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.SpawnControllers");

	AMPGameMode_C_SpawnControllers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPGameMode.MPGameMode_C.SetupAvailableCharacters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMPGameMode_C::SetupAvailableCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.SetupAvailableCharacters");

	AMPGameMode_C_SetupAvailableCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPGameMode.MPGameMode_C.PickRandomCharacterClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PawnClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMPGameMode_C::PickRandomCharacterClass(class UClass** PawnClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.PickRandomCharacterClass");

	AMPGameMode_C_PickRandomCharacterClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PawnClass != nullptr)
		*PawnClass = params.PawnClass;
}


// Function MPGameMode.MPGameMode_C.RunCharacterStatuses
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSec                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPGameMode_C::RunCharacterStatuses(float DeltaSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.RunCharacterStatuses");

	AMPGameMode_C_RunCharacterStatuses_Params params;
	params.DeltaSec = DeltaSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPGameMode.MPGameMode_C.CheckCharacterStatusByTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMPFreddyPawnBase_C*     CharacterPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPGameMode_C::CheckCharacterStatusByTimer(class AMPFreddyPawnBase_C* CharacterPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.CheckCharacterStatusByTimer");

	AMPGameMode_C_CheckCharacterStatusByTimer_Params params;
	params.CharacterPawn = CharacterPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPGameMode.MPGameMode_C.CheckCharacterStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMPFreddyPawnBase_C*     CharacterPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPGameMode_C::CheckCharacterStatus(class AMPFreddyPawnBase_C* CharacterPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.CheckCharacterStatus");

	AMPGameMode_C_CheckCharacterStatus_Params params;
	params.CharacterPawn = CharacterPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPGameMode.MPGameMode_C.SpawnDefaultPawnFor
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 StartSpot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* AMPGameMode_C::SpawnDefaultPawnFor(class AController** NewPlayer, class AActor** StartSpot)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.SpawnDefaultPawnFor");

	AMPGameMode_C_SpawnDefaultPawnFor_Params params;
	params.NewPlayer = NewPlayer;
	params.StartSpot = StartSpot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MPGameMode.MPGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMPGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.UserConstructionScript");

	AMPGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPGameMode.MPGameMode_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPGameMode_C::K2_PostLogin(class APlayerController** NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.K2_PostLogin");

	AMPGameMode_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPGameMode.MPGameMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPGameMode_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.ReceiveTick");

	AMPGameMode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPGameMode.MPGameMode_C.PerformScare
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMPFreddyPawnBase_C*     ScareActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPGameMode_C::PerformScare(class AMPFreddyPawnBase_C* ScareActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.PerformScare");

	AMPGameMode_C_PerformScare_Params params;
	params.ScareActor = ScareActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPGameMode.MPGameMode_C.K2_OnSwapPlayerControllers
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController**      OldPC                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      NewPC                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPGameMode_C::K2_OnSwapPlayerControllers(class APlayerController** OldPC, class APlayerController** NewPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.K2_OnSwapPlayerControllers");

	AMPGameMode_C_K2_OnSwapPlayerControllers_Params params;
	params.OldPC = OldPC;
	params.NewPC = NewPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPGameMode.MPGameMode_C.TimerUp
// (BlueprintCallable, BlueprintEvent)

void AMPGameMode_C::TimerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.TimerUp");

	AMPGameMode_C_TimerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPGameMode.MPGameMode_C.AddLocalPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMPController_C*         Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPGameMode_C::AddLocalPlayer(class AMPController_C* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.AddLocalPlayer");

	AMPGameMode_C_AddLocalPlayer_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPGameMode.MPGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMPGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.ReceiveBeginPlay");

	AMPGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPGameMode.MPGameMode_C.ExecuteUbergraph_MPGameMode
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPGameMode_C::ExecuteUbergraph_MPGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPGameMode.MPGameMode_C.ExecuteUbergraph_MPGameMode");

	AMPGameMode_C_ExecuteUbergraph_MPGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
