/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Office01_MotionControllerPawn_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice01_MotionControllerPawn_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4");
		
		AOffice01_MotionControllerPawn_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice01_MotionControllerPawn_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_3");
		
		AOffice01_MotionControllerPawn_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice01_MotionControllerPawn_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2");
		
		AOffice01_MotionControllerPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AOffice01_MotionControllerPawn_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1");
		
		AOffice01_MotionControllerPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice01_MotionControllerPawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.ReceiveBeginPlay");
		
		AOffice01_MotionControllerPawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_MotionControllerPawn_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.ReceiveActorBeginOverlap");
		
		AOffice01_MotionControllerPawn_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.CheckForGamePad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_MotionControllerPawn_C::CheckForGamePad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.CheckForGamePad");
		
		AOffice01_MotionControllerPawn_C_CheckForGamePad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.ExecuteUbergraph_Office01_MotionControllerPawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_MotionControllerPawn_C::ExecuteUbergraph_Office01_MotionControllerPawn(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_MotionControllerPawn.Office01_MotionControllerPawn_C.ExecuteUbergraph_Office01_MotionControllerPawn");
		
		AOffice01_MotionControllerPawn_C_ExecuteUbergraph_Office01_MotionControllerPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice01_MotionControllerPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice01_MotionControllerPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office01_MotionControllerPawn.Office01_MotionControllerPawn_C");
		return ptr;
	}

}


