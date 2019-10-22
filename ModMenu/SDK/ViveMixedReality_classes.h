#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class ViveMixedReality.MixedRealityComponent
// 0x00A8 (0x03D0 - 0x0328)
class AMixedRealityComponent : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0328(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ViveMixedReality.MixedRealityComponent");
		return ptr;
	}

};


// Class ViveMixedReality.ViveMixedRealityBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UViveMixedRealityBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ViveMixedReality.ViveMixedRealityBPLibrary");
		return ptr;
	}


	void STATIC_EnableMixedReality(class AMixedRealityComponent* pMixedRealityComponent, int pCameraTrackerID);
	void STATIC_DisableMixedReality(class AMixedRealityComponent* pMixedRealityComponent);
	void STATIC_AddMixedRealityComponent(class AActor* pVRPawnTarget, const struct FLinearColor& pChromaColor, class APlayerCameraManager* pCharacterCamera, class AMixedRealityComponent** pMixedRealityComponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
