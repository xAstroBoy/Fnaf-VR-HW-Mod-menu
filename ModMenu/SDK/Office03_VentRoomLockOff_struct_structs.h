#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Office03_VentRoomLockOff_struct.Office03_VentRoomLockOff_struct
// 0x0018
struct FOffice03_VentRoomLockOff_struct
{
	int                                                ButtonID_12_7E0ACEAA4A8112D37A4968B4B823426D;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class ARoomInfo_Bp_C*                              StartRoom_7_04CD68ED44241CFC87A81983D565916D;             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ARoomInfo_Bp_C*                              EndRoom_8_337140284C01E6DCD747F583753C36E9;               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
