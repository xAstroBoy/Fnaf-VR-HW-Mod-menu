/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "FlashlightBase_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlashlightBase.FlashlightBase_C.IsValidActorForVisionTest
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFlashlightBase_C::IsValidActorForVisionTest(class AActor* Actor, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.IsValidActorForVisionTest");
		
		AFlashlightBase_C_IsValidActorForVisionTest_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlashlightBase.FlashlightBase_C.AttemptGrab
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               canGrab                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		SWGVR_EGrabSnapType                                SnapType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               snapLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               snapRotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     AttachmentOffsetLocation                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    AttachmentOffsetRotation                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFlashlightBase_C::AttemptGrab(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, bool* canGrab, SWGVR_EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.AttemptGrab");
		
		AFlashlightBase_C_AttemptGrab_Params params {};
		params.Grabber = Grabber;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canGrab != nullptr)
			*canGrab = params.canGrab;
		if (SnapType != nullptr)
			*SnapType = params.SnapType;
		if (snapLocation != nullptr)
			*snapLocation = params.snapLocation;
		if (snapRotation != nullptr)
			*snapRotation = params.snapRotation;
		if (AttachmentOffsetLocation != nullptr)
			*AttachmentOffsetLocation = params.AttachmentOffsetLocation;
		if (AttachmentOffsetRotation != nullptr)
			*AttachmentOffsetRotation = params.AttachmentOffsetRotation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlashlightBase.FlashlightBase_C.AttemptRelease
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AFlashlightBase_C::AttemptRelease(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.AttemptRelease");
		
		AFlashlightBase_C_AttemptRelease_Params params {};
		params.Grabber = Grabber;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlashlightBase.FlashlightBase_C.GetGrabber
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Grabber                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightBase_C::GetGrabber(class ASWGVRCharacter** Grabber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.GetGrabber");
		
		AFlashlightBase_C_GetGrabber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grabber != nullptr)
			*Grabber = params.Grabber;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlashlightBase.FlashlightBase_C.GetIsOn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               IsOn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFlashlightBase_C::GetIsOn(bool* IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.GetIsOn");
		
		AFlashlightBase_C_GetIsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOn != nullptr)
			*IsOn = params.IsOn;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlashlightBase.FlashlightBase_C.ToggleFlashlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFlashlightBase_C::ToggleFlashlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.ToggleFlashlight");
		
		AFlashlightBase_C_ToggleFlashlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlashlightBase.FlashlightBase_C.OnVRReleased
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ReleaseVelocity                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightBase_C::OnVRReleased(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, const struct FVector& ReleaseVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.OnVRReleased");
		
		AFlashlightBase_C_OnVRReleased_Params params {};
		params.Grabber = Grabber;
		params.Hand = Hand;
		params.ReleaseVelocity = ReleaseVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlashlightBase.FlashlightBase_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionExit__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightBase_C::BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionExit__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionExit__DelegateSignature");
		
		AFlashlightBase_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionExit__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlashlightBase.FlashlightBase_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionEnter__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightBase_C::BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionEnter__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionEnter__DelegateSignature");
		
		AFlashlightBase_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionEnter__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlashlightBase.FlashlightBase_C.OnVRInteract
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             VRCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightBase_C::OnVRInteract(class ASWGVRCharacter* VRCharacter, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.OnVRInteract");
		
		AFlashlightBase_C_OnVRInteract_Params params {};
		params.VRCharacter = VRCharacter;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlashlightBase.FlashlightBase_C.OnVRGrabbed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightBase_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.OnVRGrabbed");
		
		AFlashlightBase_C_OnVRGrabbed_Params params {};
		params.Grabber = Grabber;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlashlightBase.FlashlightBase_C.ExecuteUbergraph_FlashlightBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightBase_C::ExecuteUbergraph_FlashlightBase(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.ExecuteUbergraph_FlashlightBase");
		
		AFlashlightBase_C_ExecuteUbergraph_FlashlightBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FlashlightBase.FlashlightBase_C.OnFlashlightStatusChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FlashLightOn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFlashlightBase_C::OnFlashlightStatusChanged__DelegateSignature(bool FlashLightOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.OnFlashlightStatusChanged__DelegateSignature");
		
		AFlashlightBase_C_OnFlashlightStatusChanged__DelegateSignature_Params params {};
		params.FlashLightOn = FlashLightOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFlashlightBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlashlightBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FlashlightBase.FlashlightBase_C");
		return ptr;
	}

}


