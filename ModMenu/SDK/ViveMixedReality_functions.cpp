
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

// Function ViveMixedReality.ViveMixedRealityBPLibrary.EnableMixedReality
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AMixedRealityComponent*  pMixedRealityComponent         (Parm, ZeroConstructor, IsPlainOldData)
// int                            pCameraTrackerID               (Parm, ZeroConstructor, IsPlainOldData)

void UViveMixedRealityBPLibrary::STATIC_EnableMixedReality(class AMixedRealityComponent* pMixedRealityComponent, int pCameraTrackerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ViveMixedReality.ViveMixedRealityBPLibrary.EnableMixedReality");

	UViveMixedRealityBPLibrary_EnableMixedReality_Params params;
	params.pMixedRealityComponent = pMixedRealityComponent;
	params.pCameraTrackerID = pCameraTrackerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViveMixedReality.ViveMixedRealityBPLibrary.DisableMixedReality
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AMixedRealityComponent*  pMixedRealityComponent         (Parm, ZeroConstructor, IsPlainOldData)

void UViveMixedRealityBPLibrary::STATIC_DisableMixedReality(class AMixedRealityComponent* pMixedRealityComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ViveMixedReality.ViveMixedRealityBPLibrary.DisableMixedReality");

	UViveMixedRealityBPLibrary_DisableMixedReality_Params params;
	params.pMixedRealityComponent = pMixedRealityComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViveMixedReality.ViveMixedRealityBPLibrary.AddMixedRealityComponent
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AMixedRealityComponent*  pMixedRealityComponent         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  pVRPawnTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            pChromaColor                   (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerCameraManager*    pCharacterCamera               (Parm, ZeroConstructor, IsPlainOldData)

void UViveMixedRealityBPLibrary::STATIC_AddMixedRealityComponent(class AActor* pVRPawnTarget, const struct FLinearColor& pChromaColor, class APlayerCameraManager* pCharacterCamera, class AMixedRealityComponent** pMixedRealityComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ViveMixedReality.ViveMixedRealityBPLibrary.AddMixedRealityComponent");

	UViveMixedRealityBPLibrary_AddMixedRealityComponent_Params params;
	params.pVRPawnTarget = pVRPawnTarget;
	params.pChromaColor = pChromaColor;
	params.pCharacterCamera = pCharacterCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pMixedRealityComponent != nullptr)
		*pMixedRealityComponent = params.pMixedRealityComponent;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
