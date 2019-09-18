
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

// Function MPLobbyUIActor.MPLobbyUIActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMPLobbyUIActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.UserConstructionScript");

	AMPLobbyUIActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUIActor.MPLobbyUIActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMPLobbyUIActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.ReceiveBeginPlay");

	AMPLobbyUIActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUIActor.MPLobbyUIActor_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMPLobbyGameMode_C*      LobbyGameMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPLobbyUIActor_C::Init(class AMPLobbyGameMode_C* LobbyGameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.Init");

	AMPLobbyUIActor_C_Init_Params params;
	params.LobbyGameMode = LobbyGameMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUIActor.MPLobbyUIActor_C.JoinPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPLobbyUIActor_C::JoinPlayer(int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.JoinPlayer");

	AMPLobbyUIActor_C_JoinPlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUIActor.MPLobbyUIActor_C.UpdatePlayerCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AMPLobbyUIActor_C::UpdatePlayerCharacter(int PlayerId, const struct FText& CharacterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.UpdatePlayerCharacter");

	AMPLobbyUIActor_C_UpdatePlayerCharacter_Params params;
	params.PlayerId = PlayerId;
	params.CharacterName = CharacterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUIActor.MPLobbyUIActor_C.StartingMatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            TimerHandle                    (BlueprintVisible, BlueprintReadOnly, Parm)

void AMPLobbyUIActor_C::StartingMatch(const struct FTimerHandle& TimerHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.StartingMatch");

	AMPLobbyUIActor_C_StartingMatch_Params params;
	params.TimerHandle = TimerHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUIActor.MPLobbyUIActor_C.StopMatch
// (BlueprintCallable, BlueprintEvent)

void AMPLobbyUIActor_C::StopMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.StopMatch");

	AMPLobbyUIActor_C_StopMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUIActor.MPLobbyUIActor_C.ExecuteUbergraph_MPLobbyUIActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPLobbyUIActor_C::ExecuteUbergraph_MPLobbyUIActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUIActor.MPLobbyUIActor_C.ExecuteUbergraph_MPLobbyUIActor");

	AMPLobbyUIActor_C_ExecuteUbergraph_MPLobbyUIActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
