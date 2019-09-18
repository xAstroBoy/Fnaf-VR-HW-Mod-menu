
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

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetAIData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFreddyCharacterType> CharacterType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOfficeAIDataStruct     AIDataStruct                   (Parm, OutParm, IsPlainOldData)
// bool                           DataWasFound                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOffice_BaseGamemanager_C::GetAIData(TEnumAsByte<EFreddyCharacterType> CharacterType, struct FOfficeAIDataStruct* AIDataStruct, bool* DataWasFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetAIData");

	AOffice_BaseGamemanager_C_GetAIData_Params params;
	params.CharacterType = CharacterType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AIDataStruct != nullptr)
		*AIDataStruct = params.AIDataStruct;
	if (DataWasFound != nullptr)
		*DataWasFound = params.DataWasFound;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.ClockCountDown
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice_BaseGamemanager_C::ClockCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.ClockCountDown");

	AOffice_BaseGamemanager_C_ClockCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRoomInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   RoomName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARoomInfo_Bp_C*          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOffice_BaseGamemanager_C::GetRoomInfo(const struct FName& RoomName, class ARoomInfo_Bp_C** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRoomInfo");

	AOffice_BaseGamemanager_C_GetRoomInfo_Params params;
	params.RoomName = RoomName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRoomTransitions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FOfficeRoomTransition_Struct> RoomTransitions                (Parm, OutParm, ZeroConstructor)

void AOffice_BaseGamemanager_C::GetRoomTransitions(const struct FName& Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRoomTransitions");

	AOffice_BaseGamemanager_C_GetRoomTransitions_Params params;
	params.Room = Room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RoomTransitions != nullptr)
		*RoomTransitions = params.RoomTransitions;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRooms
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ARoomInfo_Bp_C*>  ListOfRoomBps                  (Parm, OutParm, ZeroConstructor)

void AOffice_BaseGamemanager_C::GetRooms(TArray<class ARoomInfo_Bp_C*>* ListOfRoomBps)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRooms");

	AOffice_BaseGamemanager_C_GetRooms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListOfRoomBps != nullptr)
		*ListOfRoomBps = params.ListOfRoomBps;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice_BaseGamemanager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.UserConstructionScript");

	AOffice_BaseGamemanager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice_BaseGamemanager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.ReceiveBeginPlay");

	AOffice_BaseGamemanager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.EventStartClock
// (BlueprintCallable, BlueprintEvent)

void AOffice_BaseGamemanager_C::EventStartClock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.EventStartClock");

	AOffice_BaseGamemanager_C_EventStartClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.CountDownClock
// (BlueprintCallable, BlueprintEvent)

void AOffice_BaseGamemanager_C::CountDownClock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.CountDownClock");

	AOffice_BaseGamemanager_C_CountDownClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.SetStatic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableStatic                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice_BaseGamemanager_C::SetStatic(bool EnableStatic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.SetStatic");

	AOffice_BaseGamemanager_C_SetStatic_Params params;
	params.EnableStatic = EnableStatic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.CharacterStartingMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOfficeAiBase_Bp_C*      OfficeCharacterAI              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARoomInfo_Bp_C*          PrevRom                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice_BaseGamemanager_C::CharacterStartingMove(class AOfficeAiBase_Bp_C* OfficeCharacterAI, class ARoomInfo_Bp_C* PrevRom)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.CharacterStartingMove");

	AOffice_BaseGamemanager_C_CharacterStartingMove_Params params;
	params.OfficeCharacterAI = OfficeCharacterAI;
	params.PrevRom = PrevRom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.StartLightFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOfficeAiBase_Bp_C*      AIWaiting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice_BaseGamemanager_C::StartLightFade(class AOfficeAiBase_Bp_C* AIWaiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.StartLightFade");

	AOffice_BaseGamemanager_C_StartLightFade_Params params;
	params.AIWaiting = AIWaiting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.ScreenFaded
// (BlueprintCallable, BlueprintEvent)

void AOffice_BaseGamemanager_C::ScreenFaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.ScreenFaded");

	AOffice_BaseGamemanager_C_ScreenFaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice_BaseGamemanager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.ReceiveTick");

	AOffice_BaseGamemanager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.StartupStaticCounter
// (BlueprintCallable, BlueprintEvent)

void AOffice_BaseGamemanager_C::StartupStaticCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.StartupStaticCounter");

	AOffice_BaseGamemanager_C_StartupStaticCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.GameLost_Error_Fix
// (BlueprintCallable, BlueprintEvent)

void AOffice_BaseGamemanager_C::GameLost_Error_Fix()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.GameLost_Error_Fix");

	AOffice_BaseGamemanager_C_GameLost_Error_Fix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.ExecuteUbergraph_Office_BaseGamemanager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice_BaseGamemanager_C::ExecuteUbergraph_Office_BaseGamemanager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.ExecuteUbergraph_Office_BaseGamemanager");

	AOffice_BaseGamemanager_C_ExecuteUbergraph_Office_BaseGamemanager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.DestroyProblemAI__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AOffice_BaseGamemanager_C::DestroyProblemAI__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.DestroyProblemAI__DelegateSignature");

	AOffice_BaseGamemanager_C_DestroyProblemAI__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.FlickerLights__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AOffice_BaseGamemanager_C::FlickerLights__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.FlickerLights__DelegateSignature");

	AOffice_BaseGamemanager_C_FlickerLights__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_BaseGamemanager.Office_BaseGamemanager_C.DisableAi__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player_Won_Game                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice_BaseGamemanager_C::DisableAi__DelegateSignature(bool Player_Won_Game)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_BaseGamemanager.Office_BaseGamemanager_C.DisableAi__DelegateSignature");

	AOffice_BaseGamemanager_C_DisableAi__DelegateSignature_Params params;
	params.Player_Won_Game = Player_Won_Game;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
