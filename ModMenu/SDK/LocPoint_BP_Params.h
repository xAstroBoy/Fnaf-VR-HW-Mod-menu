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
	 * Function LocPoint_BP.LocPoint_BP_C.IsAvailable
	 */
	struct ALocPoint_BP_C_IsAvailable_Params
	{
	public:
		bool                                                       IsAvailable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LocPoint_BP.LocPoint_BP_C.GetOwnerOfficeAi
	 */
	struct ALocPoint_BP_C_GetOwnerOfficeAi_Params
	{
	public:
		class AOfficeAiBase_Bp_C*                                  CharacterAtLocation;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LocPoint_BP.LocPoint_BP_C.SetOwnerOfficeAi
	 */
	struct ALocPoint_BP_C_SetOwnerOfficeAi_Params
	{
	public:
		class AOfficeAiBase_Bp_C*                                  OwnerAi;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OwnerSet;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
