/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "CoinCounterForHiddenCoin_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CoinCounterForHiddenCoin.CoinCounterForHiddenCoin_C.Goto1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCoinCounterForHiddenCoin_C::Goto1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoinCounterForHiddenCoin.CoinCounterForHiddenCoin_C.Goto1");
		
		UCoinCounterForHiddenCoin_C_Goto1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CoinCounterForHiddenCoin.CoinCounterForHiddenCoin_C.Goto2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCoinCounterForHiddenCoin_C::Goto2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoinCounterForHiddenCoin.CoinCounterForHiddenCoin_C.Goto2");
		
		UCoinCounterForHiddenCoin_C_Goto2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CoinCounterForHiddenCoin.CoinCounterForHiddenCoin_C.GoTo3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCoinCounterForHiddenCoin_C::GoTo3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoinCounterForHiddenCoin.CoinCounterForHiddenCoin_C.GoTo3");
		
		UCoinCounterForHiddenCoin_C_GoTo3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CoinCounterForHiddenCoin.CoinCounterForHiddenCoin_C.MakeVisible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCoinCounterForHiddenCoin_C::MakeVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoinCounterForHiddenCoin.CoinCounterForHiddenCoin_C.MakeVisible");
		
		UCoinCounterForHiddenCoin_C_MakeVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CoinCounterForHiddenCoin.CoinCounterForHiddenCoin_C.ExecuteUbergraph_CoinCounterForHiddenCoin
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoinCounterForHiddenCoin_C::ExecuteUbergraph_CoinCounterForHiddenCoin(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoinCounterForHiddenCoin.CoinCounterForHiddenCoin_C.ExecuteUbergraph_CoinCounterForHiddenCoin");
		
		UCoinCounterForHiddenCoin_C_ExecuteUbergraph_CoinCounterForHiddenCoin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoinCounterForHiddenCoin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoinCounterForHiddenCoin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CoinCounterForHiddenCoin.CoinCounterForHiddenCoin_C");
		return ptr;
	}

}


