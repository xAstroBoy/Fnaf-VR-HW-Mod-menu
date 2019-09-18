
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

// Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.JoinPlayer
// (BlueprintCallable, BlueprintEvent)

void UMPLobbyUIPlayerSlot_C::JoinPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.JoinPlayer");

	UMPLobbyUIPlayerSlot_C_JoinPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.UpdateCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UMPLobbyUIPlayerSlot_C::UpdateCharacter(const struct FText& CharacterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.UpdateCharacter");

	UMPLobbyUIPlayerSlot_C_UpdateCharacter_Params params;
	params.CharacterName = CharacterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMPLobbyUIPlayerSlot_C::Init(int PlayerNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.Init");

	UMPLobbyUIPlayerSlot_C_Init_Params params;
	params.PlayerNumber = PlayerNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.ExecuteUbergraph_MPLobbyUIPlayerSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMPLobbyUIPlayerSlot_C::ExecuteUbergraph_MPLobbyUIPlayerSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.ExecuteUbergraph_MPLobbyUIPlayerSlot");

	UMPLobbyUIPlayerSlot_C_ExecuteUbergraph_MPLobbyUIPlayerSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
