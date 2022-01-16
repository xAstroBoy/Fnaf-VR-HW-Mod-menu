/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "SteamVR_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void USteamVRChaperoneComponent::SteamVRChaperoneEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature");
		
		USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00677670
	 * 		Name   -> Function SteamVR.SteamVRChaperoneComponent.GetBounds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FVector> USteamVRChaperoneComponent::GetBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRChaperoneComponent.GetBounds");
		
		USteamVRChaperoneComponent_GetBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USteamVRChaperoneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamVRChaperoneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamVR.SteamVRChaperoneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00677960
	 * 		Name   -> Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		SteamVR_ESteamVRTrackedDeviceType                  DeviceType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int>                                        OutTrackedDeviceIds                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USteamVRFunctionLibrary::STATIC_GetValidTrackedDeviceIds(SteamVR_ESteamVRTrackedDeviceType DeviceType, TArray<int>* OutTrackedDeviceIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds");
		
		USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Params params {};
		params.DeviceType = DeviceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTrackedDeviceIds != nullptr)
			*OutTrackedDeviceIds = params.OutTrackedDeviceIds;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00677840
	 * 		Name   -> Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int                                                DeviceID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OutOrientation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USteamVRFunctionLibrary::STATIC_GetTrackedDevicePositionAndOrientation(int DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation");
		
		USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Params params {};
		params.DeviceID = DeviceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
		if (OutOrientation != nullptr)
			*OutOrientation = params.OutOrientation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006776F0
	 * 		Name   -> Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int                                                ControllerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OutOrientation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USteamVRFunctionLibrary::STATIC_GetHandPositionAndOrientation(int ControllerIndex, InputCore_EControllerHand Hand, struct FVector* OutPosition, struct FRotator* OutOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation");
		
		USteamVRFunctionLibrary_GetHandPositionAndOrientation_Params params {};
		params.ControllerIndex = ControllerIndex;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
		if (OutOrientation != nullptr)
			*OutOrientation = params.OutOrientation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USteamVRFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamVRFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamVR.SteamVRFunctionLibrary");
		return ptr;
	}

}


