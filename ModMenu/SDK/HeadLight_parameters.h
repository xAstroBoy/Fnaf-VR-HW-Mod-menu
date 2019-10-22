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

// Function HeadLight.HeadLight_C.Light Intensity
struct AHeadLight_C_Light_Intensity_Params
{
	bool                                               Off;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadLight.HeadLight_C.UserConstructionScript
struct AHeadLight_C_UserConstructionScript_Params
{
};

// Function HeadLight.HeadLight_C.Dyling Flashlight Flicker__FinishedFunc
struct AHeadLight_C_Dyling_Flashlight_Flicker__FinishedFunc_Params
{
};

// Function HeadLight.HeadLight_C.Dyling Flashlight Flicker__UpdateFunc
struct AHeadLight_C_Dyling_Flashlight_Flicker__UpdateFunc_Params
{
};

// Function HeadLight.HeadLight_C.Timeline_0__FinishedFunc
struct AHeadLight_C_Timeline_0__FinishedFunc_Params
{
};

// Function HeadLight.HeadLight_C.Timeline_0__UpdateFunc
struct AHeadLight_C_Timeline_0__UpdateFunc_Params
{
};

// Function HeadLight.HeadLight_C.Timeline_1__FinishedFunc
struct AHeadLight_C_Timeline_1__FinishedFunc_Params
{
};

// Function HeadLight.HeadLight_C.Timeline_1__UpdateFunc
struct AHeadLight_C_Timeline_1__UpdateFunc_Params
{
};

// Function HeadLight.HeadLight_C.Timeline_2__FinishedFunc
struct AHeadLight_C_Timeline_2__FinishedFunc_Params
{
};

// Function HeadLight.HeadLight_C.Timeline_2__UpdateFunc
struct AHeadLight_C_Timeline_2__UpdateFunc_Params
{
};

// Function HeadLight.HeadLight_C.OnVRHoverEnd
struct AHeadLight_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadLight.HeadLight_C.OnVRHoverBegin
struct AHeadLight_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadLight.HeadLight_C.Turn Off
struct AHeadLight_C_Turn_Off_Params
{
};

// Function HeadLight.HeadLight_C.Turn On
struct AHeadLight_C_Turn_On_Params
{
};

// Function HeadLight.HeadLight_C.OnVRInteract
struct AHeadLight_C_OnVRInteract_Params
{
	class ASWGVRCharacter*                             VRCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadLight.HeadLight_C.ReceiveBeginPlay
struct AHeadLight_C_ReceiveBeginPlay_Params
{
};

// Function HeadLight.HeadLight_C.Drop
struct AHeadLight_C_Drop_Params
{
};

// Function HeadLight.HeadLight_C.Pickup
struct AHeadLight_C_Pickup_Params
{
	class USceneComponent*                             AttachTo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HeadLight.HeadLight_C.Toggle Flicker Test
struct AHeadLight_C_Toggle_Flicker_Test_Params
{
	bool                                               Enable_Collision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OffAfterFlicker;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadLight.HeadLight_C.HeavyFlickerEvent
struct AHeadLight_C_HeavyFlickerEvent_Params
{
};

// Function HeadLight.HeadLight_C.ReceiveTick
struct AHeadLight_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadLight.HeadLight_C.OnVRHoverComponentEnd
struct AHeadLight_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadLight.HeadLight_C.OnVRHoverComponentBegin
struct AHeadLight_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadLight.HeadLight_C.ExecuteUbergraph_HeadLight
struct AHeadLight_C_ExecuteUbergraph_HeadLight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadLight.HeadLight_C.Toggle Flicker__DelegateSignature
struct AHeadLight_C_Toggle_Flicker__DelegateSignature_Params
{
};

// Function HeadLight.HeadLight_C.Freddy Is Hit by the light__DelegateSignature
struct AHeadLight_C_Freddy_Is_Hit_by_the_light__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
