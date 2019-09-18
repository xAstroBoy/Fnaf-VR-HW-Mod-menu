
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

// Function MPLobbyUI.MPLobbyUI_C.Get_MatchStartingText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMPLobbyUI_C::Get_MatchStartingText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.Get_MatchStartingText_Text_1");

	UMPLobbyUI_C_Get_MatchStartingText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MPLobbyUI.MPLobbyUI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMPLobbyUI_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.PreConstruct");

	UMPLobbyUI_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUI.MPLobbyUI_C.JoinPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMPLobbyUI_C::JoinPlayer(int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.JoinPlayer");

	UMPLobbyUI_C_JoinPlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUI.MPLobbyUI_C.UpdatePlayerCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UMPLobbyUI_C::UpdatePlayerCharacter(int PlayerId, const struct FText& CharacterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.UpdatePlayerCharacter");

	UMPLobbyUI_C_UpdatePlayerCharacter_Params params;
	params.PlayerId = PlayerId;
	params.CharacterName = CharacterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUI.MPLobbyUI_C.StartingMatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            TimerHandle                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UMPLobbyUI_C::StartingMatch(const struct FTimerHandle& TimerHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.StartingMatch");

	UMPLobbyUI_C_StartingMatch_Params params;
	params.TimerHandle = TimerHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUI.MPLobbyUI_C.StopMatch
// (BlueprintCallable, BlueprintEvent)

void UMPLobbyUI_C::StopMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.StopMatch");

	UMPLobbyUI_C_StopMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUI.MPLobbyUI_C.ExecuteUbergraph_MPLobbyUI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMPLobbyUI_C::ExecuteUbergraph_MPLobbyUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUI.MPLobbyUI_C.ExecuteUbergraph_MPLobbyUI");

	UMPLobbyUI_C_ExecuteUbergraph_MPLobbyUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
