
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

// Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckForAnimatronicCatagory
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice02_AiBase_BP_C::CheckForAnimatronicCatagory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckForAnimatronicCatagory");

	AOffice02_AiBase_BP_C_CheckForAnimatronicCatagory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_AiBase_BP.Office02_AiBase_BP_C.MoveBackToStarting
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice02_AiBase_BP_C::MoveBackToStarting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.MoveBackToStarting");

	AOffice02_AiBase_BP_C_MoveBackToStarting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckForMaskType
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice02_AiBase_BP_C::CheckForMaskType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckForMaskType");

	AOffice02_AiBase_BP_C_CheckForMaskType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckLightFixture
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice02_AiBase_BP_C::CheckLightFixture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckLightFixture");

	AOffice02_AiBase_BP_C_CheckLightFixture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_AiBase_BP.Office02_AiBase_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice02_AiBase_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.UserConstructionScript");

	AOffice02_AiBase_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_AiBase_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReceiveTick");

	AOffice02_AiBase_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_AiBase_BP.Office02_AiBase_BP_C.ResetDoOnceNodes
// (BlueprintCallable, BlueprintEvent)

void AOffice02_AiBase_BP_C::ResetDoOnceNodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.ResetDoOnceNodes");

	AOffice02_AiBase_BP_C_ResetDoOnceNodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReachedKillZone
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice02_AiBase_BP_C::ReachedKillZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReachedKillZone");

	AOffice02_AiBase_BP_C_ReachedKillZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_AiBase_BP.Office02_AiBase_BP_C.MoveAi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C**         Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALocPoint_BP_C**         Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_AiBase_BP_C::MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.MoveAi");

	AOffice02_AiBase_BP_C_MoveAi_Params params;
	params.Room = Room;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_AiBase_BP.Office02_AiBase_BP_C.ForcedJumpScare
// (BlueprintCallable, BlueprintEvent)

void AOffice02_AiBase_BP_C::ForcedJumpScare()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.ForcedJumpScare");

	AOffice02_AiBase_BP_C_ForcedJumpScare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_AiBase_BP.Office02_AiBase_BP_C.ExecuteUbergraph_Office02_AiBase_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_AiBase_BP_C::ExecuteUbergraph_Office02_AiBase_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_AiBase_BP.Office02_AiBase_BP_C.ExecuteUbergraph_Office02_AiBase_BP");

	AOffice02_AiBase_BP_C_ExecuteUbergraph_Office02_AiBase_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
