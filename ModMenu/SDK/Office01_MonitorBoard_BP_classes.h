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
	 * BlueprintGeneratedClass Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C
	 * Size -> 0x0AD5 (FullSize[0x0DE8] - InheritedSize[0x0313])
	 */
	class AOffice01_MonitorBoard_BP_C : public AMonitorBoard_BP_C
	{
	public:
		unsigned char                                              UnknownData_VI9T[0x5];                                   // 0x0313(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     ZoomLoc;                                                 // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MonitorScreen_Mesh;                                      // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_CameraDisplay;                                     // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_FlickerIntensity_03854C034B00FA7C099D45B6613CFD69; // 0x0340(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Timeline_0__Direction_03854C034B00FA7C099D45B6613CFD69;  // 0x0344(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I57T[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableInteractions;                                     // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_03OS[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AMonitorButton_BP_C*>                         MonitorButtons;                                          // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		bool                                                       Disable_Logic_1;                                         // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DD14[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                PostProcessSettings;                                     // 0x0370(0x0530) Edit, BlueprintVisible, DisableEditOnInstance
		class UPostProcessComponent*                               NightmarePostProcess;                                    // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9CCC[0x8];                                   // 0x08A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                PostProcessSettings_Static;                              // 0x08B0(0x0530) Edit, BlueprintVisible, DisableEditOnInstance
		class AOffice01_GameManager_C*                             Office01_Game_Manger;                                    // 0x0DE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor);
		void Event_Btn_Pressed(int ID, bool Pressed, class UMaterial* CameraMaterial, TArray<class ARoomInfo_Bp_C*> Room, class UStaticMesh* VentLight, class AFNAFCamera_Blueprint_C* FNAFCamera);
		void ReceiveBeginPlay();
		void DisableMonitorInteractions(bool Player_Won_Game);
		void ReceiveTick(float DeltaSeconds);
		void ZoomInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class USceneComponent* Hit_Component);
		void ExecuteUbergraph_Office01_MonitorBoard_BP(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
