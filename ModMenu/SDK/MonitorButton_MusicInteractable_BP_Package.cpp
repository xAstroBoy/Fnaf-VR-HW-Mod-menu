﻿/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MonitorButton_MusicInteractable_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.CheckForFreddieMask
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AMonitorButton_MusicInteractable_BP_C::CheckForFreddieMask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.CheckForFreddieMask");
		
		AMonitorButton_MusicInteractable_BP_C_CheckForFreddieMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.SetOfficeManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::SetOfficeManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.SetOfficeManager");
		
		AMonitorButton_MusicInteractable_BP_C_SetOfficeManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.AdjustBtnPosition
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::AdjustBtnPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.AdjustBtnPosition");
		
		AMonitorButton_MusicInteractable_BP_C_AdjustBtnPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ResetBtnPosition
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::ResetBtnPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ResetBtnPosition");
		
		AMonitorButton_MusicInteractable_BP_C_ResetBtnPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.UserConstructionScript");
		
		AMonitorButton_MusicInteractable_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.FlickerButtonIntensity__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::FlickerButtonIntensity__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.FlickerButtonIntensity__FinishedFunc");
		
		AMonitorButton_MusicInteractable_BP_C_FlickerButtonIntensity__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.FlickerButtonIntensity__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::FlickerButtonIntensity__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.FlickerButtonIntensity__UpdateFunc");
		
		AMonitorButton_MusicInteractable_BP_C_FlickerButtonIntensity__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AMonitorButton_MusicInteractable_BP_C::BndEvt__BoxCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
		AMonitorButton_MusicInteractable_BP_C_BndEvt__BoxCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonitorButton_MusicInteractable_BP_C::BndEvt__BoxCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");
		
		AMonitorButton_MusicInteractable_BP_C_BndEvt__BoxCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonitorButton_MusicInteractable_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ReceiveTick");
		
		AMonitorButton_MusicInteractable_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ReceiveBeginPlay");
		
		AMonitorButton_MusicInteractable_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.FlickerButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::FlickerButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.FlickerButton");
		
		AMonitorButton_MusicInteractable_BP_C_FlickerButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ButtonIsPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::ButtonIsPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ButtonIsPressed");
		
		AMonitorButton_MusicInteractable_BP_C_ButtonIsPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ButtonIsDisabled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::ButtonIsDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ButtonIsDisabled");
		
		AMonitorButton_MusicInteractable_BP_C_ButtonIsDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ButtonIsEnabled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::ButtonIsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ButtonIsEnabled");
		
		AMonitorButton_MusicInteractable_BP_C_ButtonIsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.OnNonVRLineTraceInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASaul_MotionControllerPawn_C*                MotionControllerPawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Hit_Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonitorButton_MusicInteractable_BP_C::OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.OnNonVRLineTraceInteract");
		
		AMonitorButton_MusicInteractable_BP_C_OnNonVRLineTraceInteract_Params params {};
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
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.NonVR ReleaseBypass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::NonVR_ReleaseBypass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.NonVR ReleaseBypass");
		
		AMonitorButton_MusicInteractable_BP_C_NonVR_ReleaseBypass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.NonVRRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::NonVRRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.NonVRRelease");
		
		AMonitorButton_MusicInteractable_BP_C_NonVRRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.NonVR_GamepadInteraction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_MusicInteractable_BP_C::NonVR_GamepadInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.NonVR_GamepadInteraction");
		
		AMonitorButton_MusicInteractable_BP_C_NonVR_GamepadInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ExecuteUbergraph_MonitorButton_MusicInteractable_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonitorButton_MusicInteractable_BP_C::ExecuteUbergraph_MonitorButton_MusicInteractable_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C.ExecuteUbergraph_MonitorButton_MusicInteractable_BP");
		
		AMonitorButton_MusicInteractable_BP_C_ExecuteUbergraph_MonitorButton_MusicInteractable_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMonitorButton_MusicInteractable_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMonitorButton_MusicInteractable_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MonitorButton_MusicInteractable_BP.MonitorButton_MusicInteractable_BP_C");
		return ptr;
	}

}

