// Lean compiler output
// Module: Mathlib.NumberTheory.LSeries.Nonvanishing
// Imports: Init Mathlib.Analysis.SpecialFunctions.Complex.LogBounds Mathlib.NumberTheory.Harmonic.ZetaAsymp Mathlib.NumberTheory.LSeries.Dirichlet Mathlib.NumberTheory.LSeries.DirichletContinuation Mathlib.NumberTheory.LSeries.Positivity
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
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
lean_object* l_ArithmeticFunction_natToArithmeticFunction___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_DirichletCharacter_zetaMul___spec__1(lean_object*, lean_object*);
lean_object* l_Nat_divisorsAntidiagonal(lean_object*);
lean_object* l_ZMod_commRing(lean_object*);
LEAN_EXPORT lean_object* l_DirichletCharacter_zetaMul___lambda__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_ArithmeticFunction_zeta;
LEAN_EXPORT lean_object* l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3(lean_object*);
extern lean_object* l_Complex_instZero;
extern lean_object* l_Complex_addGroupWithOne;
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ArithmeticFunction_natToArithmeticFunction___at_DirichletCharacter_zetaMul___elambda__1___spec__1(lean_object*);
lean_object* l_toArithmeticFunction___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(lean_object*);
static lean_object* l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___closed__1;
LEAN_EXPORT lean_object* l_DirichletCharacter_zetaMul(lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DirichletCharacter_zetaMul___elambda__1___lambda__1(lean_object*, lean_object*);
static lean_object* l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___closed__2;
LEAN_EXPORT lean_object* l_Finset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DirichletCharacter_zetaMul___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toArithmeticFunction___at_DirichletCharacter_zetaMul___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ArithmeticFunction_natToArithmeticFunction___at_DirichletCharacter_zetaMul___elambda__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Complex_addGroupWithOne;
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_ArithmeticFunction_natToArithmeticFunction___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_6, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
static lean_object* _init_l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___closed__2;
x_3 = l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___closed__1;
x_4 = l_List_foldrTR___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DirichletCharacter_zetaMul___elambda__1___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_ArithmeticFunction_zeta;
x_5 = l_ArithmeticFunction_natToArithmeticFunction___at_DirichletCharacter_zetaMul___elambda__1___spec__1(x_4);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_inc(x_10);
lean_inc(x_9);
x_11 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(x_9, x_10);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_dec(x_6);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
lean_inc(x_13);
lean_inc(x_12);
x_14 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(x_12, x_13);
x_15 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_14);
x_16 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_11, x_15);
x_17 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(x_9, x_13);
x_18 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(x_12, x_10);
x_19 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_17, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_DirichletCharacter_zetaMul___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Nat_divisorsAntidiagonal(x_2);
x_4 = lean_alloc_closure((void*)(l_DirichletCharacter_zetaMul___elambda__1___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Finset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__2(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_DirichletCharacter_zetaMul___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_ZMod_commRing(x_1);
x_4 = l_Ring_toAddGroupWithOne___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_toArithmeticFunction___at_DirichletCharacter_zetaMul___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Complex_instZero;
x_3 = lean_alloc_closure((void*)(l_toArithmeticFunction___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DirichletCharacter_zetaMul___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Nat_cast___at_DirichletCharacter_zetaMul___spec__1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DirichletCharacter_zetaMul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_DirichletCharacter_zetaMul___lambda__1), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_Complex_instZero;
x_5 = lean_alloc_closure((void*)(l_toArithmeticFunction___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_alloc_closure((void*)(l_DirichletCharacter_zetaMul___elambda__1), 2, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_Complex_LogBounds(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_Harmonic_ZetaAsymp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_LSeries_Dirichlet(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_LSeries_DirichletContinuation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_LSeries_Positivity(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_LSeries_Nonvanishing(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_Complex_LogBounds(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_Harmonic_ZetaAsymp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_LSeries_Dirichlet(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_LSeries_DirichletContinuation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_LSeries_Positivity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___closed__1 = _init_l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___closed__1();
lean_mark_persistent(l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___closed__1);
l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___closed__2 = _init_l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___closed__2();
lean_mark_persistent(l_Multiset_sum___at_DirichletCharacter_zetaMul___elambda__1___spec__3___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
