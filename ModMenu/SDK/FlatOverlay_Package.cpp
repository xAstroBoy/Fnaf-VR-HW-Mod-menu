/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "FlatOverlay_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlatOverlay.FlatOverlay_C.GetFaceButtonDefaults
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        FaceButtonLeft                                             (Parm, OutParm)
	 * 		class FText                                        FaceButtonRight                                            (Parm, OutParm)
	 * 		class FText                                        FaceButtonBottom                                           (Parm, OutParm)
	 */
	void UFlatOverlay_C::GetFaceButtonDefaults(class FText* FaceButtonLeft, class FText* FaceButtonRight, class FText* FaceButtonBottom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.GetFaceButtonDefaults");
		
		UFlatOverlay_C_GetFaceButtonDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FaceButtonLeft != nullptr)
			*FaceButtonLeft = params.FaceButtonLeft;
		if (FaceButtonRight != nullptr)
			*FaceButtonRight = params.FaceButtonRight;
		if (FaceButtonBottom != nullptr)
			*FaceButtonBottom = params.FaceButtonBottom;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlatOverlay.FlatOverlay_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFlatOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Construct");
		
		UFlatOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlatOverlay.FlatOverlay_C.Setup Held Display
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<ControllerButtonsEnum_EControllerButtonsEnum> AvailableButtons                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UFlatOverlay_C::Setup_Held_Display(TArray<ControllerButtonsEnum_EControllerButtonsEnum> AvailableButtons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Setup Held Display");
		
		UFlatOverlay_C_Setup_Held_Display_Params params {};
		params.AvailableButtons = AvailableButtons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlatOverlay.FlatOverlay_C.ShowViewMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFlatOverlay_C::ShowViewMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.ShowViewMode");
		
		UFlatOverlay_C_ShowViewMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlatOverlay.FlatOverlay_C.Set Face Button Text
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Left_Button                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Right_Button                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Bottom_Button                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFlatOverlay_C::Set_Face_Button_Text(const class FText& Left_Button, const class FText& Right_Button, const class FText& Bottom_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Set Face Button Text");
		
		UFlatOverlay_C_Set_Face_Button_Text_Params params {};
		params.Left_Button = Left_Button;
		params.Right_Button = Right_Button;
		params.Bottom_Button = Bottom_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlatOverlay.FlatOverlay_C.Set Face Button Text To Default
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFlatOverlay_C::Set_Face_Button_Text_To_Default()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Set Face Button Text To Default");
		
		UFlatOverlay_C_Set_Face_Button_Text_To_Default_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlatOverlay.FlatOverlay_C.Put Away Held Info
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFlatOverlay_C::Put_Away_Held_Info()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Put Away Held Info");
		
		UFlatOverlay_C_Put_Away_Held_Info_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlatOverlay.FlatOverlay_C.On View Status Anim Finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFlatOverlay_C::On_View_Status_Anim_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.On View Status Anim Finished");
		
		UFlatOverlay_C_On_View_Status_Anim_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlatOverlay.FlatOverlay_C.Show Look Location
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFlatOverlay_C::Show_Look_Location()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Show Look Location");
		
		UFlatOverlay_C_Show_Look_Location_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlatOverlay.FlatOverlay_C.On Activate Look Finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFlatOverlay_C::On_Activate_Look_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.On Activate Look Finished");
		
		UFlatOverlay_C_On_Activate_Look_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlatOverlay.FlatOverlay_C.Hide Look Location
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFlatOverlay_C::Hide_Look_Location()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Hide Look Location");
		
		UFlatOverlay_C_Hide_Look_Location_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlatOverlay.FlatOverlay_C.ExecuteUbergraph_FlatOverlay
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatOverlay_C::ExecuteUbergraph_FlatOverlay(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.ExecuteUbergraph_FlatOverlay");
		
		UFlatOverlay_C_ExecuteUbergraph_FlatOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFlatOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlatOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FlatOverlay.FlatOverlay_C");
		return ptr;
	}

}


