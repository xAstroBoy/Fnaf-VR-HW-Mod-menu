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
	 * BlueprintGeneratedClass NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C
	 * Size -> 0x001F (FullSize[0x0290] - InheritedSize[0x0271])
	 */
	class ANightTerrorNVRClosetLoc_C : public ANonVRLookLocation_C
	{
	public:
		unsigned char                                              UnknownData_KBOO[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABedroomClosetDoors_C*                               ClosetDoors;                                             // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATeleportSpot_BP_C*                                  AssociatedTPSpot;                                        // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetHoverCursorState(CursorState_ECursorState* CursorState);
		void ReceiveTick(float DeltaSeconds);
		void ZoomInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class USceneComponent* Hit_Component);
		void ReceiveBeginPlay();
		void ZoomEndInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class UActorComponent* HitComponent);
		void OnVRHoverBegin(class ASWGVRCharacter* Sender, SWGVR_EVRHandType Hand);
		void OnVRHoverEnd(class ASWGVRCharacter* Sender, SWGVR_EVRHandType Hand);
		void ExecuteUbergraph_NightTerrorNVRClosetLoc(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
