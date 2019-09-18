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

// BlueprintGeneratedClass KillOnFloorHit.KillOnFloorHit_C
// 0x0008 (0x00F8 - 0x00F0)
class UKillOnFloorHit_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KillOnFloorHit.KillOnFloorHit_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnActorOverlapped(class AActor* OverlappedActor, class AActor* OtherActor);
	void ExecuteUbergraph_KillOnFloorHit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
