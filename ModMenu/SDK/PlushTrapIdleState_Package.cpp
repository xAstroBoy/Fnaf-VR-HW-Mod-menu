/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "PlushTrapIdleState_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function PlushTrapIdleState.PlushTrapIdleState_C.Init
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlushTrapIdleState_C::Init(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlushTrapIdleState.PlushTrapIdleState_C.Init");
		
		UPlushTrapIdleState_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPlushTrapIdleState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlushTrapIdleState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlushTrapIdleState.PlushTrapIdleState_C");
		return ptr;
	}

}


