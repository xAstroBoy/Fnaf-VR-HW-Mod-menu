/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "DropPointLerpPosition_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpPosition.DropPointLerpPosition_C.PerformLerp
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorToLerp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LerpIsFinished                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADropPointLerpPosition_C::PerformLerp(float DeltaTime, class AActor* ActorToLerp, bool* LerpIsFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpPosition.DropPointLerpPosition_C.PerformLerp");
		
		ADropPointLerpPosition_C_PerformLerp_Params params {};
		params.DeltaTime = DeltaTime;
		params.ActorToLerp = ActorToLerp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LerpIsFinished != nullptr)
			*LerpIsFinished = params.LerpIsFinished;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpPosition.DropPointLerpPosition_C.GetLerpActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      ActorBeingLerped                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADropPointLerpPosition_C::GetLerpActor(class AActor** ActorBeingLerped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpPosition.DropPointLerpPosition_C.GetLerpActor");
		
		ADropPointLerpPosition_C_GetLerpActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorBeingLerped != nullptr)
			*ActorBeingLerped = params.ActorBeingLerped;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpPosition.DropPointLerpPosition_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADropPointLerpPosition_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpPosition.DropPointLerpPosition_C.Timeline_0__FinishedFunc");
		
		ADropPointLerpPosition_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpPosition.DropPointLerpPosition_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADropPointLerpPosition_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpPosition.DropPointLerpPosition_C.Timeline_0__UpdateFunc");
		
		ADropPointLerpPosition_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpPosition.DropPointLerpPosition_C.OnActorReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DroppedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADropPointLerpPosition_C::OnActorReleased(class ASWGVRCharacter* Sender, class AActor* DroppedActor, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpPosition.DropPointLerpPosition_C.OnActorReleased");
		
		ADropPointLerpPosition_C_OnActorReleased_Params params {};
		params.Sender = Sender;
		params.DroppedActor = DroppedActor;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpPosition.DropPointLerpPosition_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADropPointLerpPosition_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpPosition.DropPointLerpPosition_C.ReceiveTick");
		
		ADropPointLerpPosition_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpPosition.DropPointLerpPosition_C.OnDropPointBeginHover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADropPointLerpPosition_C::OnDropPointBeginHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpPosition.DropPointLerpPosition_C.OnDropPointBeginHover");
		
		ADropPointLerpPosition_C_OnDropPointBeginHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpPosition.DropPointLerpPosition_C.OnDropPointEndHover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADropPointLerpPosition_C::OnDropPointEndHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpPosition.DropPointLerpPosition_C.OnDropPointEndHover");
		
		ADropPointLerpPosition_C_OnDropPointEndHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpPosition.DropPointLerpPosition_C.OnBeginLerp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADropPointLerpPosition_C::OnBeginLerp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpPosition.DropPointLerpPosition_C.OnBeginLerp");
		
		ADropPointLerpPosition_C_OnBeginLerp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpPosition.DropPointLerpPosition_C.OnEndLerp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADropPointLerpPosition_C::OnEndLerp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpPosition.DropPointLerpPosition_C.OnEndLerp");
		
		ADropPointLerpPosition_C_OnEndLerp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpPosition.DropPointLerpPosition_C.LerpPreview
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADropPointLerpPosition_C::LerpPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpPosition.DropPointLerpPosition_C.LerpPreview");
		
		ADropPointLerpPosition_C_LerpPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpPosition.DropPointLerpPosition_C.HandleAttachPreviewActor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADropPointLerpPosition_C::HandleAttachPreviewActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpPosition.DropPointLerpPosition_C.HandleAttachPreviewActor");
		
		ADropPointLerpPosition_C_HandleAttachPreviewActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpPosition.DropPointLerpPosition_C.ExecuteUbergraph_DropPointLerpPosition
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADropPointLerpPosition_C::ExecuteUbergraph_DropPointLerpPosition(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpPosition.DropPointLerpPosition_C.ExecuteUbergraph_DropPointLerpPosition");
		
		ADropPointLerpPosition_C_ExecuteUbergraph_DropPointLerpPosition_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ADropPointLerpPosition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADropPointLerpPosition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DropPointLerpPosition.DropPointLerpPosition_C");
		return ptr;
	}

}


