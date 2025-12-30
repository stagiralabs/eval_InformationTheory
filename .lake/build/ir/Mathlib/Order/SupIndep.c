// Lean compiler output
// Module: Mathlib.Order.SupIndep
// Imports: Init Mathlib.Data.Finset.Lattice.Union Mathlib.Data.Finset.Pairwise Mathlib.Data.Finset.Prod Mathlib.Data.Finset.Sigma Mathlib.Data.Fintype.Basic Mathlib.Order.CompleteLatticeIntervals
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
uint8_t l_Multiset_decidableDforallMultiset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instDecidableSupIndepOfDecidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_erase___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instDecidableSupIndepOfDecidableEq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Finset_instDecidableSupIndepOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_sup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instDecidableSupIndepOfDecidableEq___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instDecidableSupIndepOfDecidableEq___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_1);
lean_inc(x_7);
x_9 = lean_apply_1(x_1, x_7);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = l_Multiset_erase___rarg(x_3, x_4, x_7);
lean_inc(x_5);
x_12 = l_Finset_sup___rarg(x_10, x_5, x_11, x_1);
x_13 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_2, x_9, x_12);
x_14 = lean_apply_2(x_6, x_13, x_5);
return x_14;
}
}
LEAN_EXPORT uint8_t l_Finset_instDecidableSupIndepOfDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
lean_inc(x_3);
x_7 = lean_alloc_closure((void*)(l_Finset_instDecidableSupIndepOfDecidableEq___rarg___lambda__1), 8, 6);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_5);
lean_closure_set(x_7, 3, x_3);
lean_closure_set(x_7, 4, x_2);
lean_closure_set(x_7, 5, x_6);
x_8 = l_Multiset_decidableDforallMultiset___rarg(x_3, lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_instDecidableSupIndepOfDecidableEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_instDecidableSupIndepOfDecidableEq___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_instDecidableSupIndepOfDecidableEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Finset_instDecidableSupIndepOfDecidableEq___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Lattice_Union(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Pairwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Sigma(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_CompleteLatticeIntervals(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_SupIndep(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Lattice_Union(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Pairwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Sigma(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_CompleteLatticeIntervals(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
