// Lean compiler output
// Module: Mathlib.Data.Finset.Pairwise
// Imports: Init Mathlib.Data.Finset.Lattice.Fold
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
LEAN_EXPORT lean_object* l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_forall__prop__decidable___rarg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_4);
lean_inc(x_2);
x_6 = lean_apply_2(x_1, x_2, x_4);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_instDecidableNot___rarg(x_7);
x_9 = lean_alloc_closure((void*)(l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___lambda__1), 4, 3);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_4);
x_10 = l_forall__prop__decidable___rarg(x_8, x_9);
return x_10;
}
}
LEAN_EXPORT uint8_t l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_alloc_closure((void*)(l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___lambda__2), 5, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_2);
x_7 = l_Multiset_decidableDforallMultiset___rarg(x_3, lean_box(0), x_6);
return x_7;
}
}
LEAN_EXPORT uint8_t l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___lambda__3___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
lean_closure_set(x_5, 2, x_4);
x_6 = l_Multiset_decidableDforallMultiset___rarg(x_4, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Lattice_Fold(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Pairwise(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Lattice_Fold(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
