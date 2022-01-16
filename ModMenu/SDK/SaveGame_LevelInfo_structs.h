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
	 * UserDefinedStruct SaveGame_LevelInfo.SaveGame_LevelInfo
	 * Size -> 0x0058
	 */
	struct FSaveGame_LevelInfo
	{
	public:
		bool                                                       Completed_7_C5B1BBD045D47AFB45A9A4AD494ABC84;            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DD03[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CoinsCollected_6_A2ED561E43ECB0D0AB1F1BB15640FA26[0x50]; // 0x0001(0x0050) UNKNOWN PROPERTY: SetProperty SaveGame_LevelInfo.SaveGame_LevelInfo.CoinsCollected_6_A2ED561E43ECB0D0AB1F1BB15640FA26

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
