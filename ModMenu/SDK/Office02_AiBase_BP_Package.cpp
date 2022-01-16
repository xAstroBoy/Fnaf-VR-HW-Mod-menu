/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Office02_AiBase_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckForAnimatronicCatagory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_AiBase_BP_C::CheckForAnimatronicCatagory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckForAnimatronicCatagory");
		
		AOffice02_AiBase_BP_C_CheckForAnimatronicCatagory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_AiBase_BP.Office02_AiBase_BP_C.MoveBackToStarting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_AiBase_BP_C::MoveBackToStarting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.MoveBackToStarting");
		
		AOffice02_AiBase_BP_C_MoveBackToStarting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckForMaskType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_AiBase_BP_C::CheckForMaskType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckForMaskType");
		
		AOffice02_AiBase_BP_C_CheckForMaskType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckLightFixture
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_AiBase_BP_C::CheckLightFixture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckLightFixture");
		
		AOffice02_AiBase_BP_C_CheckLightFixture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_AiBase_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReceiveTick");
		
		AOffice02_AiBase_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_AiBase_BP.Office02_AiBase_BP_C.ResetDoOnceNodes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_AiBase_BP_C::ResetDoOnceNodes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.ResetDoOnceNodes");
		
		AOffice02_AiBase_BP_C_ResetDoOnceNodes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReachedKillZone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_AiBase_BP_C::ReachedKillZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReachedKillZone");
		
		AOffice02_AiBase_BP_C_ReachedKillZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_AiBase_BP.Office02_AiBase_BP_C.MoveAi
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ALocPoint_BP_C*                              Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_AiBase_BP_C::MoveAi(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.MoveAi");
		
		AOffice02_AiBase_BP_C_MoveAi_Params params {};
		params.Room = Room;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_AiBase_BP.Office02_AiBase_BP_C.ForcedJumpScare
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_AiBase_BP_C::ForcedJumpScare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.ForcedJumpScare");
		
		AOffice02_AiBase_BP_C_ForcedJumpScare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice02_AiBase_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReceiveBeginPlay");
		
		AOffice02_AiBase_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_AiBase_BP.Office02_AiBase_BP_C.ExecuteUbergraph_Office02_AiBase_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_AiBase_BP_C::ExecuteUbergraph_Office02_AiBase_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.ExecuteUbergraph_Office02_AiBase_BP");
		
		AOffice02_AiBase_BP_C_ExecuteUbergraph_Office02_AiBase_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice02_AiBase_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice02_AiBase_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office02_AiBase_BP.Office02_AiBase_BP_C");
		return ptr;
	}

}


