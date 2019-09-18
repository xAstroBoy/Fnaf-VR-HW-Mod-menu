
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

// Function Widget_WarningIcon.Widget_WarningIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_WarningIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WarningIcon.Widget_WarningIcon_C.Construct");

	UWidget_WarningIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WarningIcon.Widget_WarningIcon_C.ExecuteUbergraph_Widget_WarningIcon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_WarningIcon_C::ExecuteUbergraph_Widget_WarningIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WarningIcon.Widget_WarningIcon_C.ExecuteUbergraph_Widget_WarningIcon");

	UWidget_WarningIcon_C_ExecuteUbergraph_Widget_WarningIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
