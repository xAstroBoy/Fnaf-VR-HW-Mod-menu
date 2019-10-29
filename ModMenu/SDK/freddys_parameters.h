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

// Function freddys.AchievementsFunctions.ClearAllAchievements
struct UAchievementsFunctions_ClearAllAchievements_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.AICommonFunctionalities.isVerticalAxis
struct UAICommonFunctionalities_isVerticalAxis_Params
{
	EAIScareDirection                                  Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.AICommonFunctionalities.isValidAxisDirection
struct UAICommonFunctionalities_isValidAxisDirection_Params
{
	EAIBaseAxisDirection                               Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EAIScareDirection                                  Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.AICommonFunctionalities.isHorizontalAxis
struct UAICommonFunctionalities_isHorizontalAxis_Params
{
	EAIScareDirection                                  Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.FlowGraphConnector.OnDisconnected
struct UFlowGraphConnector_OnDisconnected_Params
{
};

// Function freddys.FlowGraphConnector.OnConnectorRegistered
struct UFlowGraphConnector_OnConnectorRegistered_Params
{
};

// Function freddys.FlowGraphConnector.OnConnected
struct UFlowGraphConnector_OnConnected_Params
{
	class UFlowGraphConnector*                         OtherConnector;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function freddys.FlowGraphConnector.HasFlow
struct UFlowGraphConnector_HasFlow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.FlowGraphConnector.GetNodeOwner
struct UFlowGraphConnector_GetNodeOwner_Params
{
	class AFlowGraphNode*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.FlowGraphConnector.GetConnectedNode
struct UFlowGraphConnector_GetConnectedNode_Params
{
	class AFlowGraphNode*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.FlowGraphConnector.GetConnectedConnector
struct UFlowGraphConnector_GetConnectedConnector_Params
{
	class UFlowGraphConnector*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function freddys.FlowGraphConnector.Disconnect
struct UFlowGraphConnector_Disconnect_Params
{
};

// Function freddys.FlowGraphConnector.Connect
struct UFlowGraphConnector_Connect_Params
{
	class UFlowGraphConnector*                         OtherConnector;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function freddys.FlowGraphConnector.CheckConnection
struct UFlowGraphConnector_CheckConnection_Params
{
};

// Function freddys.FlowGraphNode.UnregisterConnector
struct AFlowGraphNode_UnregisterConnector_Params
{
	class UFlowGraphConnector*                         Connector;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function freddys.FlowGraphNode.SetFlowSource
struct AFlowGraphNode_SetFlowSource_Params
{
	bool                                               EnableAsFlowSource;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.FlowGraphNode.RegisterConnector
struct AFlowGraphNode_RegisterConnector_Params
{
	class UFlowGraphConnector*                         Connector;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function freddys.FlowGraphNode.OnFlowChanged
struct AFlowGraphNode_OnFlowChanged_Params
{
};

// Function freddys.FlowGraphNode.OnConnectorDisconnected
struct AFlowGraphNode_OnConnectorDisconnected_Params
{
	class UFlowGraphConnector*                         MyConnector;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function freddys.FlowGraphNode.OnConnectorConnected
struct AFlowGraphNode_OnConnectorConnected_Params
{
	class UFlowGraphConnector*                         MyConnector;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFlowGraphConnector*                         TheirConnector;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function freddys.FlowGraphNode.IsFlowSource
struct AFlowGraphNode_IsFlowSource_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.FlowGraphNode.HasFlow
struct AFlowGraphNode_HasFlow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.FlowGraphNode.GetConnectors
struct AFlowGraphNode_GetConnectors_Params
{
	TArray<class UFlowGraphConnector*>                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function freddys.FlowGraphNode.FlowTypeSwitch
struct AFlowGraphNode_FlowTypeSwitch_Params
{
	EFlowGraphFlowType                                 FlowType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.FlowGraphNode.CheckConnections
struct AFlowGraphNode_CheckConnections_Params
{
};

// Function freddys.FNAFGameMode.SpawnLevelDB
struct AFNAFGameMode_SpawnLevelDB_Params
{
};

// Function freddys.FNAFGameMode.OnSetLevelDB
struct AFNAFGameMode_OnSetLevelDB_Params
{
};

// Function freddys.FNAFGamestate.SetVictoryCondition
struct AFNAFGamestate_SetVictoryCondition_Params
{
	EGLVictoryState                                    victory;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.FNAFGamestate.SetGameState
struct AFNAFGamestate_SetGameState_Params
{
	EGLGameState                                       State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.FNAFGamestate.GetVictoryCondition
struct AFNAFGamestate_GetVictoryCondition_Params
{
	EGLVictoryState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.FNAFGamestate.GetGameState
struct AFNAFGamestate_GetGameState_Params
{
	EGLGameState                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.FNAF_GameInstanceBase.SwitchFNAFGameType
struct UFNAF_GameInstanceBase_SwitchFNAFGameType_Params
{
	EFNAFGameType                                      GameType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.FNAF_GameInstanceBase.StartAsyncSaveGame
struct UFNAF_GameInstanceBase_StartAsyncSaveGame_Params
{
	class USaveGame*                                   SaveGame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SlotName;                                                 // (Parm, ZeroConstructor)
	int                                                UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.FNAF_GameInstanceBase.IsInDemoMode
struct UFNAF_GameInstanceBase_IsInDemoMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.FNAF_GameInstanceBase.HasDLC
struct UFNAF_GameInstanceBase_HasDLC_Params
{
	EFNAFDLCType                                       DLC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.FNAF_GameInstanceBase.GetPrimaryGPUBrand
struct UFNAF_GameInstanceBase_GetPrimaryGPUBrand_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function freddys.FNAF_GameInstanceBase.GetGPUBrandName
struct UFNAF_GameInstanceBase_GetGPUBrandName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function freddys.FNAF_GameInstanceBase.GetGameType
struct UFNAF_GameInstanceBase_GetGameType_Params
{
	EFNAFGameType                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.FNAF_GameInstanceBase.GetForcedVariantNumber
struct UFNAF_GameInstanceBase_GetForcedVariantNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.GridCalculatorActor.SetCellDebugDisplay
struct AGridCalculatorActor_SetCellDebugDisplay_Params
{
	int                                                CellID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.GridCalculatorActor.ResetDistances
struct AGridCalculatorActor_ResetDistances_Params
{
};

// Function freddys.GridCalculatorActor.GetGridSize
struct AGridCalculatorActor_GetGridSize_Params
{
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.GridCalculatorActor.GetDistanceToCellAtWorldPosition
struct AGridCalculatorActor_GetDistanceToCellAtWorldPosition_Params
{
	struct FVector                                     WorldPosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.GridCalculatorActor.GetDistanceToCell
struct AGridCalculatorActor_GetDistanceToCell_Params
{
	int                                                CellID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.GridCalculatorActor.GetCellWorldPositionByCellPos
struct AGridCalculatorActor_GetCellWorldPositionByCellPos_Params
{
	int                                                CellX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.GridCalculatorActor.GetCellWorldPosition
struct AGridCalculatorActor_GetCellWorldPosition_Params
{
	int                                                CellID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.GridCalculatorActor.GetCellsBetweenDistances
struct AGridCalculatorActor_GetCellsBetweenDistances_Params
{
	int                                                MinDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function freddys.GridCalculatorActor.GetCellsAtDistance
struct AGridCalculatorActor_GetCellsAtDistance_Params
{
	int                                                Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function freddys.GridCalculatorActor.GetCellPosition
struct AGridCalculatorActor_GetCellPosition_Params
{
	int                                                CellID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CellY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.GridCalculatorActor.GetCellPosFromWorldPosition
struct AGridCalculatorActor_GetCellPosFromWorldPosition_Params
{
	struct FVector                                     WorldPosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                CellX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CellY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.GridCalculatorActor.GetCellIDFromWorldPosition
struct AGridCalculatorActor_GetCellIDFromWorldPosition_Params
{
	struct FVector                                     WorldPosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.GridCalculatorActor.GetCellIDFromGridPosition
struct AGridCalculatorActor_GetCellIDFromGridPosition_Params
{
	int                                                CellX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.GridCalculatorActor.FindPathFromWorldPositions
struct AGridCalculatorActor_FindPathFromWorldPositions_Params
{
	struct FVector                                     WorldPositionStart;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     WorldPositionEnd;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function freddys.GridCalculatorActor.FindPathFromCellIDs
struct AGridCalculatorActor_FindPathFromCellIDs_Params
{
	int                                                StartCellID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndCellID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function freddys.GridCalculatorActor.CalculateDistancesFromWorldPosition
struct AGridCalculatorActor_CalculateDistancesFromWorldPosition_Params
{
	struct FVector                                     WorldPosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function freddys.GridCalculatorActor.CalculateDistancesFromGridPosition
struct AGridCalculatorActor_CalculateDistancesFromGridPosition_Params
{
	int                                                GridX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GridY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.LevelDB.LoadLevelByName
struct ULevelDB_LoadLevelByName_Params
{
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
};

// Function freddys.LevelDB.LoadLevelByID
struct ULevelDB_LoadLevelByID_Params
{
	int                                                LevelID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.LevelDB.LoadLevel
struct ULevelDB_LoadLevel_Params
{
};

// Function freddys.LevelDB.GetLevelIDByName
struct ULevelDB_GetLevelIDByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.LevelDB.GetLevelID
struct ULevelDB_GetLevelID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.LevelDB.CreateLevelDB
struct ULevelDB_CreateLevelDB_Params
{
	class UObject*                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelDB*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.NPCBaseInterface.SetHealth
struct UNPCBaseInterface_SetHealth_Params
{
	float                                              health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.NPCBaseInterface.SetAILifeCycle
struct UNPCBaseInterface_SetAILifeCycle_Params
{
	EAILifeCycle                                       lifeCycle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.NPCBaseInterface.GetHealth
struct UNPCBaseInterface_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.Switchboardbuttons.OnSwitchBoardButtonPessed
struct ASwitchboardbuttons_OnSwitchBoardButtonPessed_Params
{
	struct FString                                     buttonidentification;                                     // (Parm, ZeroConstructor)
};

// Function freddys.Switchboardbuttons.BeginOverlap
struct ASwitchboardbuttons_BeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function freddys.SWS_AudioManager.StopAudioByID
struct ASWS_AudioManager_StopAudioByID_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.SWS_AudioManager.StopAudioByHandle
struct ASWS_AudioManager_StopAudioByHandle_Params
{
	struct FAudioHandle                                AudioHandle;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function freddys.SWS_AudioManager.StopAudioByAsset
struct ASWS_AudioManager_StopAudioByAsset_Params
{
	class USoundBase*                                  Base;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.SWS_AudioManager.RefreshAudioHandlePool
struct ASWS_AudioManager_RefreshAudioHandlePool_Params
{
	struct FAudioHandle                                Handle;                                                   // (Parm, OutParm)
};

// Function freddys.SWS_AudioManager.PlayAudioByName
struct ASWS_AudioManager_PlayAudioByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           ConcurrencySettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAudioHandle                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function freddys.SWS_AudioManager.PlayAudioByID
struct ASWS_AudioManager_PlayAudioByID_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           ConcurrencySettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAudioHandle                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function freddys.SWS_AudioManager.PlayAudioByAsset
struct ASWS_AudioManager_PlayAudioByAsset_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           ConcurrencySettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAudioHandle                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function freddys.SWS_AudioManager.GetSoundID
struct ASWS_AudioManager_GetSoundID_Params
{
	class USoundCue*                                   cue;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.SWS_AudioManager.GetSoundCueByName
struct ASWS_AudioManager_GetSoundCueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.SWS_AudioManager.GetSoundByID
struct ASWS_AudioManager_GetSoundByID_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.SWS_AudioManager.GetAudioManager
struct ASWS_AudioManager_GetAudioManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ASWS_AudioManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.SWS_AudioSource.StopAudio
struct ASWS_AudioSource_StopAudio_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.SWS_AudioSource.PlayAudio
struct ASWS_AudioSource_PlayAudio_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           ConcurrencySettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.SWS_AudioSource.DestroyHandle
struct ASWS_AudioSource_DestroyHandle_Params
{
};

// Function freddys.SWS_GroupComponent.UnRegisterAudioSource
struct USWS_GroupComponent_UnRegisterAudioSource_Params
{
	class ASWS_AudioSource*                            cue;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.SWS_GroupComponent.RegisterAudioSource
struct USWS_GroupComponent_RegisterAudioSource_Params
{
	class ASWS_AudioSource*                            cue;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.SWS_GroupComponent.OnVolumeModified
struct USWS_GroupComponent_OnVolumeModified_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.SWS_GroupComponent.OnPitchModified
struct USWS_GroupComponent_OnPitchModified_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.SWS_GroupComponent.ModifyGroupVolumeMultiplier
struct USWS_GroupComponent_ModifyGroupVolumeMultiplier_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.SWS_GroupComponent.ModifyGroupPitchMultiplier
struct USWS_GroupComponent_ModifyGroupPitchMultiplier_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function freddys.SWS_GroupComponent.GetTotalFrequency
struct USWS_GroupComponent_GetTotalFrequency_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function freddys.SWS_GroupComponent.GetTotalAmplitude
struct USWS_GroupComponent_GetTotalAmplitude_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
