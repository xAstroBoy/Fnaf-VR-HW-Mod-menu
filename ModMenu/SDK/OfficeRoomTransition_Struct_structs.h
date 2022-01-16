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
	 * UserDefinedStruct OfficeRoomTransition_Struct.OfficeRoomTransition_Struct
	 * Size -> 0x0021
	 */
	struct FOfficeRoomTransition_Struct
	{
	public:
		class FName                                                StartRoom_13_9FA83FC4407FA46479D68BBE4B891FFF;           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DestinationRoom_8_2EF25CF344613CD36DD6C09B4B4126FE;      // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int>                                                WeightedChance_16_6B72F5F941DBEC676BEBBEA9427DA246;      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       AllowBackTracking_15_7EC4DC6747E5D04DC82E27AA4DAA2A70;   // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
