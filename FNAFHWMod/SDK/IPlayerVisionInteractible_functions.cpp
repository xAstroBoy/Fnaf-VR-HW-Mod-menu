
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

// Function IPlayerVisionInteractible.IPlayerVisionInteractible_C.OnPlayerVisionExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFNAFPlayerPawn_C*       PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIPlayerVisionInteractible_C::OnPlayerVisionExit(class AFNAFPlayerPawn_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function IPlayerVisionInteractible.IPlayerVisionInteractible_C.OnPlayerVisionExit");

	UIPlayerVisionInteractible_C_OnPlayerVisionExit_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IPlayerVisionInteractible.IPlayerVisionInteractible_C.OnPlayerVisionEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFNAFPlayerPawn_C*       PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIPlayerVisionInteractible_C::OnPlayerVisionEnter(class AFNAFPlayerPawn_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function IPlayerVisionInteractible.IPlayerVisionInteractible_C.OnPlayerVisionEnter");

	UIPlayerVisionInteractible_C_OnPlayerVisionEnter_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
