// Lean compiler output
// Module: Mathlib.AlgebraicTopology.DoldKan.Homotopies
// Imports: Init Mathlib.Algebra.Homology.Homotopy Mathlib.AlgebraicTopology.DoldKan.Notations
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
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AlgebraicTopology_AlternatingFaceMapComplex_obj___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
lean_object* l_CategoryTheory_eqToHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_AlgebraicTopology_DoldKan_h_u03c3___rarg___closed__1;
static lean_object* l_AlgebraicTopology_DoldKan_h_u03c3___rarg___closed__2;
lean_object* l_CategoryTheory_SimplicialObject__u03c3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_c;
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3_x27(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComplexShape_down___at_AlgebraicTopology_DoldKan_c___spec__1;
static lean_object* _init_l_ComplexShape_down___at_AlgebraicTopology_DoldKan_c___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_AlgebraicTopology_DoldKan_c() {
_start:
{
lean_object* x_1; 
x_1 = l_ComplexShape_down___at_AlgebraicTopology_DoldKan_c___spec__1;
return x_1;
}
}
static lean_object* _init_l_AlgebraicTopology_DoldKan_h_u03c3___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_AlgebraicTopology_DoldKan_h_u03c3___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AlgebraicTopology_DoldKan_h_u03c3___rarg___closed__1;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_inc(x_6);
lean_inc(x_4);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_4, x_8);
x_10 = lean_apply_1(x_6, x_9);
x_11 = lean_apply_2(x_1, x_7, x_10);
x_12 = lean_ctor_get(x_11, 3);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_nat_sub(x_4, x_3);
x_14 = l_AlgebraicTopology_DoldKan_h_u03c3___rarg___closed__2;
x_15 = l_Int_pow(x_14, x_13);
x_16 = l_CategoryTheory_SimplicialObject__u03c3___rarg(x_2, x_4, x_13);
x_17 = lean_apply_2(x_12, x_15, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
lean_dec(x_2);
lean_inc(x_18);
lean_inc(x_4);
x_19 = lean_apply_1(x_18, x_4);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_4, x_20);
lean_dec(x_4);
x_22 = lean_apply_1(x_18, x_21);
x_23 = lean_apply_2(x_1, x_19, x_22);
x_24 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_23);
lean_dec(x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AlgebraicTopology_DoldKan_h_u03c3___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AlgebraicTopology_DoldKan_h_u03c3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AlgebraicTopology_DoldKan_h_u03c3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_AlgebraicTopology_AlternatingFaceMapComplex_obj___rarg(x_1, x_2, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_10);
lean_inc(x_5);
x_11 = lean_apply_1(x_10, x_5);
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
x_15 = lean_apply_1(x_12, x_14);
x_16 = lean_apply_1(x_10, x_6);
x_17 = l_AlgebraicTopology_DoldKan_h_u03c3___rarg(x_2, x_3, x_4, x_5);
lean_inc(x_16);
x_18 = l_CategoryTheory_eqToHom___rarg(x_1, x_15, x_16, lean_box(0));
x_19 = lean_apply_5(x_8, x_11, x_15, x_16, x_17, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicTopology_DoldKan_h_u03c3_x27___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_h_u03c3_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AlgebraicTopology_DoldKan_h_u03c3_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_Homotopy(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicTopology_DoldKan_Notations(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicTopology_DoldKan_Homotopies(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_Homotopy(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicTopology_DoldKan_Notations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ComplexShape_down___at_AlgebraicTopology_DoldKan_c___spec__1 = _init_l_ComplexShape_down___at_AlgebraicTopology_DoldKan_c___spec__1();
lean_mark_persistent(l_ComplexShape_down___at_AlgebraicTopology_DoldKan_c___spec__1);
l_AlgebraicTopology_DoldKan_c = _init_l_AlgebraicTopology_DoldKan_c();
lean_mark_persistent(l_AlgebraicTopology_DoldKan_c);
l_AlgebraicTopology_DoldKan_h_u03c3___rarg___closed__1 = _init_l_AlgebraicTopology_DoldKan_h_u03c3___rarg___closed__1();
lean_mark_persistent(l_AlgebraicTopology_DoldKan_h_u03c3___rarg___closed__1);
l_AlgebraicTopology_DoldKan_h_u03c3___rarg___closed__2 = _init_l_AlgebraicTopology_DoldKan_h_u03c3___rarg___closed__2();
lean_mark_persistent(l_AlgebraicTopology_DoldKan_h_u03c3___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
