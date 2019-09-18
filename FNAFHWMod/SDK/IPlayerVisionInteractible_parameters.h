#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function IPlayerVisionInteractible.IPlayerVisionInteractible_C.OnPlayerVisionExit
struct UIPlayerVisionInteractible_C_OnPlayerVisionExit_Params
{
	class AFNAFPlayerPawn_C*                           PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IPlayerVisionInteractible.IPlayerVisionInteractible_C.OnPlayerVisionEnter
struct UIPlayerVisionInteractible_C_OnPlayerVisionEnter_Params
{
	class AFNAFPlayerPawn_C*                           PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
