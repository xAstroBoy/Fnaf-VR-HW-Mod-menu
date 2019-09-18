
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

// Function LocPoint_BP.LocPoint_BP_C.IsAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsAvailable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALocPoint_BP_C::IsAvailable(bool* IsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocPoint_BP.LocPoint_BP_C.IsAvailable");

	ALocPoint_BP_C_IsAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAvailable != nullptr)
		*IsAvailable = params.IsAvailable;
}


// Function LocPoint_BP.LocPoint_BP_C.GetOwnerOfficeAi
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AOfficeAiBase_Bp_C*      CharacterAtLocation            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALocPoint_BP_C::GetOwnerOfficeAi(class AOfficeAiBase_Bp_C** CharacterAtLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocPoint_BP.LocPoint_BP_C.GetOwnerOfficeAi");

	ALocPoint_BP_C_GetOwnerOfficeAi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharacterAtLocation != nullptr)
		*CharacterAtLocation = params.CharacterAtLocation;
}


// Function LocPoint_BP.LocPoint_BP_C.SetOwnerOfficeAi
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOfficeAiBase_Bp_C*      OwnerAi                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OwnerSet                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALocPoint_BP_C::SetOwnerOfficeAi(class AOfficeAiBase_Bp_C* OwnerAi, bool* OwnerSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocPoint_BP.LocPoint_BP_C.SetOwnerOfficeAi");

	ALocPoint_BP_C_SetOwnerOfficeAi_Params params;
	params.OwnerAi = OwnerAi;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OwnerSet != nullptr)
		*OwnerSet = params.OwnerSet;
}


// Function LocPoint_BP.LocPoint_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALocPoint_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocPoint_BP.LocPoint_BP_C.UserConstructionScript");

	ALocPoint_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
