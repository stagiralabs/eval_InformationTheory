// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Regularity.Energy
// Imports: Init Mathlib.Algebra.Module.NatInt Mathlib.Algebra.Order.BigOperators.Group.Finset Mathlib.Combinatorics.SimpleGraph.Density Mathlib.Data.Rat.BigOperators
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
LEAN_EXPORT lean_object* l_Finset_offDiag___at_Finpartition_energy___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Nat_cast___at_Rat_instOfNat___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_energy___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_energy___spec__3(lean_object*);
static lean_object* l_Multiset_sum___at_Finpartition_energy___spec__6___closed__1;
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_Finpartition_energy(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_energy___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Finpartition_energy___spec__5___rarg(lean_object*, lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
uint8_t l_List_isPerm___at_List_decidablePerm___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Finpartition_energy___spec__5(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_Rat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_energy___spec__2___rarg(lean_object*, lean_object*);
lean_object* l_Rel_edgeDensity___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finpartition_energy___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_energy___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_energy___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finpartition_energy___spec__6(lean_object*);
lean_object* l_Rat_div(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_product___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finpartition_energy___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_offDiag___at_Finpartition_energy___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finpartition_energy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Multiset_sum___at_Finpartition_energy___spec__6___closed__2;
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_energy___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_1, x_8, x_9);
x_11 = l_instDecidableNot___rarg(x_10);
if (x_11 == 0)
{
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
else
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_1);
x_18 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_1, x_16, x_17);
x_19 = l_instDecidableNot___rarg(x_18);
if (x_19 == 0)
{
lean_dec(x_14);
x_2 = x_15;
goto _start;
}
else
{
lean_object* x_21; 
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_3);
x_2 = x_15;
x_3 = x_21;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_energy___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finpartition_energy___spec__4___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_energy___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_filterTR_loop___at_Finpartition_energy___spec__4___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_energy___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finpartition_energy___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_energy___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_filter___at_Finpartition_energy___spec__3___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_energy___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Finpartition_energy___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_offDiag___at_Finpartition_energy___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_2);
x_3 = l_Multiset_product___rarg(x_2, x_2);
x_4 = l_Multiset_filter___at_Finpartition_energy___spec__3___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_offDiag___at_Finpartition_energy___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_offDiag___at_Finpartition_energy___spec__1___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Multiset_sum___at_Finpartition_energy___spec__6___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
static lean_object* _init_l_Multiset_sum___at_Finpartition_energy___spec__6___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_add), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finpartition_energy___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Multiset_sum___at_Finpartition_energy___spec__6___closed__2;
x_3 = l_Multiset_sum___at_Finpartition_energy___spec__6___closed__1;
x_4 = l_List_foldrTR___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Finpartition_energy___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Multiset_sum___at_Finpartition_energy___spec__6(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Finpartition_energy___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_Finpartition_energy___spec__5___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finpartition_energy___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Rel_edgeDensity___rarg(x_1, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_unsigned_to_nat(2u);
x_8 = l_Int_pow(x_6, x_7);
lean_dec(x_6);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_nat_pow(x_9, x_7);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Finpartition_energy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_3);
x_6 = l_Finset_offDiag___at_Finpartition_energy___spec__1___rarg(x_1, x_3);
x_7 = lean_alloc_closure((void*)(l_Finpartition_energy___rarg___lambda__1), 2, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = l_Finset_sum___at_Finpartition_energy___spec__5___rarg(x_6, x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_List_lengthTRAux___rarg(x_3, x_9);
lean_dec(x_3);
x_11 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unsigned_to_nat(2u);
x_14 = l_Int_pow(x_12, x_13);
lean_dec(x_12);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_nat_pow(x_15, x_13);
lean_dec(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Rat_div(x_8, x_17);
lean_dec(x_8);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Finpartition_energy(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finpartition_energy___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finpartition_energy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finpartition_energy___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_NatInt(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_BigOperators_Group_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Density(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_BigOperators(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Regularity_Energy(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_NatInt(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_BigOperators_Group_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Density(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_sum___at_Finpartition_energy___spec__6___closed__1 = _init_l_Multiset_sum___at_Finpartition_energy___spec__6___closed__1();
lean_mark_persistent(l_Multiset_sum___at_Finpartition_energy___spec__6___closed__1);
l_Multiset_sum___at_Finpartition_energy___spec__6___closed__2 = _init_l_Multiset_sum___at_Finpartition_energy___spec__6___closed__2();
lean_mark_persistent(l_Multiset_sum___at_Finpartition_energy___spec__6___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
