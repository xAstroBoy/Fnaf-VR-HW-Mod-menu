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
	 * BlueprintGeneratedClass LobbyPlayerController.LobbyPlayerController_C
	 * Size -> 0x001C (FullSize[0x05AC] - InheritedSize[0x0590])
	 */
	class ALobbyPlayerController_C : public APlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0590(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       HasJoined;                                               // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QM8F[0x3];                                   // 0x0599(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CurrentCharacterID;                                      // 0x059C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastDetectedValue;                                       // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Ready;                                                   // 0x05A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanBecomeReady;                                          // 0x05A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EEIG[0x2];                                   // 0x05A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        PlayerNumber;                                            // 0x05A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPlayerNumber(int* PlayerNumber);
		void IsPlayerReady(bool* IsConfirmed);
		void GetCharacterID(int* Character_ID);
		void InpActEvt_JoinGame_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_JoinGame_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1(float AxisValue);
		void ActivatePlayer(int PlayerNumber);
		void UpdateCharacter(int Character_ID);
		void OnPlayerAccepted();
		void OnPlayerRejected();
		void ExecuteUbergraph_LobbyPlayerController(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
