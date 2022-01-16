/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Office02_MonitorBoard_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_MonitorBoard_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Timeline_0__FinishedFunc");
		
		AOffice02_MonitorBoard_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_MonitorBoard_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Timeline_0__UpdateFunc");
		
		AOffice02_MonitorBoard_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Pressed
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMaterial*                                   CameraMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ARoomInfo_Bp_C*>                      Room                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UStaticMesh*                                 VentLight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFNAFCamera_Blueprint_C*                     FNAFCamera                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_MonitorBoard_BP_C::Event_Btn_Pressed(int ID, bool Pressed, class UMaterial* CameraMaterial, TArray<class ARoomInfo_Bp_C*> Room, class UStaticMesh* VentLight, class AFNAFCamera_Blueprint_C* FNAFCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Pressed");
		
		AOffice02_MonitorBoard_BP_C_Event_Btn_Pressed_Params params {};
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
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Interactable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLightBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsVentBtn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAudioBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsMusicBoxBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsRebootBtn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHeldDown                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice02_MonitorBoard_BP_C::Event_Btn_Interactable(bool IsLightBtn, bool IsVentBtn, bool IsAudioBtn, bool IsMusicBoxBtn, bool IsRebootBtn, bool IsHeldDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Interactable");
		
		AOffice02_MonitorBoard_BP_C_Event_Btn_Interactable_Params params {};
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
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Interactable Is Held
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBeingHeld                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice02_MonitorBoard_BP_C::Event_Btn_Interactable_Is_Held(bool IsBeingHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Interactable Is Held");
		
		AOffice02_MonitorBoard_BP_C_Event_Btn_Interactable_Is_Held_Params params {};
		params.IsBeingHeld = IsBeingHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_MonitorBoard_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ReceiveTick");
		
		AOffice02_MonitorBoard_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.EventMusicBoxCountDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_MonitorBoard_BP_C::EventMusicBoxCountDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.EventMusicBoxCountDown");
		
		AOffice02_MonitorBoard_BP_C_EventMusicBoxCountDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice02_MonitorBoard_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ReceiveBeginPlay");
		
		AOffice02_MonitorBoard_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Office02_Lights_Disabled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_MonitorBoard_BP_C::Event_Office02_Lights_Disabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Office02_Lights_Disabled");
		
		AOffice02_MonitorBoard_BP_C_Event_Office02_Lights_Disabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.DisableAllLightFunctions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_MonitorBoard_BP_C::DisableAllLightFunctions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.DisableAllLightFunctions");
		
		AOffice02_MonitorBoard_BP_C_DisableAllLightFunctions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.EnableFreddyStaticOverride
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_MonitorBoard_BP_C::EnableFreddyStaticOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.EnableFreddyStaticOverride");
		
		AOffice02_MonitorBoard_BP_C_EnableFreddyStaticOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.DisableFreddyStaticOverride
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_MonitorBoard_BP_C::DisableFreddyStaticOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.DisableFreddyStaticOverride");
		
		AOffice02_MonitorBoard_BP_C_DisableFreddyStaticOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.LightbuttonHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Pressed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice02_MonitorBoard_BP_C::LightbuttonHit(bool Is_Pressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.LightbuttonHit");
		
		AOffice02_MonitorBoard_BP_C_LightbuttonHit_Params params {};
		params.Is_Pressed = Is_Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.MusicbuttonHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Pressed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice02_MonitorBoard_BP_C::MusicbuttonHit(bool Is_Pressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.MusicbuttonHit");
		
		AOffice02_MonitorBoard_BP_C_MusicbuttonHit_Params params {};
		params.Is_Pressed = Is_Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.NonVR_HeldDownByPassMusicRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_MonitorBoard_BP_C::NonVR_HeldDownByPassMusicRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.NonVR_HeldDownByPassMusicRelease");
		
		AOffice02_MonitorBoard_BP_C_NonVR_HeldDownByPassMusicRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ExecuteUbergraph_Office02_MonitorBoard_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_MonitorBoard_BP_C::ExecuteUbergraph_Office02_MonitorBoard_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ExecuteUbergraph_Office02_MonitorBoard_BP");
		
		AOffice02_MonitorBoard_BP_C_ExecuteUbergraph_Office02_MonitorBoard_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice02_MonitorBoard_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice02_MonitorBoard_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C");
		return ptr;
	}

}


