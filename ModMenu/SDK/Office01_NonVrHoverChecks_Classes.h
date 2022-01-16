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
	 * BlueprintGeneratedClass Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C
	 * Size -> 0x0030 (FullSize[0x0270] - InheritedSize[0x0240])
	 */
	class AOffice01_NonVrHoverChecks_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       HoverCollide;                                            // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		Office_NonVr_CameratetheredLook_EOffice_NonVr_CameratetheredLook Collider_Map;                                            // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ColliderDisabled;                                        // 0x0259(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z9BM[0x6];                                   // 0x025A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOffice_MotionControllerPawn_C*                      Ref_OfficePawn;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOffice_BaseGamemanager_C*                           Ref_OfficeManager;                                       // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetHoverCursorState(CursorState_ECursorState* CursorState);
		void OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, SWGVR_EVRHandType Hand);
		void OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, SWGVR_EVRHandType Hand);
		void OnVRHoverEnd(class ASWGVRCharacter* Sender, SWGVR_EVRHandType Hand);
		void ReceiveBeginPlay();
		void OnVRHoverBegin(class ASWGVRCharacter* Sender, SWGVR_EVRHandType Hand);
		void CheckCollision();
		void ExecuteUbergraph_Office01_NonVrHoverChecks(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
