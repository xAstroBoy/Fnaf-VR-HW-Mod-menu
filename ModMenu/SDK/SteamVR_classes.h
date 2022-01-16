#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class SteamVR.SteamVRChaperoneComponent
	 * Size -> 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
	 */
	class USteamVRChaperoneComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnLeaveBounds;                                           // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReturnToBounds;                                        // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58MF[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SteamVRChaperoneEvent__DelegateSignature();
		TArray<struct FVector> GetBounds();
		static UClass* StaticClass();
	};

	/**
	 * Class SteamVR.SteamVRFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamVRFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetValidTrackedDeviceIds(SteamVR_ESteamVRTrackedDeviceType DeviceType, TArray<int>* OutTrackedDeviceIds);
		bool STATIC_GetTrackedDevicePositionAndOrientation(int DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation);
		bool STATIC_GetHandPositionAndOrientation(int ControllerIndex, InputCore_EControllerHand Hand, struct FVector* OutPosition, struct FRotator* OutOrientation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
