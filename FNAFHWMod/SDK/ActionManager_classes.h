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

// BlueprintGeneratedClass ActionManager.ActionManager_C
// 0x0056 (0x037E - 0x0328)
class AActionManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<int>                                        CurrentlyAvailableActions;                                // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnActionCompleted;                                        // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AJumpScare_C*                                Jumpscare_Ref;                                            // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnKill;                                                   // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                Current_Action_ID;                                        // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstActionAlreadyCompleted;                              // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Player_is_dead;                                           // 0x037D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionManager.ActionManager_C");
		return ptr;
	}


	void SetCurrentlyAvailableActions(TArray<int>* CurrentlyAvailableActions);
	void CompleteAction(class UActions_C* ActionComponent, bool Player_dead);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ActionManager(int EntryPoint);
	void OnKill__DelegateSignature();
	void OnActionCompleted__DelegateSignature(int ActionID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
