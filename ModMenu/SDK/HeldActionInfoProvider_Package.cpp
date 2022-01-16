/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "HeldActionInfoProvider_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function HeldActionInfoProvider.HeldActionInfoProvider_C.GetAvailableButtons
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<ControllerButtonsEnum_EControllerButtonsEnum> AvailableButtons                                           (Parm, OutParm, ZeroConstructor)
	 */
	void UHeldActionInfoProvider_C::GetAvailableButtons(TArray<ControllerButtonsEnum_EControllerButtonsEnum>* AvailableButtons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeldActionInfoProvider.HeldActionInfoProvider_C.GetAvailableButtons");
		
		UHeldActionInfoProvider_C_GetAvailableButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableButtons != nullptr)
			*AvailableButtons = params.AvailableButtons;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function HeldActionInfoProvider.HeldActionInfoProvider_C.GetHeldActionsText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Left_Text                                                  (Parm, OutParm)
	 * 		class FText                                        Right_Text                                                 (Parm, OutParm)
	 * 		class FText                                        Bottom_Text                                                (Parm, OutParm)
	 */
	void UHeldActionInfoProvider_C::GetHeldActionsText(class FText* Left_Text, class FText* Right_Text, class FText* Bottom_Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeldActionInfoProvider.HeldActionInfoProvider_C.GetHeldActionsText");
		
		UHeldActionInfoProvider_C_GetHeldActionsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Left_Text != nullptr)
			*Left_Text = params.Left_Text;
		if (Right_Text != nullptr)
			*Right_Text = params.Right_Text;
		if (Bottom_Text != nullptr)
			*Bottom_Text = params.Bottom_Text;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHeldActionInfoProvider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeldActionInfoProvider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HeldActionInfoProvider.HeldActionInfoProvider_C");
		return ptr;
	}

}


