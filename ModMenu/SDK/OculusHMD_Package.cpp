/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "OculusHMD_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x006345C0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UOculusFunctionLibrary::STATIC_ShowLoadingSplashScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen");
		
		UOculusFunctionLibrary_ShowLoadingSplashScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00634550
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_ShowLoadingIcon(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon");
		
		UOculusFunctionLibrary_ShowLoadingIcon_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006344E0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetTiledMultiresLevel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		OculusHMD_ETiledMultiResLevel                      Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_SetTiledMultiresLevel(OculusHMD_ETiledMultiResLevel Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetTiledMultiresLevel");
		
		UOculusFunctionLibrary_SetTiledMultiresLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00634460
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               recenterMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_SetReorientHMDOnControllerRecenter(bool recenterMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter");
		
		UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Params params {};
		params.recenterMode = recenterMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00634400
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     PosScale3D                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_SetPositionScale3D(const struct FVector& PosScale3D)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D");
		
		UOculusFunctionLibrary_SetPositionScale3D_Params params {};
		params.PosScale3D = PosScale3D;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00634220
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      TexturePath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DistanceInMeters                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   SizeInMeters                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RotationAxis                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotationDeltaInDeg                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_SetLoadingSplashParams(const class FString& TexturePath, const struct FVector& DistanceInMeters, const struct FVector2D& SizeInMeters, const struct FVector& RotationAxis, float RotationDeltaInDeg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams");
		
		UOculusFunctionLibrary_SetLoadingSplashParams_Params params {};
		params.TexturePath = TexturePath;
		params.DistanceInMeters = DistanceInMeters;
		params.SizeInMeters = SizeInMeters;
		params.RotationAxis = RotationAxis;
		params.RotationDeltaInDeg = RotationDeltaInDeg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006341A0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               GuardianVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_SetGuardianVisibility(bool GuardianVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility");
		
		UOculusFunctionLibrary_SetGuardianVisibility_Params params {};
		params.GuardianVisible = GuardianVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00634130
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              RequestedFrequency                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_SetDisplayFrequency(float RequestedFrequency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency");
		
		UOculusFunctionLibrary_SetDisplayFrequency_Params params {};
		params.RequestedFrequency = RequestedFrequency;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633F80
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int                                                CPULevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                GPULevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_SetCPUAndGPULevels(int CPULevel, int GPULevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels");
		
		UOculusFunctionLibrary_SetCPUAndGPULevels_Params params {};
		params.CPULevel = CPULevel;
		params.GPULevel = GPULevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00634030
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                ColorScale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ColorOffset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bApplyToAllLayers                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_SetColorScaleAndOffset(const struct FLinearColor& ColorScale, const struct FLinearColor& ColorOffset, bool bApplyToAllLayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset");
		
		UOculusFunctionLibrary_SetColorScaleAndOffset_Params params {};
		params.ColorScale = ColorScale;
		params.ColorOffset = ColorOffset;
		params.bApplyToAllLayers = bApplyToAllLayers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633E70
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    BaseRot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PosOffset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		HeadMountedDisplay_EOrientPositionSelector         Options                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, HeadMountedDisplay_EOrientPositionSelector Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset");
		
		UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params params {};
		params.BaseRot = BaseRot;
		params.PosOffset = PosOffset;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633D60
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BaseOffsetInMeters                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		HeadMountedDisplay_EOrientPositionSelector         Options                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, HeadMountedDisplay_EOrientPositionSelector Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters");
		
		UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params params {};
		params.Rotation = Rotation;
		params.BaseOffsetInMeters = BaseOffsetInMeters;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633D30
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UOculusFunctionLibrary::STATIC_IsLoadingIconEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled");
		
		UOculusFunctionLibrary_IsLoadingIconEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633D00
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UOculusFunctionLibrary::STATIC_IsGuardianDisplayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed");
		
		UOculusFunctionLibrary_IsGuardianDisplayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633CD0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UOculusFunctionLibrary::STATIC_IsGuardianConfigured()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured");
		
		UOculusFunctionLibrary_IsGuardianConfigured_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633C50
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		OculusHMD_ETrackedDeviceType                       DeviceType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOculusFunctionLibrary::STATIC_IsDeviceTracked(OculusHMD_ETrackedDeviceType DeviceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked");
		
		UOculusFunctionLibrary_IsDeviceTracked_Params params {};
		params.DeviceType = DeviceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633C20
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UOculusFunctionLibrary::STATIC_IsAutoLoadingSplashScreenEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled");
		
		UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633BA0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bClear                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_HideLoadingSplashScreen(bool bClear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen");
		
		UOculusFunctionLibrary_HideLoadingSplashScreen_Params params {};
		params.bClear = bClear;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633B80
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UOculusFunctionLibrary::STATIC_HideLoadingIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon");
		
		UOculusFunctionLibrary_HideLoadingIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633B50
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UOculusFunctionLibrary::STATIC_HasSystemOverlayPresent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent");
		
		UOculusFunctionLibrary_HasSystemOverlayPresent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633B20
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.HasInputFocus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UOculusFunctionLibrary::STATIC_HasInputFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HasInputFocus");
		
		UOculusFunctionLibrary_HasInputFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633A30
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetUserProfile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHmdUserProfile                             Profile                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UOculusFunctionLibrary::STATIC_GetUserProfile(struct FHmdUserProfile* Profile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetUserProfile");
		
		UOculusFunctionLibrary_GetUserProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Profile != nullptr)
			*Profile = params.Profile;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633A00
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetTiledMultiresLevel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	OculusHMD_ETiledMultiResLevel UOculusFunctionLibrary::STATIC_GetTiledMultiresLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetTiledMultiresLevel");
		
		UOculusFunctionLibrary_GetTiledMultiresLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006337D0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetRawSensorData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     AngularAcceleration                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LinearAcceleration                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     AngularVelocity                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LinearVelocity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeInSeconds                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		OculusHMD_ETrackedDeviceType                       DeviceType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_GetRawSensorData(struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds, OculusHMD_ETrackedDeviceType DeviceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetRawSensorData");
		
		UOculusFunctionLibrary_GetRawSensorData_Params params {};
		params.DeviceType = DeviceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AngularAcceleration != nullptr)
			*AngularAcceleration = params.AngularAcceleration;
		if (LinearAcceleration != nullptr)
			*LinearAcceleration = params.LinearAcceleration;
		if (AngularVelocity != nullptr)
			*AngularVelocity = params.AngularVelocity;
		if (LinearVelocity != nullptr)
			*LinearVelocity = params.LinearVelocity;
		if (TimeInSeconds != nullptr)
			*TimeInSeconds = params.TimeInSeconds;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006335D0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetPose
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    DeviceRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DevicePosition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NeckPosition                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseOrienationForPlayerCamera                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePositionForPlayerCamera                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PositionScale                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_GetPose(struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetPose");
		
		UOculusFunctionLibrary_GetPose_Params params {};
		params.bUseOrienationForPlayerCamera = bUseOrienationForPlayerCamera;
		params.bUsePositionForPlayerCamera = bUsePositionForPlayerCamera;
		params.PositionScale = PositionScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeviceRotation != nullptr)
			*DeviceRotation = params.DeviceRotation;
		if (DevicePosition != nullptr)
			*DevicePosition = params.DevicePosition;
		if (NeckPosition != nullptr)
			*NeckPosition = params.NeckPosition;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006334F0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		OculusHMD_EBoundaryType                            BoundaryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuardianTestResult UOculusFunctionLibrary::STATIC_GetPointGuardianIntersection(const struct FVector& Point, OculusHMD_EBoundaryType BoundaryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection");
		
		UOculusFunctionLibrary_GetPointGuardianIntersection_Params params {};
		params.Point = Point;
		params.BoundaryType = BoundaryType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633490
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 */
	struct FTransform UOculusFunctionLibrary::STATIC_GetPlayAreaTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform");
		
		UOculusFunctionLibrary_GetPlayAreaTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006333C0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		OculusHMD_ETrackedDeviceType                       DeviceType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		OculusHMD_EBoundaryType                            BoundaryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuardianTestResult UOculusFunctionLibrary::STATIC_GetNodeGuardianIntersection(OculusHMD_ETrackedDeviceType DeviceType, OculusHMD_EBoundaryType BoundaryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection");
		
		UOculusFunctionLibrary_GetNodeGuardianIntersection_Params params {};
		params.DeviceType = DeviceType;
		params.BoundaryType = BoundaryType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006331C0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      TexturePath                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DistanceInMeters                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   SizeInMeters                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RotationAxis                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotationDeltaInDeg                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_GetLoadingSplashParams(class FString* TexturePath, struct FVector* DistanceInMeters, struct FVector2D* SizeInMeters, struct FVector* RotationAxis, float* RotationDeltaInDeg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams");
		
		UOculusFunctionLibrary_GetLoadingSplashParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TexturePath != nullptr)
			*TexturePath = params.TexturePath;
		if (DistanceInMeters != nullptr)
			*DistanceInMeters = params.DistanceInMeters;
		if (SizeInMeters != nullptr)
			*SizeInMeters = params.SizeInMeters;
		if (RotationAxis != nullptr)
			*RotationAxis = params.RotationAxis;
		if (RotationDeltaInDeg != nullptr)
			*RotationDeltaInDeg = params.RotationDeltaInDeg;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006330B0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		OculusHMD_EBoundaryType                            BoundaryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               UsePawnSpace                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> UOculusFunctionLibrary::STATIC_GetGuardianPoints(OculusHMD_EBoundaryType BoundaryType, bool UsePawnSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints");
		
		UOculusFunctionLibrary_GetGuardianPoints_Params params {};
		params.BoundaryType = BoundaryType;
		params.UsePawnSpace = UsePawnSpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00633020
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		OculusHMD_EBoundaryType                            BoundaryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UOculusFunctionLibrary::STATIC_GetGuardianDimensions(OculusHMD_EBoundaryType BoundaryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions");
		
		UOculusFunctionLibrary_GetGuardianDimensions_Params params {};
		params.BoundaryType = BoundaryType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00632F40
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsGPUAvailable                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GPUUtilization                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_GetGPUUtilization(bool* IsGPUAvailable, float* GPUUtilization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization");
		
		UOculusFunctionLibrary_GetGPUUtilization_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsGPUAvailable != nullptr)
			*IsGPUAvailable = params.IsGPUAvailable;
		if (GPUUtilization != nullptr)
			*GPUUtilization = params.GPUUtilization;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00632F10
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UOculusFunctionLibrary::STATIC_GetGPUFrameTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime");
		
		UOculusFunctionLibrary_GetGPUFrameTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00632E90
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetDeviceName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UOculusFunctionLibrary::STATIC_GetDeviceName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetDeviceName");
		
		UOculusFunctionLibrary_GetDeviceName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00632E60
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UOculusFunctionLibrary::STATIC_GetCurrentDisplayFrequency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency");
		
		UOculusFunctionLibrary_GetCurrentDisplayFrequency_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00632D90
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    OutRot                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutPosOffset                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset");
		
		UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRot != nullptr)
			*OutRot = params.OutRot;
		if (OutPosOffset != nullptr)
			*OutPosOffset = params.OutPosOffset;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00632CC0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    OutRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutBaseOffsetInMeters                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters");
		
		UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRotation != nullptr)
			*OutRotation = params.OutRotation;
		if (OutBaseOffsetInMeters != nullptr)
			*OutBaseOffsetInMeters = params.OutBaseOffsetInMeters;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00632C40
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<float> UOculusFunctionLibrary::STATIC_GetAvailableDisplayFrequencies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies");
		
		UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00632BC0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bPositionTracking                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_EnablePositionTracking(bool bPositionTracking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking");
		
		UOculusFunctionLibrary_EnablePositionTracking_Params params {};
		params.bPositionTracking = bPositionTracking;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00632B40
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bOrientationTracking                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_EnableOrientationTracking(bool bOrientationTracking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking");
		
		UOculusFunctionLibrary_EnableOrientationTracking_Params params {};
		params.bOrientationTracking = bOrientationTracking;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00632AC0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAutoShowEnabled                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_EnableAutoLoadingSplashScreen(bool bAutoShowEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen");
		
		UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Params params {};
		params.bAutoShowEnabled = bAutoShowEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00632AA0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UOculusFunctionLibrary::STATIC_ClearLoadingSplashScreens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens");
		
		UOculusFunctionLibrary_ClearLoadingSplashScreens_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006328C0
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TranslationInMeters                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   SizeInMeters                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    DeltaRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bClearBeforeAdd                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::STATIC_AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen");
		
		UOculusFunctionLibrary_AddLoadingSplashScreen_Params params {};
		params.Texture = Texture;
		params.TranslationInMeters = TranslationInMeters;
		params.Rotation = Rotation;
		params.SizeInMeters = SizeInMeters;
		params.DeltaRotation = DeltaRotation;
		params.bClearBeforeAdd = bClearBeforeAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOculusFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusHMD.OculusFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOculusHMDRuntimeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusHMDRuntimeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusHMD.OculusHMDRuntimeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOculusSceneCaptureCubemap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusSceneCaptureCubemap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusHMD.OculusSceneCaptureCubemap");
		return ptr;
	}

}


