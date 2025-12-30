// Lean compiler output
// Module: Mathlib.CategoryTheory.Preadditive.Transfer
// Imports: Init Mathlib.CategoryTheory.Preadditive.AdditiveFunctor Mathlib.Algebra.Equiv.TransferInstance
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
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1(lean_object*);
lean_object* l_Function_Injective_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Injective_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
lean_object* l_Equiv_Neg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
lean_object* l_CategoryTheory_Functor_FullyFaithful_homEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_add___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_sub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_apply_2(x_5, x_3, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_2, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_apply_2(x_5, x_3, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_2, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_9 = l_CategoryTheory_Functor_FullyFaithful_homEquiv___rarg(x_1, lean_box(0), x_3, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_5, 0);
lean_inc(x_10);
lean_dec(x_5);
lean_inc(x_10);
x_11 = lean_apply_1(x_10, x_7);
x_12 = lean_apply_1(x_10, x_8);
x_13 = lean_apply_2(x_4, x_11, x_12);
x_14 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_inc(x_9);
x_16 = l_Equiv_symm___elambda__2___rarg(x_9, x_15);
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
x_18 = l_AddMonoid_toAddZeroClass___rarg(x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_9);
x_20 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_20, 0, x_9);
lean_closure_set(x_20, 1, x_19);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_dec(x_14);
lean_inc(x_9);
x_22 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_22, 0, x_9);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_ctor_get(x_13, 2);
lean_inc(x_23);
lean_inc(x_9);
x_24 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_24, 0, x_9);
lean_closure_set(x_24, 1, x_23);
lean_inc(x_9);
x_25 = lean_alloc_closure((void*)(l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1___rarg___lambda__1), 4, 2);
lean_closure_set(x_25, 0, x_17);
lean_closure_set(x_25, 1, x_9);
x_26 = lean_alloc_closure((void*)(l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1___rarg___lambda__2), 4, 2);
lean_closure_set(x_26, 0, x_13);
lean_closure_set(x_26, 1, x_9);
x_27 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_27, 0, x_25);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_20);
lean_ctor_set(x_28, 1, x_16);
lean_ctor_set(x_28, 2, x_27);
x_29 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_29, 0, x_26);
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_22);
lean_ctor_set(x_30, 2, x_24);
lean_ctor_set(x_30, 3, x_29);
return x_30;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_5);
lean_closure_set(x_7, 5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Preadditive_ofFullyFaithful___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CategoryTheory_Preadditive_ofFullyFaithful___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Preadditive_AdditiveFunctor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Equiv_TransferInstance(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Preadditive_Transfer(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Preadditive_AdditiveFunctor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Equiv_TransferInstance(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
