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

// Function IFlashLightInteractible.IFlashLightInteractible_C.OnFlashLightEndHover
struct UIFlashLightInteractible_C_OnFlashLightEndHover_Params
{
	class AFlashlightBase_C*                           Flashlight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IFlashLightInteractible.IFlashLightInteractible_C.OnFlashLightBeginHover
struct UIFlashLightInteractible_C_OnFlashLightBeginHover_Params
{
	class AFlashlightBase_C*                           Flashlight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
