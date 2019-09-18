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

// Function BedroomClosetDoor.BedroomClosetDoor_C.AttemptGrab
struct ABedroomClosetDoor_C_AttemptGrab_Params
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

// Function BedroomClosetDoor.BedroomClosetDoor_C.AttemptRelease
struct ABedroomClosetDoor_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BedroomClosetDoor.BedroomClosetDoor_C.StopInterpAngle
struct ABedroomClosetDoor_C_StopInterpAngle_Params
{
};

// Function BedroomClosetDoor.BedroomClosetDoor_C.SetInterpAngle
struct ABedroomClosetDoor_C_SetInterpAngle_Params
{
	float                                              InterpAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BedroomClosetDoor.BedroomClosetDoor_C.GetCurrentAngle
struct ABedroomClosetDoor_C_GetCurrentAngle_Params
{
	float                                              DoorAngle;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BedroomClosetDoor.BedroomClosetDoor_C.IsDoorHeld
struct ABedroomClosetDoor_C_IsDoorHeld_Params
{
	bool                                               DoorIsHeld;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BedroomClosetDoor.BedroomClosetDoor_C.SetAngle
struct ABedroomClosetDoor_C_SetAngle_Params
{
	float                                              DesiredAngle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BedroomClosetDoor.BedroomClosetDoor_C.SetupDoorAngles
struct ABedroomClosetDoor_C_SetupDoorAngles_Params
{
};

// Function BedroomClosetDoor.BedroomClosetDoor_C.UserConstructionScript
struct ABedroomClosetDoor_C_UserConstructionScript_Params
{
};

// Function BedroomClosetDoor.BedroomClosetDoor_C.ReceiveTick
struct ABedroomClosetDoor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BedroomClosetDoor.BedroomClosetDoor_C.OnVRGrabbed
struct ABedroomClosetDoor_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BedroomClosetDoor.BedroomClosetDoor_C.OnVRReleased
struct ABedroomClosetDoor_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BedroomClosetDoor.BedroomClosetDoor_C.ExecuteUbergraph_BedroomClosetDoor
struct ABedroomClosetDoor_C_ExecuteUbergraph_BedroomClosetDoor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BedroomClosetDoor.BedroomClosetDoor_C.DoorAngleChange__DelegateSignature
struct ABedroomClosetDoor_C_DoorAngleChange__DelegateSignature_Params
{
	float                                              DoorAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABedroomClosetDoor_C*                        Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
