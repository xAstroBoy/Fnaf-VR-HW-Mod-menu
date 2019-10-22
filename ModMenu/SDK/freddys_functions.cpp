
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

// Function freddys.AchievementsFunctions.ClearAllAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAchievementsFunctions::STATIC_ClearAllAchievements(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.AchievementsFunctions.ClearAllAchievements");

	UAchievementsFunctions_ClearAllAchievements_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.AICommonFunctionalities.isVerticalAxis
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EAIScareDirection              Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAICommonFunctionalities::STATIC_isVerticalAxis(EAIScareDirection Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.AICommonFunctionalities.isVerticalAxis");

	UAICommonFunctionalities_isVerticalAxis_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.AICommonFunctionalities.isValidAxisDirection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EAIBaseAxisDirection           Axis                           (Parm, ZeroConstructor, IsPlainOldData)
// EAIScareDirection              Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAICommonFunctionalities::STATIC_isValidAxisDirection(EAIBaseAxisDirection Axis, EAIScareDirection Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.AICommonFunctionalities.isValidAxisDirection");

	UAICommonFunctionalities_isValidAxisDirection_Params params;
	params.Axis = Axis;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.AICommonFunctionalities.isHorizontalAxis
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EAIScareDirection              Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAICommonFunctionalities::STATIC_isHorizontalAxis(EAIScareDirection Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.AICommonFunctionalities.isHorizontalAxis");

	UAICommonFunctionalities_isHorizontalAxis_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FlowGraphNode.UnregisterConnector
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFlowGraphConnector*     Connector                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AFlowGraphNode::UnregisterConnector(class UFlowGraphConnector* Connector)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.UnregisterConnector");

	AFlowGraphNode_UnregisterConnector_Params params;
	params.Connector = Connector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FlowGraphNode.SetFlowSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           EnableAsFlowSource             (Parm, ZeroConstructor, IsPlainOldData)

void AFlowGraphNode::SetFlowSource(bool EnableAsFlowSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.SetFlowSource");

	AFlowGraphNode_SetFlowSource_Params params;
	params.EnableAsFlowSource = EnableAsFlowSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FlowGraphNode.RegisterConnector
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFlowGraphConnector*     Connector                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AFlowGraphNode::RegisterConnector(class UFlowGraphConnector* Connector)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.RegisterConnector");

	AFlowGraphNode_RegisterConnector_Params params;
	params.Connector = Connector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FlowGraphNode.OnFlowChanged
// (Event, Protected, BlueprintEvent)

void AFlowGraphNode::OnFlowChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.OnFlowChanged");

	AFlowGraphNode_OnFlowChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FlowGraphNode.OnConnectorDisconnected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFlowGraphConnector*     MyConnector                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AFlowGraphNode::OnConnectorDisconnected(class UFlowGraphConnector* MyConnector)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.OnConnectorDisconnected");

	AFlowGraphNode_OnConnectorDisconnected_Params params;
	params.MyConnector = MyConnector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FlowGraphNode.OnConnectorConnected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFlowGraphConnector*     MyConnector                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFlowGraphConnector*     TheirConnector                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AFlowGraphNode::OnConnectorConnected(class UFlowGraphConnector* MyConnector, class UFlowGraphConnector* TheirConnector)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.OnConnectorConnected");

	AFlowGraphNode_OnConnectorConnected_Params params;
	params.MyConnector = MyConnector;
	params.TheirConnector = TheirConnector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FlowGraphNode.IsFlowSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFlowGraphNode::IsFlowSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.IsFlowSource");

	AFlowGraphNode_IsFlowSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FlowGraphNode.HasFlow
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFlowGraphNode::HasFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.HasFlow");

	AFlowGraphNode_HasFlow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FlowGraphNode.GetConnectors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UFlowGraphConnector*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UFlowGraphConnector*> AFlowGraphNode::GetConnectors()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.GetConnectors");

	AFlowGraphNode_GetConnectors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FlowGraphNode.FlowTypeSwitch
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EFlowGraphFlowType             FlowType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFlowGraphNode::FlowTypeSwitch(EFlowGraphFlowType* FlowType)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.FlowTypeSwitch");

	AFlowGraphNode_FlowTypeSwitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlowType != nullptr)
		*FlowType = params.FlowType;
}


// Function freddys.FlowGraphNode.CheckConnections
// (Final, Native, Public, BlueprintCallable)

void AFlowGraphNode::CheckConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.CheckConnections");

	AFlowGraphNode_CheckConnections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FNAFGameMode.SpawnLevelDB
// (Final, Native, Public, BlueprintCallable)

void AFNAFGameMode::SpawnLevelDB()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAFGameMode.SpawnLevelDB");

	AFNAFGameMode_SpawnLevelDB_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FNAFGameMode.OnSetLevelDB
// (Event, Public, BlueprintEvent)

void AFNAFGameMode::OnSetLevelDB()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAFGameMode.OnSetLevelDB");

	AFNAFGameMode_OnSetLevelDB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FNAFGamestate.SetVictoryCondition
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGLVictoryState                victory                        (Parm, ZeroConstructor, IsPlainOldData)

void AFNAFGamestate::SetVictoryCondition(EGLVictoryState victory)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAFGamestate.SetVictoryCondition");

	AFNAFGamestate_SetVictoryCondition_Params params;
	params.victory = victory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FNAFGamestate.SetGameState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGLGameState                   State                          (Parm, ZeroConstructor, IsPlainOldData)

void AFNAFGamestate::SetGameState(EGLGameState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAFGamestate.SetGameState");

	AFNAFGamestate_SetGameState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FNAFGamestate.GetVictoryCondition
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGLVictoryState                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGLVictoryState AFNAFGamestate::GetVictoryCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAFGamestate.GetVictoryCondition");

	AFNAFGamestate_GetVictoryCondition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FNAFGamestate.GetGameState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGLGameState                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGLGameState AFNAFGamestate::GetGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAFGamestate.GetGameState");

	AFNAFGamestate_GetGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FNAF_GameInstanceBase.SwitchFNAFGameType
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EFNAFGameType                  GameType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFNAF_GameInstanceBase::SwitchFNAFGameType(EFNAFGameType* GameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.SwitchFNAFGameType");

	UFNAF_GameInstanceBase_SwitchFNAFGameType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameType != nullptr)
		*GameType = params.GameType;
}


// Function freddys.FNAF_GameInstanceBase.StartAsyncSaveGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USaveGame*               SaveGame                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SlotName                       (Parm, ZeroConstructor)
// int                            UserIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UFNAF_GameInstanceBase::StartAsyncSaveGame(class USaveGame* SaveGame, const struct FString& SlotName, int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.StartAsyncSaveGame");

	UFNAF_GameInstanceBase_StartAsyncSaveGame_Params params;
	params.SaveGame = SaveGame;
	params.SlotName = SlotName;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FNAF_GameInstanceBase.IsInDemoMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFNAF_GameInstanceBase::IsInDemoMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.IsInDemoMode");

	UFNAF_GameInstanceBase_IsInDemoMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FNAF_GameInstanceBase.HasDLC
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EFNAFDLCType                   DLC                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFNAF_GameInstanceBase::HasDLC(EFNAFDLCType DLC)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.HasDLC");

	UFNAF_GameInstanceBase_HasDLC_Params params;
	params.DLC = DLC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FNAF_GameInstanceBase.GetPrimaryGPUBrand
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFNAF_GameInstanceBase::STATIC_GetPrimaryGPUBrand()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.GetPrimaryGPUBrand");

	UFNAF_GameInstanceBase_GetPrimaryGPUBrand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FNAF_GameInstanceBase.GetGPUBrandName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFNAF_GameInstanceBase::STATIC_GetGPUBrandName()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.GetGPUBrandName");

	UFNAF_GameInstanceBase_GetGPUBrandName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FNAF_GameInstanceBase.GetGameType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EFNAFGameType                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EFNAFGameType UFNAF_GameInstanceBase::GetGameType()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.GetGameType");

	UFNAF_GameInstanceBase_GetGameType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FNAF_GameInstanceBase.GetForcedVariantNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFNAF_GameInstanceBase::GetForcedVariantNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.GetForcedVariantNumber");

	UFNAF_GameInstanceBase_GetForcedVariantNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.GridCalculatorActor.SetCellDebugDisplay
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            CellID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellY                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellDistance                   (Parm, ZeroConstructor, IsPlainOldData)

void AGridCalculatorActor::SetCellDebugDisplay(int CellID, int CellX, int CellY, int CellDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.SetCellDebugDisplay");

	AGridCalculatorActor_SetCellDebugDisplay_Params params;
	params.CellID = CellID;
	params.CellX = CellX;
	params.CellY = CellY;
	params.CellDistance = CellDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.GridCalculatorActor.ResetDistances
// (Final, Native, Public, BlueprintCallable)

void AGridCalculatorActor::ResetDistances()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.ResetDistances");

	AGridCalculatorActor_ResetDistances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.GridCalculatorActor.GetGridSize
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGridCalculatorActor::GetGridSize(int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetGridSize");

	AGridCalculatorActor_GetGridSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
}


// Function freddys.GridCalculatorActor.GetDistanceToCellAtWorldPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldPosition                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AGridCalculatorActor::GetDistanceToCellAtWorldPosition(const struct FVector& WorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetDistanceToCellAtWorldPosition");

	AGridCalculatorActor_GetDistanceToCellAtWorldPosition_Params params;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.GridCalculatorActor.GetDistanceToCell
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            CellID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AGridCalculatorActor::GetDistanceToCell(int CellID)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetDistanceToCell");

	AGridCalculatorActor_GetDistanceToCell_Params params;
	params.CellID = CellID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.GridCalculatorActor.GetCellWorldPositionByCellPos
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            CellX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellY                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AGridCalculatorActor::GetCellWorldPositionByCellPos(int CellX, int CellY)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellWorldPositionByCellPos");

	AGridCalculatorActor_GetCellWorldPositionByCellPos_Params params;
	params.CellX = CellX;
	params.CellY = CellY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.GridCalculatorActor.GetCellWorldPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            CellID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AGridCalculatorActor::GetCellWorldPosition(int CellID)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellWorldPosition");

	AGridCalculatorActor_GetCellWorldPosition_Params params;
	params.CellID = CellID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.GridCalculatorActor.GetCellsBetweenDistances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            MinDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> AGridCalculatorActor::GetCellsBetweenDistances(int MinDistance, int MaxDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellsBetweenDistances");

	AGridCalculatorActor_GetCellsBetweenDistances_Params params;
	params.MinDistance = MinDistance;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.GridCalculatorActor.GetCellsAtDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> AGridCalculatorActor::GetCellsAtDistance(int Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellsAtDistance");

	AGridCalculatorActor_GetCellsAtDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.GridCalculatorActor.GetCellPosition
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            CellID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CellY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGridCalculatorActor::GetCellPosition(int CellID, int* CellX, int* CellY)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellPosition");

	AGridCalculatorActor_GetCellPosition_Params params;
	params.CellID = CellID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CellX != nullptr)
		*CellX = params.CellX;
	if (CellY != nullptr)
		*CellY = params.CellY;
}


// Function freddys.GridCalculatorActor.GetCellPosFromWorldPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldPosition                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            CellX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CellY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGridCalculatorActor::GetCellPosFromWorldPosition(const struct FVector& WorldPosition, int* CellX, int* CellY)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellPosFromWorldPosition");

	AGridCalculatorActor_GetCellPosFromWorldPosition_Params params;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CellX != nullptr)
		*CellX = params.CellX;
	if (CellY != nullptr)
		*CellY = params.CellY;
}


