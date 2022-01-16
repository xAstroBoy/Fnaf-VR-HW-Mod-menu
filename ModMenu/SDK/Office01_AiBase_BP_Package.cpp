/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Office01_AiBase_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_AiBase_BP.Office01_AiBase_BP_C.CheckDoorLights
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_AiBase_BP_C::CheckDoorLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.CheckDoorLights");
		
		AOffice01_AiBase_BP_C_CheckDoorLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_AiBase_BP.Office01_AiBase_BP_C.ResetPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_AiBase_BP_C::ResetPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.ResetPosition");
		
		AOffice01_AiBase_BP_C_ResetPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_AiBase_BP.Office01_AiBase_BP_C.CameraFadeFlicker__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_AiBase_BP_C::CameraFadeFlicker__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.CameraFadeFlicker__FinishedFunc");
		
		AOffice01_AiBase_BP_C_CameraFadeFlicker__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_AiBase_BP.Office01_AiBase_BP_C.CameraFadeFlicker__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOffice01_AiBase_BP_C::CameraFadeFlicker__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.CameraFadeFlicker__UpdateFunc");
		
		AOffice01_AiBase_BP_C_CameraFadeFlicker__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_AiBase_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReceiveTick");
		
		AOffice01_AiBase_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReachedKillZone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_AiBase_BP_C::ReachedKillZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReachedKillZone");
		
		AOffice01_AiBase_BP_C_ReachedKillZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice01_AiBase_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReceiveBeginPlay");
		
		AOffice01_AiBase_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_AiBase_BP.Office01_AiBase_BP_C.TriggerLightSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_AiBase_BP_C::TriggerLightSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.TriggerLightSound");
		
		AOffice01_AiBase_BP_C_TriggerLightSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_AiBase_BP.Office01_AiBase_BP_C.MoveAi
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ALocPoint_BP_C*                              Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_AiBase_BP_C::MoveAi(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.MoveAi");
		
		AOffice01_AiBase_BP_C_MoveAi_Params params {};
		params.Room = Room;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_AiBase_BP.Office01_AiBase_BP_C.ResetAudioTriggerForDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_AiBase_BP_C::ResetAudioTriggerForDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.ResetAudioTriggerForDoor");
		
		AOffice01_AiBase_BP_C_ResetAudioTriggerForDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_AiBase_BP.Office01_AiBase_BP_C.TESTINGONLY_ForceJumpscare
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_AiBase_BP_C::TESTINGONLY_ForceJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.TESTINGONLY_ForceJumpscare");
		
		AOffice01_AiBase_BP_C_TESTINGONLY_ForceJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_AiBase_BP.Office01_AiBase_BP_C.ExecuteUbergraph_Office01_AiBase_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_AiBase_BP_C::ExecuteUbergraph_Office01_AiBase_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.ExecuteUbergraph_Office01_AiBase_BP");
		
		AOffice01_AiBase_BP_C_ExecuteUbergraph_Office01_AiBase_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice01_AiBase_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice01_AiBase_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office01_AiBase_BP.Office01_AiBase_BP_C");
		return ptr;
	}

}


