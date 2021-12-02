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
//		Name   -> Function AB_Menu_Slasher15.AB_Menu_Slasher15_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UAB_Menu_Slasher15_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher15.AB_Menu_Slasher15_C.AnimGraph");

	UAB_Menu_Slasher15_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x042CD2C0
//		Name   -> Function AB_Menu_Slasher15.AB_Menu_Slasher15_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_Menu_Slasher15_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher15.AB_Menu_Slasher15_C.BlueprintUpdateAnimation");

	UAB_Menu_Slasher15_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x042CD2C0
//		Name   -> Function AB_Menu_Slasher15.AB_Menu_Slasher15_C.ExecuteUbergraph_AB_Menu_Slasher15
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_Menu_Slasher15_C::ExecuteUbergraph_AB_Menu_Slasher15(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher15.AB_Menu_Slasher15_C.ExecuteUbergraph_AB_Menu_Slasher15");

	UAB_Menu_Slasher15_C_ExecuteUbergraph_AB_Menu_Slasher15_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif