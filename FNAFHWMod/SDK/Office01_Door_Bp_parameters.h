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

// Function Office01_Door_Bp.Office01_Door_Bp_C.UserConstructionScript
struct AOffice01_Door_Bp_C_UserConstructionScript_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_0__FinishedFunc
struct AOffice01_Door_Bp_C_Timeline_0__FinishedFunc_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_0__UpdateFunc
struct AOffice01_Door_Bp_C_Timeline_0__UpdateFunc_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_1__FinishedFunc
struct AOffice01_Door_Bp_C_Timeline_1__FinishedFunc_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_1__UpdateFunc
struct AOffice01_Door_Bp_C_Timeline_1__UpdateFunc_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.OpenDoor
struct AOffice01_Door_Bp_C_OpenDoor_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.CloseDoor
struct AOffice01_Door_Bp_C_CloseDoor_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AOffice01_Door_Bp_C_BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AOffice01_Door_Bp_C_BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct AOffice01_Door_Bp_C_BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
struct AOffice01_Door_Bp_C_BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.ReceiveTick
struct AOffice01_Door_Bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.ToggleSound
struct AOffice01_Door_Bp_C_ToggleSound_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.ReceiveBeginPlay
struct AOffice01_Door_Bp_C_ReceiveBeginPlay_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.DisableDoorInteraction
struct AOffice01_Door_Bp_C_DisableDoorInteraction_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.PowerOutageShutDown
struct AOffice01_Door_Bp_C_PowerOutageShutDown_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.FlickerDoorLights
struct AOffice01_Door_Bp_C_FlickerDoorLights_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.KillLights
struct AOffice01_Door_Bp_C_KillLights_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.CheckDoorScare
struct AOffice01_Door_Bp_C_CheckDoorScare_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.CheckIfBonnie
struct AOffice01_Door_Bp_C_CheckIfBonnie_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.OnPadDoor
struct AOffice01_Door_Bp_C_OnPadDoor_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.OnPadLights
struct AOffice01_Door_Bp_C_OnPadLights_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.NightmareKillLights
struct AOffice01_Door_Bp_C_NightmareKillLights_Params
{
};

// Function Office01_Door_Bp.Office01_Door_Bp_C.ExecuteUbergraph_Office01_Door_Bp
struct AOffice01_Door_Bp_C_ExecuteUbergraph_Office01_Door_Bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
