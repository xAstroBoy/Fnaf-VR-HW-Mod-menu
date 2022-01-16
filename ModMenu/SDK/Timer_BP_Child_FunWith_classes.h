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
	 * BlueprintGeneratedClass Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C
	 * Size -> 0x0034 (FullSize[0x02A8] - InheritedSize[0x0274])
	 */
	class ATimer_BP_Child_FunWith_C : public ATimer_BP_Base_C
	{
	public:
		unsigned char                                              UnknownData_1F9K[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Fade_NewTrack_0_46B13D8C4F9A5C6233499E99A75CEBCF;        // 0x0280(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Fade__Direction_46B13D8C4F9A5C6233499E99A75CEBCF;        // 0x0284(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZZ53[0x3];                                   // 0x0285(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Fade;                                                    // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        Set_Time;                                                // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5VZT[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFun_With_PlushTrap_BP_C*                            FunWithPlushTrapBP;                                      // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTimerNonVR_C*                                       TimerWidget;                                             // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Fade__FinishedFunc();
		void Fade__UpdateFunc();
		void ReceiveBeginPlay();
		void Timer_hit_0();
		void SetTimeOnWidget(int Timer);
		void Pause_Timer();
		void Player_Killed();
		void ExecuteUbergraph_Timer_BP_Child_FunWith(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
