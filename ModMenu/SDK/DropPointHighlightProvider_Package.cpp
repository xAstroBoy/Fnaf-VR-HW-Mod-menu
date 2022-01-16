/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "DropPointHighlightProvider_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointHighlightProvider.DropPointHighlightProvider_C.GetDropHighlightMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADropPoint_C*                                Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         MeshToHighlight                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDropPointHighlightProvider_C::GetDropHighlightMesh(class ADropPoint_C* Sender, class UPrimitiveComponent** MeshToHighlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointHighlightProvider.DropPointHighlightProvider_C.GetDropHighlightMesh");
		
		UDropPointHighlightProvider_C_GetDropHighlightMesh_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshToHighlight != nullptr)
			*MeshToHighlight = params.MeshToHighlight;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDropPointHighlightProvider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDropPointHighlightProvider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DropPointHighlightProvider.DropPointHighlightProvider_C");
		return ptr;
	}

}


