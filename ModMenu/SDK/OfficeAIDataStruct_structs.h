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
	 * UserDefinedStruct OfficeAIDataStruct.OfficeAIDataStruct
	 * Size -> 0x0020
	 */
	struct FOfficeAIDataStruct
	{
	public:
		FreddyCharacterType_EFreddyCharacterType                   CharacterType_3_D613318C44053CE980E676ACB8816938;        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HKAD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        Night_6_BBBD0E0F4E9B5DFDCEB5A8AA95974CE1;                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsActive_16_C0E53E6346A81E4E35F025AC3D26F482;            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CNUM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ActivationTimeMin_19_A76AC0B547EE19E2F19C3EB5054EB009;   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ActivationTimeMax_20_4A78491D4169DA6974A0619CEF29F87A;   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementTimeMin_11_A5BF46CF4295761C2D7D3097049365AF;     // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementTimeMax_13_3BE183A24E998AA5EBFE73A4ABB62EBE;     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AllowedTimeToBeSeenMax_23_AAA37A654B311001145F8D871E995561; // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
