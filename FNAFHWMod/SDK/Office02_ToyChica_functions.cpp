
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

// Function Office02_ToyChica.Office02_ToyChica_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice02_ToyChica_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_ToyChica.Office02_ToyChica_C.UserConstructionScript");

	AOffice02_ToyChica_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_ToyChica.Office02_ToyChica_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice02_ToyChica_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_ToyChica.Office02_ToyChica_C.ReceiveBeginPlay");

	AOffice02_ToyChica_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_ToyChica.Office02_ToyChica_C.MoveAi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C**         Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALocPoint_BP_C**         Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_ToyChica_C::MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_ToyChica.Office02_ToyChica_C.MoveAi");

	AOffice02_ToyChica_C_MoveAi_Params params;
	params.Room = Room;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_ToyChica.Office02_ToyChica_C.ExecuteUbergraph_Office02_ToyChica
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_ToyChica_C::ExecuteUbergraph_Office02_ToyChica(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_ToyChica.Office02_ToyChica_C.ExecuteUbergraph_Office02_ToyChica");

	AOffice02_ToyChica_C_ExecuteUbergraph_Office02_ToyChica_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
