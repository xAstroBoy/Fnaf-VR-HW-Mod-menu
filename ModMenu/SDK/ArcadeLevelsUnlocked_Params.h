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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ArcadeLevelsUnlocked.ArcadeLevelsUnlocked_C.GetInitialUnlockedLevels
	 */
	struct UArcadeLevelsUnlocked_C_GetInitialUnlockedLevels_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        UnlockedLevelIDs;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
