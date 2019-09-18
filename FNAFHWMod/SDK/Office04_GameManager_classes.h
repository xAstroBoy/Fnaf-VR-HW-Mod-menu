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

// BlueprintGeneratedClass Office04_GameManager.Office04_GameManager_C
// 0x0079 (0x04C9 - 0x0450)
class AOffice04_GameManager_C : public AOffice_BaseGamemanager_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AOffice04_LightCollider_C*>           Office04_LightBoxes;                                      // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               CreatureFlashed;                                          // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EOffice4_Locations>>            CurrentRoomTypeForCreature;                               // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ATeleport_Manager_BP_C*                      Teleportmanager;                                          // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               FlashedDelay;                                             // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFlashlightHit;                                          // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ARoomInfo_Bp_C*                              CurrentRoom;                                              // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABedroom_Door_BP_C*>                  BedRoomDoors;                                             // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class ABedroomClosetDoors_C*                       Office04_Closet;                                          // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              AnimationSpeedRate;                                       // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaitBeforeChangingAnimation;                              // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableGameClock;                                         // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office04_GameManager.Office04_GameManager_C");
		return ptr;
	}


	bool CheckLightBoxCollision(class AOffice04_LightCollider_C* LightCollider);
	void EnableLightBoxCollision(bool Enable_Collision, class AOffice04_LightCollider_C* Light_Collider);
	void GetRoomTransitions(struct FName* Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions);
	void PlayerAtDoor();
	void StartGame();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void FlashlightHit();
	void EventStartClock();
	void ExecuteUbergraph_Office04_GameManager(int EntryPoint);
	void OnFlashlightHit__DelegateSignature(class ARoomInfo_Bp_C* Room);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
