/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office02_ToyFreddie_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_ToyFreddie.Office02_ToyFreddie_C.CanEnterRoom
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOfficeRoomTransition_Struct                TransitionInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class ARoomInfo_Bp_C*                              RoomBP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanEnterRoom                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice02_ToyFreddie_C::CanEnterRoom(struct FOfficeRoomTransition_Struct* TransitionInfo, class ARoomInfo_Bp_C* RoomBP, bool* CanEnterRoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_ToyFreddie.Office02_ToyFreddie_C.CanEnterRoom");
		
		AOffice02_ToyFreddie_C_CanEnterRoom_Params params {};
		params.RoomBP = RoomBP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TransitionInfo != nullptr)
			*TransitionInfo = params.TransitionInfo;
		if (CanEnterRoom != nullptr)
			*CanEnterRoom = params.CanEnterRoom;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_ToyFreddie.Office02_ToyFreddie_C.FreddyBlackEye
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_ToyFreddie_C::FreddyBlackEye()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_ToyFreddie.Office02_ToyFreddie_C.FreddyBlackEye");
		
		AOffice02_ToyFreddie_C_FreddyBlackEye_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_ToyFreddie.Office02_ToyFreddie_C.FreddyNormalEye
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_ToyFreddie_C::FreddyNormalEye()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_ToyFreddie.Office02_ToyFreddie_C.FreddyNormalEye");
		
		AOffice02_ToyFreddie_C_FreddyNormalEye_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_ToyFreddie.Office02_ToyFreddie_C.ExecuteUbergraph_Office02_ToyFreddie
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_ToyFreddie_C::ExecuteUbergraph_Office02_ToyFreddie(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_ToyFreddie.Office02_ToyFreddie_C.ExecuteUbergraph_Office02_ToyFreddie");
		
		AOffice02_ToyFreddie_C_ExecuteUbergraph_Office02_ToyFreddie_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice02_ToyFreddie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice02_ToyFreddie_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office02_ToyFreddie.Office02_ToyFreddie_C");
		return ptr;
	}

}


