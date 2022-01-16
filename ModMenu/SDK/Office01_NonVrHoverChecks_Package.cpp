﻿/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Office01_NonVrHoverChecks_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.GetHoverCursorState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		CursorState_ECursorState                           CursorState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_NonVrHoverChecks_C::GetHoverCursorState(CursorState_ECursorState* CursorState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.GetHoverCursorState");
		
		AOffice01_NonVrHoverChecks_C_GetHoverCursorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CursorState != nullptr)
			*CursorState = params.CursorState;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverComponentBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         HoveredComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_NonVrHoverChecks_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverComponentBegin");
		
		AOffice01_NonVrHoverChecks_C_OnVRHoverComponentBegin_Params params {};
		params.Sender = Sender;
		params.HoveredComponent = HoveredComponent;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverComponentEnd
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         HoveredComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_NonVrHoverChecks_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverComponentEnd");
		
		AOffice01_NonVrHoverChecks_C_OnVRHoverComponentEnd_Params params {};
		params.Sender = Sender;
		params.HoveredComponent = HoveredComponent;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverEnd
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_NonVrHoverChecks_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverEnd");
		
		AOffice01_NonVrHoverChecks_C_OnVRHoverEnd_Params params {};
		params.Sender = Sender;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice01_NonVrHoverChecks_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.ReceiveBeginPlay");
		
		AOffice01_NonVrHoverChecks_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASWGVRCharacter*                             Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGVR_EVRHandType                                  Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_NonVrHoverChecks_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, SWGVR_EVRHandType Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverBegin");
		
		AOffice01_NonVrHoverChecks_C_OnVRHoverBegin_Params params {};
		params.Sender = Sender;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.CheckCollision
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_NonVrHoverChecks_C::CheckCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.CheckCollision");
		
		AOffice01_NonVrHoverChecks_C_CheckCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.ExecuteUbergraph_Office01_NonVrHoverChecks
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_NonVrHoverChecks_C::ExecuteUbergraph_Office01_NonVrHoverChecks(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.ExecuteUbergraph_Office01_NonVrHoverChecks");
		
		AOffice01_NonVrHoverChecks_C_ExecuteUbergraph_Office01_NonVrHoverChecks_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice01_NonVrHoverChecks_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice01_NonVrHoverChecks_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C");
		return ptr;
	}

}


