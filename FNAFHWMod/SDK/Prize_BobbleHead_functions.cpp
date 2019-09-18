
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

// Function Prize_BobbleHead.Prize_BobbleHead_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrize_BobbleHead_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_BobbleHead.Prize_BobbleHead_C.UserConstructionScript");

	APrize_BobbleHead_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prize_BobbleHead.Prize_BobbleHead_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrize_BobbleHead_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_BobbleHead.Prize_BobbleHead_C.ReceiveBeginPlay");

	APrize_BobbleHead_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prize_BobbleHead.Prize_BobbleHead_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrize_BobbleHead_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_BobbleHead.Prize_BobbleHead_C.ReceiveTick");

	APrize_BobbleHead_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prize_BobbleHead.Prize_BobbleHead_C.ExecuteUbergraph_Prize_BobbleHead
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrize_BobbleHead_C::ExecuteUbergraph_Prize_BobbleHead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_BobbleHead.Prize_BobbleHead_C.ExecuteUbergraph_Prize_BobbleHead");

	APrize_BobbleHead_C_ExecuteUbergraph_Prize_BobbleHead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
