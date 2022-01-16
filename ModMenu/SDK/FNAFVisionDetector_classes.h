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
	 * BlueprintGeneratedClass FNAFVisionDetector.FNAFVisionDetector_C
	 * Size -> 0x0061 (FullSize[0x0139] - InheritedSize[0x00D8])
	 */
	class UFNAFVisionDetector_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FVisibilityTracker>                          ActorsInVisionCone;                                      // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnVisionExit;                                            // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UPrimitiveComponent*                                 visioncone;                                              // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AController*                                         ControllerForLOS;                                        // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnVisionEnter;                                           // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              VisionFilter[0x10];                                      // 0x0120(0x0010) UNKNOWN PROPERTY: InterfaceProperty FNAFVisionDetector.FNAFVisionDetector_C.VisionFilter
		class USceneComponent*                                     VisionComponent;                                         // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseLineTrace;                                            // 0x0138(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void CheckLOS(class AActor* ActorToCheck, bool* IsInLOS);
		void ReceiveTick(float DeltaSeconds);
		void SetVisionCone(class UPrimitiveComponent* visioncone);
		void ConeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ConeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
		void SetVisionFilter();
		void SetVisionComponent(class USceneComponent* SceneComponent);
		void ExecuteUbergraph_FNAFVisionDetector(int EntryPoint);
		void OnVisionEnter__DelegateSignature(class AActor* Actor);
		void OnVisionExit__DelegateSignature(class AActor* Actor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
