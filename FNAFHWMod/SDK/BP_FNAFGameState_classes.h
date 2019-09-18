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

// BlueprintGeneratedClass BP_FNAFGameState.BP_FNAFGameState_C
// 0x0058 (0x03E8 - 0x0390)
class ABP_FNAFGameState_C : public AFNAFGamestate
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    GameStateChanged;                                         // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_FNAFGameMode_C*                          GameMode;                                                 // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    WinConditionChanged;                                      // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GamePreVictoryMode;                                       // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GamePreLossMode;                                          // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FNAFGameState.BP_FNAFGameState_C");
		return ptr;
	}


	EGLGameState GetGameState();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnVictoryCondition();
	void SetGameState(EGLGameState* State);
	void SetVictoryCondition(EGLVictoryState* victory);
	void ExecuteUbergraph_BP_FNAFGameState(int EntryPoint);
	void GamePreLossMode__DelegateSignature();
	void GamePreVictoryMode__DelegateSignature();
	void WinConditionChanged__DelegateSignature(EGLVictoryState NewParam);
	void GameStateChanged__DelegateSignature(EGLGameState GameState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
