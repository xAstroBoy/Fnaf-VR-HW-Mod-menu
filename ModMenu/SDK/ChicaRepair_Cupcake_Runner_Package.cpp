/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "ChicaRepair_Cupcake_Runner_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.AttemptGrab
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
	void AChicaRepair_Cupcake_Runner_C::AttemptGrab(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, bool* canGrab, SWGVR_EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.AttemptGrab");
		
		AChicaRepair_Cupcake_Runner_C_AttemptGrab_Params params {};
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
	 * 		Name   -> Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.AttemptRelease
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AChicaRepair_Cupcake_Runner_C::AttemptRelease(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.AttemptRelease");
		
		AChicaRepair_Cupcake_Runner_C_AttemptRelease_Params params {};
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
	 * 		Name   -> Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.CheckAttachCupcake
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaRepair_Cupcake_Runner_C::CheckAttachCupcake(class USceneComponent* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.CheckAttachCupcake");
		
		AChicaRepair_Cupcake_Runner_C_CheckAttachCupcake_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.MoveToRandomLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AChicaRepair_Cupcake_Runner_C::MoveToRandomLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.MoveToRandomLocation");
		
		AChicaRepair_Cupcake_Runner_C_MoveToRandomLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChicaRepair_Cupcake_Runner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.UserConstructionScript");
		
		AChicaRepair_Cupcake_Runner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaRepair_Cupcake_Runner_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ReceiveTick");
		
		AChicaRepair_Cupcake_Runner_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnPlayerVisionEnter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFNAFPlayerPawn_C*                           PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaRepair_Cupcake_Runner_C::OnPlayerVisionEnter(class AFNAFPlayerPawn_C* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnPlayerVisionEnter");
		
		AChicaRepair_Cupcake_Runner_C_OnPlayerVisionEnter_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnPlayerVisionExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFNAFPlayerPawn_C*                           PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaRepair_Cupcake_Runner_C::OnPlayerVisionExit(class AFNAFPlayerPawn_C* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnPlayerVisionExit");
		
		AChicaRepair_Cupcake_Runner_C_OnPlayerVisionExit_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.BndEvt__AttachmentPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AChicaRepair_Cupcake_Runner_C::BndEvt__AttachmentPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.BndEvt__AttachmentPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		AChicaRepair_Cupcake_Runner_C_BndEvt__AttachmentPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnVRGrabbed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaRepair_Cupcake_Runner_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnVRGrabbed");
		
		AChicaRepair_Cupcake_Runner_C_OnVRGrabbed_Params params {};
		params.Grabber = Grabber;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnVRReleased
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ReleaseVelocity                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaRepair_Cupcake_Runner_C::OnVRReleased(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, const struct FVector& ReleaseVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnVRReleased");
		
		AChicaRepair_Cupcake_Runner_C_OnVRReleased_Params params {};
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
	 * 		Name   -> Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AChicaRepair_Cupcake_Runner_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ReceiveBeginPlay");
		
		AChicaRepair_Cupcake_Runner_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ExecuteUbergraph_ChicaRepair_Cupcake_Runner
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaRepair_Cupcake_Runner_C::ExecuteUbergraph_ChicaRepair_Cupcake_Runner(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ExecuteUbergraph_ChicaRepair_Cupcake_Runner");
		
		AChicaRepair_Cupcake_Runner_C_ExecuteUbergraph_ChicaRepair_Cupcake_Runner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AChicaRepair_Cupcake_Runner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChicaRepair_Cupcake_Runner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C");
		return ptr;
	}

}


