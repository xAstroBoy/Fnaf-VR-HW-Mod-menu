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

// Function ViveMixedReality.ViveMixedRealityBPLibrary.EnableMixedReality
struct UViveMixedRealityBPLibrary_EnableMixedReality_Params
{
	class AMixedRealityComponent*                      pMixedRealityComponent;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pCameraTrackerID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ViveMixedReality.ViveMixedRealityBPLibrary.DisableMixedReality
struct UViveMixedRealityBPLibrary_DisableMixedReality_Params
{
	class AMixedRealityComponent*                      pMixedRealityComponent;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ViveMixedReality.ViveMixedRealityBPLibrary.AddMixedRealityComponent
struct UViveMixedRealityBPLibrary_AddMixedRealityComponent_Params
{
	class AMixedRealityComponent*                      pMixedRealityComponent;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      pVRPawnTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                pChromaColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerCameraManager*                        pCharacterCamera;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
