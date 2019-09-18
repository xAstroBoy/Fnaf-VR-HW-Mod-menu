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

// BlueprintGeneratedClass BedroomClosetDoors.BedroomClosetDoors_C
// 0x006A (0x0392 - 0x0328)
class ABedroomClosetDoors_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_DoorOpenSound;                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RightDoor;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        LeftDoor;                                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_FloatValue_482E898041E71676234F99AA24922659;   // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_482E898041E71676234F99AA24922659;   // 0x0354(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OpenCloset_FloatValue_4E8FA9B0423310BC8330E9A388DEF4D8;   // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OpenCloset__Direction_4E8FA9B0423310BC8330E9A388DEF4D8;   // 0x0364(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OpenCloset;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OpenDoorAngle;                                            // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DoorsClosed;                                              // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Disable_Logic;                                            // 0x0375(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0376(0x0002) MISSED OFFSET
	class ANMHands_BP_C*                               TentacleRef;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              StartTime;                                                // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DoorCurve;                                                // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoorClosing;                                              // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUsingTentacles;                                         // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BedroomClosetDoors.BedroomClosetDoors_C");
		return ptr;
	}


	void ConnectDoor(class UChildActorComponent* Door, const struct FScriptDelegate& Event_OnDoorAngleChanged);
	void UserConstructionScript();
	void OpenCloset__FinishedFunc();
	void OpenCloset__UpdateFunc();
	void OpenCloset__TriggerDoorSound__EventFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__TriggerDoorSound__EventFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnLeftDoorAngleChanged(float DoorAngle, class ABedroomClosetDoor_C* Door);
	void OnRightDoorAngleChanged(float DoorAngle, class ABedroomClosetDoor_C* Door);
	void InitClosetDoor();
	void CloseClosetDoors();
	void OpenClosetDoors();
	void OpenDoorWide();
	void KeepClosetDoorsShut();
	void ExecuteUbergraph_BedroomClosetDoors(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
