#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FNAFVisionDetector.FNAFVisionDetector_C
// 0x0061 (0x0151 - 0x00F0)
class UFNAFVisionDetector_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FVisibilityTracker>                  ActorsInVisionCone;                                       // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnVisionExit;                                             // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UPrimitiveComponent*                         visioncone;                                               // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AController*                                 ControllerForLOS;                                         // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVisionEnter;                                            // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TScriptInterface<class UIFNAFVisionFilter_C>       VisionFilter;                                             // 0x0138(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             VisionComponent;                                          // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               UseLineTrace;                                             // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FNAFVisionDetector.FNAFVisionDetector_C");
		return ptr;
	}


	void CheckLOS(class AActor* ActorToCheck, bool* IsInLOS);
	void ReceiveTick(float* DeltaSeconds);
	void SetVisionCone(class UPrimitiveComponent* visioncone);
	void ConeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ConeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void SetVisionFilter(const TScriptInterface<class UIFNAFVisionFilter_C>& VisionFilterObject);
	void SetVisionComponent(class USceneComponent* SceneComponent);
	void ExecuteUbergraph_FNAFVisionDetector(int EntryPoint);
	void OnVisionEnter__DelegateSignature(class AActor* Actor);
	void OnVisionExit__DelegateSignature(class AActor* Actor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
