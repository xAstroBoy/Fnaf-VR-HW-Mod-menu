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

// BlueprintGeneratedClass LobbyPlayerController.LobbyPlayerController_C
// 0x001C (0x0694 - 0x0678)
class ALobbyPlayerController_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               HasJoined;                                                // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0681(0x0003) MISSED OFFSET
	int                                                CurrentCharacterID;                                       // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastDetectedValue;                                        // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Ready;                                                    // 0x068C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanBecomeReady;                                           // 0x068D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x068E(0x0002) MISSED OFFSET
	int                                                PlayerNumber;                                             // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LobbyPlayerController.LobbyPlayerController_C");
		return ptr;
	}


	void GetPlayerNumber(int* PlayerNumber);
	void IsPlayerReady(bool* IsConfirmed);
	void GetCharacterID(int* Character_ID);
	void UserConstructionScript();
	void InpActEvt_JoinGame_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_JoinGame_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1(float AxisValue);
	void ActivatePlayer(int PlayerNumber);
	void UpdateCharacter(int Character_ID);
	void OnPlayerAccepted();
	void OnPlayerRejected();
	void ExecuteUbergraph_LobbyPlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
