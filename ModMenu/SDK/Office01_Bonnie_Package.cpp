/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office01_Bonnie_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Bonnie.Office01_Bonnie_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice01_Bonnie_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Bonnie.Office01_Bonnie_C.ReceiveBeginPlay");
		
		AOffice01_Bonnie_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Bonnie.Office01_Bonnie_C.MoveAi
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ALocPoint_BP_C*                              Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_Bonnie_C::MoveAi(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Bonnie.Office01_Bonnie_C.MoveAi");
		
		AOffice01_Bonnie_C_MoveAi_Params params {};
		params.Room = Room;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Bonnie.Office01_Bonnie_C.ForceMoveBonnie
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Bonnie_C::ForceMoveBonnie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Bonnie.Office01_Bonnie_C.ForceMoveBonnie");
		
		AOffice01_Bonnie_C_ForceMoveBonnie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Bonnie.Office01_Bonnie_C.Bonnie_SpecialDoorMove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Bonnie_C::Bonnie_SpecialDoorMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Bonnie.Office01_Bonnie_C.Bonnie_SpecialDoorMove");
		
		AOffice01_Bonnie_C_Bonnie_SpecialDoorMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Bonnie.Office01_Bonnie_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_Bonnie_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Bonnie.Office01_Bonnie_C.ReceiveTick");
		
		AOffice01_Bonnie_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Bonnie.Office01_Bonnie_C.ExecuteUbergraph_Office01_Bonnie
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_Bonnie_C::ExecuteUbergraph_Office01_Bonnie(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Bonnie.Office01_Bonnie_C.ExecuteUbergraph_Office01_Bonnie");
		
		AOffice01_Bonnie_C_ExecuteUbergraph_Office01_Bonnie_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice01_Bonnie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice01_Bonnie_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office01_Bonnie.Office01_Bonnie_C");
		return ptr;
	}

}


