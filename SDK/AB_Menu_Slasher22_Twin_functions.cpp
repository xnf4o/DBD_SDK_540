// Name: DBD, Version: 540

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
//		Name   -> Function AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UAB_Menu_Slasher22_Twin_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.AnimGraph");

	UAB_Menu_Slasher22_Twin_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x042CD2C0
//		Name   -> Function AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C._get_bp_menu_slasher_23
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher22_Twin_C::_get_bp_menu_slasher_23()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C._get_bp_menu_slasher_23");

	UAB_Menu_Slasher22_Twin_C__get_bp_menu_slasher_23_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x042CD2C0
//		Name   -> Function AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_Menu_Slasher22_Twin_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.BlueprintUpdateAnimation");

	UAB_Menu_Slasher22_Twin_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x042CD2C0
//		Name   -> Function AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.ExecuteUbergraph_AB_Menu_Slasher22_Twin
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_Menu_Slasher22_Twin_C::ExecuteUbergraph_AB_Menu_Slasher22_Twin(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.ExecuteUbergraph_AB_Menu_Slasher22_Twin");

	UAB_Menu_Slasher22_Twin_C_ExecuteUbergraph_AB_Menu_Slasher22_Twin_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
