// Lean compiler output
// Module: Mathlib.CategoryTheory.Monoidal.Internal.Types.Grp_
// Imports: Init Mathlib.CategoryTheory.Monoidal.Internal.Types.Basic Mathlib.CategoryTheory.Monoidal.Grp_ Mathlib.Algebra.Category.Grp.Basic
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
static lean_object* l_zpowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__3___closed__1;
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_GrpTypeEquivalenceGrp_grpGroup(lean_object*);
lean_object* l_MonTypeEquivalenceMon_monMonoid(lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__2(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_GrpTypeEquivalenceGrp_grpGroup___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_GrpTypeEquivalenceGrp_grpGroup___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_6);
x_9 = lean_apply_1(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_2, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_2, x_7);
lean_inc(x_3);
x_9 = l_npowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__2(x_1, x_8, x_3);
lean_dec(x_8);
x_10 = lean_ctor_get(x_4, 2);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_3);
x_12 = lean_apply_1(x_10, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_1);
x_13 = lean_ctor_get(x_4, 1);
lean_inc(x_13);
lean_dec(x_4);
x_14 = lean_box(0);
x_15 = lean_apply_1(x_13, x_14);
return x_15;
}
}
}
static lean_object* _init_l_zpowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_zpowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__3___closed__1;
x_6 = lean_int_dec_lt(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_7 = lean_nat_abs(x_3);
x_8 = lean_apply_2(x_2, x_7, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_nat_abs(x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_9, x_10);
lean_dec(x_9);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_nat_add(x_11, x_10);
lean_dec(x_11);
x_14 = lean_apply_2(x_2, x_13, x_4);
x_15 = lean_apply_1(x_12, x_14);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_GrpTypeEquivalenceGrp_grpGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = l_MonTypeEquivalenceMon_monMonoid(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_DivInvMonoid_div_x27___at_GrpTypeEquivalenceGrp_grpGroup___spec__1), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_npowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__2___boxed), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_zpowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__3___boxed), 4, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_5);
lean_ctor_set(x_8, 3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_npowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_zpowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Internal_Types_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Grp__(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Grp_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Internal_Types_Grp__(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_Internal_Types_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_Grp__(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Grp_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_zpowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__3___closed__1 = _init_l_zpowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__3___closed__1();
lean_mark_persistent(l_zpowRec___at_GrpTypeEquivalenceGrp_grpGroup___spec__3___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
