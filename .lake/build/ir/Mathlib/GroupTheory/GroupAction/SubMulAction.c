// Lean compiler output
// Module: Mathlib.GroupTheory.GroupAction.SubMulAction
// Imports: Init Mathlib.Algebra.Module.Defs Mathlib.Data.SetLike.Basic Mathlib.Data.Setoid.Basic Mathlib.GroupTheory.GroupAction.Defs Mathlib.GroupTheory.GroupAction.Hom
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_mulAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_toMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instSetLike(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_instVAddSubtypeMem___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_nonZeroSubMul___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instNegSubtypeMem___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_copy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_vadd_x27___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_vadd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_inclusion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_toAddAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_smul_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_nonZeroSubMul(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_subtype___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_copy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_mulAction_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_smul_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SetLike_vadd_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_toMulAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instSMulSubtypeMem___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_addAction_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SetLike_vadd_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_toMulAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_smul_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_mulAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_toAddAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_subtype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_nonZeroSubMul___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_smul_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_addAction_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_mulAction_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_instBot___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_addAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instZeroSubtypeMemOfNonempty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_instVAddSubtypeMem___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_subtype(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_instBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_copy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_addAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_smul_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_mulAction_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_smul_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_copy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_instVAddSubtypeMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_mulAction___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instBot___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instSMulSubtypeMem___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_copy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_subtype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_instBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_smul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_vadd___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SetLike_vadd_x27___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_addAction___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_smul_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Units_instSMul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_toAddAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_vadd_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_copy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instSetLike___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_vadd_x27___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_subtype(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instZeroSubtypeMemOfNonempty___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instHVAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_addAction_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_instVAddSubtypeMem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SetLike_smul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Units_nonZeroSubMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_instMulActionSubtypeNeOfNat___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SetLike_vadd_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_vadd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_SetLike_smul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_addAction_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_instSetLike___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_vadd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_instVAddSubtypeMem___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_subtype___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instSMulSubtypeMem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_vadd___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_toMulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_instMulActionSubtypeNeOfNat(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instZeroSubtypeMemOfNonempty___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_mulAction_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_smul_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instNegSubtypeMem(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instNegSubtypeMem___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_instMulActionSubtypeNeOfNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instZeroSubtypeMemOfNonempty___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_inclusion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_SubMulAction_instNegSubtypeMem___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_instSetLike(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetLike_smul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_2(x_1, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SetLike_smul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SetLike_smul___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SetLike_smul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SetLike_smul___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SetLike_vadd___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SetLike_vadd___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SetLike_vadd___elambda__1___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SetLike_vadd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SetLike_vadd___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SetLike_vadd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SetLike_vadd___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SetLike_vadd___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SetLike_vadd___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SetLike_smul_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_apply_2(x_1, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SetLike_smul_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_SetLike_smul_x27___rarg___boxed), 8, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SetLike_smul_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_SetLike_smul_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SetLike_smul_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SetLike_smul_x27(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SetLike_vadd_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SetLike_vadd_x27___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SetLike_vadd_x27___elambda__1___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SetLike_vadd_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_SetLike_vadd_x27___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SetLike_vadd_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SetLike_vadd_x27___rarg___boxed), 8, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SetLike_vadd_x27___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SetLike_vadd_x27___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SetLike_vadd_x27___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SetLike_vadd_x27___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SetLike_vadd_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_SetLike_vadd_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instSetLike(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instSetLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SubMulAction_instSetLike(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_instSetLike(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_instSetLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SubAddAction_instSetLike(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_copy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_copy(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubMulAction_copy___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_copy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubMulAction_copy___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_copy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_copy(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubAddAction_copy___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_copy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubAddAction_copy___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubMulAction_instBot___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubMulAction_instBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_instBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_instBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubAddAction_instBot___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_instBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubAddAction_instBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubMulAction_instInhabited___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubMulAction_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubAddAction_instInhabited___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubAddAction_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instSMulSubtypeMem___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instSMulSubtypeMem(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubMulAction_instSMulSubtypeMem___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instSMulSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubMulAction_instSMulSubtypeMem___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_instVAddSubtypeMem___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_instVAddSubtypeMem___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubAddAction_instVAddSubtypeMem___elambda__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_instVAddSubtypeMem___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubAddAction_instVAddSubtypeMem___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_instVAddSubtypeMem(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubAddAction_instVAddSubtypeMem___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_instVAddSubtypeMem___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubAddAction_instVAddSubtypeMem___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SubMulAction_subtype___elambda__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubMulAction_subtype___elambda__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_subtype___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubMulAction_subtype___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_subtype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubMulAction_subtype___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubMulAction_subtype___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubMulAction_subtype___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_subtype___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubMulAction_subtype___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_subtype___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SubMulAction_subtype___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SubAddAction_subtype___elambda__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubAddAction_subtype___elambda__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_subtype___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubAddAction_subtype___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_subtype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubAddAction_subtype___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubAddAction_subtype___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubAddAction_subtype___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_subtype___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubAddAction_subtype___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_subtype___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SubAddAction_subtype___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_toMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_apply_2(x_1, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_toMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SubMulAction_SMulMemClass_toMulAction___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_toMulAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_SubMulAction_SMulMemClass_toMulAction___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_toMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SubMulAction_SMulMemClass_toMulAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_toAddAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_SetLike_vadd___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_5);
x_7 = lean_alloc_closure((void*)(l_instHVAdd___elambda__1___rarg), 3, 1);
lean_closure_set(x_7, 0, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_toAddAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SubAddAction_SMulMemClass_toAddAction___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_toAddAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SubAddAction_SMulMemClass_toAddAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SubMulAction_SMulMemClass_subtype___elambda__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubMulAction_SMulMemClass_subtype___elambda__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SubMulAction_SMulMemClass_subtype___elambda__1___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_SubMulAction_SMulMemClass_subtype___rarg___boxed), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubMulAction_SMulMemClass_subtype___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubMulAction_SMulMemClass_subtype___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubMulAction_SMulMemClass_subtype___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SubMulAction_SMulMemClass_subtype___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_SMulMemClass_subtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SubMulAction_SMulMemClass_subtype(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SubAddAction_SMulMemClass_subtype___elambda__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubAddAction_SMulMemClass_subtype___elambda__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SubAddAction_SMulMemClass_subtype___elambda__1___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_SubAddAction_SMulMemClass_subtype___rarg___boxed), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubAddAction_SMulMemClass_subtype___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubAddAction_SMulMemClass_subtype___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubAddAction_SMulMemClass_subtype___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SubAddAction_SMulMemClass_subtype___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_SMulMemClass_subtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SubAddAction_SMulMemClass_subtype(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_smul_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_smul_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_SubMulAction_smul_x27___rarg___boxed), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_smul_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SubMulAction_smul_x27___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_smul_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SubMulAction_smul_x27(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_SubAddAction_vadd_x27___elambda__1___rarg___boxed), 4, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_SubAddAction_vadd_x27___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SubAddAction_vadd_x27___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubAddAction_vadd_x27___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SubAddAction_vadd_x27___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_vadd_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SubAddAction_vadd_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_mulAction_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_mulAction_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_SubMulAction_mulAction_x27___rarg___boxed), 5, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_mulAction_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SubMulAction_mulAction_x27___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_mulAction_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_SubMulAction_mulAction_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_addAction_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_addAction_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_SubAddAction_addAction_x27___rarg___boxed), 5, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_addAction_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SubAddAction_addAction_x27___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_addAction_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_SubAddAction_addAction_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_mulAction___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubMulAction_mulAction_x27___rarg___boxed), 5, 3);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
lean_closure_set(x_3, 2, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_mulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SubMulAction_mulAction___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_mulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SubMulAction_mulAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_addAction___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubAddAction_addAction_x27___rarg___boxed), 5, 3);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
lean_closure_set(x_3, 2, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_addAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SubAddAction_addAction___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_addAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SubAddAction_addAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instZeroSubtypeMemOfNonempty___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instZeroSubtypeMemOfNonempty(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SubMulAction_instZeroSubtypeMemOfNonempty___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instZeroSubtypeMemOfNonempty___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubMulAction_instZeroSubtypeMemOfNonempty___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instZeroSubtypeMemOfNonempty___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SubMulAction_instZeroSubtypeMemOfNonempty(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instNegSubtypeMem___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instNegSubtypeMem(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SubMulAction_instNegSubtypeMem___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instNegSubtypeMem___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubMulAction_instNegSubtypeMem___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_instNegSubtypeMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SubMulAction_instNegSubtypeMem(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_SubMulAction_inclusion___elambda__1___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubMulAction_inclusion___elambda__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SubMulAction_inclusion___elambda__1___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_inclusion(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubMulAction_inclusion___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubMulAction_inclusion___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SubMulAction_inclusion___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubMulAction_inclusion___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubMulAction_inclusion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SubMulAction_inclusion___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_SubAddAction_inclusion___elambda__1___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubAddAction_inclusion___elambda__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SubAddAction_inclusion___elambda__1___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_inclusion(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubAddAction_inclusion___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubAddAction_inclusion___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SubAddAction_inclusion___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubAddAction_inclusion___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubAddAction_inclusion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SubAddAction_inclusion___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Units_nonZeroSubMul___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Units_nonZeroSubMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Units_nonZeroSubMul___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Units_nonZeroSubMul___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Units_nonZeroSubMul___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Units_nonZeroSubMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Units_nonZeroSubMul(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Units_instMulActionSubtypeNeOfNat___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Units_instSMul___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Units_nonZeroSubMul___rarg(x_1);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_SubMulAction_mulAction_x27___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Units_instMulActionSubtypeNeOfNat(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Units_instMulActionSubtypeNeOfNat___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Units_instMulActionSubtypeNeOfNat___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Units_instMulActionSubtypeNeOfNat(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_SetLike_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Setoid_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_Hom(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_GroupAction_SubMulAction(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_SetLike_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Setoid_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_Hom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
