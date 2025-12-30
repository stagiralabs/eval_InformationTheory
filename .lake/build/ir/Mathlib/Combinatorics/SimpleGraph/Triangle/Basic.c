// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Triangle.Basic
// Imports: Init Mathlib.Algebra.Order.Field.Basic Mathlib.Algebra.Order.Ring.Abs Mathlib.Combinatorics.Enumerative.DoubleCounting Mathlib.Combinatorics.SimpleGraph.Clique Mathlib.Data.Finset.Sym Mathlib.Tactic.GCongr Mathlib.Tactic.Positivity
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
LEAN_EXPORT lean_object* l_SimpleGraph_LocallyLinear_instDecidable(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_powerset___rarg(lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_EdgeDisjointTriangles_instDecidable___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_decidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_EdgeDisjointTriangles_instDecidable___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_SimpleGraph_cliqueFinset___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
uint8_t l_Multiset_decidableMem___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_EdgeDisjointTriangles_instDecidable___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Finset_decidableExistsAndFinset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_EdgeDisjointTriangles_instDecidable(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_LocallyLinear_instDecidable___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_forall__prop__decidable___rarg(uint8_t, lean_object*);
uint8_t l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_EdgeDisjointTriangles_instDecidable___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_LocallyLinear_instDecidable___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Fintype_decidableForallFintype___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_EdgeDisjointTriangles_instDecidable___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(x_1, x_3, x_2);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_lengthTRAux___rarg(x_4, x_5);
lean_dec(x_4);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_dec_le(x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_EdgeDisjointTriangles_instDecidable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_Finset_decidableEq___rarg___boxed), 3, 1);
lean_closure_set(x_5, 0, x_2);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_SimpleGraph_EdgeDisjointTriangles_instDecidable___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_unsigned_to_nat(3u);
x_8 = l_SimpleGraph_cliqueFinset___rarg(x_1, x_3, x_2, x_4, x_7);
x_9 = l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg(x_5, lean_box(0), x_6, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_EdgeDisjointTriangles_instDecidable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_EdgeDisjointTriangles_instDecidable___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_EdgeDisjointTriangles_instDecidable___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_SimpleGraph_EdgeDisjointTriangles_instDecidable___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_EdgeDisjointTriangles_instDecidable___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_SimpleGraph_EdgeDisjointTriangles_instDecidable___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(3u);
lean_inc(x_5);
lean_inc(x_1);
x_7 = l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj___rarg(x_1, x_2, x_6, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; 
lean_inc(x_5);
lean_inc(x_1);
x_9 = l_Multiset_decidableMem___rarg(x_1, x_3, x_5);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_10 = 0;
return x_10;
}
else
{
uint8_t x_11; 
x_11 = l_Multiset_decidableMem___rarg(x_1, x_4, x_5);
return x_11;
}
}
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_alloc_closure((void*)(l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
x_8 = l_Finset_powerset___rarg(x_5);
x_9 = l_Finset_decidableExistsAndFinset___rarg(x_8, lean_box(0), x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
lean_inc(x_5);
lean_inc(x_2);
x_6 = lean_apply_2(x_1, x_2, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__2___boxed), 6, 5);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_1);
lean_closure_set(x_8, 2, x_2);
lean_closure_set(x_8, 3, x_5);
lean_closure_set(x_8, 4, x_4);
x_9 = l_forall__prop__decidable___rarg(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__3), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_2);
lean_closure_set(x_5, 3, x_3);
x_6 = l_Fintype_decidableForallFintype___rarg(x_5, x_3);
return x_6;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_LocallyLinear_instDecidable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_5 = l_SimpleGraph_EdgeDisjointTriangles_instDecidable___rarg(x_1, x_2, x_3, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
lean_inc(x_3);
x_7 = lean_alloc_closure((void*)(l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__4___boxed), 4, 3);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
x_8 = l_Fintype_decidableForallFintype___rarg(x_7, x_3);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_LocallyLinear_instDecidable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_LocallyLinear_instDecidable___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_SimpleGraph_LocallyLinear_instDecidable___rarg___lambda__4(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_LocallyLinear_instDecidable___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_SimpleGraph_LocallyLinear_instDecidable___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Field_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Abs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_Enumerative_DoubleCounting(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Clique(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Sym(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_GCongr(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Positivity(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Triangle_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Field_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Abs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_Enumerative_DoubleCounting(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Clique(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Sym(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_GCongr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Positivity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
