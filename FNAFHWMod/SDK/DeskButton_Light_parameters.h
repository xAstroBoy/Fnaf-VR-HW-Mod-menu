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

// Function DeskButton_Light.DeskButton_Light_C.DisableLightCall
struct ADeskButton_Light_C_DisableLightCall_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.PuppetOffState
struct ADeskButton_Light_C_PuppetOffState_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.PuppetOnState
struct ADeskButton_Light_C_PuppetOnState_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.ReleasedState
struct ADeskButton_Light_C_ReleasedState_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.PressedState
struct ADeskButton_Light_C_PressedState_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.CheckForEnemy
struct ADeskButton_Light_C_CheckForEnemy_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.UserConstructionScript
struct ADeskButton_Light_C_UserConstructionScript_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.FlickerLight__FinishedFunc
struct ADeskButton_Light_C_FlickerLight__FinishedFunc_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.FlickerLight__UpdateFunc
struct ADeskButton_Light_C_FlickerLight__UpdateFunc_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.FlickerLight__DisableLight__EventFunc
struct ADeskButton_Light_C_FlickerLight__DisableLight__EventFunc_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.Timeline_0__FinishedFunc
struct ADeskButton_Light_C_Timeline_0__FinishedFunc_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.Timeline_0__UpdateFunc
struct ADeskButton_Light_C_Timeline_0__UpdateFunc_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.ReceiveBeginPlay
struct ADeskButton_Light_C_ReceiveBeginPlay_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.BndEvt__InteractionCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ADeskButton_Light_C_BndEvt__InteractionCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeskButton_Light.DeskButton_Light_C.BndEvt__InteractionCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ADeskButton_Light_C_BndEvt__InteractionCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeskButton_Light.DeskButton_Light_C.ReceiveTick
struct ADeskButton_Light_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeskButton_Light.DeskButton_Light_C.TriggerFlickerLights
struct ADeskButton_Light_C_TriggerFlickerLights_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.PuppetFlickerTime
struct ADeskButton_Light_C_PuppetFlickerTime_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.CheckForAiAgain
struct ADeskButton_Light_C_CheckForAiAgain_Params
{
};

// Function DeskButton_Light.DeskButton_Light_C.ExecuteUbergraph_DeskButton_Light
struct ADeskButton_Light_C_ExecuteUbergraph_DeskButton_Light_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
