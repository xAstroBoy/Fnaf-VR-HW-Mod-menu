
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// ESWGPlatform                   Platform                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USWGPlatformUtilFunctions::STATIC_SwitchOnPlatform(ESWGPlatform* Platform)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform");

	USWGPlatformUtilFunctions_SwitchOnPlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Platform != nullptr)
		*Platform = params.Platform;
}


// Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// ESWGEditor                     Editor                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USWGPlatformUtilFunctions::STATIC_IsInEditorSwitch(ESWGEditor* Editor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch");

	USWGPlatformUtilFunctions_IsInEditorSwitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Editor != nullptr)
		*Editor = params.Editor;
}


// Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USWGPlatformUtilFunctions::STATIC_IsInEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor");

	USWGPlatformUtilFunctions_IsInEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ESWGPlatform                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESWGPlatform USWGPlatformUtilFunctions::STATIC_GetBuildPlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform");

	USWGPlatformUtilFunctions_GetBuildPlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
