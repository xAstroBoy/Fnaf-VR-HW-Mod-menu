/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "FreddieMask_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.AttemptGrab
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               canGrab                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		SWGVR_EGrabSnapType                                SnapType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               snapLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               snapRotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     AttachmentOffsetLocation                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    AttachmentOffsetRotation                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFreddieMask_BP_C::AttemptGrab(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, bool* canGrab, SWGVR_EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.AttemptGrab");
		
		AFreddieMask_BP_C_AttemptGrab_Params params {};
		params.Grabber = Grabber;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canGrab != nullptr)
			*canGrab = params.canGrab;
		if (SnapType != nullptr)
			*SnapType = params.SnapType;
		if (snapLocation != nullptr)
			*snapLocation = params.snapLocation;
		if (snapRotation != nullptr)
			*snapRotation = params.snapRotation;
		if (AttachmentOffsetLocation != nullptr)
			*AttachmentOffsetLocation = params.AttachmentOffsetLocation;
		if (AttachmentOffsetRotation != nullptr)
			*AttachmentOffsetRotation = params.AttachmentOffsetRotation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.AttemptRelease
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AFreddieMask_BP_C::AttemptRelease(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.AttemptRelease");
		
		AFreddieMask_BP_C_AttemptRelease_Params params {};
		params.Grabber = Grabber;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.NonVR_GamepadInteraction_Release
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::NonVR_GamepadInteraction_Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.NonVR_GamepadInteraction_Release");
		
		AFreddieMask_BP_C_NonVR_GamepadInteraction_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.NonVR_GamepadInteraction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::NonVR_GamepadInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.NonVR_GamepadInteraction");
		
		AFreddieMask_BP_C_NonVR_GamepadInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.CheckOtherMasks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::CheckOtherMasks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.CheckOtherMasks");
		
		AFreddieMask_BP_C_CheckOtherMasks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.InitializeMaskType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::InitializeMaskType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.InitializeMaskType");
		
		AFreddieMask_BP_C_InitializeMaskType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.OnNonVRLineTraceInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASaul_MotionControllerPawn_C*                MotionControllerPawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Hit_Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddieMask_BP_C::OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.OnNonVRLineTraceInteract");
		
		AFreddieMask_BP_C_OnNonVRLineTraceInteract_Params params {};
		params.MotionControllerPawn = MotionControllerPawn;
		params.HitComponent = HitComponent;
		params.Hit_Actor = Hit_Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.Pickup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             AttachTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddieMask_BP_C::Pickup(class USceneComponent* AttachTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.Pickup");
		
		AFreddieMask_BP_C_Pickup_Params params {};
		params.AttachTo = AttachTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.Drop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::Drop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.Drop");
		
		AFreddieMask_BP_C_Drop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.OnVRInteract
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             VRCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddieMask_BP_C::OnVRInteract(class ASWGVRCharacter* VRCharacter, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.OnVRInteract");
		
		AFreddieMask_BP_C_OnVRInteract_Params params {};
		params.VRCharacter = VRCharacter;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.OnVRHoverComponentBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         HoveredComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddieMask_BP_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.OnVRHoverComponentBegin");
		
		AFreddieMask_BP_C_OnVRHoverComponentBegin_Params params {};
		params.Sender = Sender;
		params.HoveredComponent = HoveredComponent;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.OnVRHoverComponentEnd
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         HoveredComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddieMask_BP_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.OnVRHoverComponentEnd");
		
		AFreddieMask_BP_C_OnVRHoverComponentEnd_Params params {};
		params.Sender = Sender;
		params.HoveredComponent = HoveredComponent;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.ReleasedTheMask
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::ReleasedTheMask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.ReleasedTheMask");
		
		AFreddieMask_BP_C_ReleasedTheMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AFreddieMask_BP_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		AFreddieMask_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddieMask_BP_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		AFreddieMask_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddieMask_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.ReceiveTick");
		
		AFreddieMask_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.ReceiveBeginPlay");
		
		AFreddieMask_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.TestThisHere
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::TestThisHere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.TestThisHere");
		
		AFreddieMask_BP_C_TestThisHere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.OnVRGrabbed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddieMask_BP_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.OnVRGrabbed");
		
		AFreddieMask_BP_C_OnVRGrabbed_Params params {};
		params.Grabber = Grabber;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.OnVRReleased
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ReleaseVelocity                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddieMask_BP_C::OnVRReleased(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, const struct FVector& ReleaseVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.OnVRReleased");
		
		AFreddieMask_BP_C_OnVRReleased_Params params {};
		params.Grabber = Grabber;
		params.Hand = Hand;
		params.ReleaseVelocity = ReleaseVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.OnVRHoverBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddieMask_BP_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.OnVRHoverBegin");
		
		AFreddieMask_BP_C_OnVRHoverBegin_Params params {};
		params.Sender = Sender;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.OnVRHoverEnd
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddieMask_BP_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.OnVRHoverEnd");
		
		AFreddieMask_BP_C_OnVRHoverEnd_Params params {};
		params.Sender = Sender;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.NonVR Release
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::NonVR_Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.NonVR Release");
		
		AFreddieMask_BP_C_NonVR_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.ResetMaskReturnNonVR
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::ResetMaskReturnNonVR()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.ResetMaskReturnNonVR");
		
		AFreddieMask_BP_C_ResetMaskReturnNonVR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.PressButtonGetMask
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::PressButtonGetMask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.PressButtonGetMask");
		
		AFreddieMask_BP_C_PressButtonGetMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.NonVR_GamepadInteractionPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::NonVR_GamepadInteractionPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.NonVR_GamepadInteractionPressed");
		
		AFreddieMask_BP_C_NonVR_GamepadInteractionPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.NonVR_GamepadInteractionRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::NonVR_GamepadInteractionRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.NonVR_GamepadInteractionRelease");
		
		AFreddieMask_BP_C_NonVR_GamepadInteractionRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.NONVR_SetMaskCoinVisible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::NONVR_SetMaskCoinVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.NONVR_SetMaskCoinVisible");
		
		AFreddieMask_BP_C_NONVR_SetMaskCoinVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.ExecuteUbergraph_FreddieMask_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddieMask_BP_C::ExecuteUbergraph_FreddieMask_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.ExecuteUbergraph_FreddieMask_BP");
		
		AFreddieMask_BP_C_ExecuteUbergraph_FreddieMask_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.FreddyMaskIsOff__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::FreddyMaskIsOff__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.FreddyMaskIsOff__DelegateSignature");
		
		AFreddieMask_BP_C_FreddyMaskIsOff__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddieMask_BP.FreddieMask_BP_C.FreddyMaskisOn__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AFreddieMask_BP_C::FreddyMaskisOn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddieMask_BP.FreddieMask_BP_C.FreddyMaskisOn__DelegateSignature");
		
		AFreddieMask_BP_C_FreddyMaskisOn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFreddieMask_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreddieMask_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddieMask_BP.FreddieMask_BP_C");
		return ptr;
	}

}


