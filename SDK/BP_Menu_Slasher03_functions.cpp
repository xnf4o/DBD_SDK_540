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
//		Name   -> Function BP_Menu_Slasher03.BP_Menu_Slasher03_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Menu_Slasher03_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher03.BP_Menu_Slasher03_C.ReceiveBeginPlay");

	ABP_Menu_Slasher03_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x042CD2C0
//		Name   -> Function BP_Menu_Slasher03.BP_Menu_Slasher03_C.ExecuteUbergraph_BP_Menu_Slasher03
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Menu_Slasher03_C::ExecuteUbergraph_BP_Menu_Slasher03(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher03.BP_Menu_Slasher03_C.ExecuteUbergraph_BP_Menu_Slasher03");

	ABP_Menu_Slasher03_C_ExecuteUbergraph_BP_Menu_Slasher03_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
