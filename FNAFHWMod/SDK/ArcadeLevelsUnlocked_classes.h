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

// BlueprintGeneratedClass ArcadeLevelsUnlocked.ArcadeLevelsUnlocked_C
// 0x0000 (0x0028 - 0x0028)
class UArcadeLevelsUnlocked_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArcadeLevelsUnlocked.ArcadeLevelsUnlocked_C");
		return ptr;
	}


	void STATIC_GetInitialUnlockedLevels(class UObject* __WorldContext, TArray<struct FName>* UnlockedLevelIDs);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
