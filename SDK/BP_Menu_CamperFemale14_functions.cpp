﻿// Name: DBD, Version: 540

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x042CD2C0
//		Name   -> Function BP_Menu_CamperFemale14.BP_Menu_CamperFemale14_C.ExecuteUbergraph_BP_Menu_CamperFemale14
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Menu_CamperFemale14_C::ExecuteUbergraph_BP_Menu_CamperFemale14(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperFemale14.BP_Menu_CamperFemale14_C.ExecuteUbergraph_BP_Menu_CamperFemale14");

	ABP_Menu_CamperFemale14_C_ExecuteUbergraph_BP_Menu_CamperFemale14_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
