/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Office02_GameManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlickerOff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_GameManager_C::PuppetLightFlickerOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlickerOff");
		
		AOffice02_GameManager_C_PuppetLightFlickerOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlickerOn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_GameManager_C::PuppetLightFlickerOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlickerOn");
		
		AOffice02_GameManager_C_PuppetLightFlickerOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.GetPuppetData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PuppetDataFound                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPuppetAIDataStruct                         PuppetStructToUse1                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_GameManager_C::GetPuppetData(bool* PuppetDataFound, struct FPuppetAIDataStruct* PuppetStructToUse1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.GetPuppetData");
		
		AOffice02_GameManager_C_GetPuppetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PuppetDataFound != nullptr)
			*PuppetDataFound = params.PuppetDataFound;
		if (PuppetStructToUse1 != nullptr)
			*PuppetStructToUse1 = params.PuppetStructToUse1;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.EnableLigtTransition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_GameManager_C::EnableLigtTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.EnableLigtTransition");
		
		AOffice02_GameManager_C_EnableLigtTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.SetFreddieMask
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_GameManager_C::SetFreddieMask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.SetFreddieMask");
		
		AOffice02_GameManager_C_SetFreddieMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.GetFreddieMask
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AFreddieMask_BP_C*>                   FreddieMask                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AOffice02_GameManager_C::GetFreddieMask(TArray<class AFreddieMask_BP_C*>* FreddieMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.GetFreddieMask");
		
		AOffice02_GameManager_C_GetFreddieMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FreddieMask != nullptr)
			*FreddieMask = params.FreddieMask;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.LightFlicker__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::LightFlicker__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.LightFlicker__FinishedFunc");
		
		AOffice02_GameManager_C_LightFlicker__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.LightFlicker__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::LightFlicker__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.LightFlicker__UpdateFunc");
		
		AOffice02_GameManager_C_LightFlicker__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.LightFlicker__TeleportAi__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::LightFlicker__TeleportAi__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.LightFlicker__TeleportAi__EventFunc");
		
		AOffice02_GameManager_C_LightFlicker__TeleportAi__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_0__FinishedFunc");
		
		AOffice02_GameManager_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_0__UpdateFunc");
		
		AOffice02_GameManager_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_1__FinishedFunc");
		
		AOffice02_GameManager_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_1__UpdateFunc");
		
		AOffice02_GameManager_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.Timeline_1__Flip Camera__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::Timeline_1__Flip_Camera__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_1__Flip Camera__EventFunc");
		
		AOffice02_GameManager_C_Timeline_1__Flip_Camera__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.Timeline_2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_2__FinishedFunc");
		
		AOffice02_GameManager_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.Timeline_2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_2__UpdateFunc");
		
		AOffice02_GameManager_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.Timeline_2__Flip Camera__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::Timeline_2__Flip_Camera__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_2__Flip Camera__EventFunc");
		
		AOffice02_GameManager_C_Timeline_2__Flip_Camera__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.Timeline_3__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::Timeline_3__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_3__FinishedFunc");
		
		AOffice02_GameManager_C_Timeline_3__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.Timeline_3__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::Timeline_3__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_3__UpdateFunc");
		
		AOffice02_GameManager_C_Timeline_3__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.Timeline_3__TeleportAi__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice02_GameManager_C::Timeline_3__TeleportAi__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_3__TeleportAi__EventFunc");
		
		AOffice02_GameManager_C_Timeline_3__TeleportAi__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice02_GameManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.ReceiveBeginPlay");
		
		AOffice02_GameManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.TriggerCameraFlicker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_GameManager_C::TriggerCameraFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.TriggerCameraFlicker");
		
		AOffice02_GameManager_C_TriggerCameraFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.TurnOffStaticScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_GameManager_C::TurnOffStaticScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.TurnOffStaticScreen");
		
		AOffice02_GameManager_C_TurnOffStaticScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.TurnOnStaticScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_GameManager_C::TurnOnStaticScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.TurnOnStaticScreen");
		
		AOffice02_GameManager_C_TurnOnStaticScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlicker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_GameManager_C::PuppetLightFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlicker");
		
		AOffice02_GameManager_C_PuppetLightFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.PuppetExecutionSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_GameManager_C::PuppetExecutionSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.PuppetExecutionSequence");
		
		AOffice02_GameManager_C_PuppetExecutionSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.Disable Puppet_Animation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Player_Won_Game                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice02_GameManager_C::Disable_Puppet_Animation(bool Player_Won_Game)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Disable Puppet_Animation");
		
		AOffice02_GameManager_C_Disable_Puppet_Animation_Params params {};
		params.Player_Won_Game = Player_Won_Game;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.TriggerCameraLightFlicker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_GameManager_C::TriggerCameraLightFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.TriggerCameraLightFlicker");
		
		AOffice02_GameManager_C_TriggerCameraLightFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.ExecuteUbergraph_Office02_GameManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_GameManager_C::ExecuteUbergraph_Office02_GameManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.ExecuteUbergraph_Office02_GameManager");
		
		AOffice02_GameManager_C_ExecuteUbergraph_Office02_GameManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.NonVR_MaskCameraFocus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetFocus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice02_GameManager_C::NonVR_MaskCameraFocus__DelegateSignature(bool SetFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.NonVR_MaskCameraFocus__DelegateSignature");
		
		AOffice02_GameManager_C_NonVR_MaskCameraFocus__DelegateSignature_Params params {};
		params.SetFocus = SetFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_GameManager.Office02_GameManager_C.PuppetIsAwake__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_GameManager_C::PuppetIsAwake__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.PuppetIsAwake__DelegateSignature");
		
		AOffice02_GameManager_C_PuppetIsAwake__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice02_GameManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice02_GameManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office02_GameManager.Office02_GameManager_C");
		return ptr;
	}

}


