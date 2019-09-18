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

// BlueprintGeneratedClass BTTask_MoveTo.BTTask_MoveTo_C
// 0x0030 (0x00D0 - 0x00A0)
class UBTTask_MoveTo_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Location;                                                 // 0x00A8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_MoveTo.BTTask_MoveTo_C");
		return ptr;
	}


	void OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367();
	void ReceiveExecute(class AActor** OwnerActor);
	void ReceiveAbort(class AActor** OwnerActor);
	void ExecuteUbergraph_BTTask_MoveTo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
