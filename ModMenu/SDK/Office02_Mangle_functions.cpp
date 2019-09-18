
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Office02_Mangle.Office02_Mangle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice02_Mangle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_Mangle.Office02_Mangle_C.UserConstructionScript");

	AOffice02_Mangle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_Mangle.Office02_Mangle_C.MoveBackToStarting
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice02_Mangle_C::MoveBackToStarting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_Mangle.Office02_Mangle_C.MoveBackToStarting");

	AOffice02_Mangle_C_MoveBackToStarting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_Mangle.Office02_Mangle_C.ExecuteUbergraph_Office02_Mangle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_Mangle_C::ExecuteUbergraph_Office02_Mangle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_Mangle.Office02_Mangle_C.ExecuteUbergraph_Office02_Mangle");

	AOffice02_Mangle_C_ExecuteUbergraph_Office02_Mangle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
