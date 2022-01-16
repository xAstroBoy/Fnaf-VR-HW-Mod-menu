/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Office02_MotionControllerPawn_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.CheckIfLightIsOn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WasActive                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice02_MotionControllerPawn_C::CheckIfLightIsOn(bool* WasActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.CheckIfLightIsOn");
		
		AOffice02_MotionControllerPawn_C_CheckIfLightIsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasActive != nullptr)
			*WasActive = params.WasActive;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice02_MotionControllerPawn_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_2");
		
		AOffice02_MotionControllerPawn_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice02_MotionControllerPawn_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1");
		
		AOffice02_MotionControllerPawn_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_ZoomNonVR_K2Node_InputActionEvent_8
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice02_MotionControllerPawn_C::InpActEvt_ZoomNonVR_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_ZoomNonVR_K2Node_InputActionEvent_8");
		
		AOffice02_MotionControllerPawn_C_InpActEvt_ZoomNonVR_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_ZoomNonVR_K2Node_InputActionEvent_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice02_MotionControllerPawn_C::InpActEvt_ZoomNonVR_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_ZoomNonVR_K2Node_InputActionEvent_7");
		
		AOffice02_MotionControllerPawn_C_InpActEvt_ZoomNonVR_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Office2MaskGrab(NonVR)_K2Node_InputActionEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice02_MotionControllerPawn_C::InpActEvt_Office2MaskGrab_NonVR__K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Office2MaskGrab(NonVR)_K2Node_InputActionEvent_6");
		
		AOffice02_MotionControllerPawn_C_InpActEvt_Office2MaskGrab_NonVR__K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Office2MaskGrab(NonVR)_K2Node_InputActionEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice02_MotionControllerPawn_C::InpActEvt_Office2MaskGrab_NonVR__K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Office2MaskGrab(NonVR)_K2Node_InputActionEvent_5");
		
		AOffice02_MotionControllerPawn_C_InpActEvt_Office2MaskGrab_NonVR__K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Office2MusicBox(NonVR)_K2Node_InputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice02_MotionControllerPawn_C::InpActEvt_Office2MusicBox_NonVR__K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Office2MusicBox(NonVR)_K2Node_InputActionEvent_4");
		
		AOffice02_MotionControllerPawn_C_InpActEvt_Office2MusicBox_NonVR__K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Office2MusicBox(NonVR)_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice02_MotionControllerPawn_C::InpActEvt_Office2MusicBox_NonVR__K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Office2MusicBox(NonVR)_K2Node_InputActionEvent_3");
		
		AOffice02_MotionControllerPawn_C_InpActEvt_Office2MusicBox_NonVR__K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Office2BoardLight(NonVR)_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice02_MotionControllerPawn_C::InpActEvt_Office2BoardLight_NonVR__K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Office2BoardLight(NonVR)_K2Node_InputActionEvent_2");
		
		AOffice02_MotionControllerPawn_C_InpActEvt_Office2BoardLight_NonVR__K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Office2BoardLight(NonVR)_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice02_MotionControllerPawn_C::InpActEvt_Office2BoardLight_NonVR__K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.InpActEvt_Office2BoardLight(NonVR)_K2Node_InputActionEvent_1");
		
		AOffice02_MotionControllerPawn_C_InpActEvt_Office2BoardLight_NonVR__K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice02_MotionControllerPawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.ReceiveBeginPlay");
		
		AOffice02_MotionControllerPawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_MotionControllerPawn_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.ReceiveTick");
		
		AOffice02_MotionControllerPawn_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.CheckForGamePad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_MotionControllerPawn_C::CheckForGamePad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.CheckForGamePad");
		
		AOffice02_MotionControllerPawn_C_CheckForGamePad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.NonVR_MaskZoomFocus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetFocus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice02_MotionControllerPawn_C::NonVR_MaskZoomFocus(bool SetFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.NonVR_MaskZoomFocus");
		
		AOffice02_MotionControllerPawn_C_NonVR_MaskZoomFocus_Params params {};
		params.SetFocus = SetFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.ZoomInteractOverrideEngage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_MotionControllerPawn_C::ZoomInteractOverrideEngage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.ZoomInteractOverrideEngage");
		
		AOffice02_MotionControllerPawn_C_ZoomInteractOverrideEngage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.ForceLeanToStop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_MotionControllerPawn_C::ForceLeanToStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.ForceLeanToStop");
		
		AOffice02_MotionControllerPawn_C_ForceLeanToStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.ZoomInteractOverideRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_MotionControllerPawn_C::ZoomInteractOverideRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.ZoomInteractOverideRelease");
		
		AOffice02_MotionControllerPawn_C_ZoomInteractOverideRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.NonVR_OnPlayerJumpscare
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player_Won_Game                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice02_MotionControllerPawn_C::NonVR_OnPlayerJumpscare(bool Player_Won_Game)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.NonVR_OnPlayerJumpscare");
		
		AOffice02_MotionControllerPawn_C_NonVR_OnPlayerJumpscare_Params params {};
		params.Player_Won_Game = Player_Won_Game;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.ExecuteUbergraph_Office02_MotionControllerPawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_MotionControllerPawn_C::ExecuteUbergraph_Office02_MotionControllerPawn(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_MotionControllerPawn.Office02_MotionControllerPawn_C.ExecuteUbergraph_Office02_MotionControllerPawn");
		
		AOffice02_MotionControllerPawn_C_ExecuteUbergraph_Office02_MotionControllerPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice02_MotionControllerPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice02_MotionControllerPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office02_MotionControllerPawn.Office02_MotionControllerPawn_C");
		return ptr;
	}

}


