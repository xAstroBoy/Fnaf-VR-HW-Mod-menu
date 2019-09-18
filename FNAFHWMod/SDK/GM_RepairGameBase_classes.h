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

// BlueprintGeneratedClass GM_RepairGameBase.GM_RepairGameBase_C
// 0x0010 (0x03D8 - 0x03C8)
class AGM_RepairGameBase_C : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GM_RepairGameBase.GM_RepairGameBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void KillPlayer(TEnumAsByte<EJumpScareList> Character);
	void LevelDefeat();
	void LevelVictory();
	void ExecuteUbergraph_GM_RepairGameBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
