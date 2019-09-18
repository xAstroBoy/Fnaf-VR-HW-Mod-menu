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

// Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlickerOff
struct AOffice02_GameManager_C_PuppetLightFlickerOff_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlickerOn
struct AOffice02_GameManager_C_PuppetLightFlickerOn_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.GetPuppetData
struct AOffice02_GameManager_C_GetPuppetData_Params
{
	bool                                               PuppetDataFound;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FPuppetAIDataStruct                         PuppetStructToUse1;                                       // (Parm, OutParm, IsPlainOldData)
};

// Function Office02_GameManager.Office02_GameManager_C.EnableLigtTransition
struct AOffice02_GameManager_C_EnableLigtTransition_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.SetFreddieMask
struct AOffice02_GameManager_C_SetFreddieMask_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.GetFreddieMask
struct AOffice02_GameManager_C_GetFreddieMask_Params
{
	TArray<class AFreddieMask_BP_C*>                   FreddieMask;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Office02_GameManager.Office02_GameManager_C.UserConstructionScript
struct AOffice02_GameManager_C_UserConstructionScript_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.LightFlicker__FinishedFunc
struct AOffice02_GameManager_C_LightFlicker__FinishedFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.LightFlicker__UpdateFunc
struct AOffice02_GameManager_C_LightFlicker__UpdateFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.LightFlicker__TeleportAi__EventFunc
struct AOffice02_GameManager_C_LightFlicker__TeleportAi__EventFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.Timeline_0__FinishedFunc
struct AOffice02_GameManager_C_Timeline_0__FinishedFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.Timeline_0__UpdateFunc
struct AOffice02_GameManager_C_Timeline_0__UpdateFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.Timeline_1__FinishedFunc
struct AOffice02_GameManager_C_Timeline_1__FinishedFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.Timeline_1__UpdateFunc
struct AOffice02_GameManager_C_Timeline_1__UpdateFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.Timeline_1__Flip Camera__EventFunc
struct AOffice02_GameManager_C_Timeline_1__Flip_Camera__EventFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.Timeline_2__FinishedFunc
struct AOffice02_GameManager_C_Timeline_2__FinishedFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.Timeline_2__UpdateFunc
struct AOffice02_GameManager_C_Timeline_2__UpdateFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.Timeline_2__Flip Camera__EventFunc
struct AOffice02_GameManager_C_Timeline_2__Flip_Camera__EventFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.Timeline_3__FinishedFunc
struct AOffice02_GameManager_C_Timeline_3__FinishedFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.Timeline_3__UpdateFunc
struct AOffice02_GameManager_C_Timeline_3__UpdateFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.Timeline_3__TeleportAi__EventFunc
struct AOffice02_GameManager_C_Timeline_3__TeleportAi__EventFunc_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.ReceiveBeginPlay
struct AOffice02_GameManager_C_ReceiveBeginPlay_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.TriggerCameraFlicker
struct AOffice02_GameManager_C_TriggerCameraFlicker_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.TurnOffStaticScreen
struct AOffice02_GameManager_C_TurnOffStaticScreen_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.TurnOnStaticScreen
struct AOffice02_GameManager_C_TurnOnStaticScreen_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlicker
struct AOffice02_GameManager_C_PuppetLightFlicker_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.PuppetExecutionSequence
struct AOffice02_GameManager_C_PuppetExecutionSequence_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.Disable Puppet_Animation
struct AOffice02_GameManager_C_Disable_Puppet_Animation_Params
{
	bool                                               Player_Won_Game;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office02_GameManager.Office02_GameManager_C.TriggerCameraLightFlicker
struct AOffice02_GameManager_C_TriggerCameraLightFlicker_Params
{
};

// Function Office02_GameManager.Office02_GameManager_C.ExecuteUbergraph_Office02_GameManager
struct AOffice02_GameManager_C_ExecuteUbergraph_Office02_GameManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office02_GameManager.Office02_GameManager_C.PuppetIsAwake__DelegateSignature
struct AOffice02_GameManager_C_PuppetIsAwake__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
