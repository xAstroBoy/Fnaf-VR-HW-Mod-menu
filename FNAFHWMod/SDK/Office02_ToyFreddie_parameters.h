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

// Function Office02_ToyFreddie.Office02_ToyFreddie_C.CanEnterRoom
struct AOffice02_ToyFreddie_C_CanEnterRoom_Params
{
	struct FOfficeRoomTransition_Struct                TransitionInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ARoomInfo_Bp_C**                             RoomBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanEnterRoom;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Office02_ToyFreddie.Office02_ToyFreddie_C.UserConstructionScript
struct AOffice02_ToyFreddie_C_UserConstructionScript_Params
{
};

// Function Office02_ToyFreddie.Office02_ToyFreddie_C.FreddyBlackEye
struct AOffice02_ToyFreddie_C_FreddyBlackEye_Params
{
};

// Function Office02_ToyFreddie.Office02_ToyFreddie_C.FreddyNormalEye
struct AOffice02_ToyFreddie_C_FreddyNormalEye_Params
{
};

// Function Office02_ToyFreddie.Office02_ToyFreddie_C.ExecuteUbergraph_Office02_ToyFreddie
struct AOffice02_ToyFreddie_C_ExecuteUbergraph_Office02_ToyFreddie_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
