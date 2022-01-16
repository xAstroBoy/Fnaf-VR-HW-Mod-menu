/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "SWGPlatformUtil_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USWGPlatformSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWGPlatformSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGPlatformUtil.SWGPlatformSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x004D7820
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		SWGPlatformUtil_ESWGPlatform                       Platform                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGPlatformUtilFunctions::STATIC_SwitchOnPlatform(SWGPlatformUtil_ESWGPlatform* Platform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform");
		
		USWGPlatformUtilFunctions_SwitchOnPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Platform != nullptr)
			*Platform = params.Platform;
	}

	/**
	 * Function:
	 * 		Offset -> 0x004D7790
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		SWGPlatformUtil_ESWGEditor                         Editor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGPlatformUtilFunctions::STATIC_IsInEditorSwitch(SWGPlatformUtil_ESWGEditor* Editor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch");
		
		USWGPlatformUtilFunctions_IsInEditorSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Editor != nullptr)
			*Editor = params.Editor;
	}

	/**
	 * Function:
	 * 		Offset -> 0x004D76D0
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool USWGPlatformUtilFunctions::STATIC_IsInEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor");
		
		USWGPlatformUtilFunctions_IsInEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x004D7700
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetVersionString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString USWGPlatformUtilFunctions::STATIC_GetVersionString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetVersionString");
		
		USWGPlatformUtilFunctions_GetVersionString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x004D76D0
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	SWGPlatformUtil_ESWGPlatform USWGPlatformUtilFunctions::STATIC_GetBuildPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform");
		
		USWGPlatformUtilFunctions_GetBuildPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USWGPlatformUtilFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWGPlatformUtilFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGPlatformUtil.SWGPlatformUtilFunctions");
		return ptr;
	}

}


