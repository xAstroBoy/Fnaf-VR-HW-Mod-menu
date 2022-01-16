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
	 * BlueprintGeneratedClass PlayerPawn_Headlight.PlayerPawn_Headlight_C
	 * Size -> 0x0034 (FullSize[0x0FF0] - InheritedSize[0x0FBC])
	 */
	class APlayerPawn_Headlight_C : public ASaul_MotionControllerPawn_C
	{
	public:
		unsigned char                                              UnknownData_D4WT[0x4];                                   // 0x0FBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0FC0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       SpawnHeadlightInThisLevel;                               // 0x0FC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Enable_Line_Trace;                                       // 0x0FC9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TPE8[0x6];                                   // 0x0FCA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATeleportSpot_Door_BP_Child_C*                       Bedroom_Door;                                            // 0x0FD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             Object_Refrence;                                         // 0x0FD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             LightTriggered;                                          // 0x0FE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void Flicker_Flashlight(bool Flicker_Light);
		void Toggle_Flicker(bool Enable_Collision, bool TurnOffLightAfterFlicker);
		void Toggle_Light(bool Power_On);
		void ReceiveTick(float DeltaSeconds);
		void Heavy_Flicker();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_PlayerPawn_Headlight(int EntryPoint);
		void LightTriggered__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
