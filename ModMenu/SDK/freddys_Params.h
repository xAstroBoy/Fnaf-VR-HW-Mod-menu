#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function freddys.AchievementsFunctions.ClearAllAchievements
	 */
	struct UAchievementsFunctions_ClearAllAchievements_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.AICommonFunctionalities.isVerticalAxis
	 */
	struct UAICommonFunctionalities_isVerticalAxis_Params
	{
	public:
		freddys_EAIScareDirection                                  Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.AICommonFunctionalities.isValidAxisDirection
	 */
	struct UAICommonFunctionalities_isValidAxisDirection_Params
	{
	public:
		freddys_EAIBaseAxisDirection                               Axis;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		freddys_EAIScareDirection                                  Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.AICommonFunctionalities.isHorizontalAxis
	 */
	struct UAICommonFunctionalities_isHorizontalAxis_Params
	{
	public:
		freddys_EAIScareDirection                                  Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphConnector.OnDisconnected
	 */
	struct UFlowGraphConnector_OnDisconnected_Params
	{
	};

	/**
	 * Function freddys.FlowGraphConnector.OnConnectorRegistered
	 */
	struct UFlowGraphConnector_OnConnectorRegistered_Params
	{
	};

	/**
	 * Function freddys.FlowGraphConnector.OnConnected
	 */
	struct UFlowGraphConnector_OnConnected_Params
	{
	public:
		class UFlowGraphConnector*                                 OtherConnector;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphConnector.HasFlow
	 */
	struct UFlowGraphConnector_HasFlow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphConnector.GetNodeOwner
	 */
	struct UFlowGraphConnector_GetNodeOwner_Params
	{
	public:
		class AFlowGraphNode*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphConnector.GetConnectedNode
	 */
	struct UFlowGraphConnector_GetConnectedNode_Params
	{
	public:
		class AFlowGraphNode*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphConnector.GetConnectedConnector
	 */
	struct UFlowGraphConnector_GetConnectedConnector_Params
	{
	public:
		class UFlowGraphConnector*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphConnector.Disconnect
	 */
	struct UFlowGraphConnector_Disconnect_Params
	{
	};

	/**
	 * Function freddys.FlowGraphConnector.Connect
	 */
	struct UFlowGraphConnector_Connect_Params
	{
	public:
		class UFlowGraphConnector*                                 OtherConnector;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphConnector.CheckConnection
	 */
	struct UFlowGraphConnector_CheckConnection_Params
	{
	};

	/**
	 * Function freddys.FlowGraphNode.UnregisterConnector
	 */
	struct AFlowGraphNode_UnregisterConnector_Params
	{
	public:
		class UFlowGraphConnector*                                 Connector;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphNode.SetFlowSource
	 */
	struct AFlowGraphNode_SetFlowSource_Params
	{
	public:
		bool                                                       EnableAsFlowSource;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphNode.RegisterConnector
	 */
	struct AFlowGraphNode_RegisterConnector_Params
	{
	public:
		class UFlowGraphConnector*                                 Connector;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphNode.OnFlowChanged
	 */
	struct AFlowGraphNode_OnFlowChanged_Params
	{
	};

	/**
	 * Function freddys.FlowGraphNode.OnConnectorDisconnected
	 */
	struct AFlowGraphNode_OnConnectorDisconnected_Params
	{
	public:
		class UFlowGraphConnector*                                 MyConnector;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphNode.OnConnectorConnected
	 */
	struct AFlowGraphNode_OnConnectorConnected_Params
	{
	public:
		class UFlowGraphConnector*                                 MyConnector;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFlowGraphConnector*                                 TheirConnector;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphNode.IsFlowSource
	 */
	struct AFlowGraphNode_IsFlowSource_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphNode.HasFlow
	 */
	struct AFlowGraphNode_HasFlow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphNode.GetConnectors
	 */
	struct AFlowGraphNode_GetConnectors_Params
	{
	public:
		TArray<class UFlowGraphConnector*>                         ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphNode.FlowTypeSwitch
	 */
	struct AFlowGraphNode_FlowTypeSwitch_Params
	{
	public:
		freddys_EFlowGraphFlowType                                 FlowType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FlowGraphNode.CheckConnections
	 */
	struct AFlowGraphNode_CheckConnections_Params
	{
	};

	/**
	 * Function freddys.FNAFGameMode.SpawnLevelDB
	 */
	struct AFNAFGameMode_SpawnLevelDB_Params
	{
	};

	/**
	 * Function freddys.FNAFGameMode.OnSetLevelDB
	 */
	struct AFNAFGameMode_OnSetLevelDB_Params
	{
	};

	/**
	 * Function freddys.FNAFGamestate.SetVictoryCondition
	 */
	struct AFNAFGamestate_SetVictoryCondition_Params
	{
	public:
		freddys_EGLVictoryState                                    victory;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FNAFGamestate.SetGameState
	 */
	struct AFNAFGamestate_SetGameState_Params
	{
	public:
		freddys_EGLGameState                                       State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FNAFGamestate.GetVictoryCondition
	 */
	struct AFNAFGamestate_GetVictoryCondition_Params
	{
	public:
		freddys_EGLVictoryState                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FNAFGamestate.GetGameState
	 */
	struct AFNAFGamestate_GetGameState_Params
	{
	public:
		freddys_EGLGameState                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FNAF_GameInstanceBase.SwitchFNAFGameType
	 */
	struct UFNAF_GameInstanceBase_SwitchFNAFGameType_Params
	{
	public:
		freddys_EFNAFGameType                                      GameType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FNAF_GameInstanceBase.StartAsyncSaveGame
	 */
	struct UFNAF_GameInstanceBase_StartAsyncSaveGame_Params
	{
	public:
		class USaveGame*                                           SaveGame;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SlotName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FNAF_GameInstanceBase.LoadLevelAsync
	 */
	struct UFNAF_GameInstanceBase_LoadLevelAsync_Params
	{
	public:
		class FName                                                LevelName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FNAF_GameInstanceBase.IsInDemoMode
	 */
	struct UFNAF_GameInstanceBase_IsInDemoMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FNAF_GameInstanceBase.HasDLC
	 */
	struct UFNAF_GameInstanceBase_HasDLC_Params
	{
	public:
		freddys_EFNAFDLCType                                       DLC;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FNAF_GameInstanceBase.GetPrimaryGPUBrand
	 */
	struct UFNAF_GameInstanceBase_GetPrimaryGPUBrand_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FNAF_GameInstanceBase.GetGPUBrandName
	 */
	struct UFNAF_GameInstanceBase_GetGPUBrandName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FNAF_GameInstanceBase.GetGameType
	 */
	struct UFNAF_GameInstanceBase_GetGameType_Params
	{
	public:
		freddys_EFNAFGameType                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.FNAF_GameInstanceBase.GetForcedVariantNumber
	 */
	struct UFNAF_GameInstanceBase_GetForcedVariantNumber_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.SetCellDebugDisplay
	 */
	struct AGridCalculatorActor_SetCellDebugDisplay_Params
	{
	public:
		int                                                        CellID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        CellX;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        CellY;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        CellDistance;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.ResetDistances
	 */
	struct AGridCalculatorActor_ResetDistances_Params
	{
	};

	/**
	 * Function freddys.GridCalculatorActor.GetGridSize
	 */
	struct AGridCalculatorActor_GetGridSize_Params
	{
	public:
		int                                                        Width;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        Height;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.GetDistanceToCellAtWorldPosition
	 */
	struct AGridCalculatorActor_GetDistanceToCellAtWorldPosition_Params
	{
	public:
		struct FVector                                             WorldPosition;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.GetDistanceToCell
	 */
	struct AGridCalculatorActor_GetDistanceToCell_Params
	{
	public:
		int                                                        CellID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.GetCellWorldPositionByCellPos
	 */
	struct AGridCalculatorActor_GetCellWorldPositionByCellPos_Params
	{
	public:
		int                                                        CellX;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        CellY;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.GetCellWorldPosition
	 */
	struct AGridCalculatorActor_GetCellWorldPosition_Params
	{
	public:
		int                                                        CellID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.GetCellsBetweenDistances
	 */
	struct AGridCalculatorActor_GetCellsBetweenDistances_Params
	{
	public:
		int                                                        MinDistance;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        MaxDistance;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int>                                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.GetCellsAtDistance
	 */
	struct AGridCalculatorActor_GetCellsAtDistance_Params
	{
	public:
		int                                                        Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int>                                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.GetCellPosition
	 */
	struct AGridCalculatorActor_GetCellPosition_Params
	{
	public:
		int                                                        CellID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        CellX;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        CellY;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.GetCellPosFromWorldPosition
	 */
	struct AGridCalculatorActor_GetCellPosFromWorldPosition_Params
	{
	public:
		struct FVector                                             WorldPosition;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        CellX;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        CellY;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.GetCellIDFromWorldPosition
	 */
	struct AGridCalculatorActor_GetCellIDFromWorldPosition_Params
	{
	public:
		struct FVector                                             WorldPosition;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.GetCellIDFromGridPosition
	 */
	struct AGridCalculatorActor_GetCellIDFromGridPosition_Params
	{
	public:
		int                                                        CellX;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        CellY;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.FindPathFromWorldPositions
	 */
	struct AGridCalculatorActor_FindPathFromWorldPositions_Params
	{
	public:
		struct FVector                                             WorldPositionStart;                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldPositionEnd;                                        // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int>                                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.FindPathFromCellIDs
	 */
	struct AGridCalculatorActor_FindPathFromCellIDs_Params
	{
	public:
		int                                                        StartCellID;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        EndCellID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int>                                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.CalculateDistancesFromWorldPosition
	 */
	struct AGridCalculatorActor_CalculateDistancesFromWorldPosition_Params
	{
	public:
		struct FVector                                             WorldPosition;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.GridCalculatorActor.CalculateDistancesFromGridPosition
	 */
	struct AGridCalculatorActor_CalculateDistancesFromGridPosition_Params
	{
	public:
		int                                                        GridX;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        GridY;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.LevelDB.LoadLevelByName
	 */
	struct ULevelDB_LoadLevelByName_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.LevelDB.LoadLevelByID
	 */
	struct ULevelDB_LoadLevelByID_Params
	{
	public:
		int                                                        LevelID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.LevelDB.LoadLevel
	 */
	struct ULevelDB_LoadLevel_Params
	{
	};

	/**
	 * Function freddys.LevelDB.GetLevelIDByName
	 */
	struct ULevelDB_GetLevelIDByName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.LevelDB.GetLevelID
	 */
	struct ULevelDB_GetLevelID_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.LevelDB.CreateLevelDB
	 */
	struct ULevelDB_CreateLevelDB_Params
	{
	public:
		class UObject*                                             Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelDB*                                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.NPCBaseInterface.SetHealth
	 */
	struct UNPCBaseInterface_SetHealth_Params
	{
	public:
		float                                                      health;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.NPCBaseInterface.SetAILifeCycle
	 */
	struct UNPCBaseInterface_SetAILifeCycle_Params
	{
	public:
		freddys_EAILifeCycle                                       lifeCycle;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.NPCBaseInterface.GetHealth
	 */
	struct UNPCBaseInterface_GetHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.Switchboardbuttons.OnSwitchBoardButtonPessed
	 */
	struct ASwitchboardbuttons_OnSwitchBoardButtonPessed_Params
	{
	public:
		class FString                                              buttonidentification;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.Switchboardbuttons.BeginOverlap
	 */
	struct ASwitchboardbuttons_BeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioManager.StopAudioByID
	 */
	struct ASWS_AudioManager_StopAudioByID_Params
	{
	public:
		int                                                        ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioManager.StopAudioByHandle
	 */
	struct ASWS_AudioManager_StopAudioByHandle_Params
	{
	public:
		struct FAudioHandle                                        AudioHandle;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioManager.StopAudioByAsset
	 */
	struct ASWS_AudioManager_StopAudioByAsset_Params
	{
	public:
		class USoundBase*                                          Base;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioManager.RefreshAudioHandlePool
	 */
	struct ASWS_AudioManager_RefreshAudioHandlePool_Params
	{
	public:
		struct FAudioHandle                                        Handle;                                                  // 0x0000(0x0038)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioManager.PlayAudioByName
	 */
	struct ASWS_AudioManager_PlayAudioByName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      VolumeMultiplier;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchMultiplier;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoDestroy;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAudioHandle                                        ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioManager.PlayAudioByID
	 */
	struct ASWS_AudioManager_PlayAudioByID_Params
	{
	public:
		int                                                        ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      VolumeMultiplier;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchMultiplier;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoDestroy;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAudioHandle                                        ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioManager.PlayAudioByAsset
	 */
	struct ASWS_AudioManager_PlayAudioByAsset_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      VolumeMultiplier;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchMultiplier;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoDestroy;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAudioHandle                                        ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioManager.GetSoundID
	 */
	struct ASWS_AudioManager_GetSoundID_Params
	{
	public:
		class USoundCue*                                           cue;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioManager.GetSoundCueByName
	 */
	struct ASWS_AudioManager_GetSoundCueByName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundCue*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioManager.GetSoundByID
	 */
	struct ASWS_AudioManager_GetSoundByID_Params
	{
	public:
		int                                                        ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundCue*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioManager.GetAudioManager
	 */
	struct ASWS_AudioManager_GetAudioManager_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASWS_AudioManager*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioSource.StopAudio
	 */
	struct ASWS_AudioSource_StopAudio_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioSource.PlayAudio
	 */
	struct ASWS_AudioSource_PlayAudio_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      VolumeMultiplier;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchMultiplier;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoDestroy;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_AudioSource.DestroyHandle
	 */
	struct ASWS_AudioSource_DestroyHandle_Params
	{
	};

	/**
	 * Function freddys.SWS_GroupComponent.UnRegisterAudioSource
	 */
	struct USWS_GroupComponent_UnRegisterAudioSource_Params
	{
	public:
		class ASWS_AudioSource*                                    cue;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_GroupComponent.RegisterAudioSource
	 */
	struct USWS_GroupComponent_RegisterAudioSource_Params
	{
	public:
		class ASWS_AudioSource*                                    cue;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_GroupComponent.OnVolumeModified
	 */
	struct USWS_GroupComponent_OnVolumeModified_Params
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_GroupComponent.OnPitchModified
	 */
	struct USWS_GroupComponent_OnPitchModified_Params
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_GroupComponent.ModifyGroupVolumeMultiplier
	 */
	struct USWS_GroupComponent_ModifyGroupVolumeMultiplier_Params
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_GroupComponent.ModifyGroupPitchMultiplier
	 */
	struct USWS_GroupComponent_ModifyGroupPitchMultiplier_Params
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_GroupComponent.GetTotalFrequency
	 */
	struct USWS_GroupComponent_GetTotalFrequency_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function freddys.SWS_GroupComponent.GetTotalAmplitude
	 */
	struct USWS_GroupComponent_GetTotalAmplitude_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
