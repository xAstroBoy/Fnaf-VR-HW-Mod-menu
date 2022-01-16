/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office02_ToyBonnie_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_ToyBonnie.Office02_ToyBonnie_C.CanEnterRoom
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOfficeRoomTransition_Struct                TransitionInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class ARoomInfo_Bp_C*                              RoomBP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanEnterRoom                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice02_ToyBonnie_C::CanEnterRoom(struct FOfficeRoomTransition_Struct* TransitionInfo, class ARoomInfo_Bp_C* RoomBP, bool* CanEnterRoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_ToyBonnie.Office02_ToyBonnie_C.CanEnterRoom");
		
		AOffice02_ToyBonnie_C_CanEnterRoom_Params params {};
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice02_ToyBonnie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice02_ToyBonnie_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office02_ToyBonnie.Office02_ToyBonnie_C");
		return ptr;
	}

}


