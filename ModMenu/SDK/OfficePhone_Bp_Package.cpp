/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "OfficePhone_Bp_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.UserConstructionScript");
		
		AOfficePhone_Bp_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneButtonPulse__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::PhoneButtonPulse__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneButtonPulse__FinishedFunc");
		
		AOfficePhone_Bp_C_PhoneButtonPulse__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneButtonPulse__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::PhoneButtonPulse__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneButtonPulse__UpdateFunc");
		
		AOfficePhone_Bp_C_PhoneButtonPulse__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.ReceiveBeginPlay");
		
		AOfficePhone_Bp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficePhone_Bp_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.ReceiveTick");
		
		AOfficePhone_Bp_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__MuteCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AOfficePhone_Bp_C::BndEvt__MuteCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__MuteCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		AOfficePhone_Bp_C_BndEvt__MuteCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneHasBeenGrabbed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::PhoneHasBeenGrabbed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneHasBeenGrabbed");
		
		AOfficePhone_Bp_C_PhoneHasBeenGrabbed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.ObjectHasBeenDropped_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::ObjectHasBeenDropped_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.ObjectHasBeenDropped_Event_1");
		
		AOfficePhone_Bp_C_ObjectHasBeenDropped_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AOfficePhone_Bp_C::BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		AOfficePhone_Bp_C_BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficePhone_Bp_C::BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");
		
		AOfficePhone_Bp_C_BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.OnAudioPlayback_AudioSpeaker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlaybackPercent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficePhone_Bp_C::OnAudioPlayback_AudioSpeaker(class USoundWave* PlayingSoundWave, float PlaybackPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.OnAudioPlayback_AudioSpeaker");
		
		AOfficePhone_Bp_C_OnAudioPlayback_AudioSpeaker_Params params {};
		params.PlayingSoundWave = PlayingSoundWave;
		params.PlaybackPercent = PlaybackPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.ResetDoOnces
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::ResetDoOnces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.ResetDoOnces");
		
		AOfficePhone_Bp_C_ResetDoOnces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneFellIntoZone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::PhoneFellIntoZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneFellIntoZone");
		
		AOfficePhone_Bp_C_PhoneFellIntoZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.ShutOffPhone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player_Won_Game                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOfficePhone_Bp_C::ShutOffPhone(bool Player_Won_Game)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.ShutOffPhone");
		
		AOfficePhone_Bp_C_ShutOffPhone_Params params {};
		params.Player_Won_Game = Player_Won_Game;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.SpeakerOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::SpeakerOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.SpeakerOn");
		
		AOfficePhone_Bp_C_SpeakerOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.SpeakerOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::SpeakerOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.SpeakerOff");
		
		AOfficePhone_Bp_C_SpeakerOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__SpeakerCollider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AOfficePhone_Bp_C::BndEvt__SpeakerCollider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__SpeakerCollider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
		
		AOfficePhone_Bp_C_BndEvt__SpeakerCollider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.TriggerButtomPulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::TriggerButtomPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.TriggerButtomPulse");
		
		AOfficePhone_Bp_C_TriggerButtomPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.TurnOffPhoneButtons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::TurnOffPhoneButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.TurnOffPhoneButtons");
		
		AOfficePhone_Bp_C_TurnOffPhoneButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.StopButtonPulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::StopButtonPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.StopButtonPulse");
		
		AOfficePhone_Bp_C_StopButtonPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.TriggerClitch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::TriggerClitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.TriggerClitch");
		
		AOfficePhone_Bp_C_TriggerClitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.ExecuteUbergraph_OfficePhone_Bp
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOfficePhone_Bp_C::ExecuteUbergraph_OfficePhone_Bp(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.ExecuteUbergraph_OfficePhone_Bp");
		
		AOfficePhone_Bp_C_ExecuteUbergraph_OfficePhone_Bp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.Released__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.Released__DelegateSignature");
		
		AOfficePhone_Bp_C_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficePhone_Bp.OfficePhone_Bp_C.Grabbed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOfficePhone_Bp_C::Grabbed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficePhone_Bp.OfficePhone_Bp_C.Grabbed__DelegateSignature");
		
		AOfficePhone_Bp_C_Grabbed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOfficePhone_Bp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOfficePhone_Bp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OfficePhone_Bp.OfficePhone_Bp_C");
		return ptr;
	}

}


