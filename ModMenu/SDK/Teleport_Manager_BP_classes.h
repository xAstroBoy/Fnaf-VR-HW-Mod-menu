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

// BlueprintGeneratedClass Teleport_Manager_BP.Teleport_Manager_BP_C
// 0x0059 (0x0381 - 0x0328)
class ATeleport_Manager_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ATeleportSpot_BP_C*>                  TeleportSpots;                                            // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UObject*>                             TeleportSpots_Review;                                     // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                PlayerLocation;                                           // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Spring_Trap_Location;                                     // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Choice_Path__;                                            // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class AJumpScare_C*                                JumpScare;                                                // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    Player_Is_Teleporting;                                    // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Disable_Light_Box_Collision;                              // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Teleport_Manager_BP.Teleport_Manager_BP_C");
		return ptr;
	}


	void CurrentTeleportSpot();
	void EnableAttachedComponents(class ATeleportSpot_BP_C* TeleportSpots);
	void DisableAll();
	void EnableTeleport(int TeleportID, bool enable);
	void UpdateTeleportSpots(class ATeleportSpot_BP_C* TeleportSpotChange);
	void UserConstructionScript();
	void Check_Location();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Teleport_Manager_BP(int EntryPoint);
	void Player_Is_Teleporting__DelegateSignature(int Player_Location);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
