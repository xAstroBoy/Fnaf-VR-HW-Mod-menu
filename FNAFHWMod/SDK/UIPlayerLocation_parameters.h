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

// Function UIPlayerLocation.UIPlayerLocation_C.Setup
struct UUIPlayerLocation_C_Setup_Params
{
	class AMPFreddyPawnBase_C*                         TrackedCharacter;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIPlayerLocation.UIPlayerLocation_C.ExecuteUbergraph_UIPlayerLocation
struct UUIPlayerLocation_C_ExecuteUbergraph_UIPlayerLocation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
