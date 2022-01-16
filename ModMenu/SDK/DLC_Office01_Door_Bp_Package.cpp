/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "DLC_Office01_Door_Bp_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.NonVR_WidgetVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHidden_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADLC_Office01_Door_Bp_C::NonVR_WidgetVisibility(bool IsHidden_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.NonVR_WidgetVisibility");
		
		ADLC_Office01_Door_Bp_C_NonVR_WidgetVisibility_Params params {};
		params.IsHidden_ = IsHidden_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.Timeline_1__FinishedFunc");
		
		ADLC_Office01_Door_Bp_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.Timeline_1__UpdateFunc");
		
		ADLC_Office01_Door_Bp_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.Timeline_0__FinishedFunc");
		
		ADLC_Office01_Door_Bp_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.Timeline_0__UpdateFunc");
		
		ADLC_Office01_Door_Bp_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Q_K2Node_InputKeyEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ADLC_Office01_Door_Bp_C::InpActEvt_Q_K2Node_InputKeyEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Q_K2Node_InputKeyEvent_5");
		
		ADLC_Office01_Door_Bp_C_InpActEvt_Q_K2Node_InputKeyEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ADLC_Office01_Door_Bp_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_4");
		
		ADLC_Office01_Door_Bp_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ADLC_Office01_Door_Bp_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3");
		
		ADLC_Office01_Door_Bp_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ADLC_Office01_Door_Bp_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2");
		
		ADLC_Office01_Door_Bp_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ADLC_Office01_Door_Bp_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1");
		
		ADLC_Office01_Door_Bp_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ADLC_Office01_Door_Bp_C::BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ADLC_Office01_Door_Bp_C_BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_Office01_Door_Bp_C::BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ADLC_Office01_Door_Bp_C_BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ADLC_Office01_Door_Bp_C::BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
		
		ADLC_Office01_Door_Bp_C_BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_Office01_Door_Bp_C::BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");
		
		ADLC_Office01_Door_Bp_C_BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_Office01_Door_Bp_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.ReceiveTick");
		
		ADLC_Office01_Door_Bp_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.ToggleSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::ToggleSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.ToggleSound");
		
		ADLC_Office01_Door_Bp_C_ToggleSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.ReceiveBeginPlay");
		
		ADLC_Office01_Door_Bp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.DisableDoorInteraction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::DisableDoorInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.DisableDoorInteraction");
		
		ADLC_Office01_Door_Bp_C_DisableDoorInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.OnPadDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::OnPadDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.OnPadDoor");
		
		ADLC_Office01_Door_Bp_C_OnPadDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.OnPadLights
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::OnPadLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.OnPadLights");
		
		ADLC_Office01_Door_Bp_C_OnPadLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.DoorImapctEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Office01_Doors_EOffice01_Doors                     LeftSide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_Office01_Door_Bp_C::DoorImapctEvent(Office01_Doors_EOffice01_Doors LeftSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.DoorImapctEvent");
		
		ADLC_Office01_Door_Bp_C_DoorImapctEvent_Params params {};
		params.LeftSide = LeftSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.FlashBeaconLight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::FlashBeaconLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.FlashBeaconLight");
		
		ADLC_Office01_Door_Bp_C_FlashBeaconLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.PowerOutageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::PowerOutageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.PowerOutageEvent");
		
		ADLC_Office01_Door_Bp_C_PowerOutageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.RebootPowerEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::RebootPowerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.RebootPowerEvent");
		
		ADLC_Office01_Door_Bp_C_RebootPowerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BeaconCooldown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::BeaconCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BeaconCooldown");
		
		ADLC_Office01_Door_Bp_C_BeaconCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BeaconRecharged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::BeaconRecharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BeaconRecharged");
		
		ADLC_Office01_Door_Bp_C_BeaconRecharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.NonVRLightBypass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_Door_Bp_C::NonVRLightBypass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.NonVRLightBypass");
		
		ADLC_Office01_Door_Bp_C_NonVRLightBypass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.OnNonVRLineTraceInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASaul_MotionControllerPawn_C*                MotionControllerPawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Hit_Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_Office01_Door_Bp_C::OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.OnNonVRLineTraceInteract");
		
		ADLC_Office01_Door_Bp_C_OnNonVRLineTraceInteract_Params params {};
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
	 * 		Name   -> Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.ExecuteUbergraph_DLC_Office01_Door_Bp
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_Office01_Door_Bp_C::ExecuteUbergraph_DLC_Office01_Door_Bp(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.ExecuteUbergraph_DLC_Office01_Door_Bp");
		
		ADLC_Office01_Door_Bp_C_ExecuteUbergraph_DLC_Office01_Door_Bp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ADLC_Office01_Door_Bp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADLC_Office01_Door_Bp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C");
		return ptr;
	}

}


