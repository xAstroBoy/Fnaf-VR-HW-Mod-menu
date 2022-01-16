/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "BP_FNAF_GameInstance_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetTetheredCameraSensitivity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              TetheredCameraSensitivityValue                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::GetTetheredCameraSensitivity(float* TetheredCameraSensitivityValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetTetheredCameraSensitivity");
		
		UBP_FNAF_GameInstance_C_GetTetheredCameraSensitivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TetheredCameraSensitivityValue != nullptr)
			*TetheredCameraSensitivityValue = params.TetheredCameraSensitivityValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetFLCameraSensitivity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              FLCameraSensitivityValue                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::GetFLCameraSensitivity(float* FLCameraSensitivityValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetFLCameraSensitivity");
		
		UBP_FNAF_GameInstance_C_GetFLCameraSensitivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FLCameraSensitivityValue != nullptr)
			*FLCameraSensitivityValue = params.FLCameraSensitivityValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSubtitlesOn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               SubtitlesOn                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::GetSubtitlesOn(bool* SubtitlesOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSubtitlesOn");
		
		UBP_FNAF_GameInstance_C_GetSubtitlesOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubtitlesOn != nullptr)
			*SubtitlesOn = params.SubtitlesOn;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GiveAllAchievements
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::GiveAllAchievements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GiveAllAchievements");
		
		UBP_FNAF_GameInstance_C_GiveAllAchievements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAvailablePrizesForLevel
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                AvailablePrizes                                            (Parm, OutParm, ZeroConstructor)
	 */
	void UBP_FNAF_GameInstance_C::GetAvailablePrizesForLevel(TArray<class FName>* AvailablePrizes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAvailablePrizesForLevel");
		
		UBP_FNAF_GameInstance_C_GetAvailablePrizesForLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailablePrizes != nullptr)
			*AvailablePrizes = params.AvailablePrizes;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AttemptAwardSpecialPrize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::AttemptAwardSpecialPrize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AttemptAwardSpecialPrize");
		
		UBP_FNAF_GameInstance_C_AttemptAwardSpecialPrize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SaveGameSlot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::SaveGameSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SaveGameSlot");
		
		UBP_FNAF_GameInstance_C_SaveGameSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.CheckforAchievementCompletion
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::CheckforAchievementCompletion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.CheckforAchievementCompletion");
		
		UBP_FNAF_GameInstance_C_CheckforAchievementCompletion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GiveBasketBall
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrize_Item_Struct                          Prize                                                      (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::GiveBasketBall(struct FPrize_Item_Struct* Prize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GiveBasketBall");
		
		UBP_FNAF_GameInstance_C_GiveBasketBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Prize != nullptr)
			*Prize = params.Prize;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasDefeatedGlitchtrap
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               GlitchtrapDefeated                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::HasDefeatedGlitchtrap(bool* GlitchtrapDefeated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasDefeatedGlitchtrap");
		
		UBP_FNAF_GameInstance_C_HasDefeatedGlitchtrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GlitchtrapDefeated != nullptr)
			*GlitchtrapDefeated = params.GlitchtrapDefeated;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.DefeatGlitchtrap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::DefeatGlitchtrap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.DefeatGlitchtrap");
		
		UBP_FNAF_GameInstance_C_DefeatGlitchtrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SetGlitchListenedTo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                NewItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::SetGlitchListenedTo(int NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SetGlitchListenedTo");
		
		UBP_FNAF_GameInstance_C_SetGlitchListenedTo_Params params {};
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetInstructionWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Next_Level_Info_Instructions_Widget                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::GetInstructionWidget(class UClass** Next_Level_Info_Instructions_Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetInstructionWidget");
		
		UBP_FNAF_GameInstance_C_GetInstructionWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Next_Level_Info_Instructions_Widget != nullptr)
			*Next_Level_Info_Instructions_Widget = params.Next_Level_Info_Instructions_Widget;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllPrizes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::UnlockAllPrizes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllPrizes");
		
		UBP_FNAF_GameInstance_C_UnlockAllPrizes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllGlitches
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::UnlockAllGlitches()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllGlitches");
		
		UBP_FNAF_GameInstance_C_UnlockAllGlitches_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAchievementData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AchievementID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Progress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Title                                                      (Parm, OutParm)
	 * 		class FText                                        LockedDescription                                          (Parm, OutParm)
	 * 		class FText                                        UnlockedDescription                                        (Parm, OutParm)
	 * 		bool                                               bFoundID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::GetAchievementData(const class FName& AchievementID, float* Progress, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bFoundID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAchievementData");
		
		UBP_FNAF_GameInstance_C_GetAchievementData_Params params {};
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

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AfterFadeLevelLoader
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::AfterFadeLevelLoader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AfterFadeLevelLoader");
		
		UBP_FNAF_GameInstance_C_AfterFadeLevelLoader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOutWithLevelLoad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LevelToLoadAfterFade                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Skip_Fade_out                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowLoadingScreen                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::FadeOutWithLevelLoad(const class FName& LevelToLoadAfterFade, bool Skip_Fade_out, bool ShowLoadingScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOutWithLevelLoad");
		
		UBP_FNAF_GameInstance_C_FadeOutWithLevelLoad_Params params {};
		params.LevelToLoadAfterFade = LevelToLoadAfterFade;
		params.Skip_Fade_out = Skip_Fade_out;
		params.ShowLoadingScreen = ShowLoadingScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOut
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Skip_Fade                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class AFadeHandlerForPause_C* UBP_FNAF_GameInstance_C::FadeOut(bool Skip_Fade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOut");
		
		UBP_FNAF_GameInstance_C_FadeOut_Params params {};
		params.Skip_Fade = Skip_Fade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOutWithTimerEvent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              OnFadeFinishedEvent                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		bool                                               Skip_Fade_out                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::FadeOutWithTimerEvent(const class FScriptDelegate& OnFadeFinishedEvent, bool Skip_Fade_out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOutWithTimerEvent");
		
		UBP_FNAF_GameInstance_C_FadeOutWithTimerEvent_Params params {};
		params.OnFadeFinishedEvent = OnFadeFinishedEvent;
		params.Skip_Fade_out = Skip_Fade_out;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AwardGlitch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                GlitchID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::AwardGlitch(int GlitchID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AwardGlitch");
		
		UBP_FNAF_GameInstance_C_AwardGlitch_Params params {};
		params.GlitchID = GlitchID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasGlitch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                GlitchID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::HasGlitch(int GlitchID, bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasGlitch");
		
		UBP_FNAF_GameInstance_C_HasGlitch_Params params {};
		params.GlitchID = GlitchID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UpdateGlitchtrapStage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::UpdateGlitchtrapStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UpdateGlitchtrapStage");
		
		UBP_FNAF_GameInstance_C_UpdateGlitchtrapStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetGlitchtrapStage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                CurrentGlitchtrapStage                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::GetGlitchtrapStage(int* CurrentGlitchtrapStage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetGlitchtrapStage");
		
		UBP_FNAF_GameInstance_C_GetGlitchtrapStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentGlitchtrapStage != nullptr)
			*CurrentGlitchtrapStage = params.CurrentGlitchtrapStage;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.InitSaveGame
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::InitSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.InitSaveGame");
		
		UBP_FNAF_GameInstance_C_InitSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasCoin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int                                                CoinID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_FNAF_GameInstance_C::HasCoin(int CoinID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasCoin");
		
		UBP_FNAF_GameInstance_C_HasCoin_Params params {};
		params.CoinID = CoinID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSavedLevelInfo
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSaveGame_LevelInfo                         LevelInfo                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::GetSavedLevelInfo(struct FSaveGame_LevelInfo* LevelInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSavedLevelInfo");
		
		UBP_FNAF_GameInstance_C_GetSavedLevelInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LevelInfo != nullptr)
			*LevelInfo = params.LevelInfo;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasPrize
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        PrizeID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasPrize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::HasPrize(const class FName& PrizeID, bool* HasPrize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasPrize");
		
		UBP_FNAF_GameInstance_C_HasPrize_Params params {};
		params.PrizeID = PrizeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasPrize != nullptr)
			*HasPrize = params.HasPrize;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.EnableNightmareMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInNightmareMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::EnableNightmareMode(bool IsInNightmareMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.EnableNightmareMode");
		
		UBP_FNAF_GameInstance_C_EnableNightmareMode_Params params {};
		params.IsInNightmareMode = IsInNightmareMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsNightmareModeEnabled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               IsInNightmareMode                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::IsNightmareModeEnabled(bool* IsInNightmareMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsNightmareModeEnabled");
		
		UBP_FNAF_GameInstance_C_IsNightmareModeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInNightmareMode != nullptr)
			*IsInNightmareMode = params.IsInNightmareMode;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetLevelNumber
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	int UBP_FNAF_GameInstance_C::GetLevelNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetLevelNumber");
		
		UBP_FNAF_GameInstance_C_GetLevelNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AwardRandomPrize
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ValidPrize                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPrize_Item_Struct                          Prize                                                      (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class FName                                        PrizeID                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::AwardRandomPrize(bool* ValidPrize, struct FPrize_Item_Struct* Prize, class FName* PrizeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AwardRandomPrize");
		
		UBP_FNAF_GameInstance_C_AwardRandomPrize_Params params {};
		
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

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetRandomAvailablePrize
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ValidPrize                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPrize_Item_Struct                          Prize                                                      (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class FName                                        PrizeID                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::GetRandomAvailablePrize(bool* ValidPrize, struct FPrize_Item_Struct* Prize, class FName* PrizeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetRandomAvailablePrize");
		
		UBP_FNAF_GameInstance_C_GetRandomAvailablePrize_Params params {};
		
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

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAvailablePrizesBase
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                AvailablePrizes                                            (Parm, OutParm, ZeroConstructor)
	 */
	void UBP_FNAF_GameInstance_C::GetAvailablePrizesBase(TArray<class FName>* AvailablePrizes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAvailablePrizesBase");
		
		UBP_FNAF_GameInstance_C_GetAvailablePrizesBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailablePrizes != nullptr)
			*AvailablePrizes = params.AvailablePrizes;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetNumberOfPlayers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                NumberOfPlayers                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::GetNumberOfPlayers(int* NumberOfPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetNumberOfPlayers");
		
		UBP_FNAF_GameInstance_C_GetNumberOfPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberOfPlayers != nullptr)
			*NumberOfPlayers = params.NumberOfPlayers;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAllLevelsOfType
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		GameTypeEnum_EGameTypeEnum                         Game_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FLevelInfoStruct>                    LevelsForGameType                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
	 * 		TArray<class FName>                                LevelIDsForGameType                                        (Parm, OutParm, ZeroConstructor)
	 */
	void UBP_FNAF_GameInstance_C::GetAllLevelsOfType(GameTypeEnum_EGameTypeEnum Game_Type, TArray<struct FLevelInfoStruct>* LevelsForGameType, TArray<class FName>* LevelIDsForGameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAllLevelsOfType");
		
		UBP_FNAF_GameInstance_C_GetAllLevelsOfType_Params params {};
		params.Game_Type = Game_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LevelsForGameType != nullptr)
			*LevelsForGameType = params.LevelsForGameType;
		if (LevelIDsForGameType != nullptr)
			*LevelIDsForGameType = params.LevelIDsForGameType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsLevelUnlocked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        LevelID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LevelIsUnlocked                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::IsLevelUnlocked(const class FName& LevelID, bool* LevelIsUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsLevelUnlocked");
		
		UBP_FNAF_GameInstance_C_IsLevelUnlocked_Params params {};
		params.LevelID = LevelID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LevelIsUnlocked != nullptr)
			*LevelIsUnlocked = params.LevelIsUnlocked;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsLevelBeaten
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        LevelID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LevelCompleted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::IsLevelBeaten(const class FName& LevelID, bool* LevelCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsLevelBeaten");
		
		UBP_FNAF_GameInstance_C_IsLevelBeaten_Params params {};
		params.LevelID = LevelID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LevelCompleted != nullptr)
			*LevelCompleted = params.LevelCompleted;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsShowtimeUnlocked
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               ShowtimeUnlocked                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::IsShowtimeUnlocked(bool* ShowtimeUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsShowtimeUnlocked");
		
		UBP_FNAF_GameInstance_C_IsShowtimeUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowtimeUnlocked != nullptr)
			*ShowtimeUnlocked = params.ShowtimeUnlocked;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FindCurrentLevelID
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::FindCurrentLevelID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FindCurrentLevelID");
		
		UBP_FNAF_GameInstance_C_FindCurrentLevelID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UpdateCachedCoinCount
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::UpdateCachedCoinCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UpdateCachedCoinCount");
		
		UBP_FNAF_GameInstance_C_UpdateCachedCoinCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ClearSaveGame
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::ClearSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ClearSaveGame");
		
		UBP_FNAF_GameInstance_C_ClearSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCurrentLevelID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        CurrentLevelNameID                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::GetCurrentLevelID(class FName* CurrentLevelNameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCurrentLevelID");
		
		UBP_FNAF_GameInstance_C_GetCurrentLevelID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentLevelNameID != nullptr)
			*CurrentLevelNameID = params.CurrentLevelNameID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCurrentLevelInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FLevelInfoStruct                            CurrentLevelInfo                                           (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		int                                                LevelNumber                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::GetCurrentLevelInfo(struct FLevelInfoStruct* CurrentLevelInfo, int* LevelNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCurrentLevelInfo");
		
		UBP_FNAF_GameInstance_C_GetCurrentLevelInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentLevelInfo != nullptr)
			*CurrentLevelInfo = params.CurrentLevelInfo;
		if (LevelNumber != nullptr)
			*LevelNumber = params.LevelNumber;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockCoin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                CoinID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::UnlockCoin(int CoinID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockCoin");
		
		UBP_FNAF_GameInstance_C_UnlockCoin_Params params {};
		params.CoinID = CoinID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSaveGame
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UFNAFSaveGame_C*                             SaveGameInfo                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::GetSaveGame(class UFNAFSaveGame_C** SaveGameInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSaveGame");
		
		UBP_FNAF_GameInstance_C_GetSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SaveGameInfo != nullptr)
			*SaveGameInfo = params.SaveGameInfo;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SaveLevelVictory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::SaveLevelVictory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SaveLevelVictory");
		
		UBP_FNAF_GameInstance_C_SaveLevelVictory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SetupPlayerCharacters
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ALobbyPlayerController_C*>            LobbyPlayers                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UBP_FNAF_GameInstance_C::SetupPlayerCharacters(TArray<class ALobbyPlayerController_C*>* LobbyPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SetupPlayerCharacters");
		
		UBP_FNAF_GameInstance_C_SetupPlayerCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LobbyPlayers != nullptr)
			*LobbyPlayers = params.LobbyPlayers;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCoinCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                NumberOfCoins                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::GetCoinCount(int* NumberOfCoins)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCoinCount");
		
		UBP_FNAF_GameInstance_C_GetCoinCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberOfCoins != nullptr)
			*NumberOfCoins = params.NumberOfCoins;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetLevelInstructions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        LevelInstructions                                          (Parm, OutParm)
	 * 		bool                                               WidgetIsValid                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::GetLevelInstructions(class FText* LevelInstructions, bool* WidgetIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetLevelInstructions");
		
		UBP_FNAF_GameInstance_C_GetLevelInstructions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LevelInstructions != nullptr)
			*LevelInstructions = params.LevelInstructions;
		if (WidgetIsValid != nullptr)
			*WidgetIsValid = params.WidgetIsValid;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SpawnLevelDatabase
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::SpawnLevelDatabase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SpawnLevelDatabase");
		
		UBP_FNAF_GameInstance_C_SpawnLevelDatabase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadMainMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadMainMenu");
		
		UBP_FNAF_GameInstance_C_LoadMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ReceiveInit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ReceiveInit");
		
		UBP_FNAF_GameInstance_C_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllLevels
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::UnlockAllLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllLevels");
		
		UBP_FNAF_GameInstance_C_UnlockAllLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.RunFadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::RunFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.RunFadeOut");
		
		UBP_FNAF_GameInstance_C_RunFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadTitle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadTitle");
		
		UBP_FNAF_GameInstance_C_LoadTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadIntroLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadIntroLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadIntroLevel");
		
		UBP_FNAF_GameInstance_C_LoadIntroLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGlichedIntroLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadGlichedIntroLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGlichedIntroLevel");
		
		UBP_FNAF_GameInstance_C_LoadGlichedIntroLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGallery
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadGallery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGallery");
		
		UBP_FNAF_GameInstance_C_LoadGallery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FinaleVictory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                NumCoins                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::FinaleVictory(int NumCoins)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FinaleVictory");
		
		UBP_FNAF_GameInstance_C_FinaleVictory_Params params {};
		params.NumCoins = NumCoins;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllCoins
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::UnlockAllCoins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllCoins");
		
		UBP_FNAF_GameInstance_C_UnlockAllCoins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ToggleSubtitles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::ToggleSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ToggleSubtitles");
		
		UBP_FNAF_GameInstance_C_ToggleSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGlitchKeyhole
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadGlitchKeyhole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGlitchKeyhole");
		
		UBP_FNAF_GameInstance_C_LoadGlitchKeyhole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadCasetteRoom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadCasetteRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadCasetteRoom");
		
		UBP_FNAF_GameInstance_C_LoadCasetteRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGameOver
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadGameOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGameOver");
		
		UBP_FNAF_GameInstance_C_LoadGameOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadHalloweenHub
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadHalloweenHub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadHalloweenHub");
		
		UBP_FNAF_GameInstance_C_LoadHalloweenHub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ForceLoadHTitle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::ForceLoadHTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ForceLoadHTitle");
		
		UBP_FNAF_GameInstance_C_ForceLoadHTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadMainHub
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadMainHub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadMainHub");
		
		UBP_FNAF_GameInstance_C_LoadMainHub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LevelVictory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                NumCoins                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               No_Fade_Out_at_end                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FNAF_GameInstance_C::LevelVictory(int NumCoins, bool No_Fade_Out_at_end)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LevelVictory");
		
		UBP_FNAF_GameInstance_C_LevelVictory_Params params {};
		params.NumCoins = NumCoins;
		params.No_Fade_Out_at_end = No_Fade_Out_at_end;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LevelDefeat
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LevelDefeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LevelDefeat");
		
		UBP_FNAF_GameInstance_C_LevelDefeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadHSplash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadHSplash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadHSplash");
		
		UBP_FNAF_GameInstance_C_LoadHSplash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGearGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadGearGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGearGame");
		
		UBP_FNAF_GameInstance_C_LoadGearGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadDarkRide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadDarkRide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadDarkRide");
		
		UBP_FNAF_GameInstance_C_LoadDarkRide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.RestartCurrentLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::RestartCurrentLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.RestartCurrentLevel");
		
		UBP_FNAF_GameInstance_C_RestartCurrentLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadHollidayLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FNAF_GameInstance_C::LoadHollidayLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadHollidayLevel");
		
		UBP_FNAF_GameInstance_C_LoadHollidayLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FinishCaveat
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::FinishCaveat(int Difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FinishCaveat");
		
		UBP_FNAF_GameInstance_C_FinishCaveat_Params params {};
		params.Difficulty = Difficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadLevel
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LevelID                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLevelInfoStruct                            LevelInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::LoadLevel(const class FName& LevelID, const struct FLevelInfoStruct& LevelInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadLevel");
		
		UBP_FNAF_GameInstance_C_LoadLevel_Params params {};
		params.LevelID = LevelID;
		params.LevelInfo = LevelInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ExecuteUbergraph_BP_FNAF_GameInstance
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FNAF_GameInstance_C::ExecuteUbergraph_BP_FNAF_GameInstance(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ExecuteUbergraph_BP_FNAF_GameInstance");
		
		UBP_FNAF_GameInstance_C_ExecuteUbergraph_BP_FNAF_GameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBP_FNAF_GameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FNAF_GameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FNAF_GameInstance.BP_FNAF_GameInstance_C");
		return ptr;
	}

}


