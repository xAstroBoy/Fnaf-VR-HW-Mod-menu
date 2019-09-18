
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

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSubtitlesOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           SubtitlesOn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::GetSubtitlesOn(bool* SubtitlesOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSubtitlesOn");

	UBP_FNAF_GameInstance_C_GetSubtitlesOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubtitlesOn != nullptr)
		*SubtitlesOn = params.SubtitlesOn;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GiveAllAchievements
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::GiveAllAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GiveAllAchievements");

	UBP_FNAF_GameInstance_C_GiveAllAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAvailablePrizesForLevel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           AvailablePrizes                (Parm, OutParm, ZeroConstructor)

void UBP_FNAF_GameInstance_C::GetAvailablePrizesForLevel(TArray<struct FName>* AvailablePrizes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAvailablePrizesForLevel");

	UBP_FNAF_GameInstance_C_GetAvailablePrizesForLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailablePrizes != nullptr)
		*AvailablePrizes = params.AvailablePrizes;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AttemptAwardSpecialPrize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::AttemptAwardSpecialPrize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AttemptAwardSpecialPrize");

	UBP_FNAF_GameInstance_C_AttemptAwardSpecialPrize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SaveGameSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::SaveGameSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SaveGameSlot");

	UBP_FNAF_GameInstance_C_SaveGameSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.CheckforAchievementCompletion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::CheckforAchievementCompletion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.CheckforAchievementCompletion");

	UBP_FNAF_GameInstance_C_CheckforAchievementCompletion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GiveBasketBall
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrize_Item_Struct      Prize                          (Parm, OutParm)

