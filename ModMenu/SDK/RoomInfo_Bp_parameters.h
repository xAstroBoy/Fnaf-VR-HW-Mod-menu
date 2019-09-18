#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function RoomInfo_Bp.RoomInfo_Bp_C.GetAvailableLocationsForChar
struct ARoomInfo_Bp_C_GetAvailableLocationsForChar_Params
{
	class AOfficeAiBase_Bp_C*                          CharacterInstance;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ALocPoint_BP_C*>                      ListOfLocations;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function RoomInfo_Bp.RoomInfo_Bp_C.GetAvailableLocationsForCharType
struct ARoomInfo_Bp_C_GetAvailableLocationsForCharType_Params
{
	class UClass*                                      CharacterType;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class ALocPoint_BP_C*>                      ListOfLocations;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function RoomInfo_Bp.RoomInfo_Bp_C.UserConstructionScript
struct ARoomInfo_Bp_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
