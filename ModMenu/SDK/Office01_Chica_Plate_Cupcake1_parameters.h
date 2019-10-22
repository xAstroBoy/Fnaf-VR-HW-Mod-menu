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

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.AttemptGrab
struct AOffice01_Chica_Plate_Cupcake1_C_AttemptGrab_Params
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

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.AttemptRelease
struct AOffice01_Chica_Plate_Cupcake1_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.HandlePlateAttachment
struct AOffice01_Chica_Plate_Cupcake1_C_HandlePlateAttachment_Params
{
	class UPrimitiveComponent*                         Other_Comp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.UserConstructionScript
struct AOffice01_Chica_Plate_Cupcake1_C_UserConstructionScript_Params
{
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.OnVRHoverComponentBegin
struct AOffice01_Chica_Plate_Cupcake1_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.OnVRHoverComponentEnd
struct AOffice01_Chica_Plate_Cupcake1_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.OnVRReleased
struct AOffice01_Chica_Plate_Cupcake1_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.BndEvt__PlateAttachmentPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AOffice01_Chica_Plate_Cupcake1_C_BndEvt__PlateAttachmentPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.OnVRGrabbed
struct AOffice01_Chica_Plate_Cupcake1_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.ReceiveBeginPlay
struct AOffice01_Chica_Plate_Cupcake1_C_ReceiveBeginPlay_Params
{
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.CupcakeRun
struct AOffice01_Chica_Plate_Cupcake1_C_CupcakeRun_Params
{
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.CupcakeAttached
struct AOffice01_Chica_Plate_Cupcake1_C_CupcakeAttached_Params
{
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.ReceiveTick
struct AOffice01_Chica_Plate_Cupcake1_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.ActivateCupcake
struct AOffice01_Chica_Plate_Cupcake1_C_ActivateCupcake_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.DeactivateCupcake
struct AOffice01_Chica_Plate_Cupcake1_C_DeactivateCupcake_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AOffice01_Chica_Plate_Cupcake1_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct AOffice01_Chica_Plate_Cupcake1_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.CloseGate
struct AOffice01_Chica_Plate_Cupcake1_C_CloseGate_Params
{
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.OnVRHoverBegin
struct AOffice01_Chica_Plate_Cupcake1_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.OnVRHoverEnd
struct AOffice01_Chica_Plate_Cupcake1_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Chica_Plate_Cupcake1.Office01_Chica_Plate_Cupcake1_C.ExecuteUbergraph_Office01_Chica_Plate_Cupcake1
struct AOffice01_Chica_Plate_Cupcake1_C_ExecuteUbergraph_Office01_Chica_Plate_Cupcake1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
