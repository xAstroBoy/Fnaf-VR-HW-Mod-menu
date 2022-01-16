/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Song_Button_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Song_Button.Song_Button_C.BrightLight__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASong_Button_C::BrightLight__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.BrightLight__FinishedFunc");
		
		ASong_Button_C_BrightLight__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Song_Button.Song_Button_C.BrightLight__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASong_Button_C::BrightLight__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.BrightLight__UpdateFunc");
		
		ASong_Button_C_BrightLight__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Song_Button.Song_Button_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASong_Button_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.ReceiveBeginPlay");
		
		ASong_Button_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Song_Button.Song_Button_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASong_Button_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.ReceiveTick");
		
		ASong_Button_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Song_Button.Song_Button_C.ResetStage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASong_Button_C::ResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.ResetStage");
		
		ASong_Button_C_ResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Song_Button.Song_Button_C.NightmareModeToggle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASong_Button_C::NightmareModeToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.NightmareModeToggle");
		
		ASong_Button_C_NightmareModeToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Song_Button.Song_Button_C.FadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASong_Button_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.FadeOut");
		
		ASong_Button_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Song_Button.Song_Button_C.TriggerSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASong_Button_C::TriggerSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.TriggerSound");
		
		ASong_Button_C_TriggerSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Song_Button.Song_Button_C.Set to NM
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               False                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASong_Button_C::Set_to_NM(bool False)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.Set to NM");
		
		ASong_Button_C_Set_to_NM_Params params {};
		params.False = False;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Song_Button.Song_Button_C.Attempt Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASong_Button_C::Attempt_Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.Attempt Activate");
		
		ASong_Button_C_Attempt_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Song_Button.Song_Button_C.ResetTriggered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMasterButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASong_Button_C::ResetTriggered(class AMasterButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.ResetTriggered");
		
		ASong_Button_C_ResetTriggered_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Song_Button.Song_Button_C.ExecuteUbergraph_Song_Button
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASong_Button_C::ExecuteUbergraph_Song_Button(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.ExecuteUbergraph_Song_Button");
		
		ASong_Button_C_ExecuteUbergraph_Song_Button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASong_Button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASong_Button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Song_Button.Song_Button_C");
		return ptr;
	}

}


