/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MonitorButton_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.FlatInteraction_ButtonPress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMonitorButton_BP_C*                         MonitorButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonitorButton_BP_C::FlatInteraction_ButtonPress(class AMonitorButton_BP_C* MonitorButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.FlatInteraction_ButtonPress");
		
		AMonitorButton_BP_C_FlatInteraction_ButtonPress_Params params {};
		params.MonitorButton = MonitorButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.CheckForFreddyMask
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::CheckForFreddyMask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.CheckForFreddyMask");
		
		AMonitorButton_BP_C_CheckForFreddyMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.SetOfficeManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::SetOfficeManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.SetOfficeManager");
		
		AMonitorButton_BP_C_SetOfficeManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.TurnOffVent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::TurnOffVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.TurnOffVent");
		
		AMonitorButton_BP_C_TurnOffVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.MonitorBtnStateReset
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::MonitorBtnStateReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.MonitorBtnStateReset");
		
		AMonitorButton_BP_C_MonitorBtnStateReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.ToggleVent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::ToggleVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.ToggleVent");
		
		AMonitorButton_BP_C_ToggleVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.PlayBtnAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::PlayBtnAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.PlayBtnAudio");
		
		AMonitorButton_BP_C_PlayBtnAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.TurnLightOn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::TurnLightOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.TurnLightOn");
		
		AMonitorButton_BP_C_TurnLightOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.TurnLightOff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::TurnLightOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.TurnLightOff");
		
		AMonitorButton_BP_C_TurnLightOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.UserConstructionScript");
		
		AMonitorButton_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMonitorButton_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.Timeline_0__FinishedFunc");
		
		AMonitorButton_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMonitorButton_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.Timeline_0__UpdateFunc");
		
		AMonitorButton_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.Timeline_2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMonitorButton_BP_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.Timeline_2__FinishedFunc");
		
		AMonitorButton_BP_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.Timeline_2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMonitorButton_BP_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.Timeline_2__UpdateFunc");
		
		AMonitorButton_BP_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.ReceiveBeginPlay");
		
		AMonitorButton_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonitorButton_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.ReceiveTick");
		
		AMonitorButton_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.StopFlicker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::StopFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.StopFlicker");
		
		AMonitorButton_BP_C_StopFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AMonitorButton_BP_C::BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		AMonitorButton_BP_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.OnNonVRLineTraceInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASaul_MotionControllerPawn_C*                MotionControllerPawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Hit_Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonitorButton_BP_C::OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.OnNonVRLineTraceInteract");
		
		AMonitorButton_BP_C_OnNonVRLineTraceInteract_Params params {};
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
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.PressButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::PressButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.PressButton");
		
		AMonitorButton_BP_C_PressButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.ReEnableButtons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::ReEnableButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.ReEnableButtons");
		
		AMonitorButton_BP_C_ReEnableButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.Disable Button
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::Disable_Button()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.Disable Button");
		
		AMonitorButton_BP_C_Disable_Button_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.Debug_EventInput
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::Debug_EventInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.Debug_EventInput");
		
		AMonitorButton_BP_C_Debug_EventInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.CheckForGamePad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::CheckForGamePad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.CheckForGamePad");
		
		AMonitorButton_BP_C_CheckForGamePad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.SetButtonEnableInput
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::SetButtonEnableInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.SetButtonEnableInput");
		
		AMonitorButton_BP_C_SetButtonEnableInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.SetButtonDisableInput
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::SetButtonDisableInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.SetButtonDisableInput");
		
		AMonitorButton_BP_C_SetButtonDisableInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.NonVr_InputOverride_Left
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::NonVr_InputOverride_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.NonVr_InputOverride_Left");
		
		AMonitorButton_BP_C_NonVr_InputOverride_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.NonVr_InputOverride_Right
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::NonVr_InputOverride_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.NonVr_InputOverride_Right");
		
		AMonitorButton_BP_C_NonVr_InputOverride_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.NonVr_InputOverride_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::NonVr_InputOverride_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.NonVr_InputOverride_Down");
		
		AMonitorButton_BP_C_NonVr_InputOverride_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.NonVr_InputOverride_Up
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorButton_BP_C::NonVr_InputOverride_Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.NonVr_InputOverride_Up");
		
		AMonitorButton_BP_C_NonVr_InputOverride_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorButton_BP.MonitorButton_BP_C.ExecuteUbergraph_MonitorButton_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonitorButton_BP_C::ExecuteUbergraph_MonitorButton_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorButton_BP.MonitorButton_BP_C.ExecuteUbergraph_MonitorButton_BP");
		
		AMonitorButton_BP_C_ExecuteUbergraph_MonitorButton_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMonitorButton_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMonitorButton_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MonitorButton_BP.MonitorButton_BP_C");
		return ptr;
	}

}


