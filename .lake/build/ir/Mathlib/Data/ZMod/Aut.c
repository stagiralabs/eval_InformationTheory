// Lean compiler output
// Module: Mathlib.Data.ZMod.Aut
// Imports: Init Mathlib.Algebra.Ring.AddAut Mathlib.Data.ZMod.Basic
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
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_ZMod_AddAutEquivUnits___spec__7(lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
lean_object* l_ZMod_commRing(lean_object*);
lean_object* l_AddEquiv_instEquivLike___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_ZMod_AddAutEquivUnits___spec__7___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_ZMod_AddAutEquivUnits___spec__8(lean_object*);
lean_object* l_Semiring_toModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_ZMod_AddAutEquivUnits___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Units_mkOfMulEqOne___at_ZMod_AddAutEquivUnits___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAut_mulLeft___at_ZMod_AddAutEquivUnits___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_ZMod_AddAutEquivUnits___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_AddAutEquivUnits___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_MulZeroOneClass_toMulZeroClass___rarg(lean_object*);
lean_object* l_Units_instSMulZeroClass___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_mkOfMulEqOne___at_ZMod_AddAutEquivUnits___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
lean_object* l_MulAction_toPerm___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MonoidWithZero_toMulZeroOneClass___rarg(lean_object*);
lean_object* l_Units_instDivInvMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_ZMod_AddAutEquivUnits___spec__9(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_AddAutEquivUnits(lean_object*);
lean_object* l_MulAction_toPerm___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddAut___at_ZMod_AddAutEquivUnits___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv___at_ZMod_AddAutEquivUnits___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddMonoidHom___at_ZMod_AddAutEquivUnits___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_AddAutEquivUnits___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_ZMod_AddAutEquivUnits___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_ZMod_AddAutEquivUnits___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_ZMod_AddAutEquivUnits___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddEquiv_symm___at_ZMod_AddAutEquivUnits___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Units_mkOfMulEqOne___at_ZMod_AddAutEquivUnits___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_ZMod_AddAutEquivUnits___spec__7___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_MonoidWithZero_toMulZeroOneClass___rarg(x_1);
x_5 = l_MulZeroOneClass_toMulZeroClass___rarg(x_4);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_7, x_6, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_DistribSMul_toAddMonoidHom___at_ZMod_AddAutEquivUnits___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_ZMod_commRing(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Semiring_toMonoidWithZero___rarg(x_4);
lean_dec(x_4);
x_6 = lean_alloc_closure((void*)(l_DistribSMul_toAddMonoidHom___at_ZMod_AddAutEquivUnits___spec__7___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toAddMonoidHom___at_ZMod_AddAutEquivUnits___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DistribSMul_toAddMonoidHom___at_ZMod_AddAutEquivUnits___spec__7(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_ZMod_AddAutEquivUnits___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = l_ZMod_commRing(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Semiring_toMonoidWithZero___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Units_instDivInvMonoid___rarg(x_6);
x_8 = l_Semiring_toModule___rarg(x_4);
lean_dec(x_4);
x_9 = lean_alloc_closure((void*)(l_Units_instSMulZeroClass___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
lean_inc(x_2);
lean_inc(x_9);
x_10 = lean_alloc_closure((void*)(l_MulAction_toPerm___elambda__2___rarg), 3, 2);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_2);
x_11 = lean_alloc_closure((void*)(l_MulAction_toPerm___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_11, 0, x_7);
lean_closure_set(x_11, 1, x_9);
lean_closure_set(x_11, 2, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_ZMod_AddAutEquivUnits___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulAction_toPerm___at_ZMod_AddAutEquivUnits___spec__9), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv___at_ZMod_AddAutEquivUnits___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_DistribSMul_toAddMonoidHom___at_ZMod_AddAutEquivUnits___spec__7(x_1, x_2);
x_4 = l_MulAction_toPerm___at_ZMod_AddAutEquivUnits___spec__9(x_1, x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_dec(x_6);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toAddAut___at_ZMod_AddAutEquivUnits___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_DistribMulAction_toAddEquiv___at_ZMod_AddAutEquivUnits___spec__5), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddAut_mulLeft___at_ZMod_AddAutEquivUnits___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_DistribMulAction_toAddEquiv___at_ZMod_AddAutEquivUnits___spec__5), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_AddAutEquivUnits___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
lean_inc(x_3);
x_7 = l_AddEquiv_instEquivLike___elambda__2___rarg(x_3, x_6);
x_8 = l_Equiv_symm___rarg(x_3);
x_9 = l_AddEquiv_instEquivLike___elambda__2___rarg(x_8, x_6);
x_10 = l_Units_mkOfMulEqOne___at_ZMod_AddAutEquivUnits___spec__2(x_2, x_7, x_9, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_ZMod_AddAutEquivUnits(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = l_ZMod_commRing(x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_ZMod_AddAutEquivUnits___lambda__1___boxed), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
x_4 = lean_alloc_closure((void*)(l_DistribMulAction_toAddEquiv___at_ZMod_AddAutEquivUnits___spec__5), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_ZMod_AddAutEquivUnits___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_symm___at_ZMod_AddAutEquivUnits___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Units_mkOfMulEqOne___at_ZMod_AddAutEquivUnits___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Units_mkOfMulEqOne___at_ZMod_AddAutEquivUnits___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ZMod_AddAutEquivUnits___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ZMod_AddAutEquivUnits___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_AddAut(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_ZMod_Aut(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_AddAut(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
