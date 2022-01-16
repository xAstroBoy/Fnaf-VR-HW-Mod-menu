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
	 * BlueprintGeneratedClass DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C
	 * Size -> 0x0020 (FullSize[0x02E0] - InheritedSize[0x02C0])
	 */
	class ADLC_Office01_FlashBeaconButton_Bp_C : public AMonitorButton_Interactable_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    NonVR_ButtonWidget;                                      // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_FlickerIntensity_FB74E080481B19833C31259A642C5DDC; // 0x02D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Timeline_0__Direction_FB74E080481B19833C31259A642C5DDC;  // 0x02D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HQSG[0x3];                                   // 0x02D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void NonVR_WidgetVisibility(bool IsHidden_);
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void PowerOutageEvent();
		void PowerRebootEvent();
		void OnCooldown();
		void OffCooldown();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void ResetBtnPosition();
		void ExecuteUbergraph_DLC_Office01_FlashBeaconButton_Bp(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
