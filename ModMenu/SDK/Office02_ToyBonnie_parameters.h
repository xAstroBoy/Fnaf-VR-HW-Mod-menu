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

// Function Office02_ToyBonnie.Office02_ToyBonnie_C.CanEnterRoom
struct AOffice02_ToyBonnie_C_CanEnterRoom_Params
{
	struct FOfficeRoomTransition_Struct                TransitionInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ARoomInfo_Bp_C**                             RoomBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanEnterRoom;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Office02_ToyBonnie.Office02_ToyBonnie_C.UserConstructionScript
struct AOffice02_ToyBonnie_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
