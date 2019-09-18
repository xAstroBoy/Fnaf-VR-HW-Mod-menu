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

// Function Button_Hold.Button_Hold_C.AttemptGrab
struct AButton_Hold_C_AttemptGrab_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canGrab;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGrabSnapType                                      SnapType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               snapLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               snapRotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttachmentOffsetLocation;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AttachmentOffsetRotation;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Hold.Button_Hold_C.AttemptRelease
struct AButton_Hold_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Button_Hold.Button_Hold_C.GetRequiredDoorRotation
struct AButton_Hold_C_GetRequiredDoorRotation_Params
{
	float                                              DeltaAngle;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AngleDirection;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Hold.Button_Hold_C.GetDoorRotationToPoint
struct AButton_Hold_C_GetDoorRotationToPoint_Params
{
	struct FVector                                     WorldPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaAngle;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AngleDirection;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Hold.Button_Hold_C.Button_Held
struct AButton_Hold_C_Button_Held_Params
{
};

// Function Button_Hold.Button_Hold_C.Clear timer
struct AButton_Hold_C_Clear_timer_Params
{
};

// Function Button_Hold.Button_Hold_C.Move BTN
struct AButton_Hold_C_Move_BTN_Params
{
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Hold.Button_Hold_C.UserConstructionScript
struct AButton_Hold_C_UserConstructionScript_Params
{
};

// Function Button_Hold.Button_Hold_C.BTN Mid Move__FinishedFunc
struct AButton_Hold_C_BTN_Mid_Move__FinishedFunc_Params
{
};

// Function Button_Hold.Button_Hold_C.BTN Mid Move__UpdateFunc
struct AButton_Hold_C_BTN_Mid_Move__UpdateFunc_Params
{
};

// Function Button_Hold.Button_Hold_C.Press BTN Down__FinishedFunc
struct AButton_Hold_C_Press_BTN_Down__FinishedFunc_Params
{
};

// Function Button_Hold.Button_Hold_C.Press BTN Down__UpdateFunc
struct AButton_Hold_C_Press_BTN_Down__UpdateFunc_Params
{
};

// Function Button_Hold.Button_Hold_C.BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AButton_Hold_C_BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Hold.Button_Hold_C.BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AButton_Hold_C_BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Button_Hold.Button_Hold_C.OnVRGrabbed
struct AButton_Hold_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Hold.Button_Hold_C.OnVRReleased
struct AButton_Hold_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Button_Hold.Button_Hold_C.ReceiveTick
struct AButton_Hold_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Hold.Button_Hold_C.ReceiveBeginPlay
struct AButton_Hold_C_ReceiveBeginPlay_Params
{
};

// Function Button_Hold.Button_Hold_C.ExecuteUbergraph_Button_Hold
struct AButton_Hold_C_ExecuteUbergraph_Button_Hold_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
