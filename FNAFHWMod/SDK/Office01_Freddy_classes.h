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

// BlueprintGeneratedClass Office01_Freddy.Office01_Freddy_C
// 0x008D (0x0501 - 0x0474)
class AOffice01_Freddy_C : public AOffice01_AiBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_Footstep;                                           // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_FreddySong;                                         // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_1AF093EB461F580F772D589562CE3047;   // 0x0490(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EyeFlickerTimeline_EyeFlicker_7605DE0446B336B262F44991ECCF12AF;// 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EyeFlickerTimeline__Direction_7605DE0446B336B262F44991ECCF12AF;// 0x04A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EyeFlickerTimeline;                                       // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Flashing_Eyes__Direction_0FC22C974C6329C1E285BCB4144C3413;// 0x04B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04B1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Flashing_Eyes;                                            // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               PowerOutageEnabled;                                       // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	float                                              WaitTimerForSong;                                         // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LoopBeforeCompletion;                                     // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	class AOffice01_LightManager_Bp_C*                 LightManager;                                             // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  FreddyPowerOutatageDataTable;                             // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BeforeSongMin;                                            // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeforeSongMax;                                            // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DuringSongMin;                                            // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DuringSongMax;                                            // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AfterSongMin;                                             // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AfterSongMax;                                             // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _6AM;                                                     // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	float                                              DoorWaitTime;                                             // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FreddyDoorOpen;                                           // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office01_Freddy.Office01_Freddy_C");
		return ptr;
	}


	void CheckIfGameWonDuringPowerOut();
	void CanEnterRoom(class ARoomInfo_Bp_C** RoomBP, struct FOfficeRoomTransition_Struct* TransitionInfo, bool* CanEnterRoom);
	void UserConstructionScript();
	void Flashing_Eyes__FinishedFunc();
	void Flashing_Eyes__UpdateFunc();
	void EyeFlickerTimeline__FinishedFunc();
	void EyeFlickerTimeline__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_1__StopTrackHere__EventFunc();
	void Timeline_1__LightOn__EventFunc();
	void Timeline_1__LightOff__EventFunc();
	void ReceiveBeginPlay();
	void EventDisableAi(bool* Player_Won_Game);
	void FreddySongSequence();
	void FlickerEyes();
	void StopFlickerEyes();
	void MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location);
	void ReceiveTick(float* DeltaSeconds);
	void DestroyFreddy();
	void ReachedKillZone();
	void ExecuteUbergraph_Office01_Freddy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
