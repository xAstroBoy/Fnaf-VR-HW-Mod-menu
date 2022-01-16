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
	 * BlueprintGeneratedClass MPVRPlayer.MPVRPlayer_C
	 * Size -> 0x0018 (FullSize[0x0A08] - InheritedSize[0x09F0])
	 */
	class AMPVRPlayer_C : public AFNAFPlayerPawn_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCapsuleComponent*                                   ScareTrigger;                                            // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AFlashlightBase_C*                                   Flashlight;                                              // 0x0A00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Get_Flash_Light(class AFlashlightBase_C** Flashlight);
		void ReceiveBeginPlay();
		void OnFlashlightChanged(bool FlashLightOn);
		void ExecuteUbergraph_MPVRPlayer(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
