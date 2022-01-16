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
	 * Function Office02_ToyFreddie.Office02_ToyFreddie_C.CanEnterRoom
	 */
	struct AOffice02_ToyFreddie_C_CanEnterRoom_Params
	{
	public:
		struct FOfficeRoomTransition_Struct                        TransitionInfo;                                          // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class ARoomInfo_Bp_C*                                      RoomBP;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanEnterRoom;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office02_ToyFreddie.Office02_ToyFreddie_C.FreddyBlackEye
	 */
	struct AOffice02_ToyFreddie_C_FreddyBlackEye_Params
	{
	};

	/**
	 * Function Office02_ToyFreddie.Office02_ToyFreddie_C.FreddyNormalEye
	 */
	struct AOffice02_ToyFreddie_C_FreddyNormalEye_Params
	{
	};

	/**
	 * Function Office02_ToyFreddie.Office02_ToyFreddie_C.ExecuteUbergraph_Office02_ToyFreddie
	 */
	struct AOffice02_ToyFreddie_C_ExecuteUbergraph_Office02_ToyFreddie_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
