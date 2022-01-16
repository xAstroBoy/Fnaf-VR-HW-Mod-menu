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
	 * BlueprintGeneratedClass BP_FNAFGameState.BP_FNAFGameState_C
	 * Size -> 0x0058 (FullSize[0x0300] - InheritedSize[0x02A8])
	 */
	class ABP_FNAFGameState_C : public AFNAFGamestate
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             GameStateChanged;                                        // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ABP_FNAFGameMode_C*                                  GameMode;                                                // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             WinConditionChanged;                                     // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             GamePreVictoryMode;                                      // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             GamePreLossMode;                                         // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		freddys_EGLGameState GetGameState();
		void ReceiveBeginPlay();
		void OnVictoryCondition();
		void SetGameState(freddys_EGLGameState State);
		void SetVictoryCondition(freddys_EGLVictoryState victory);
		void ExecuteUbergraph_BP_FNAFGameState(int EntryPoint);
		void GamePreLossMode__DelegateSignature();
		void GamePreVictoryMode__DelegateSignature();
		void WinConditionChanged__DelegateSignature(freddys_EGLVictoryState NewParam);
		void GameStateChanged__DelegateSignature(freddys_EGLGameState GameState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