void UBP_FNAF_GameInstance_C::GiveBasketBall(struct FPrize_Item_Struct* Prize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GiveBasketBall");

	UBP_FNAF_GameInstance_C_GiveBasketBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prize != nullptr)
		*Prize = params.Prize;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasDefeatedGlitchtrap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           GlitchtrapDefeated             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::HasDefeatedGlitchtrap(bool* GlitchtrapDefeated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasDefeatedGlitchtrap");

	UBP_FNAF_GameInstance_C_HasDefeatedGlitchtrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlitchtrapDefeated != nullptr)
		*GlitchtrapDefeated = params.GlitchtrapDefeated;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.DefeatGlitchtrap
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::DefeatGlitchtrap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.DefeatGlitchtrap");

	UBP_FNAF_GameInstance_C_DefeatGlitchtrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SetGlitchListenedTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::SetGlitchListenedTo(int NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SetGlitchListenedTo");

	UBP_FNAF_GameInstance_C_SetGlitchListenedTo_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetInstructionWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Next_Level_Info_Instructions_Widget (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::GetInstructionWidget(class UClass** Next_Level_Info_Instructions_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetInstructionWidget");

	UBP_FNAF_GameInstance_C_GetInstructionWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Next_Level_Info_Instructions_Widget != nullptr)
		*Next_Level_Info_Instructions_Widget = params.Next_Level_Info_Instructions_Widget;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllPrizes
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::UnlockAllPrizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllPrizes");

	UBP_FNAF_GameInstance_C_UnlockAllPrizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllGlitches
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::UnlockAllGlitches()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllGlitches");

	UBP_FNAF_GameInstance_C_UnlockAllGlitches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAchievementData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AchievementID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm, OutParm)
// struct FText                   LockedDescription              (Parm, OutParm)
// struct FText                   UnlockedDescription            (Parm, OutParm)
// bool                           bFoundID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::GetAchievementData(const struct FName& AchievementID, float* Progress, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bFoundID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAchievementData");

	UBP_FNAF_GameInstance_C_GetAchievementData_Params params;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
	if (Title != nullptr)
		*Title = params.Title;
	if (LockedDescription != nullptr)
		*LockedDescription = params.LockedDescription;
	if (UnlockedDescription != nullptr)
		*UnlockedDescription = params.UnlockedDescription;
	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AfterFadeLevelLoader
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::AfterFadeLevelLoader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AfterFadeLevelLoader");

	UBP_FNAF_GameInstance_C_AfterFadeLevelLoader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOutWithLevelLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LevelToLoadAfterFade           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Skip_Fade_out                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::FadeOutWithLevelLoad(const struct FName& LevelToLoadAfterFade, bool Skip_Fade_out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOutWithLevelLoad");

	UBP_FNAF_GameInstance_C_FadeOutWithLevelLoad_Params params;
	params.LevelToLoadAfterFade = LevelToLoadAfterFade;
	params.Skip_Fade_out = Skip_Fade_out;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOut
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Skip_Fade                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFadeHandlerForPause_C*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFadeHandlerForPause_C* UBP_FNAF_GameInstance_C::FadeOut(bool Skip_Fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOut");

	UBP_FNAF_GameInstance_C_FadeOut_Params params;
	params.Skip_Fade = Skip_Fade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOutWithTimerEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnFadeFinishedEvent            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Skip_Fade_out                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::FadeOutWithTimerEvent(const struct FScriptDelegate& OnFadeFinishedEvent, bool Skip_Fade_out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOutWithTimerEvent");

	UBP_FNAF_GameInstance_C_FadeOutWithTimerEvent_Params params;
	params.OnFadeFinishedEvent = OnFadeFinishedEvent;
	params.Skip_Fade_out = Skip_Fade_out;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AwardGlitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GlitchID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::AwardGlitch(int GlitchID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AwardGlitch");

	UBP_FNAF_GameInstance_C_AwardGlitch_Params params;
	params.GlitchID = GlitchID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasGlitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            GlitchID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::HasGlitch(int GlitchID, bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasGlitch");

	UBP_FNAF_GameInstance_C_HasGlitch_Params params;
	params.GlitchID = GlitchID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UpdateGlitchtrapStage
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::UpdateGlitchtrapStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UpdateGlitchtrapStage");

	UBP_FNAF_GameInstance_C_UpdateGlitchtrapStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetGlitchtrapStage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            CurrentGlitchtrapStage         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::GetGlitchtrapStage(int* CurrentGlitchtrapStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetGlitchtrapStage");

	UBP_FNAF_GameInstance_C_GetGlitchtrapStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentGlitchtrapStage != nullptr)
		*CurrentGlitchtrapStage = params.CurrentGlitchtrapStage;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.InitSaveGame
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::InitSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.InitSaveGame");

	UBP_FNAF_GameInstance_C_InitSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasCoin
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CoinID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_FNAF_GameInstance_C::HasCoin(int CoinID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasCoin");

	UBP_FNAF_GameInstance_C_HasCoin_Params params;
	params.CoinID = CoinID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSavedLevelInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSaveGame_LevelInfo     LevelInfo                      (Parm, OutParm)

void UBP_FNAF_GameInstance_C::GetSavedLevelInfo(struct FSaveGame_LevelInfo* LevelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSavedLevelInfo");

	UBP_FNAF_GameInstance_C_GetSavedLevelInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelInfo != nullptr)
		*LevelInfo = params.LevelInfo;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasPrize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   PrizeID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasPrize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::HasPrize(const struct FName& PrizeID, bool* HasPrize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasPrize");

	UBP_FNAF_GameInstance_C_HasPrize_Params params;
	params.PrizeID = PrizeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasPrize != nullptr)
		*HasPrize = params.HasPrize;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.EnableNightmareMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInNightmareMode              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::EnableNightmareMode(bool IsInNightmareMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.EnableNightmareMode");

	UBP_FNAF_GameInstance_C_EnableNightmareMode_Params params;
	params.IsInNightmareMode = IsInNightmareMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsNightmareModeEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsInNightmareMode              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::IsNightmareModeEnabled(bool* IsInNightmareMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsNightmareModeEnabled");

	UBP_FNAF_GameInstance_C_IsNightmareModeEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInNightmareMode != nullptr)
		*IsInNightmareMode = params.IsInNightmareMode;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetLevelNumber
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_FNAF_GameInstance_C::GetLevelNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetLevelNumber");

	UBP_FNAF_GameInstance_C_GetLevelNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AwardRandomPrize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ValidPrize                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPrize_Item_Struct      Prize                          (Parm, OutParm)
// struct FName                   PrizeID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::AwardRandomPrize(bool* ValidPrize, struct FPrize_Item_Struct* Prize, struct FName* PrizeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AwardRandomPrize");

	UBP_FNAF_GameInstance_C_AwardRandomPrize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidPrize != nullptr)
		*ValidPrize = params.ValidPrize;
	if (Prize != nullptr)
		*Prize = params.Prize;
	if (PrizeID != nullptr)
		*PrizeID = params.PrizeID;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetRandomAvailablePrize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ValidPrize                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPrize_Item_Struct      Prize                          (Parm, OutParm)
// struct FName                   PrizeID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::GetRandomAvailablePrize(bool* ValidPrize, struct FPrize_Item_Struct* Prize, struct FName* PrizeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetRandomAvailablePrize");

	UBP_FNAF_GameInstance_C_GetRandomAvailablePrize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidPrize != nullptr)
		*ValidPrize = params.ValidPrize;
	if (Prize != nullptr)
		*Prize = params.Prize;
	if (PrizeID != nullptr)
		*PrizeID = params.PrizeID;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAvailablePrizes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           AvailablePrizes                (Parm, OutParm, ZeroConstructor)

void UBP_FNAF_GameInstance_C::GetAvailablePrizes(TArray<struct FName>* AvailablePrizes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAvailablePrizes");

	UBP_FNAF_GameInstance_C_GetAvailablePrizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailablePrizes != nullptr)
		*AvailablePrizes = params.AvailablePrizes;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetNumberOfPlayers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            NumberOfPlayers                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::GetNumberOfPlayers(int* NumberOfPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetNumberOfPlayers");

	UBP_FNAF_GameInstance_C_GetNumberOfPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberOfPlayers != nullptr)
		*NumberOfPlayers = params.NumberOfPlayers;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAllLevelsOfType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EGameTypeEnum>     Game_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLevelInfoStruct> LevelsForGameType              (Parm, OutParm, ZeroConstructor)
// TArray<struct FName>           LevelIDsForGameType            (Parm, OutParm, ZeroConstructor)

void UBP_FNAF_GameInstance_C::GetAllLevelsOfType(TEnumAsByte<EGameTypeEnum> Game_Type, TArray<struct FLevelInfoStruct>* LevelsForGameType, TArray<struct FName>* LevelIDsForGameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAllLevelsOfType");

	UBP_FNAF_GameInstance_C_GetAllLevelsOfType_Params params;
	params.Game_Type = Game_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelsForGameType != nullptr)
		*LevelsForGameType = params.LevelsForGameType;
	if (LevelIDsForGameType != nullptr)
		*LevelIDsForGameType = params.LevelIDsForGameType;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsLevelUnlocked
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   LevelID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LevelIsUnlocked                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::IsLevelUnlocked(const struct FName& LevelID, bool* LevelIsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsLevelUnlocked");

	UBP_FNAF_GameInstance_C_IsLevelUnlocked_Params params;
	params.LevelID = LevelID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelIsUnlocked != nullptr)
		*LevelIsUnlocked = params.LevelIsUnlocked;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsLevelBeaten
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   LevelID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LevelCompleted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::IsLevelBeaten(const struct FName& LevelID, bool* LevelCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsLevelBeaten");

	UBP_FNAF_GameInstance_C_IsLevelBeaten_Params params;
	params.LevelID = LevelID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelCompleted != nullptr)
		*LevelCompleted = params.LevelCompleted;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsShowtimeUnlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ShowtimeUnlocked               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::IsShowtimeUnlocked(bool* ShowtimeUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsShowtimeUnlocked");

	UBP_FNAF_GameInstance_C_IsShowtimeUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShowtimeUnlocked != nullptr)
		*ShowtimeUnlocked = params.ShowtimeUnlocked;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FindCurrentLevelID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::FindCurrentLevelID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FindCurrentLevelID");

	UBP_FNAF_GameInstance_C_FindCurrentLevelID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UpdateCachedCoinCount
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::UpdateCachedCoinCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UpdateCachedCoinCount");

	UBP_FNAF_GameInstance_C_UpdateCachedCoinCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ClearSaveGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::ClearSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ClearSaveGame");

	UBP_FNAF_GameInstance_C_ClearSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCurrentLevelID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CurrentLevelNameID             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::GetCurrentLevelID(struct FName* CurrentLevelNameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCurrentLevelID");

	UBP_FNAF_GameInstance_C_GetCurrentLevelID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentLevelNameID != nullptr)
		*CurrentLevelNameID = params.CurrentLevelNameID;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCurrentLevelInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FLevelInfoStruct        CurrentLevelInfo               (Parm, OutParm)
// int                            LevelNumber                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::GetCurrentLevelInfo(struct FLevelInfoStruct* CurrentLevelInfo, int* LevelNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCurrentLevelInfo");

	UBP_FNAF_GameInstance_C_GetCurrentLevelInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentLevelInfo != nullptr)
		*CurrentLevelInfo = params.CurrentLevelInfo;
	if (LevelNumber != nullptr)
		*LevelNumber = params.LevelNumber;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockCoin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CoinID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::UnlockCoin(int CoinID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockCoin");

	UBP_FNAF_GameInstance_C_UnlockCoin_Params params;
	params.CoinID = CoinID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSaveGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFNAFSaveGame_C*         SaveGameInfo                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::GetSaveGame(class UFNAFSaveGame_C** SaveGameInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSaveGame");

	UBP_FNAF_GameInstance_C_GetSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveGameInfo != nullptr)
		*SaveGameInfo = params.SaveGameInfo;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SaveLevelVictory
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::SaveLevelVictory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SaveLevelVictory");

	UBP_FNAF_GameInstance_C_SaveLevelVictory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SetupPlayerCharacters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ALobbyPlayerController_C*> LobbyPlayers                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_FNAF_GameInstance_C::SetupPlayerCharacters(TArray<class ALobbyPlayerController_C*>* LobbyPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SetupPlayerCharacters");

	UBP_FNAF_GameInstance_C_SetupPlayerCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyPlayers != nullptr)
		*LobbyPlayers = params.LobbyPlayers;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCoinCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            NumberOfCoins                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::GetCoinCount(int* NumberOfCoins)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCoinCount");

	UBP_FNAF_GameInstance_C_GetCoinCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberOfCoins != nullptr)
		*NumberOfCoins = params.NumberOfCoins;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetLevelInstructions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   LevelInstructions              (Parm, OutParm)
// bool                           WidgetIsValid                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::GetLevelInstructions(struct FText* LevelInstructions, bool* WidgetIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetLevelInstructions");

	UBP_FNAF_GameInstance_C_GetLevelInstructions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelInstructions != nullptr)
		*LevelInstructions = params.LevelInstructions;
	if (WidgetIsValid != nullptr)
		*WidgetIsValid = params.WidgetIsValid;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SpawnLevelDatabase
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::SpawnLevelDatabase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SpawnLevelDatabase");

	UBP_FNAF_GameInstance_C_SpawnLevelDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadLevel
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LevelID                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLevelInfoStruct        LevelInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_FNAF_GameInstance_C::LoadLevel(const struct FName& LevelID, const struct FLevelInfoStruct& LevelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadLevel");

	UBP_FNAF_GameInstance_C_LoadLevel_Params params;
	params.LevelID = LevelID;
	params.LevelInfo = LevelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FinishCaveat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Difficulty_Adjustment          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::FinishCaveat(int Difficulty_Adjustment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FinishCaveat");

	UBP_FNAF_GameInstance_C_FinishCaveat_Params params;
	params.Difficulty_Adjustment = Difficulty_Adjustment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.RestartCurrentLevel
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::RestartCurrentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.RestartCurrentLevel");

	UBP_FNAF_GameInstance_C_RestartCurrentLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LevelDefeat
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::LevelDefeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LevelDefeat");

	UBP_FNAF_GameInstance_C_LevelDefeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LevelVictory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumCoins                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           No_Fade_Out_at_end             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::LevelVictory(int NumCoins, bool No_Fade_Out_at_end)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LevelVictory");

	UBP_FNAF_GameInstance_C_LevelVictory_Params params;
	params.NumCoins = NumCoins;
	params.No_Fade_Out_at_end = No_Fade_Out_at_end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadMainMenu
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::LoadMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadMainMenu");

	UBP_FNAF_GameInstance_C_LoadMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void UBP_FNAF_GameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ReceiveInit");

	UBP_FNAF_GameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllLevels
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::UnlockAllLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllLevels");

	UBP_FNAF_GameInstance_C_UnlockAllLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.RunFadeOut
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::RunFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.RunFadeOut");

	UBP_FNAF_GameInstance_C_RunFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadTitle
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::LoadTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadTitle");

	UBP_FNAF_GameInstance_C_LoadTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadIntroLevel
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::LoadIntroLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadIntroLevel");

	UBP_FNAF_GameInstance_C_LoadIntroLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGlichedIntroLevel
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::LoadGlichedIntroLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGlichedIntroLevel");

	UBP_FNAF_GameInstance_C_LoadGlichedIntroLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGallery
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::LoadGallery()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGallery");

	UBP_FNAF_GameInstance_C_LoadGallery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FinaleVictory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumCoins                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::FinaleVictory(int NumCoins)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FinaleVictory");

	UBP_FNAF_GameInstance_C_FinaleVictory_Params params;
	params.NumCoins = NumCoins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllCoins
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::UnlockAllCoins()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllCoins");

	UBP_FNAF_GameInstance_C_UnlockAllCoins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ToggleSubtitles
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::ToggleSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ToggleSubtitles");

	UBP_FNAF_GameInstance_C_ToggleSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGlitchKeyhole
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::LoadGlitchKeyhole()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGlitchKeyhole");

	UBP_FNAF_GameInstance_C_LoadGlitchKeyhole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadCasetteRoom
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::LoadCasetteRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadCasetteRoom");

	UBP_FNAF_GameInstance_C_LoadCasetteRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGameOver
// (BlueprintCallable, BlueprintEvent)

void UBP_FNAF_GameInstance_C::LoadGameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGameOver");

	UBP_FNAF_GameInstance_C_LoadGameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ExecuteUbergraph_BP_FNAF_GameInstance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FNAF_GameInstance_C::ExecuteUbergraph_BP_FNAF_GameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ExecuteUbergraph_BP_FNAF_GameInstance");

	UBP_FNAF_GameInstance_C_ExecuteUbergraph_BP_FNAF_GameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
