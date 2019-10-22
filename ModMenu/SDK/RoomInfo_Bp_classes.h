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

// BlueprintGeneratedClass RoomInfo_Bp.RoomInfo_Bp_C
// 0x0050 (0x0378 - 0x0328)
class ARoomInfo_Bp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               RoomCollider;                                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ALocPoint_BP_C*>                      ListofLocPonts;                                           // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FName                                       RoomName;                                                 // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AssignedRoomOrder;                                        // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TArray<class AOfficeAiBase_Bp_C*>                  AICurrentlyInRoom;                                        // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AOfficeAiBase_Bp_C*                          AICurrentlyInRoom_1;                                      // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RoomInfo_Bp.RoomInfo_Bp_C");
		return ptr;
	}


	void GetAvailableLocationsForChar(class AOfficeAiBase_Bp_C* CharacterInstance, TArray<class ALocPoint_BP_C*>* ListOfLocations);
	void GetAvailableLocationsForCharType(class UClass* CharacterType, TArray<class ALocPoint_BP_C*>* ListOfLocations);
	void UserConstructionScript();
	void BndEvt__RoomCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__RoomCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_RoomInfo_Bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
