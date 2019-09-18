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

// Function NT_CB_AudioManager.NT_CB_AudioManager_C.UserConstructionScript
struct ANT_CB_AudioManager_C_UserConstructionScript_Params
{
};

// Function NT_CB_AudioManager.NT_CB_AudioManager_C.TriggerSoloSound
struct ANT_CB_AudioManager_C_TriggerSoloSound_Params
{
	class USoundBase*                                  SoundFile;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NT_CB_AudioManager.NT_CB_AudioManager_C.ReceiveBeginPlay
struct ANT_CB_AudioManager_C_ReceiveBeginPlay_Params
{
};

// Function NT_CB_AudioManager.NT_CB_AudioManager_C.TriggerSound2D
struct ANT_CB_AudioManager_C_TriggerSound2D_Params
{
	class USoundBase*                                  NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NT_CB_AudioManager.NT_CB_AudioManager_C.StopSound
struct ANT_CB_AudioManager_C_StopSound_Params
{
};

// Function NT_CB_AudioManager.NT_CB_AudioManager_C.ReceiveTick
struct ANT_CB_AudioManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NT_CB_AudioManager.NT_CB_AudioManager_C.ExecuteUbergraph_NT_CB_AudioManager
struct ANT_CB_AudioManager_C_ExecuteUbergraph_NT_CB_AudioManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
