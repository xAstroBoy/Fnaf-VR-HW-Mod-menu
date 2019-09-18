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

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.AttemptGrab
struct ABedroom_Door_BP_C_AttemptGrab_Params
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

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.AttemptRelease
struct ABedroom_Door_BP_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.GetRequiredDoorRotation
struct ABedroom_Door_BP_C_GetRequiredDoorRotation_Params
{
	float                                              DeltaAngle;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AngleDirection;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.GetDoorRotationToPoint
struct ABedroom_Door_BP_C_GetDoorRotationToPoint_Params
{
	struct FVector                                     WorldPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaAngle;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AngleDirection;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.Button_Held
struct ABedroom_Door_BP_C_Button_Held_Params
{
};

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.Clear timer
struct ABedroom_Door_BP_C_Clear_timer_Params
{
};

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.Move BTN
struct ABedroom_Door_BP_C_Move_BTN_Params
{
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.UserConstructionScript
struct ABedroom_Door_BP_C_UserConstructionScript_Params
{
};

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.OnVRGrabbed
struct ABedroom_Door_BP_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.OnVRReleased
struct ABedroom_Door_BP_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.ReceiveTick
struct ABedroom_Door_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.ReceiveBeginPlay
struct ABedroom_Door_BP_C_ReceiveBeginPlay_Params
{
};

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.ExecuteUbergraph_Bedroom_Door_BP
struct ABedroom_Door_BP_C_ExecuteUbergraph_Bedroom_Door_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
