// Lean compiler output
// Module: Mathlib.Combinatorics.Extremal.RuzsaSzemeredi
// Imports: Init Mathlib.Combinatorics.Additive.AP.Three.Behrend Mathlib.Combinatorics.SimpleGraph.Triangle.Tripartite Mathlib.Tactic.Rify
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
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Extremal_RuzsaSzemeredi_0__triangleIndices___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Extremal_RuzsaSzemeredi_0__triangleIndices(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Extremal_RuzsaSzemeredi_0__triangleIndices___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Multiset_product___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Extremal_RuzsaSzemeredi_0__triangleIndices___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_9);
lean_inc(x_5);
lean_inc(x_4);
x_10 = lean_apply_2(x_9, x_4, x_5);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_unsigned_to_nat(2u);
x_16 = lean_apply_1(x_14, x_15);
x_17 = lean_apply_2(x_11, x_16, x_5);
lean_inc(x_4);
x_18 = lean_apply_2(x_9, x_4, x_17);
lean_ctor_set(x_2, 1, x_18);
lean_ctor_set(x_2, 0, x_10);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_4);
lean_ctor_set(x_19, 1, x_2);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_2);
lean_inc(x_1);
x_22 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_23 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_22);
x_24 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_23);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
lean_inc(x_25);
lean_inc(x_21);
lean_inc(x_20);
x_26 = lean_apply_2(x_25, x_20, x_21);
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_dec(x_23);
x_28 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_unsigned_to_nat(2u);
x_32 = lean_apply_1(x_30, x_31);
x_33 = lean_apply_2(x_27, x_32, x_21);
lean_inc(x_20);
x_34 = lean_apply_2(x_25, x_20, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_26);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Extremal_RuzsaSzemeredi_0__triangleIndices___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_Extremal_RuzsaSzemeredi_0__triangleIndices___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_Multiset_product___rarg(x_1, x_3);
x_6 = l_Multiset_map___rarg(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Extremal_RuzsaSzemeredi_0__triangleIndices(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_Extremal_RuzsaSzemeredi_0__triangleIndices___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_Additive_AP_Three_Behrend(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Triangle_Tripartite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Rify(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Extremal_RuzsaSzemeredi(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_Additive_AP_Three_Behrend(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Triangle_Tripartite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Rify(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
