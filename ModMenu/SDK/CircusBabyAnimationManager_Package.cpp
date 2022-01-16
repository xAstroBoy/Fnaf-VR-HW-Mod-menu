/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "CircusBabyAnimationManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.Initalize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::Initalize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.Initalize");
		
		ACircusBabyAnimationManager_C_Initalize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.EyeLights__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::EyeLights__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.EyeLights__FinishedFunc");
		
		ACircusBabyAnimationManager_C_EyeLights__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.EyeLights__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::EyeLights__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.EyeLights__UpdateFunc");
		
		ACircusBabyAnimationManager_C_EyeLights__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ReceiveBeginPlay");
		
		ACircusBabyAnimationManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.WalkDone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::WalkDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.WalkDone");
		
		ACircusBabyAnimationManager_C_WalkDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ACircusBabyAnimationManager_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ACircusBabyAnimationManager_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ResetAnimState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::ResetAnimState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ResetAnimState");
		
		ACircusBabyAnimationManager_C_ResetAnimState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACircusBabyAnimationManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ReceiveTick");
		
		ACircusBabyAnimationManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ResetUnfucking
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::ResetUnfucking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ResetUnfucking");
		
		ACircusBabyAnimationManager_C_ResetUnfucking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.LightsToWhite
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::LightsToWhite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.LightsToWhite");
		
		ACircusBabyAnimationManager_C_LightsToWhite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ResetSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::ResetSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ResetSpawn");
		
		ACircusBabyAnimationManager_C_ResetSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ActivateWalkdone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::ActivateWalkdone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ActivateWalkdone");
		
		ACircusBabyAnimationManager_C_ActivateWalkdone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.CheckForTeleportTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::CheckForTeleportTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.CheckForTeleportTime");
		
		ACircusBabyAnimationManager_C_CheckForTeleportTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.EyesRedJtop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::EyesRedJtop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.EyesRedJtop");
		
		ACircusBabyAnimationManager_C_EyesRedJtop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.BndEvt__RefToNightmareClosetDoor_K2Node_ComponentBoundEvent_1_SendDoorsOpen__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::BndEvt__RefToNightmareClosetDoor_K2Node_ComponentBoundEvent_1_SendDoorsOpen__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.BndEvt__RefToNightmareClosetDoor_K2Node_ComponentBoundEvent_1_SendDoorsOpen__DelegateSignature");
		
		ACircusBabyAnimationManager_C_BndEvt__RefToNightmareClosetDoor_K2Node_ComponentBoundEvent_1_SendDoorsOpen__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.OpenedDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACircusBabyAnimationManager_C::OpenedDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.OpenedDoor");
		
		ACircusBabyAnimationManager_C_OpenedDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ExecuteUbergraph_CircusBabyAnimationManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACircusBabyAnimationManager_C::ExecuteUbergraph_CircusBabyAnimationManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircusBabyAnimationManager.CircusBabyAnimationManager_C.ExecuteUbergraph_CircusBabyAnimationManager");
		
		ACircusBabyAnimationManager_C_ExecuteUbergraph_CircusBabyAnimationManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACircusBabyAnimationManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACircusBabyAnimationManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CircusBabyAnimationManager.CircusBabyAnimationManager_C");
		return ptr;
	}

}


