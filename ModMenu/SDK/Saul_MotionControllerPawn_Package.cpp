/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Saul_MotionControllerPawn_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UpdateControllerDevice
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::UpdateControllerDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UpdateControllerDevice");
		
		ASaul_MotionControllerPawn_C_UpdateControllerDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.SetupWidgetInteraction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::SetupWidgetInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.SetupWidgetInteraction");
		
		ASaul_MotionControllerPawn_C_SetupWidgetInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR Set Camera Array
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::NonVR_Set_Camera_Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR Set Camera Array");
		
		ASaul_MotionControllerPawn_C_NonVR_Set_Camera_Array_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR Update Camera Array
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::NonVR_Update_Camera_Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR Update Camera Array");
		
		ASaul_MotionControllerPawn_C_NonVR_Update_Camera_Array_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.AttemptEat
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorToEat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::AttemptEat(class AActor* ActorToEat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.AttemptEat");
		
		ASaul_MotionControllerPawn_C_AttemptEat_Params params {};
		params.ActorToEat = ActorToEat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVRLook
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Horizontal_Axis                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Vertical_Axis                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveFloat*                                 Speed_curve                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::NonVRLook(float Horizontal_Axis, float Vertical_Axis, class UCurveFloat* Speed_curve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVRLook");
		
		ASaul_MotionControllerPawn_C_NonVRLook_Params params {};
		params.Horizontal_Axis = Horizontal_Axis;
		params.Vertical_Axis = Vertical_Axis;
		params.Speed_curve = Speed_curve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.PopUpUI Handler
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      WidgetToSpawn                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::PopUpUI_Handler(class UClass** WidgetToSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.PopUpUI Handler");
		
		ASaul_MotionControllerPawn_C_PopUpUI_Handler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WidgetToSpawn != nullptr)
			*WidgetToSpawn = params.WidgetToSpawn;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.SetupNonVRAttachPoints
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::SetupNonVRAttachPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.SetupNonVRAttachPoints");
		
		ASaul_MotionControllerPawn_C_SetupNonVRAttachPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnPauseGame NonVR
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::UnPauseGame_NonVR()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnPauseGame NonVR");
		
		ASaul_MotionControllerPawn_C_UnPauseGame_NonVR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.PauseGame NonVR
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::PauseGame_NonVR()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.PauseGame NonVR");
		
		ASaul_MotionControllerPawn_C_PauseGame_NonVR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVRLineTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     End                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	bool ASaul_MotionControllerPawn_C::NonVRLineTrace(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVRLineTrace");
		
		ASaul_MotionControllerPawn_C_NonVRLineTrace_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.CheckCoinsAchievement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::CheckCoinsAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.CheckCoinsAchievement");
		
		ASaul_MotionControllerPawn_C_CheckCoinsAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Reset Player Rotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Reset_Player_Rotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Reset Player Rotation");
		
		ASaul_MotionControllerPawn_C_Reset_Player_Rotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Set Player Rotation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Subtract_Roation_Value                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::Set_Player_Rotation(float Subtract_Roation_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Set Player Rotation");
		
		ASaul_MotionControllerPawn_C_Set_Player_Rotation_Params params {};
		params.Subtract_Roation_Value = Subtract_Roation_Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ToggleIngameMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::ToggleIngameMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ToggleIngameMenu");
		
		ASaul_MotionControllerPawn_C_ToggleIngameMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GetHeadTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	struct FTransform ASaul_MotionControllerPawn_C::GetHeadTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GetHeadTransform");
		
		ASaul_MotionControllerPawn_C_GetHeadTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TeleportCheck
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RightHand                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TeleportSpotFound                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TeleportLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    TeleportRotation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Set_player_rotation_to_Collision                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASaul_MotionControllerPawn_C::TeleportCheck(bool RightHand, bool* TeleportSpotFound, struct FVector* TeleportLocation, struct FRotator* TeleportRotation, bool* Set_player_rotation_to_Collision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TeleportCheck");
		
		ASaul_MotionControllerPawn_C_TeleportCheck_Params params {};
		params.RightHand = RightHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeleportSpotFound != nullptr)
			*TeleportSpotFound = params.TeleportSpotFound;
		if (TeleportLocation != nullptr)
			*TeleportLocation = params.TeleportLocation;
		if (TeleportRotation != nullptr)
			*TeleportRotation = params.TeleportRotation;
		if (Set_player_rotation_to_Collision != nullptr)
			*Set_player_rotation_to_Collision = params.Set_player_rotation_to_Collision;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ToggleMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::ToggleMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ToggleMenu");
		
		ASaul_MotionControllerPawn_C_ToggleMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Game Mode Ref
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFNAFGM_FlashlightGame_C*                    Game_Mode_Ref                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::Game_Mode_Ref(class AFNAFGM_FlashlightGame_C** Game_Mode_Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Game Mode Ref");
		
		ASaul_MotionControllerPawn_C_Game_Mode_Ref_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Game_Mode_Ref != nullptr)
			*Game_Mode_Ref = params.Game_Mode_Ref;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UserConstructionScript");
		
		ASaul_MotionControllerPawn_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_K2Node_InputActionEvent_45
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::Action_K2Node_InputActionEvent_45(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_K2Node_InputActionEvent_45");
		
		ASaul_MotionControllerPawn_C_Action_K2Node_InputActionEvent_45_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_K2Node_InputActionEvent_44
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::Action_K2Node_InputActionEvent_44(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_K2Node_InputActionEvent_44");
		
		ASaul_MotionControllerPawn_C_Action_K2Node_InputActionEvent_44_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_6");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_ZoomNonVR_K2Node_InputActionEvent_43
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_ZoomNonVR_K2Node_InputActionEvent_43(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_ZoomNonVR_K2Node_InputActionEvent_43");
		
		ASaul_MotionControllerPawn_C_InpActEvt_ZoomNonVR_K2Node_InputActionEvent_43_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_ZoomNonVR_K2Node_InputActionEvent_42
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_ZoomNonVR_K2Node_InputActionEvent_42(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_ZoomNonVR_K2Node_InputActionEvent_42");
		
		ASaul_MotionControllerPawn_C_InpActEvt_ZoomNonVR_K2Node_InputActionEvent_42_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_CameraToggleNonVR_K2Node_InputActionEvent_41
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_CameraToggleNonVR_K2Node_InputActionEvent_41(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_CameraToggleNonVR_K2Node_InputActionEvent_41");
		
		ASaul_MotionControllerPawn_C_InpActEvt_CameraToggleNonVR_K2Node_InputActionEvent_41_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_40
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_GrabLeft_K2Node_InputActionEvent_40(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_40");
		
		ASaul_MotionControllerPawn_C_InpActEvt_GrabLeft_K2Node_InputActionEvent_40_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_39
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_GrabLeft_K2Node_InputActionEvent_39(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_39");
		
		ASaul_MotionControllerPawn_C_InpActEvt_GrabLeft_K2Node_InputActionEvent_39_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabRight_K2Node_InputActionEvent_38
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_GrabRight_K2Node_InputActionEvent_38(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabRight_K2Node_InputActionEvent_38");
		
		ASaul_MotionControllerPawn_C_InpActEvt_GrabRight_K2Node_InputActionEvent_38_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabRight_K2Node_InputActionEvent_37
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_GrabRight_K2Node_InputActionEvent_37(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabRight_K2Node_InputActionEvent_37");
		
		ASaul_MotionControllerPawn_C_InpActEvt_GrabRight_K2Node_InputActionEvent_37_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DS4LaunchGrabbable_K2Node_InputActionEvent_36
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_DS4LaunchGrabbable_K2Node_InputActionEvent_36(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DS4LaunchGrabbable_K2Node_InputActionEvent_36");
		
		ASaul_MotionControllerPawn_C_InpActEvt_DS4LaunchGrabbable_K2Node_InputActionEvent_36_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Eating(NonVR)_K2Node_InputActionEvent_35
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Eating_NonVR__K2Node_InputActionEvent_35(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Eating(NonVR)_K2Node_InputActionEvent_35");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Eating_NonVR__K2Node_InputActionEvent_35_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_TeleportRight_K2Node_InputActionEvent_34
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_TeleportRight_K2Node_InputActionEvent_34(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_TeleportRight_K2Node_InputActionEvent_34");
		
		ASaul_MotionControllerPawn_C_InpActEvt_TeleportRight_K2Node_InputActionEvent_34_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_TeleportLeft_K2Node_InputActionEvent_33
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_TeleportLeft_K2Node_InputActionEvent_33(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_TeleportLeft_K2Node_InputActionEvent_33");
		
		ASaul_MotionControllerPawn_C_InpActEvt_TeleportLeft_K2Node_InputActionEvent_33_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadRight_K2Node_InputActionEvent_32
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_DpadRight_K2Node_InputActionEvent_32(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadRight_K2Node_InputActionEvent_32");
		
		ASaul_MotionControllerPawn_C_InpActEvt_DpadRight_K2Node_InputActionEvent_32_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadLeft_K2Node_InputActionEvent_31
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_DpadLeft_K2Node_InputActionEvent_31(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadLeft_K2Node_InputActionEvent_31");
		
		ASaul_MotionControllerPawn_C_InpActEvt_DpadLeft_K2Node_InputActionEvent_31_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Enter_K2Node_InputActionEvent_30
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Enter_K2Node_InputActionEvent_30(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Enter_K2Node_InputActionEvent_30");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Enter_K2Node_InputActionEvent_30_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadDown_K2Node_InputActionEvent_29
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_DpadDown_K2Node_InputActionEvent_29(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadDown_K2Node_InputActionEvent_29");
		
		ASaul_MotionControllerPawn_C_InpActEvt_DpadDown_K2Node_InputActionEvent_29_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadUP_K2Node_InputActionEvent_28
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_DpadUP_K2Node_InputActionEvent_28(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadUP_K2Node_InputActionEvent_28");
		
		ASaul_MotionControllerPawn_C_InpActEvt_DpadUP_K2Node_InputActionEvent_28_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_A3749E2849210D45C3F9C580BD7FB1C1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::OnFailure_A3749E2849210D45C3F9C580BD7FB1C1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_A3749E2849210D45C3F9C580BD7FB1C1");
		
		ASaul_MotionControllerPawn_C_OnFailure_A3749E2849210D45C3F9C580BD7FB1C1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_A3749E2849210D45C3F9C580BD7FB1C1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::OnSuccess_A3749E2849210D45C3F9C580BD7FB1C1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_A3749E2849210D45C3F9C580BD7FB1C1");
		
		ASaul_MotionControllerPawn_C_OnSuccess_A3749E2849210D45C3F9C580BD7FB1C1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_036BF64B4E92FD57AA8116A301BCE7E3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::OnFailure_036BF64B4E92FD57AA8116A301BCE7E3(const class FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_036BF64B4E92FD57AA8116A301BCE7E3");
		
		ASaul_MotionControllerPawn_C_OnFailure_036BF64B4E92FD57AA8116A301BCE7E3_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_036BF64B4E92FD57AA8116A301BCE7E3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::OnSuccess_036BF64B4E92FD57AA8116A301BCE7E3(const class FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_036BF64B4E92FD57AA8116A301BCE7E3");
		
		ASaul_MotionControllerPawn_C_OnSuccess_036BF64B4E92FD57AA8116A301BCE7E3_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_974E5B2847D8307E45573787BC62BAED
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::OnFailure_974E5B2847D8307E45573787BC62BAED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_974E5B2847D8307E45573787BC62BAED");
		
		ASaul_MotionControllerPawn_C_OnFailure_974E5B2847D8307E45573787BC62BAED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_974E5B2847D8307E45573787BC62BAED
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::OnSuccess_974E5B2847D8307E45573787BC62BAED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_974E5B2847D8307E45573787BC62BAED");
		
		ASaul_MotionControllerPawn_C_OnSuccess_974E5B2847D8307E45573787BC62BAED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Restart Level_K2Node_InputActionEvent_27
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Restart_Level_K2Node_InputActionEvent_27(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Restart Level_K2Node_InputActionEvent_27");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Restart_Level_K2Node_InputActionEvent_27_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Restart Level_K2Node_InputActionEvent_26
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Restart_Level_K2Node_InputActionEvent_26(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Restart Level_K2Node_InputActionEvent_26");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Restart_Level_K2Node_InputActionEvent_26_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Menu_K2Node_InputActionEvent_25
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Menu_K2Node_InputActionEvent_25(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Menu_K2Node_InputActionEvent_25");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Menu_K2Node_InputActionEvent_25_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Menu_K2Node_InputActionEvent_24
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Menu_K2Node_InputActionEvent_24(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Menu_K2Node_InputActionEvent_24");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Menu_K2Node_InputActionEvent_24_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_23
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_23(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_23");
		
		ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_23_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_22
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_22(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_22");
		
		ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_22_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_21
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_21(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_21");
		
		ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_21_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_20
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_20(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_20");
		
		ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_20_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_19
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_19(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_19");
		
		ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_19_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_18
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_18(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_18");
		
		ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_18_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_17
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_17(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_17");
		
		ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_17_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_16
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_16(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_16");
		
		ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_16_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_MoveControllerMenu_K2Node_InputActionEvent_15
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_MoveControllerMenu_K2Node_InputActionEvent_15(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_MoveControllerMenu_K2Node_InputActionEvent_15");
		
		ASaul_MotionControllerPawn_C_InpActEvt_MoveControllerMenu_K2Node_InputActionEvent_15_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_VR Snapping Left (TEMP)_K2Node_InputActionEvent_14
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_VR_Snapping_Left__TEMP__K2Node_InputActionEvent_14(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_VR Snapping Left (TEMP)_K2Node_InputActionEvent_14");
		
		ASaul_MotionControllerPawn_C_InpActEvt_VR_Snapping_Left__TEMP__K2Node_InputActionEvent_14_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_VR Snapping Right (TEMP)_K2Node_InputActionEvent_13
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_VR_Snapping_Right__TEMP__K2Node_InputActionEvent_13(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_VR Snapping Right (TEMP)_K2Node_InputActionEvent_13");
		
		ASaul_MotionControllerPawn_C_InpActEvt_VR_Snapping_Right__TEMP__K2Node_InputActionEvent_13_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Press Left Grip_K2Node_InputActionEvent_12
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Press Left Grip_K2Node_InputActionEvent_12");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_12_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Press Left Grip_K2Node_InputActionEvent_11
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Press Left Grip_K2Node_InputActionEvent_11");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_11_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_10
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_10");
		
		ASaul_MotionControllerPawn_C_InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_9
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_9");
		
		ASaul_MotionControllerPawn_C_InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Confirm_K2Node_InputActionEvent_8
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Confirm_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Confirm_K2Node_InputActionEvent_8");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Confirm_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Confirm_K2Node_InputActionEvent_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_Confirm_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Confirm_K2Node_InputActionEvent_7");
		
		ASaul_MotionControllerPawn_C_InpActEvt_Confirm_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_QuickActionNonVR_K2Node_InputActionEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_QuickActionNonVR_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_QuickActionNonVR_K2Node_InputActionEvent_6");
		
		ASaul_MotionControllerPawn_C_InpActEvt_QuickActionNonVR_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_QuickActionNonVR_K2Node_InputActionEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_QuickActionNonVR_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_QuickActionNonVR_K2Node_InputActionEvent_5");
		
		ASaul_MotionControllerPawn_C_InpActEvt_QuickActionNonVR_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_4");
		
		ASaul_MotionControllerPawn_C_InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_3");
		
		ASaul_MotionControllerPawn_C_InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_BackToHub_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt_BackToHub_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_BackToHub_K2Node_InputActionEvent_2");
		
		ASaul_MotionControllerPawn_C_InpActEvt_BackToHub_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_(DEBUG)CrosshairToggle_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpActEvt__DEBUG_CrosshairToggle_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_(DEBUG)CrosshairToggle_K2Node_InputActionEvent_1");
		
		ASaul_MotionControllerPawn_C_InpActEvt__DEBUG_CrosshairToggle_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_4_VRNotificationsDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::BndEvt__VRNotifications_K2Node_ComponentBoundEvent_4_VRNotificationsDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_4_VRNotificationsDelegate__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_4_VRNotificationsDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_5_VRNotificationsDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::BndEvt__VRNotifications_K2Node_ComponentBoundEvent_5_VRNotificationsDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_5_VRNotificationsDelegate__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_5_VRNotificationsDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_6_VRNotificationsDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::BndEvt__VRNotifications_K2Node_ComponentBoundEvent_6_VRNotificationsDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_6_VRNotificationsDelegate__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_6_VRNotificationsDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_7_VRNotificationsDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::BndEvt__VRNotifications_K2Node_ComponentBoundEvent_7_VRNotificationsDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_7_VRNotificationsDelegate__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_7_VRNotificationsDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::BndEvt__VRNotifications_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.FlashlightDead
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FlashlightDead                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASaul_MotionControllerPawn_C::FlashlightDead(bool FlashlightDead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.FlashlightDead");
		
		ASaul_MotionControllerPawn_C_FlashlightDead_Params params {};
		params.FlashlightDead = FlashlightDead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Flashlight Win
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Flashlight_Win()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Flashlight Win");
		
		ASaul_MotionControllerPawn_C_Flashlight_Win_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ForceFlashlightTurnoff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::ForceFlashlightTurnoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ForceFlashlightTurnoff");
		
		ASaul_MotionControllerPawn_C_ForceFlashlightTurnoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Flashlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Turn_On_Flashlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Flashlight");
		
		ASaul_MotionControllerPawn_C_Turn_On_Flashlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TurnOffFLashlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::TurnOffFLashlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TurnOffFLashlight");
		
		ASaul_MotionControllerPawn_C_TurnOffFLashlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Force Turn Off Flashlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Force_Turn_Off_Flashlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Force Turn Off Flashlight");
		
		ASaul_MotionControllerPawn_C_Force_Turn_Off_Flashlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR ZoomInScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             ComponentHovered                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ZoomLoc                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ZoomRot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsMenu                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsActiveLoc                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASaul_MotionControllerPawn_C::NonVR_ZoomInScreen(class USceneComponent* ComponentHovered, const struct FVector& ZoomLoc, const struct FRotator& ZoomRot, bool IsMenu, bool IsActiveLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR ZoomInScreen");
		
		ASaul_MotionControllerPawn_C_NonVR_ZoomInScreen_Params params {};
		params.ComponentHovered = ComponentHovered;
		params.ZoomLoc = ZoomLoc;
		params.ZoomRot = ZoomRot;
		params.IsMenu = IsMenu;
		params.IsActiveLoc = IsActiveLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ZoomRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::ZoomRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ZoomRelease");
		
		ASaul_MotionControllerPawn_C_ZoomRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ForceLeanToStop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::ForceLeanToStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ForceLeanToStop");
		
		ASaul_MotionControllerPawn_C_ForceLeanToStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpAxisEvt_LookHorizontal_K2Node_InputAxisEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpAxisEvt_LookHorizontal_K2Node_InputAxisEvent_5(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpAxisEvt_LookHorizontal_K2Node_InputAxisEvent_5");
		
		ASaul_MotionControllerPawn_C_InpAxisEvt_LookHorizontal_K2Node_InputAxisEvent_5_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpAxisEvt_LookVertical_K2Node_InputAxisEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpAxisEvt_LookVertical_K2Node_InputAxisEvent_4(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpAxisEvt_LookVertical_K2Node_InputAxisEvent_4");
		
		ASaul_MotionControllerPawn_C_InpAxisEvt_LookVertical_K2Node_InputAxisEvent_4_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.SetTetheredMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASaul_MotionControllerPawn_C::SetTetheredMode(bool NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.SetTetheredMode");
		
		ASaul_MotionControllerPawn_C_SetTetheredMode_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ToggleTetheredMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::ToggleTetheredMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ToggleTetheredMode");
		
		ASaul_MotionControllerPawn_C_ToggleTetheredMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Init NonVR Camera
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Init_NonVR_Camera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Init NonVR Camera");
		
		ASaul_MotionControllerPawn_C_Init_NonVR_Camera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Set Camera Rotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASaul_MotionControllerPawn_C::Set_Camera_Rotation(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Set Camera Rotation");
		
		ASaul_MotionControllerPawn_C_Set_Camera_Rotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnGrab
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Grabbable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::OnGrab(class AActor* Grabbable, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnGrab");
		
		ASaul_MotionControllerPawn_C_OnGrab_Params params {};
		params.Grabbable = Grabbable;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnRelease
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Grabbable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::OnRelease(class AActor* Grabbable, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnRelease");
		
		ASaul_MotionControllerPawn_C_OnRelease_Params params {};
		params.Grabbable = Grabbable;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Setup Held Info Display
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::Setup_Held_Info_Display(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Setup Held Info Display");
		
		ASaul_MotionControllerPawn_C_Setup_Held_Info_Display_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__EdibleCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ASaul_MotionControllerPawn_C::BndEvt__EdibleCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__EdibleCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_BndEvt__EdibleCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ReceiveBeginPlay");
		
		ASaul_MotionControllerPawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TeleportPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RightHand                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASaul_MotionControllerPawn_C::TeleportPlayer(bool RightHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TeleportPlayer");
		
		ASaul_MotionControllerPawn_C_TeleportPlayer_Params params {};
		params.RightHand = RightHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ReceiveTick");
		
		ASaul_MotionControllerPawn_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TurnOnHands
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Turn_On                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASaul_MotionControllerPawn_C::TurnOnHands(bool Turn_On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TurnOnHands");
		
		ASaul_MotionControllerPawn_C_TurnOnHands_Params params {};
		params.Turn_On = Turn_On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.SpectatorCam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::SpectatorCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.SpectatorCam");
		
		ASaul_MotionControllerPawn_C_SpectatorCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Show Menu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Show_Menu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Show Menu");
		
		ASaul_MotionControllerPawn_C_Show_Menu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Give Achievement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AchievementID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::Give_Achievement(const class FName& AchievementID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Give Achievement");
		
		ASaul_MotionControllerPawn_C_Give_Achievement_Params params {};
		params.AchievementID = AchievementID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__HeadCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ASaul_MotionControllerPawn_C::BndEvt__HeadCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__HeadCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_BndEvt__HeadCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__HeadCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::BndEvt__HeadCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__HeadCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_BndEvt__HeadCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Reset level
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Reset_level()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Reset level");
		
		ASaul_MotionControllerPawn_C_Reset_level_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Hide Menu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Hide_Menu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Hide Menu");
		
		ASaul_MotionControllerPawn_C_Hide_Menu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TextUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::TextUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TextUpdate");
		
		ASaul_MotionControllerPawn_C_TextUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UpdateSubtitles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDataTable*                                  SubtitleTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::UpdateSubtitles(class UDataTable* SubtitleTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UpdateSubtitles");
		
		ASaul_MotionControllerPawn_C_UpdateSubtitles_Params params {};
		params.SubtitleTable = SubtitleTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllLevels
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::UnlockAllLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllLevels");
		
		ASaul_MotionControllerPawn_C_UnlockAllLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllGlitches
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::UnlockAllGlitches()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllGlitches");
		
		ASaul_MotionControllerPawn_C_UnlockAllGlitches_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllPrizes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::UnlockAllPrizes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllPrizes");
		
		ASaul_MotionControllerPawn_C_UnlockAllPrizes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ProcessInterpolatedGrab
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  AttachmentTransform                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FHeldGrabbableInfo                          ActorGrabbablePair                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class AActor*                                      HeldActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::ProcessInterpolatedGrab(const struct FTransform& AttachmentTransform, struct FHeldGrabbableInfo* ActorGrabbablePair, class AActor* HeldActor, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ProcessInterpolatedGrab");
		
		ASaul_MotionControllerPawn_C_ProcessInterpolatedGrab_Params params {};
		params.AttachmentTransform = AttachmentTransform;
		params.HeldActor = HeldActor;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorGrabbablePair != nullptr)
			*ActorGrabbablePair = params.ActorGrabbablePair;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InteruptSubtitles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::InteruptSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InteruptSubtitles");
		
		ASaul_MotionControllerPawn_C_InteruptSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllCoins
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::UnlockAllCoins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllCoins");
		
		ASaul_MotionControllerPawn_C_UnlockAllCoins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnMenuHeld
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::OnMenuHeld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnMenuHeld");
		
		ASaul_MotionControllerPawn_C_OnMenuHeld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.FlashlightNonVR
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::FlashlightNonVR()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.FlashlightNonVR");
		
		ASaul_MotionControllerPawn_C_FlashlightNonVR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Hide Flashlight Light
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               flase                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASaul_MotionControllerPawn_C::Hide_Flashlight_Light(bool flase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Hide Flashlight Light");
		
		ASaul_MotionControllerPawn_C_Hide_Flashlight_Light_Params params {};
		params.flase = flase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Destroy Flashlight, spawn Microphone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Destroy_Flashlight_spawn_Microphone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Destroy Flashlight, spawn Microphone");
		
		ASaul_MotionControllerPawn_C_Destroy_Flashlight_spawn_Microphone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.SpawnDefaultFlashlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::SpawnDefaultFlashlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.SpawnDefaultFlashlight");
		
		ASaul_MotionControllerPawn_C_SpawnDefaultFlashlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.FindButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::FindButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.FindButton");
		
		ASaul_MotionControllerPawn_C_FindButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.PullPushObjectNonVR
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PullPushAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::PullPushObjectNonVR(float PullPushAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.PullPushObjectNonVR");
		
		ASaul_MotionControllerPawn_C_PullPushObjectNonVR_Params params {};
		params.PullPushAmount = PullPushAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpAxisEvt_PullPushObject_K2Node_InputAxisEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpAxisEvt_PullPushObject_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpAxisEvt_PullPushObject_K2Node_InputAxisEvent_3");
		
		ASaul_MotionControllerPawn_C_InpAxisEvt_PullPushObject_K2Node_InputAxisEvent_3_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR AxisLean
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::NonVR_AxisLean()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR AxisLean");
		
		ASaul_MotionControllerPawn_C_NonVR_AxisLean_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpAxisEvt_LeanForward_K2Node_InputAxisEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpAxisEvt_LeanForward_K2Node_InputAxisEvent_6(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpAxisEvt_LeanForward_K2Node_InputAxisEvent_6");
		
		ASaul_MotionControllerPawn_C_InpAxisEvt_LeanForward_K2Node_InputAxisEvent_6_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpAxisEvt_LeanRight_K2Node_InputAxisEvent_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::InpAxisEvt_LeanRight_K2Node_InputAxisEvent_7(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpAxisEvt_LeanRight_K2Node_InputAxisEvent_7");
		
		ASaul_MotionControllerPawn_C_InpAxisEvt_LeanRight_K2Node_InputAxisEvent_7_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ResetForwardNonVR
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::ResetForwardNonVR()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ResetForwardNonVR");
		
		ASaul_MotionControllerPawn_C_ResetForwardNonVR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.WinCurrentLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::WinCurrentLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.WinCurrentLevel");
		
		ASaul_MotionControllerPawn_C_WinCurrentLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DisableCrosshair
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASaul_MotionControllerPawn_C::DisableCrosshair(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DisableCrosshair");
		
		ASaul_MotionControllerPawn_C_DisableCrosshair_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnHoverBegin
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HoveredActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::OnHoverBegin(class AActor* HoveredActor, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnHoverBegin");
		
		ASaul_MotionControllerPawn_C_OnHoverBegin_Params params {};
		params.HoveredActor = HoveredActor;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnHoverEnd
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HoveredActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::OnHoverEnd(class AActor* HoveredActor, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnHoverEnd");
		
		ASaul_MotionControllerPawn_C_OnHoverEnd_Params params {};
		params.HoveredActor = HoveredActor;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Disable Main Menu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Disable_Main_Menu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Disable Main Menu");
		
		ASaul_MotionControllerPawn_C_Disable_Main_Menu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Enable Main Menu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Enable_Main_Menu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Enable Main Menu");
		
		ASaul_MotionControllerPawn_C_Enable_Main_Menu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.PlayerIsBeingKilled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::PlayerIsBeingKilled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.PlayerIsBeingKilled");
		
		ASaul_MotionControllerPawn_C_PlayerIsBeingKilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR Feedback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UForceFeedbackEffect*                        ForceFeedbackEffect                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLooping                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASaul_MotionControllerPawn_C::NonVR_Feedback(class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR Feedback");
		
		ASaul_MotionControllerPawn_C_NonVR_Feedback_Params params {};
		params.ForceFeedbackEffect = ForceFeedbackEffect;
		params.bLooping = bLooping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ExecuteUbergraph_Saul_MotionControllerPawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::ExecuteUbergraph_Saul_MotionControllerPawn(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ExecuteUbergraph_Saul_MotionControllerPawn");
		
		ASaul_MotionControllerPawn_C_ExecuteUbergraph_Saul_MotionControllerPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR QuickRelease__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::NonVR_QuickRelease__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR QuickRelease__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_NonVR_QuickRelease__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR QuickAction__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::NonVR_QuickAction__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.NonVR QuickAction__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_NonVR_QuickAction__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_Confirm_Released__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Action_Confirm_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_Confirm_Released__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_Action_Confirm_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_Confirm_Pressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Action_Confirm_Pressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_Confirm_Pressed__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_Action_Confirm_Pressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadLeftTriggerPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::GamepadLeftTriggerPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadLeftTriggerPressed__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_GamepadLeftTriggerPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadLeftShoulderPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::GamepadLeftShoulderPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadLeftShoulderPressed__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_GamepadLeftShoulderPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadRightTriggerPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::GamepadRightTriggerPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadRightTriggerPressed__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_GamepadRightTriggerPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadRightShoulderPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::GamepadRightShoulderPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadRightShoulderPressed__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_GamepadRightShoulderPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_Enter__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Paused_Enter__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_Enter__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_Paused_Enter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadDown__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Paused_DpadDown__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadDown__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_Paused_DpadDown__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadUp__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Paused_DpadUp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadUp__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_Paused_DpadUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadLeft__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Paused_DpadLeft__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadLeft__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_Paused_DpadLeft__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadRight__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Paused_DpadRight__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadRight__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_Paused_DpadRight__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Update Player Teleport Location__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Get_player_Location                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASaul_MotionControllerPawn_C::Update_Player_Teleport_Location__DelegateSignature(int Get_player_Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Update Player Teleport Location__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_Update_Player_Teleport_Location__DelegateSignature_Params params {};
		params.Get_player_Location = Get_player_Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadDown__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::DpadDown__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadDown__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_DpadDown__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadUp__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::DpadUp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadUp__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_DpadUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadLeft__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::DpadLeft__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadLeft__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_DpadLeft__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadRight__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::DpadRight__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadRight__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_DpadRight__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Enter__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Enter__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Enter__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_Enter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Trigger_Mangle_Scare__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Trigger_Mangle_Scare__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Trigger_Mangle_Scare__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_Trigger_Mangle_Scare__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Menu__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASaul_MotionControllerPawn_C::Turn_On_Menu__DelegateSignature(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Menu__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_Turn_On_Menu__DelegateSignature_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Player Win__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Player_Win__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Player Win__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_Player_Win__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.PlayerIsKilled__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::PlayerIsKilled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.PlayerIsKilled__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_PlayerIsKilled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Light__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASaul_MotionControllerPawn_C::Turn_On_Light__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Light__DelegateSignature");
		
		ASaul_MotionControllerPawn_C_Turn_On_Light__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASaul_MotionControllerPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASaul_MotionControllerPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Saul_MotionControllerPawn.Saul_MotionControllerPawn_C");
		return ptr;
	}

}


