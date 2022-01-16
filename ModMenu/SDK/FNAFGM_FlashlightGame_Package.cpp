/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "FNAFGM_FlashlightGame_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.Flashlight State
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Toggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFNAFGM_FlashlightGame_C::Flashlight_State(bool Toggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.Flashlight State");
		
		AFNAFGM_FlashlightGame_C_Flashlight_State_Params params {};
		params.Toggle = Toggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFNAFGM_FlashlightGame_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.ReceiveBeginPlay");
		
		AFNAFGM_FlashlightGame_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.ExecuteUbergraph_FNAFGM_FlashlightGame
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFNAFGM_FlashlightGame_C::ExecuteUbergraph_FNAFGM_FlashlightGame(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.ExecuteUbergraph_FNAFGM_FlashlightGame");
		
		AFNAFGM_FlashlightGame_C_ExecuteUbergraph_FNAFGM_FlashlightGame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFNAFGM_FlashlightGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFNAFGM_FlashlightGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C");
		return ptr;
	}

}


