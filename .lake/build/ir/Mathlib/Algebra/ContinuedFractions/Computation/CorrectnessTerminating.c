// Lean compiler output
// Module: Mathlib.Algebra.ContinuedFractions.Computation.CorrectnessTerminating
// Imports: Init Mathlib.Algebra.ContinuedFractions.Computation.Translations Mathlib.Algebra.ContinuedFractions.TerminatedStable Mathlib.Algebra.ContinuedFractions.ContinuantsRecurrence Mathlib.Order.Filter.AtTopBot.Basic Mathlib.Tactic.FieldSimp Mathlib.Tactic.Ring
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
lean_object* l_LinearOrderedSemifield_toSemifield___rarg(lean_object*);
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_nextDen___at_GenContFract_compExactValue___spec__3(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_nextDen___at_GenContFract_compExactValue___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_nextNum___at_GenContFract_compExactValue___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semifield_toCommGroupWithZero___rarg(lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
lean_object* l_Ring_toNonAssocRing___rarg(lean_object*);
lean_object* l_LinearOrderedRing_toLinearOrder___rarg(lean_object*);
lean_object* l_LinearOrderedField_toLinearOrderedSemifield___rarg(lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
lean_object* l_LinearOrderedField_toField___rarg(lean_object*);
lean_object* l_CommGroupWithZero_toDivisionCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_compExactValue___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_nextNum___at_GenContFract_compExactValue___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_nextConts___at_GenContFract_compExactValue___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_compExactValue(lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_nextConts___at_GenContFract_compExactValue___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_nextNum___at_GenContFract_compExactValue___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_6 = l_LinearOrderedField_toField___rarg(x_1);
x_7 = l_Field_toDivisionRing___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Ring_toNonAssocRing___rarg(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_10);
x_11 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_10);
x_12 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_11);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
lean_inc(x_14);
x_15 = lean_apply_2(x_14, x_3, x_5);
x_16 = lean_apply_2(x_14, x_2, x_4);
x_17 = lean_apply_2(x_13, x_15, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_GenContFract_nextNum___at_GenContFract_compExactValue___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_GenContFract_nextNum___at_GenContFract_compExactValue___spec__2___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GenContFract_nextDen___at_GenContFract_compExactValue___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_6 = l_LinearOrderedField_toField___rarg(x_1);
x_7 = l_Field_toDivisionRing___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Ring_toNonAssocRing___rarg(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_10);
x_11 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_10);
x_12 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_11);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
lean_inc(x_14);
x_15 = lean_apply_2(x_14, x_3, x_5);
x_16 = lean_apply_2(x_14, x_2, x_4);
x_17 = lean_apply_2(x_13, x_15, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_GenContFract_nextDen___at_GenContFract_compExactValue___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_GenContFract_nextDen___at_GenContFract_compExactValue___spec__3___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GenContFract_nextConts___at_GenContFract_compExactValue___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_GenContFract_nextNum___at_GenContFract_compExactValue___spec__2___rarg(x_1, x_2, x_3, x_6, x_7);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = l_GenContFract_nextDen___at_GenContFract_compExactValue___spec__3___rarg(x_1, x_2, x_3, x_9, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_GenContFract_nextConts___at_GenContFract_compExactValue___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_GenContFract_nextConts___at_GenContFract_compExactValue___spec__1___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GenContFract_compExactValue___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_inc(x_5);
x_6 = l_LinearOrderedRing_toLinearOrder___rarg(x_5);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_8);
x_9 = l_CommRing_toNonUnitalCommRing___rarg(x_8);
x_10 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_9);
x_11 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_10);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_4);
x_13 = l_instDecidableEq__mathlib___rarg(x_6, x_4, x_12);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_15 = l_Ring_toAddGroupWithOne___rarg(x_8);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 2);
lean_inc(x_17);
lean_dec(x_16);
lean_inc(x_1);
x_18 = l_LinearOrderedField_toLinearOrderedSemifield___rarg(x_1);
x_19 = l_LinearOrderedSemifield_toSemifield___rarg(x_18);
x_20 = l_Semifield_toCommGroupWithZero___rarg(x_19);
x_21 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_20);
x_22 = l_DivInvOneMonoid_toInvOneClass___rarg(x_21);
lean_dec(x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_apply_1(x_23, x_4);
lean_inc(x_1);
x_25 = l_GenContFract_nextConts___at_GenContFract_compExactValue___spec__1___rarg(x_1, x_17, x_24, x_2, x_3);
x_26 = lean_ctor_get(x_1, 2);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_apply_2(x_26, x_27, x_28);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
x_30 = lean_ctor_get(x_1, 2);
lean_inc(x_30);
lean_dec(x_1);
x_31 = lean_ctor_get(x_3, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_3, 1);
lean_inc(x_32);
lean_dec(x_3);
x_33 = lean_apply_2(x_30, x_31, x_32);
return x_33;
}
}
}
LEAN_EXPORT lean_object* l_GenContFract_compExactValue(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_GenContFract_compExactValue___rarg), 4, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_ContinuedFractions_Computation_Translations(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_ContinuedFractions_TerminatedStable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_ContinuedFractions_ContinuantsRecurrence(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_AtTopBot_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FieldSimp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Ring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_ContinuedFractions_Computation_CorrectnessTerminating(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_ContinuedFractions_Computation_Translations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_ContinuedFractions_TerminatedStable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_ContinuedFractions_ContinuantsRecurrence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_AtTopBot_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FieldSimp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
