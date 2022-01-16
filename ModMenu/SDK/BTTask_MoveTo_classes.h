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
	 * BlueprintGeneratedClass BTTask_MoveTo.BTTask_MoveTo_C
	 * Size -> 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
	 */
	class UBTTask_MoveTo_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              Location;                                                // 0x00A8(0x0028) Edit, BlueprintVisible

	public:
		void OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367(AIModule_EPathFollowingResult Result, class AAIController* AIController);
		void OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367();
		void ReceiveExecute(class AActor* OwnerActor);
		void ReceiveAbort(class AActor* OwnerActor);
		void ExecuteUbergraph_BTTask_MoveTo(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
