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
	 * BlueprintGeneratedClass ArcadeLevelsUnlocked.ArcadeLevelsUnlocked_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UArcadeLevelsUnlocked_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetInitialUnlockedLevels(class UObject* __WorldContext, TArray<class FName>* UnlockedLevelIDs);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
