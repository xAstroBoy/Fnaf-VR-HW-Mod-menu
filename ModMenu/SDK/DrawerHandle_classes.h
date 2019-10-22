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

// BlueprintGeneratedClass DrawerHandle.DrawerHandle_C
// 0x0068 (0x0390 - 0x0328)
class ADrawerHandle_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Prize_Mesh;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               InMotion;                                                 // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	class ADrawer_C*                                   RefToDrawer;                                              // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ASWGVRCharacter*                             Grabber;                                                  // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EVRHandType                                        HandThatGrabbedMe;                                        // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOpen;                                                   // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0352(0x0002) MISSED OFFSET
	struct FVector                                     InitialPosition;                                          // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OpenPosition;                                             // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    HoverChanged;                                             // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Grabbed;                                                  // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DrawerHandle.DrawerHandle_C");
		return ptr;
	}


	void AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation);
	bool AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand);
	void UserConstructionScript();
	void OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand);
	void OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand);
	void OnVRInteract(class ASWGVRCharacter* VRCharacter, EVRHandType Hand);
	void OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity);
	void OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand);
	void OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand);
	void ExecuteUbergraph_DrawerHandle(int EntryPoint);
	void Grabbed__DelegateSignature();
	void HoverChanged__DelegateSignature(bool Enter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
