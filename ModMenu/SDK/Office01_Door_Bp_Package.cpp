/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office01_Door_Bp_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_0__FinishedFunc");
		
		AOffice01_Door_Bp_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_0__UpdateFunc");
		
		AOffice01_Door_Bp_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_1__FinishedFunc");
		
		AOffice01_Door_Bp_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_1__UpdateFunc");
		
		AOffice01_Door_Bp_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.OpenDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::OpenDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.OpenDoor");
		
		AOffice01_Door_Bp_C_OpenDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.CloseDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::CloseDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.CloseDoor");
		
		AOffice01_Door_Bp_C_CloseDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AOffice01_Door_Bp_C::BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		AOffice01_Door_Bp_C_BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_Door_Bp_C::BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		AOffice01_Door_Bp_C_BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AOffice01_Door_Bp_C::BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
		
		AOffice01_Door_Bp_C_BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_Door_Bp_C::BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");
		
		AOffice01_Door_Bp_C_BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_Door_Bp_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.ReceiveTick");
		
		AOffice01_Door_Bp_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.ToggleSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::ToggleSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.ToggleSound");
		
		AOffice01_Door_Bp_C_ToggleSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.ReceiveBeginPlay");
		
		AOffice01_Door_Bp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.DisableDoorInteraction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::DisableDoorInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.DisableDoorInteraction");
		
		AOffice01_Door_Bp_C_DisableDoorInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.PowerOutageShutDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::PowerOutageShutDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.PowerOutageShutDown");
		
		AOffice01_Door_Bp_C_PowerOutageShutDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.FlickerDoorLights
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::FlickerDoorLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.FlickerDoorLights");
		
		AOffice01_Door_Bp_C_FlickerDoorLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.KillLights
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::KillLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.KillLights");
		
		AOffice01_Door_Bp_C_KillLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.CheckDoorScare
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::CheckDoorScare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.CheckDoorScare");
		
		AOffice01_Door_Bp_C_CheckDoorScare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.CheckIfBonnie
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::CheckIfBonnie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.CheckIfBonnie");
		
		AOffice01_Door_Bp_C_CheckIfBonnie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.OnPadDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::OnPadDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.OnPadDoor");
		
		AOffice01_Door_Bp_C_OnPadDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.OnPadLights
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::OnPadLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.OnPadLights");
		
		AOffice01_Door_Bp_C_OnPadLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.NightmareKillLights
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::NightmareKillLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NightmareKillLights");
		
		AOffice01_Door_Bp_C_NightmareKillLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.OnNonVRLineTraceInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASaul_MotionControllerPawn_C*                MotionControllerPawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Hit_Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_Door_Bp_C::OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.OnNonVRLineTraceInteract");
		
		AOffice01_Door_Bp_C_OnNonVRLineTraceInteract_Params params {};
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
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.NonVR ResetButtons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::NonVR_ResetButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NonVR ResetButtons");
		
		AOffice01_Door_Bp_C_NonVR_ResetButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.NonVR ResetButtonsNodeCleaner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::NonVR_ResetButtonsNodeCleaner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NonVR ResetButtonsNodeCleaner");
		
		AOffice01_Door_Bp_C_NonVR_ResetButtonsNodeCleaner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.InputBinderEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::InputBinderEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.InputBinderEvent");
		
		AOffice01_Door_Bp_C_InputBinderEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Light_Left
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::NonVr_Door_Light_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Light_Left");
		
		AOffice01_Door_Bp_C_NonVr_Door_Light_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Left
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::NonVr_Door_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Left");
		
		AOffice01_Door_Bp_C_NonVr_Door_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Light_Right
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::NonVr_Door_Light_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Light_Right");
		
		AOffice01_Door_Bp_C_NonVr_Door_Light_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Right
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::NonVr_Door_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Right");
		
		AOffice01_Door_Bp_C_NonVr_Door_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.DS4LightButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Pressed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice01_Door_Bp_C::DS4LightButton(bool Is_Pressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.DS4LightButton");
		
		AOffice01_Door_Bp_C_DS4LightButton_Params params {};
		params.Is_Pressed = Is_Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.DS4DoorButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Pressed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice01_Door_Bp_C::DS4DoorButton(bool Is_Pressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.DS4DoorButton");
		
		AOffice01_Door_Bp_C_DS4DoorButton_Params params {};
		params.Is_Pressed = Is_Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.On Controller Device Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Door_Bp_C::On_Controller_Device_Changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.On Controller Device Changed");
		
		AOffice01_Door_Bp_C_On_Controller_Device_Changed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Door_Bp.Office01_Door_Bp_C.ExecuteUbergraph_Office01_Door_Bp
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_Door_Bp_C::ExecuteUbergraph_Office01_Door_Bp(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.ExecuteUbergraph_Office01_Door_Bp");
		
		AOffice01_Door_Bp_C_ExecuteUbergraph_Office01_Door_Bp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice01_Door_Bp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice01_Door_Bp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office01_Door_Bp.Office01_Door_Bp_C");
		return ptr;
	}

}


