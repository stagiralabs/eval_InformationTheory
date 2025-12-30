// Lean compiler output
// Module: Mathlib.Algebra.Group.Subgroup.MulOppositeLemmas
// Imports: Init Mathlib.Algebra.Group.Subgroup.Basic Mathlib.Algebra.Group.Subgroup.MulOpposite Mathlib.Algebra.Group.Submonoid.MulOpposite Mathlib.Logic.Encodable.Basic
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
lean_object* l_Add_toVAddAddOpposite___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Mul_toSMulMulOpposite___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instEncodableSubtypeMulOppositeMemOp___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Encodable_ofEquiv___rarg(lean_object*, lean_object*);
lean_object* l_AddSubmonoid_instVAddSubtypeMem___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instSMul___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_instEncodableSubtypeAddOppositeMemOp___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Subgroup_equivOp(lean_object*, lean_object*, lean_object*);
lean_object* l_Submonoid_instSMulSubtypeMem___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instEncodableSubtypeMulOppositeMemOp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_instVAdd(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_instVAdd___rarg___boxed(lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_instVAdd___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instSMul___rarg(lean_object*, lean_object*);
lean_object* l_AddSubgroup_equivOp(lean_object*, lean_object*, lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instEncodableSubtypeMulOppositeMemOp(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_instEncodableSubtypeAddOppositeMemOp(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_instEncodableSubtypeAddOppositeMemOp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instSMul(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instSMul___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Monoid_toMulOneClass___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_closure((void*)(l_Mul_toSMulMulOpposite___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_closure((void*)(l_Submonoid_instSMulSubtypeMem___rarg), 3, 1);
lean_closure_set(x_7, 0, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Subgroup_instSMul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_instSMul___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_instSMul___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subgroup_instSMul___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instVAdd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_AddMonoid_toAddZeroClass___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_closure((void*)(l_Add_toVAddAddOpposite___elambda__1___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_closure((void*)(l_AddSubmonoid_instVAddSubtypeMem___elambda__1___rarg), 3, 1);
lean_closure_set(x_7, 0, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instVAdd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_instVAdd___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instVAdd___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubgroup_instVAdd___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subgroup_instEncodableSubtypeMulOppositeMemOp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Subgroup_equivOp(lean_box(0), x_1, x_2);
x_5 = l_Equiv_symm___rarg(x_4);
x_6 = l_Encodable_ofEquiv___rarg(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subgroup_instEncodableSubtypeMulOppositeMemOp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_instEncodableSubtypeMulOppositeMemOp___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_instEncodableSubtypeMulOppositeMemOp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subgroup_instEncodableSubtypeMulOppositeMemOp___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instEncodableSubtypeAddOppositeMemOp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_AddSubgroup_equivOp(lean_box(0), x_1, x_2);
x_5 = l_Equiv_symm___rarg(x_4);
x_6 = l_Encodable_ofEquiv___rarg(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instEncodableSubtypeAddOppositeMemOp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_instEncodableSubtypeAddOppositeMemOp___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instEncodableSubtypeAddOppositeMemOp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubgroup_instEncodableSubtypeAddOppositeMemOp___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subgroup_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subgroup_MulOpposite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_MulOpposite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Encodable_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Subgroup_MulOppositeLemmas(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subgroup_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subgroup_MulOpposite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_MulOpposite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Encodable_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
