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

// Function MPVRPlayer.MPVRPlayer_C.Get Flash Light
struct AMPVRPlayer_C_Get_Flash_Light_Params
{
	class AFlashlightBase_C*                           Flashlight;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MPVRPlayer.MPVRPlayer_C.UserConstructionScript
struct AMPVRPlayer_C_UserConstructionScript_Params
{
};

// Function MPVRPlayer.MPVRPlayer_C.ReceiveBeginPlay
struct AMPVRPlayer_C_ReceiveBeginPlay_Params
{
};

// Function MPVRPlayer.MPVRPlayer_C.OnFlashlightChanged
struct AMPVRPlayer_C_OnFlashlightChanged_Params
{
	bool                                               FlashLightOn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPVRPlayer.MPVRPlayer_C.ExecuteUbergraph_MPVRPlayer
struct AMPVRPlayer_C_ExecuteUbergraph_MPVRPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
