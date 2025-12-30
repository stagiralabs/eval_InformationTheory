// Lean compiler output
// Module: Mathlib.Algebra.Module.NatInt
// Imports: Init Mathlib.Algebra.Module.Defs Mathlib.Data.Int.Cast.Lemmas
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
LEAN_EXPORT lean_object* l_SubNegMonoid_sub_x27___at_Module_addCommMonoidToAddCommGroup___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Module_addCommMonoidToAddCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGroup_toIntModule___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddCommGroup_toNatModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCommGroup_toIntModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCommGroup_toNatModule___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Module_addCommMonoidToAddCommGroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonoid_uniqueNatModule(lean_object*);
LEAN_EXPORT lean_object* l_Module_addCommMonoidToAddCommGroup___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGroup_toNatModule(lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonoid_uniqueNatModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCommGroup_toIntModule(lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonoid_uniqueNatModule___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubNegMonoid_sub_x27___at_Module_addCommMonoidToAddCommGroup___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_addCommMonoidToAddCommGroup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCommGroup_toNatModule___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommGroup_toNatModule(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCommGroup_toNatModule___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommGroup_toNatModule___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommGroup_toNatModule___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommGroup_toIntModule___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommGroup_toIntModule(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCommGroup_toIntModule___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommGroup_toIntModule___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommGroup_toIntModule___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubNegMonoid_sub_x27___at_Module_addCommMonoidToAddCommGroup___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Ring_toAddCommGroup___rarg(x_1);
x_8 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_1(x_9, x_12);
x_14 = lean_apply_2(x_3, x_13, x_5);
x_15 = lean_apply_2(x_6, x_4, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_SubNegMonoid_sub_x27___at_Module_addCommMonoidToAddCommGroup___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubNegMonoid_sub_x27___at_Module_addCommMonoidToAddCommGroup___spec__1___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Module_addCommMonoidToAddCommGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = l_Ring_toAddCommGroup___rarg(x_1);
x_5 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_1(x_6, x_9);
x_11 = lean_apply_2(x_2, x_10, x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Module_addCommMonoidToAddCommGroup___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 4);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_apply_2(x_2, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Module_addCommMonoidToAddCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Module_addCommMonoidToAddCommGroup___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_SubNegMonoid_sub_x27___at_Module_addCommMonoidToAddCommGroup___spec__1___rarg), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_closure((void*)(l_Module_addCommMonoidToAddCommGroup___rarg___lambda__2), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_4);
lean_ctor_set(x_7, 2, x_5);
lean_ctor_set(x_7, 3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Module_addCommMonoidToAddCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Module_addCommMonoidToAddCommGroup___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommMonoid_uniqueNatModule___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommMonoid_uniqueNatModule(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCommMonoid_uniqueNatModule___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommMonoid_uniqueNatModule___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommMonoid_uniqueNatModule___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Cast_Lemmas(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Module_NatInt(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Cast_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
