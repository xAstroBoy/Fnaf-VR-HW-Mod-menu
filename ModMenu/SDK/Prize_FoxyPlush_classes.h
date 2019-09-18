#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prize_FoxyPlush.Prize_FoxyPlush_C
// 0x0008 (0x03E0 - 0x03D8)
class APrize_FoxyPlush_C : public APrize_Parent_C
{
public:
	class UStaticMeshComponent*                        ENV_MOD_Prize_Plush_Foxy_03;                              // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prize_FoxyPlush.Prize_FoxyPlush_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
