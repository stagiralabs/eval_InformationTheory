// Lean compiler output
// Module: Mathlib.Data.Finset.Sigma
// Imports: Init Mathlib.Data.Finset.Lattice.Fold Mathlib.Data.Set.Sigma Mathlib.Order.CompleteLattice.Finset
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
LEAN_EXPORT lean_object* l_Finset_sigma(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* l_Function_Embedding_sigmaMk___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigmaLift(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_sigma___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigma___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigmaLift___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigma___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_sigma___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sigma(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sigma___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sigmaLift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_inc(x_6);
x_7 = lean_apply_2(x_1, x_5, x_6);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_6);
x_10 = lean_alloc_closure((void*)(l_Function_Embedding_sigmaMk___elambda__1___rarg), 2, 1);
lean_closure_set(x_10, 0, x_6);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_dec(x_4);
x_13 = lean_apply_3(x_2, x_6, x_11, x_12);
x_14 = l_Multiset_map___rarg(x_10, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Finset_sigmaLift(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finset_sigmaLift___rarg), 4, 0);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Lattice_Fold(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Sigma(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_CompleteLattice_Finset(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Sigma(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Lattice_Fold(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Sigma(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_CompleteLattice_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
