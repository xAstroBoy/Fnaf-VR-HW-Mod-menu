/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "DLC_MonitorBoard_Office01_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PirateCoveCameraState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PirateCoveCameraBroke                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADLC_MonitorBoard_Office01_C::PirateCoveCameraState(bool PirateCoveCameraBroke)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PirateCoveCameraState");
		
		ADLC_MonitorBoard_Office01_C_PirateCoveCameraState_Params params {};
		params.PirateCoveCameraBroke = PirateCoveCameraBroke;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.SubscribeMonitorBtn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMonitorButton_BP_C*                         ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                BtnID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_MonitorBoard_Office01_C::SubscribeMonitorBtn(class AMonitorButton_BP_C* ItemToFind, int* BtnID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.SubscribeMonitorBtn");
		
		ADLC_MonitorBoard_Office01_C_SubscribeMonitorBtn_Params params {};
		params.ItemToFind = ItemToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BtnID != nullptr)
			*BtnID = params.BtnID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Timeline_0_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADLC_MonitorBoard_Office01_C::Timeline_0_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Timeline_0_0__FinishedFunc");
		
		ADLC_MonitorBoard_Office01_C_Timeline_0_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Timeline_0_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADLC_MonitorBoard_Office01_C::Timeline_0_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Timeline_0_0__UpdateFunc");
		
		ADLC_MonitorBoard_Office01_C_Timeline_0_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Event Btn Pressed
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMaterial*                                   CameraMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ARoomInfo_Bp_C*>                      Room                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UStaticMesh*                                 VentLight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFNAFCamera_Blueprint_C*                     FNAFCamera                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_MonitorBoard_Office01_C::Event_Btn_Pressed(int ID, bool Pressed, class UMaterial* CameraMaterial, TArray<class ARoomInfo_Bp_C*> Room, class UStaticMesh* VentLight, class AFNAFCamera_Blueprint_C* FNAFCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Event Btn Pressed");
		
		ADLC_MonitorBoard_Office01_C_Event_Btn_Pressed_Params params {};
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
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADLC_MonitorBoard_Office01_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ReceiveBeginPlay");
		
		ADLC_MonitorBoard_Office01_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.DisableMonitorInteractions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player_Won_Game                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADLC_MonitorBoard_Office01_C::DisableMonitorInteractions(bool Player_Won_Game)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.DisableMonitorInteractions");
		
		ADLC_MonitorBoard_Office01_C_DisableMonitorInteractions_Params params {};
		params.Player_Won_Game = Player_Won_Game;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_MonitorBoard_Office01_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ReceiveTick");
		
		ADLC_MonitorBoard_Office01_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.EventBtnInteractableIsHeld
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBeingHeld                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADLC_MonitorBoard_Office01_C::EventBtnInteractableIsHeld(bool IsBeingHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.EventBtnInteractableIsHeld");
		
		ADLC_MonitorBoard_Office01_C_EventBtnInteractableIsHeld_Params params {};
		params.IsBeingHeld = IsBeingHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Event Btn Interactable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLightBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsVentBtn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAudioBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsMusicBoxBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsRebootBtn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHeldDown                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADLC_MonitorBoard_Office01_C::Event_Btn_Interactable(bool IsLightBtn, bool IsVentBtn, bool IsAudioBtn, bool IsMusicBoxBtn, bool IsRebootBtn, bool IsHeldDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Event Btn Interactable");
		
		ADLC_MonitorBoard_Office01_C_Event_Btn_Interactable_Params params {};
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
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.RestartPower
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_MonitorBoard_Office01_C::RestartPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.RestartPower");
		
		ADLC_MonitorBoard_Office01_C_RestartPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerOutageHasOccured
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_MonitorBoard_Office01_C::PowerOutageHasOccured()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerOutageHasOccured");
		
		ADLC_MonitorBoard_Office01_C_PowerOutageHasOccured_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerRebooted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_MonitorBoard_Office01_C::PowerRebooted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerRebooted");
		
		ADLC_MonitorBoard_Office01_C_PowerRebooted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerOutageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_MonitorBoard_Office01_C::PowerOutageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerOutageEvent");
		
		ADLC_MonitorBoard_Office01_C_PowerOutageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.SetVisualStatic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EnableStatic                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADLC_MonitorBoard_Office01_C::SetVisualStatic(bool EnableStatic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.SetVisualStatic");
		
		ADLC_MonitorBoard_Office01_C_SetVisualStatic_Params params {};
		params.EnableStatic = EnableStatic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ExecuteUbergraph_DLC_MonitorBoard_Office01
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_MonitorBoard_Office01_C::ExecuteUbergraph_DLC_MonitorBoard_Office01(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ExecuteUbergraph_DLC_MonitorBoard_Office01");
		
		ADLC_MonitorBoard_Office01_C_ExecuteUbergraph_DLC_MonitorBoard_Office01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ADLC_MonitorBoard_Office01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADLC_MonitorBoard_Office01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C");
		return ptr;
	}

}


