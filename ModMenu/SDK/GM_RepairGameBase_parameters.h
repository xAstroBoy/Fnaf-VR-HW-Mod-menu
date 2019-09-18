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

// Function GM_RepairGameBase.GM_RepairGameBase_C.UserConstructionScript
struct AGM_RepairGameBase_C_UserConstructionScript_Params
{
};

// Function GM_RepairGameBase.GM_RepairGameBase_C.KillPlayer
struct AGM_RepairGameBase_C_KillPlayer_Params
{
	TEnumAsByte<EJumpScareList>                        Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GM_RepairGameBase.GM_RepairGameBase_C.LevelDefeat
struct AGM_RepairGameBase_C_LevelDefeat_Params
{
};

// Function GM_RepairGameBase.GM_RepairGameBase_C.LevelVictory
struct AGM_RepairGameBase_C_LevelVictory_Params
{
};

// Function GM_RepairGameBase.GM_RepairGameBase_C.ExecuteUbergraph_GM_RepairGameBase
struct AGM_RepairGameBase_C_ExecuteUbergraph_GM_RepairGameBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
