/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MonitorBoard_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorBoard_BP.MonitorBoard_BP_C.InitializeClock
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorBoard_BP_C::InitializeClock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.InitializeClock");
		
		AMonitorBoard_BP_C_InitializeClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorBoard_BP.MonitorBoard_BP_C.ArrayOfBtnStateFunction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorBoard_BP_C::ArrayOfBtnStateFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.ArrayOfBtnStateFunction");
		
		AMonitorBoard_BP_C_ArrayOfBtnStateFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorBoard_BP.MonitorBoard_BP_C.SubscribeMonitorBtn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMonitorButton_BP_C*                         ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                BtnID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonitorBoard_BP_C::SubscribeMonitorBtn(class AMonitorButton_BP_C* ItemToFind, int* BtnID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.SubscribeMonitorBtn");
		
		AMonitorBoard_BP_C_SubscribeMonitorBtn_Params params {};
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
	 * 		Name   -> Function MonitorBoard_BP.MonitorBoard_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorBoard_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.UserConstructionScript");
		
		AMonitorBoard_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Pressed
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMaterial*                                   CameraMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ARoomInfo_Bp_C*>                      Room                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UStaticMesh*                                 VentLight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFNAFCamera_Blueprint_C*                     FNAFCamera                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonitorBoard_BP_C::Event_Btn_Pressed(int ID, bool Pressed, class UMaterial* CameraMaterial, TArray<class ARoomInfo_Bp_C*> Room, class UStaticMesh* VentLight, class AFNAFCamera_Blueprint_C* FNAFCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Pressed");
		
		AMonitorBoard_BP_C_Event_Btn_Pressed_Params params {};
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
	 * 		Name   -> Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Interactable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLightBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsVentBtn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAudioBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsMusicBoxBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsRebootBtn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHeldDown                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMonitorBoard_BP_C::Event_Btn_Interactable(bool IsLightBtn, bool IsVentBtn, bool IsAudioBtn, bool IsMusicBoxBtn, bool IsRebootBtn, bool IsHeldDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Interactable");
		
		AMonitorBoard_BP_C_Event_Btn_Interactable_Params params {};
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
	 * 		Name   -> Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Interactable Is Held
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBeingHeld                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMonitorBoard_BP_C::Event_Btn_Interactable_Is_Held(bool IsBeingHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Interactable Is Held");
		
		AMonitorBoard_BP_C_Event_Btn_Interactable_Is_Held_Params params {};
		params.IsBeingHeld = IsBeingHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorBoard_BP.MonitorBoard_BP_C.LevelWon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMonitorBoard_BP_C::LevelWon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.LevelWon");
		
		AMonitorBoard_BP_C_LevelWon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorBoard_BP.MonitorBoard_BP_C.SetVisualStatic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EnableStatic                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMonitorBoard_BP_C::SetVisualStatic(bool EnableStatic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.SetVisualStatic");
		
		AMonitorBoard_BP_C_SetVisualStatic_Params params {};
		params.EnableStatic = EnableStatic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorBoard_BP.MonitorBoard_BP_C.CharacterStartingMove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOfficeAiBase_Bp_C*                          OfficeAI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonitorBoard_BP_C::CharacterStartingMove(class AOfficeAiBase_Bp_C* OfficeAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.CharacterStartingMove");
		
		AMonitorBoard_BP_C_CharacterStartingMove_Params params {};
		params.OfficeAI = OfficeAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorBoard_BP.MonitorBoard_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMonitorBoard_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.ReceiveBeginPlay");
		
		AMonitorBoard_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorBoard_BP.MonitorBoard_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonitorBoard_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.ReceiveTick");
		
		AMonitorBoard_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MonitorBoard_BP.MonitorBoard_BP_C.ExecuteUbergraph_MonitorBoard_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonitorBoard_BP_C::ExecuteUbergraph_MonitorBoard_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.ExecuteUbergraph_MonitorBoard_BP");
		
		AMonitorBoard_BP_C_ExecuteUbergraph_MonitorBoard_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMonitorBoard_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMonitorBoard_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MonitorBoard_BP.MonitorBoard_BP_C");
		return ptr;
	}

}


