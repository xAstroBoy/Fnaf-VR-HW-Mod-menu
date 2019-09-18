
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

// Function RoomInfo_Bp.RoomInfo_Bp_C.GetAvailableLocationsForChar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AOfficeAiBase_Bp_C*      CharacterInstance              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ALocPoint_BP_C*>  ListOfLocations                (Parm, OutParm, ZeroConstructor)

void ARoomInfo_Bp_C::GetAvailableLocationsForChar(class AOfficeAiBase_Bp_C* CharacterInstance, TArray<class ALocPoint_BP_C*>* ListOfLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomInfo_Bp.RoomInfo_Bp_C.GetAvailableLocationsForChar");

	ARoomInfo_Bp_C_GetAvailableLocationsForChar_Params params;
	params.CharacterInstance = CharacterInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListOfLocations != nullptr)
		*ListOfLocations = params.ListOfLocations;
}


// Function RoomInfo_Bp.RoomInfo_Bp_C.GetAvailableLocationsForCharType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                  CharacterType                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<class ALocPoint_BP_C*>  ListOfLocations                (Parm, OutParm, ZeroConstructor)

void ARoomInfo_Bp_C::GetAvailableLocationsForCharType(class UClass* CharacterType, TArray<class ALocPoint_BP_C*>* ListOfLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomInfo_Bp.RoomInfo_Bp_C.GetAvailableLocationsForCharType");

	ARoomInfo_Bp_C_GetAvailableLocationsForCharType_Params params;
	params.CharacterType = CharacterType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListOfLocations != nullptr)
		*ListOfLocations = params.ListOfLocations;
}


// Function RoomInfo_Bp.RoomInfo_Bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARoomInfo_Bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomInfo_Bp.RoomInfo_Bp_C.UserConstructionScript");

	ARoomInfo_Bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
