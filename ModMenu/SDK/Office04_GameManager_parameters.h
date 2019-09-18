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

// Function Office04_GameManager.Office04_GameManager_C.CheckLightBoxCollision
struct AOffice04_GameManager_C_CheckLightBoxCollision_Params
{
	class AOffice04_LightCollider_C*                   LightCollider;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Office04_GameManager.Office04_GameManager_C.EnableLightBoxCollision
struct AOffice04_GameManager_C_EnableLightBoxCollision_Params
{
	bool                                               Enable_Collision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOffice04_LightCollider_C*                   Light_Collider;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office04_GameManager.Office04_GameManager_C.GetRoomTransitions
struct AOffice04_GameManager_C_GetRoomTransitions_Params
{
	struct FName*                                      Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FOfficeRoomTransition_Struct>        RoomTransitions;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Office04_GameManager.Office04_GameManager_C.PlayerAtDoor
struct AOffice04_GameManager_C_PlayerAtDoor_Params
{
};

// Function Office04_GameManager.Office04_GameManager_C.StartGame
struct AOffice04_GameManager_C_StartGame_Params
{
};

// Function Office04_GameManager.Office04_GameManager_C.UserConstructionScript
struct AOffice04_GameManager_C_UserConstructionScript_Params
{
};

// Function Office04_GameManager.Office04_GameManager_C.ReceiveTick
struct AOffice04_GameManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office04_GameManager.Office04_GameManager_C.FlashlightHit
struct AOffice04_GameManager_C_FlashlightHit_Params
{
};

// Function Office04_GameManager.Office04_GameManager_C.EventStartClock
struct AOffice04_GameManager_C_EventStartClock_Params
{
};

// Function Office04_GameManager.Office04_GameManager_C.ExecuteUbergraph_Office04_GameManager
struct AOffice04_GameManager_C_ExecuteUbergraph_Office04_GameManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office04_GameManager.Office04_GameManager_C.OnFlashlightHit__DelegateSignature
struct AOffice04_GameManager_C_OnFlashlightHit__DelegateSignature_Params
{
	class ARoomInfo_Bp_C*                              Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
