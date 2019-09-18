#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BTTask_MoveTo.BTTask_MoveTo_C.OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367
struct UBTTask_MoveTo_C_OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_MoveTo.BTTask_MoveTo_C.OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367
struct UBTTask_MoveTo_C_OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367_Params
{
};

// Function BTTask_MoveTo.BTTask_MoveTo_C.ReceiveExecute
struct UBTTask_MoveTo_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_MoveTo.BTTask_MoveTo_C.ReceiveAbort
struct UBTTask_MoveTo_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_MoveTo.BTTask_MoveTo_C.ExecuteUbergraph_BTTask_MoveTo
struct UBTTask_MoveTo_C_ExecuteUbergraph_BTTask_MoveTo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
