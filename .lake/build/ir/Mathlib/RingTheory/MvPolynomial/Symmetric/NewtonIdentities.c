// Lean compiler output
// Module: Mathlib.RingTheory.MvPolynomial.Symmetric.NewtonIdentities
// Imports: Init Mathlib.Algebra.Algebra.Subalgebra.Basic Mathlib.Algebra.MvPolynomial.CommRing Mathlib.Algebra.MvPolynomial.Rename Mathlib.Data.Fintype.Basic Mathlib.RingTheory.MvPolynomial.Symmetric.Defs
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
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3(lean_object*);
lean_object* l_Finset_powerset___rarg(lean_object*);
lean_object* l_Multiset_erase___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__2(lean_object*);
uint8_t l_Multiset_decidableMem___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairMap___rarg(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairMap(lean_object*);
lean_object* l_forall__prop__decidable___rarg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs(lean_object*);
lean_object* l_Multiset_product___rarg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairMap___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Multiset_decidableMem___rarg(x_1, x_5, x_4);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_1);
lean_inc(x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_4);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_8; 
lean_inc(x_5);
x_8 = l_Multiset_erase___rarg(x_1, x_4, x_5);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
lean_inc(x_9);
lean_inc(x_10);
lean_inc(x_1);
x_11 = l_Multiset_decidableMem___rarg(x_1, x_10, x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
lean_inc(x_10);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_inc(x_10);
x_14 = l_Multiset_erase___rarg(x_1, x_9, x_10);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_10);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairMap(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairMap___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Multiset_decidableMem___rarg(x_2, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = l_List_reverse___rarg(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_List_lengthTRAux___rarg(x_9, x_10);
x_12 = lean_nat_dec_le(x_11, x_2);
if (x_12 == 0)
{
lean_dec(x_11);
lean_dec(x_9);
lean_free_object(x_3);
lean_dec(x_7);
x_3 = x_8;
goto _start;
}
else
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_nat_dec_eq(x_11, x_2);
lean_dec(x_11);
lean_inc(x_1);
lean_inc(x_7);
x_15 = lean_alloc_closure((void*)(l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_15, 0, x_7);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_9);
x_16 = l_forall__prop__decidable___rarg(x_14, x_15);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_free_object(x_3);
lean_dec(x_7);
x_3 = x_8;
goto _start;
}
else
{
lean_ctor_set(x_3, 1, x_4);
{
lean_object* _tmp_2 = x_8;
lean_object* _tmp_3 = x_3;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_20 = lean_ctor_get(x_3, 0);
x_21 = lean_ctor_get(x_3, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_3);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_List_lengthTRAux___rarg(x_22, x_23);
x_25 = lean_nat_dec_le(x_24, x_2);
if (x_25 == 0)
{
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_20);
x_3 = x_21;
goto _start;
}
else
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_nat_dec_eq(x_24, x_2);
lean_dec(x_24);
lean_inc(x_1);
lean_inc(x_20);
x_28 = lean_alloc_closure((void*)(l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_28, 0, x_20);
lean_closure_set(x_28, 1, x_1);
lean_closure_set(x_28, 2, x_22);
x_29 = l_forall__prop__decidable___rarg(x_27, x_28);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_dec(x_20);
x_3 = x_21;
goto _start;
}
else
{
lean_object* x_32; 
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_20);
lean_ctor_set(x_32, 1, x_4);
x_3 = x_21;
x_4 = x_32;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__2___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
x_4 = l_Finset_powerset___rarg(x_2);
x_5 = l_Multiset_product___rarg(x_4, x_2);
x_6 = l_Multiset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__2___rarg(x_1, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg___lambda__1(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_filterTR_loop___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_filter___at___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities_0__MvPolynomial_NewtonIdentities_pairs___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Subalgebra_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MvPolynomial_CommRing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MvPolynomial_Rename(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_MvPolynomial_Symmetric_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_MvPolynomial_Symmetric_NewtonIdentities(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Subalgebra_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MvPolynomial_CommRing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MvPolynomial_Rename(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_MvPolynomial_Symmetric_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
