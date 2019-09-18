
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

// Function Office02_ToyBonnie.Office02_ToyBonnie_C.CanEnterRoom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FOfficeRoomTransition_Struct TransitionInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ARoomInfo_Bp_C**         RoomBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanEnterRoom                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOffice02_ToyBonnie_C::CanEnterRoom(class ARoomInfo_Bp_C** RoomBP, struct FOfficeRoomTransition_Struct* TransitionInfo, bool* CanEnterRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_ToyBonnie.Office02_ToyBonnie_C.CanEnterRoom");

	AOffice02_ToyBonnie_C_CanEnterRoom_Params params;
	params.RoomBP = RoomBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionInfo != nullptr)
		*TransitionInfo = params.TransitionInfo;
	if (CanEnterRoom != nullptr)
		*CanEnterRoom = params.CanEnterRoom;
}


// Function Office02_ToyBonnie.Office02_ToyBonnie_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice02_ToyBonnie_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_ToyBonnie.Office02_ToyBonnie_C.UserConstructionScript");

	AOffice02_ToyBonnie_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
