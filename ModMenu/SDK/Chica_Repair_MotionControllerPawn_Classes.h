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
	 * BlueprintGeneratedClass Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C
	 * Size -> 0x0024 (FullSize[0x0FE0] - InheritedSize[0x0FBC])
	 */
	class AChica_Repair_MotionControllerPawn_C : public ASaul_MotionControllerPawn_C
	{
	public:
		unsigned char                                              UnknownData_UCQQ[0x4];                                   // 0x0FBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0FC0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 SpotLight2;                                              // 0x0FC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PlayerVisionCone;                                        // 0x0FD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFNAFVisionDetector_C*                               FNAFVisionDetector;                                      // 0x0FD8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void IsValidActorForVisionTest(class AActor* Actor, bool* IsValid);
		void ReceiveBeginPlay();
		void BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_0_OnVisionEnter__DelegateSignature(class AActor* Actor);
		void BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_1_OnVisionExit__DelegateSignature(class AActor* Actor);
		void ExecuteUbergraph_Chica_Repair_MotionControllerPawn(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
