/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office03_MonitorBoard_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.NonVR_StoringMonitorInteractions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int                                                ReturnButtonID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice03_MonitorBoard_BP_C::NonVR_StoringMonitorInteractions(bool IsVent, int* ReturnButtonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.NonVR_StoringMonitorInteractions");
		
		AOffice03_MonitorBoard_BP_C_NonVR_StoringMonitorInteractions_Params params {};
		params.IsVent = IsVent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnButtonID != nullptr)
			*ReturnButtonID = params.ReturnButtonID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.DisableCoin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::DisableCoin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.DisableCoin");
		
		AOffice03_MonitorBoard_BP_C_DisableCoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.EnableCoin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::EnableCoin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.EnableCoin");
		
		AOffice03_MonitorBoard_BP_C_EnableCoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.TurnOffVentLights
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::TurnOffVentLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.TurnOffVentLights");
		
		AOffice03_MonitorBoard_BP_C_TurnOffVentLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.UpdateVentLights
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::UpdateVentLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.UpdateVentLights");
		
		AOffice03_MonitorBoard_BP_C_UpdateVentLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.GetLockedVentInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FOffice03_VentRoomLockOff_struct>    BlockedRooms                                               (Parm, OutParm, ZeroConstructor)
	 */
	void AOffice03_MonitorBoard_BP_C::GetLockedVentInfo(TArray<struct FOffice03_VentRoomLockOff_struct>* BlockedRooms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.GetLockedVentInfo");
		
		AOffice03_MonitorBoard_BP_C_GetLockedVentInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlockedRooms != nullptr)
			*BlockedRooms = params.BlockedRooms;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.PhantomAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::PhantomAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.PhantomAttack");
		
		AOffice03_MonitorBoard_BP_C_PhantomAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.TriggerVentilation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::TriggerVentilation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.TriggerVentilation");
		
		AOffice03_MonitorBoard_BP_C_TriggerVentilation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootVentilation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::RebootVentilation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootVentilation");
		
		AOffice03_MonitorBoard_BP_C_RebootVentilation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootCameras
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::RebootCameras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootCameras");
		
		AOffice03_MonitorBoard_BP_C_RebootCameras_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::RebootAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootAudio");
		
		AOffice03_MonitorBoard_BP_C_RebootAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.AudioDelay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice03_MonitorBoard_BP_C::AudioDelay(float NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.AudioDelay");
		
		AOffice03_MonitorBoard_BP_C_AudioDelay_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.OpenVent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::OpenVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.OpenVent");
		
		AOffice03_MonitorBoard_BP_C_OpenVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ClosingVent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::ClosingVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ClosingVent");
		
		AOffice03_MonitorBoard_BP_C_ClosingVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Timeline_0__FinishedFunc");
		
		AOffice03_MonitorBoard_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Timeline_0__UpdateFunc");
		
		AOffice03_MonitorBoard_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ReceiveBeginPlay");
		
		AOffice03_MonitorBoard_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Event Btn Pressed
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMaterial*                                   CameraMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ARoomInfo_Bp_C*>                      Room                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UStaticMesh*                                 VentLight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFNAFCamera_Blueprint_C*                     FNAFCamera                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice03_MonitorBoard_BP_C::Event_Btn_Pressed(int ID, bool Pressed, class UMaterial* CameraMaterial, TArray<class ARoomInfo_Bp_C*> Room, class UStaticMesh* VentLight, class AFNAFCamera_Blueprint_C* FNAFCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Event Btn Pressed");
		
		AOffice03_MonitorBoard_BP_C_Event_Btn_Pressed_Params params {};
		params.ID = ID;
		params.Pressed = Pressed;
		params.CameraMaterial = CameraMaterial;
		params.Room = Room;
		params.VentLight = VentLight;
		params.FNAFCamera = FNAFCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Event Btn Interactable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLightBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsVentBtn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAudioBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsMusicBoxBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsRebootBtn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHeldDown                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice03_MonitorBoard_BP_C::Event_Btn_Interactable(bool IsLightBtn, bool IsVentBtn, bool IsAudioBtn, bool IsMusicBoxBtn, bool IsRebootBtn, bool IsHeldDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Event Btn Interactable");
		
		AOffice03_MonitorBoard_BP_C_Event_Btn_Interactable_Params params {};
		params.IsLightBtn = IsLightBtn;
		params.IsVentBtn = IsVentBtn;
		params.IsAudioBtn = IsAudioBtn;
		params.IsMusicBoxBtn = IsMusicBoxBtn;
		params.IsRebootBtn = IsRebootBtn;
		params.IsHeldDown = IsHeldDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice03_MonitorBoard_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ReceiveTick");
		
		AOffice03_MonitorBoard_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentilationDamaged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::VentilationDamaged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentilationDamaged");
		
		AOffice03_MonitorBoard_BP_C_VentilationDamaged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Flash Alarm Light
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::Flash_Alarm_Light()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Flash Alarm Light");
		
		AOffice03_MonitorBoard_BP_C_Flash_Alarm_Light_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RandomPhantomAttacks
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::RandomPhantomAttacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RandomPhantomAttacks");
		
		AOffice03_MonitorBoard_BP_C_RandomPhantomAttacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.AttackTrigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::AttackTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.AttackTrigger");
		
		AOffice03_MonitorBoard_BP_C_AttackTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentTriggerToAccelerateSpringtrap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_MonitorBoard_BP_C::VentTriggerToAccelerateSpringtrap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentTriggerToAccelerateSpringtrap");
		
		AOffice03_MonitorBoard_BP_C_VentTriggerToAccelerateSpringtrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.SetVisualStatic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EnableStatic                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice03_MonitorBoard_BP_C::SetVisualStatic(bool EnableStatic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.SetVisualStatic");
		
		AOffice03_MonitorBoard_BP_C_SetVisualStatic_Params params {};
		params.EnableStatic = EnableStatic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ZoomInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASaul_MotionControllerPawn_C*                MotionControllerPawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Hit_Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice03_MonitorBoard_BP_C::ZoomInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class USceneComponent* Hit_Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ZoomInteract");
		
		AOffice03_MonitorBoard_BP_C_ZoomInteract_Params params {};
		params.MotionControllerPawn = MotionControllerPawn;
		params.HitActor = HitActor;
		params.Hit_Component = Hit_Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VoiceButtonChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Pressed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice03_MonitorBoard_BP_C::VoiceButtonChange(bool Is_Pressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VoiceButtonChange");
		
		AOffice03_MonitorBoard_BP_C_VoiceButtonChange_Params params {};
		params.Is_Pressed = Is_Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentButtonChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Pressed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice03_MonitorBoard_BP_C::VentButtonChange(bool Is_Pressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentButtonChange");
		
		AOffice03_MonitorBoard_BP_C_VentButtonChange_Params params {};
		params.Is_Pressed = Is_Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ExecuteUbergraph_Office03_MonitorBoard_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice03_MonitorBoard_BP_C::ExecuteUbergraph_Office03_MonitorBoard_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ExecuteUbergraph_Office03_MonitorBoard_BP");
		
		AOffice03_MonitorBoard_BP_C_ExecuteUbergraph_Office03_MonitorBoard_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice03_MonitorBoard_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice03_MonitorBoard_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C");
		return ptr;
	}

}


