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

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetAIData
struct AOffice_BaseGamemanager_C_GetAIData_Params
{
	TEnumAsByte<EFreddyCharacterType>                  CharacterType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOfficeAIDataStruct                         AIDataStruct;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               DataWasFound;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.ClockCountDown
struct AOffice_BaseGamemanager_C_ClockCountDown_Params
{
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRoomInfo
struct AOffice_BaseGamemanager_C_GetRoomInfo_Params
{
	struct FName                                       RoomName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ARoomInfo_Bp_C*                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRoomTransitions
struct AOffice_BaseGamemanager_C_GetRoomTransitions_Params
{
	struct FName                                       Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FOfficeRoomTransition_Struct>        RoomTransitions;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRooms
struct AOffice_BaseGamemanager_C_GetRooms_Params
{
	TArray<class ARoomInfo_Bp_C*>                      ListOfRoomBps;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.UserConstructionScript
struct AOffice_BaseGamemanager_C_UserConstructionScript_Params
{
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.ReceiveBeginPlay
struct AOffice_BaseGamemanager_C_ReceiveBeginPlay_Params
{
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.EventStartClock
struct AOffice_BaseGamemanager_C_EventStartClock_Params
{
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.CountDownClock
struct AOffice_BaseGamemanager_C_CountDownClock_Params
{
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.SetStatic
struct AOffice_BaseGamemanager_C_SetStatic_Params
{
	bool                                               EnableStatic;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.CharacterStartingMove
struct AOffice_BaseGamemanager_C_CharacterStartingMove_Params
{
	class AOfficeAiBase_Bp_C*                          OfficeCharacterAI;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ARoomInfo_Bp_C*                              PrevRom;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.StartLightFade
struct AOffice_BaseGamemanager_C_StartLightFade_Params
{
	class AOfficeAiBase_Bp_C*                          AIWaiting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.ScreenFaded
struct AOffice_BaseGamemanager_C_ScreenFaded_Params
{
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.ReceiveTick
struct AOffice_BaseGamemanager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.StartupStaticCounter
struct AOffice_BaseGamemanager_C_StartupStaticCounter_Params
{
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.GameLost_Error_Fix
struct AOffice_BaseGamemanager_C_GameLost_Error_Fix_Params
{
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.ExecuteUbergraph_Office_BaseGamemanager
struct AOffice_BaseGamemanager_C_ExecuteUbergraph_Office_BaseGamemanager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.DestroyProblemAI__DelegateSignature
struct AOffice_BaseGamemanager_C_DestroyProblemAI__DelegateSignature_Params
{
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.FlickerLights__DelegateSignature
struct AOffice_BaseGamemanager_C_FlickerLights__DelegateSignature_Params
{
};

// Function Office_BaseGamemanager.Office_BaseGamemanager_C.DisableAi__DelegateSignature
struct AOffice_BaseGamemanager_C_DisableAi__DelegateSignature_Params
{
	bool                                               Player_Won_Game;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