// Function freddys.GridCalculatorActor.GetCellIDFromWorldPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldPosition                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AGridCalculatorActor::GetCellIDFromWorldPosition(const struct FVector& WorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellIDFromWorldPosition");

	AGridCalculatorActor_GetCellIDFromWorldPosition_Params params;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.GridCalculatorActor.GetCellIDFromGridPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            CellX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellY                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AGridCalculatorActor::GetCellIDFromGridPosition(int CellX, int CellY)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellIDFromGridPosition");

	AGridCalculatorActor_GetCellIDFromGridPosition_Params params;
	params.CellX = CellX;
	params.CellY = CellY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.GridCalculatorActor.FindPathFromWorldPositions
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldPositionStart             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 WorldPositionEnd               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> AGridCalculatorActor::FindPathFromWorldPositions(const struct FVector& WorldPositionStart, const struct FVector& WorldPositionEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.FindPathFromWorldPositions");

	AGridCalculatorActor_FindPathFromWorldPositions_Params params;
	params.WorldPositionStart = WorldPositionStart;
	params.WorldPositionEnd = WorldPositionEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.GridCalculatorActor.FindPathFromCellIDs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            StartCellID                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndCellID                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> AGridCalculatorActor::FindPathFromCellIDs(int StartCellID, int EndCellID)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.FindPathFromCellIDs");

	AGridCalculatorActor_FindPathFromCellIDs_Params params;
	params.StartCellID = StartCellID;
	params.EndCellID = EndCellID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.GridCalculatorActor.CalculateDistancesFromWorldPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 WorldPosition                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGridCalculatorActor::CalculateDistancesFromWorldPosition(const struct FVector& WorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.CalculateDistancesFromWorldPosition");

	AGridCalculatorActor_CalculateDistancesFromWorldPosition_Params params;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.GridCalculatorActor.CalculateDistancesFromGridPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GridX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            GridY                          (Parm, ZeroConstructor, IsPlainOldData)

void AGridCalculatorActor::CalculateDistancesFromGridPosition(int GridX, int GridY)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.CalculateDistancesFromGridPosition");

	AGridCalculatorActor_CalculateDistancesFromGridPosition_Params params;
	params.GridX = GridX;
	params.GridY = GridY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.LevelDB.LoadLevelByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LevelName                      (Parm, ZeroConstructor)

void ULevelDB::LoadLevelByName(const struct FString& LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.LevelDB.LoadLevelByName");

	ULevelDB_LoadLevelByName_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.LevelDB.LoadLevelByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LevelID                        (Parm, ZeroConstructor, IsPlainOldData)

void ULevelDB::LoadLevelByID(int LevelID)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.LevelDB.LoadLevelByID");

	ULevelDB_LoadLevelByID_Params params;
	params.LevelID = LevelID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.LevelDB.LoadLevel
// (Native, Public, BlueprintCallable)

void ULevelDB::LoadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.LevelDB.LoadLevel");

	ULevelDB_LoadLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.LevelDB.GetLevelIDByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULevelDB::GetLevelIDByName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.LevelDB.GetLevelIDByName");

	ULevelDB_GetLevelIDByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.LevelDB.GetLevelID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULevelDB::GetLevelID()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.LevelDB.GetLevelID");

	ULevelDB_GetLevelID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.LevelDB.CreateLevelDB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelDB*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelDB* ULevelDB::STATIC_CreateLevelDB(class UObject* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.LevelDB.CreateLevelDB");

	ULevelDB_CreateLevelDB_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.NPCBaseInterface.SetHealth
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          health                         (Parm, ZeroConstructor, IsPlainOldData)

void UNPCBaseInterface::SetHealth(float health)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.NPCBaseInterface.SetHealth");

	UNPCBaseInterface_SetHealth_Params params;
	params.health = health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.NPCBaseInterface.SetAILifeCycle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAILifeCycle                   lifeCycle                      (Parm, ZeroConstructor, IsPlainOldData)

void UNPCBaseInterface::SetAILifeCycle(EAILifeCycle lifeCycle)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.NPCBaseInterface.SetAILifeCycle");

	UNPCBaseInterface_SetAILifeCycle_Params params;
	params.lifeCycle = lifeCycle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.NPCBaseInterface.GetHealth
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNPCBaseInterface::GetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.NPCBaseInterface.GetHealth");

	UNPCBaseInterface_GetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.Switchboardbuttons.OnSwitchBoardButtonPessed
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 buttonidentification           (Parm, ZeroConstructor)

void ASwitchboardbuttons::OnSwitchBoardButtonPessed(const struct FString& buttonidentification)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.Switchboardbuttons.OnSwitchBoardButtonPessed");

	ASwitchboardbuttons_OnSwitchBoardButtonPessed_Params params;
	params.buttonidentification = buttonidentification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.Switchboardbuttons.BeginOverlap
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASwitchboardbuttons::BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.Switchboardbuttons.BeginOverlap");

	ASwitchboardbuttons_BeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.SWS_AudioManager.StopAudioByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void ASWS_AudioManager::StopAudioByID(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.StopAudioByID");

	ASWS_AudioManager_StopAudioByID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.SWS_AudioManager.StopAudioByHandle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAudioHandle            AudioHandle                    (ConstParm, Parm, OutParm, ReferenceParm)

void ASWS_AudioManager::StopAudioByHandle(const struct FAudioHandle& AudioHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.StopAudioByHandle");

	ASWS_AudioManager_StopAudioByHandle_Params params;
	params.AudioHandle = AudioHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.SWS_AudioManager.StopAudioByAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              Base                           (Parm, ZeroConstructor, IsPlainOldData)

void ASWS_AudioManager::StopAudioByAsset(class USoundBase* Base)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.StopAudioByAsset");

	ASWS_AudioManager_StopAudioByAsset_Params params;
	params.Base = Base;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.SWS_AudioManager.RefreshAudioHandlePool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAudioHandle            Handle                         (Parm, OutParm)

void ASWS_AudioManager::RefreshAudioHandlePool(struct FAudioHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.RefreshAudioHandlePool");

	ASWS_AudioManager_RefreshAudioHandlePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function freddys.SWS_AudioManager.PlayAudioByName
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FAudioHandle            ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FAudioHandle ASWS_AudioManager::PlayAudioByName(const struct FString& Name, class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.PlayAudioByName");

	ASWS_AudioManager_PlayAudioByName_Params params;
	params.Name = Name;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.SWS_AudioManager.PlayAudioByID
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FAudioHandle            ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FAudioHandle ASWS_AudioManager::PlayAudioByID(int ID, class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.PlayAudioByID");

	ASWS_AudioManager_PlayAudioByID_Params params;
	params.ID = ID;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.SWS_AudioManager.PlayAudioByAsset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FAudioHandle            ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FAudioHandle ASWS_AudioManager::PlayAudioByAsset(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.PlayAudioByAsset");

	ASWS_AudioManager_PlayAudioByAsset_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sound = Sound;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.SWS_AudioManager.GetSoundID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundCue*               cue                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASWS_AudioManager::GetSoundID(class USoundCue* cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.GetSoundID");

	ASWS_AudioManager_GetSoundID_Params params;
	params.cue = cue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.SWS_AudioManager.GetSoundCueByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class USoundCue*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundCue* ASWS_AudioManager::GetSoundCueByName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.GetSoundCueByName");

	ASWS_AudioManager_GetSoundCueByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.SWS_AudioManager.GetSoundByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundCue* ASWS_AudioManager::GetSoundByID(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.GetSoundByID");

	ASWS_AudioManager_GetSoundByID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.SWS_AudioManager.GetAudioManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ASWS_AudioManager*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASWS_AudioManager* ASWS_AudioManager::STATIC_GetAudioManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.GetAudioManager");

	ASWS_AudioManager_GetAudioManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.SWS_AudioSource.StopAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void ASWS_AudioSource::StopAudio(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioSource.StopAudio");

	ASWS_AudioSource_StopAudio_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.SWS_AudioSource.PlayAudio
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)

void ASWS_AudioSource::PlayAudio(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioSource.PlayAudio");

	ASWS_AudioSource_PlayAudio_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sound = Sound;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.SWS_AudioSource.DestroyHandle
// (Final, Native, Public)

void ASWS_AudioSource::DestroyHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioSource.DestroyHandle");

	ASWS_AudioSource_DestroyHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.SWS_GroupComponent.UnRegisterAudioSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASWS_AudioSource*        cue                            (Parm, ZeroConstructor, IsPlainOldData)

void USWS_GroupComponent::UnRegisterAudioSource(class ASWS_AudioSource* cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.UnRegisterAudioSource");

	USWS_GroupComponent_UnRegisterAudioSource_Params params;
	params.cue = cue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.SWS_GroupComponent.RegisterAudioSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASWS_AudioSource*        cue                            (Parm, ZeroConstructor, IsPlainOldData)

void USWS_GroupComponent::RegisterAudioSource(class ASWS_AudioSource* cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.RegisterAudioSource");

	USWS_GroupComponent_RegisterAudioSource_Params params;
	params.cue = cue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.SWS_GroupComponent.OnVolumeModified
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void USWS_GroupComponent::OnVolumeModified(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.OnVolumeModified");

	USWS_GroupComponent_OnVolumeModified_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.SWS_GroupComponent.OnPitchModified
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void USWS_GroupComponent::OnPitchModified(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.OnPitchModified");

	USWS_GroupComponent_OnPitchModified_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.SWS_GroupComponent.ModifyGroupVolumeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void USWS_GroupComponent::ModifyGroupVolumeMultiplier(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.ModifyGroupVolumeMultiplier");

	USWS_GroupComponent_ModifyGroupVolumeMultiplier_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.SWS_GroupComponent.ModifyGroupPitchMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void USWS_GroupComponent::ModifyGroupPitchMultiplier(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.ModifyGroupPitchMultiplier");

	USWS_GroupComponent_ModifyGroupPitchMultiplier_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.SWS_GroupComponent.GetTotalFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USWS_GroupComponent::GetTotalFrequency()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.GetTotalFrequency");

	USWS_GroupComponent_GetTotalFrequency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.SWS_GroupComponent.GetTotalAmplitude
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USWS_GroupComponent::GetTotalAmplitude()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.GetTotalAmplitude");

	USWS_GroupComponent_GetTotalAmplitude_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FlowGraphConnector.OnDisconnected
// (Event, Protected, BlueprintEvent)

void UFlowGraphConnector::OnDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.OnDisconnected");

	UFlowGraphConnector_OnDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FlowGraphConnector.OnConnectorRegistered
// (Event, Protected, BlueprintEvent)

void UFlowGraphConnector::OnConnectorRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.OnConnectorRegistered");

	UFlowGraphConnector_OnConnectorRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FlowGraphConnector.OnConnected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFlowGraphConnector*     OtherConnector                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFlowGraphConnector::OnConnected(class UFlowGraphConnector* OtherConnector)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.OnConnected");

	UFlowGraphConnector_OnConnected_Params params;
	params.OtherConnector = OtherConnector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FlowGraphConnector.HasFlow
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFlowGraphConnector::HasFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.HasFlow");

	UFlowGraphConnector_HasFlow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FlowGraphConnector.GetNodeOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFlowGraphNode*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFlowGraphNode* UFlowGraphConnector::GetNodeOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.GetNodeOwner");

	UFlowGraphConnector_GetNodeOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FlowGraphConnector.GetConnectedNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFlowGraphNode*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFlowGraphNode* UFlowGraphConnector::GetConnectedNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.GetConnectedNode");

	UFlowGraphConnector_GetConnectedNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FlowGraphConnector.GetConnectedConnector
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFlowGraphConnector*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFlowGraphConnector* UFlowGraphConnector::GetConnectedConnector()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.GetConnectedConnector");

	UFlowGraphConnector_GetConnectedConnector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function freddys.FlowGraphConnector.Disconnect
// (Final, Native, Public, BlueprintCallable)

void UFlowGraphConnector::Disconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.Disconnect");

	UFlowGraphConnector_Disconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FlowGraphConnector.Connect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFlowGraphConnector*     OtherConnector                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFlowGraphConnector::Connect(class UFlowGraphConnector* OtherConnector)
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.Connect");

	UFlowGraphConnector_Connect_Params params;
	params.OtherConnector = OtherConnector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function freddys.FlowGraphConnector.CheckConnection
// (Final, Native, Public, BlueprintCallable)

void UFlowGraphConnector::CheckConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.CheckConnection");

	UFlowGraphConnector_CheckConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
