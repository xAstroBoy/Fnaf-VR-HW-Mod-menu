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
	 * BlueprintGeneratedClass Office04_GameManager.Office04_GameManager_C
	 * Size -> 0x0079 (FullSize[0x03E1] - InheritedSize[0x0368])
	 */
	class AOffice04_GameManager_C : public AOffice_BaseGamemanager_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class AOffice04_LightCollider_C*>                   Office04_LightBoxes;                                     // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		bool                                                       CreatureFlashed;                                         // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NSO2[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<Office4_Locations_EOffice4_Locations>               CurrentRoomTypeForCreature;                              // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class ATeleport_Manager_BP_C*                              Teleportmanager;                                         // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FlashedDelay;                                            // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P7QF[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFlashlightHit;                                         // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ARoomInfo_Bp_C*                                      CurrentRoom;                                             // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABedroom_Door_BP_C*>                          BedRoomDoors;                                            // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		class ABedroomClosetDoors_C*                               Office04_Closet;                                         // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimationSpeedRate;                                      // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaitBeforeChangingAnimation;                             // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableGameClock;                                        // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool CheckLightBoxCollision(class AOffice04_LightCollider_C* LightCollider);
		void EnableLightBoxCollision(bool Enable_Collision, class AOffice04_LightCollider_C* Light_Collider);
		void GetRoomTransitions(const class FName& Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions);
		void PlayerAtDoor();
		void StartGame();
		void ReceiveTick(float DeltaSeconds);
		void FlashlightHit();
		void EventStartClock();
		void ExecuteUbergraph_Office04_GameManager(int EntryPoint);
		void OnFlashlightHit__DelegateSignature(class ARoomInfo_Bp_C* Room);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
