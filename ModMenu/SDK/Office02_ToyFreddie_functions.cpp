
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

// Function Office02_ToyFreddie.Office02_ToyFreddie_C.CanEnterRoom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FOfficeRoomTransition_Struct TransitionInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ARoomInfo_Bp_C**         RoomBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanEnterRoom                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOffice02_ToyFreddie_C::CanEnterRoom(class ARoomInfo_Bp_C** RoomBP, struct FOfficeRoomTransition_Struct* TransitionInfo, bool* CanEnterRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_ToyFreddie.Office02_ToyFreddie_C.CanEnterRoom");

	AOffice02_ToyFreddie_C_CanEnterRoom_Params params;
	params.RoomBP = RoomBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionInfo != nullptr)
		*TransitionInfo = params.TransitionInfo;
	if (CanEnterRoom != nullptr)
		*CanEnterRoom = params.CanEnterRoom;
}


// Function Office02_ToyFreddie.Office02_ToyFreddie_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice02_ToyFreddie_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_ToyFreddie.Office02_ToyFreddie_C.UserConstructionScript");

	AOffice02_ToyFreddie_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_ToyFreddie.Office02_ToyFreddie_C.FreddyBlackEye
// (BlueprintCallable, BlueprintEvent)

void AOffice02_ToyFreddie_C::FreddyBlackEye()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_ToyFreddie.Office02_ToyFreddie_C.FreddyBlackEye");

	AOffice02_ToyFreddie_C_FreddyBlackEye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_ToyFreddie.Office02_ToyFreddie_C.FreddyNormalEye
// (BlueprintCallable, BlueprintEvent)

void AOffice02_ToyFreddie_C::FreddyNormalEye()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_ToyFreddie.Office02_ToyFreddie_C.FreddyNormalEye");

	AOffice02_ToyFreddie_C_FreddyNormalEye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_ToyFreddie.Office02_ToyFreddie_C.ExecuteUbergraph_Office02_ToyFreddie
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_ToyFreddie_C::ExecuteUbergraph_Office02_ToyFreddie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_ToyFreddie.Office02_ToyFreddie_C.ExecuteUbergraph_Office02_ToyFreddie");

	AOffice02_ToyFreddie_C_ExecuteUbergraph_Office02_ToyFreddie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
