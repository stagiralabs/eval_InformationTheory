// Lean compiler output
// Module: Mathlib.Algebra.ContinuedFractions.ConvergentsEquiv
// Imports: Init Mathlib.Algebra.Order.Field.Defs Mathlib.Algebra.ContinuedFractions.ContinuantsRecurrence Mathlib.Algebra.ContinuedFractions.TerminatedStable Mathlib.Tactic.FieldSimp Mathlib.Tactic.Ring
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
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_squashGCF_match__2_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_squashSeq(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_squashGCF___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_squashSeq___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_contsAux_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_squashSeq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_contsAux_match__1_splitter(lean_object*, lean_object*);
lean_object* l_Ring_toNonAssocRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_squashSeq___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_squashGCF_match__2_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_squashGCF_match__2_splitter(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_squashGCF(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_contsAux_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_squashGCF___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_squashSeq_match__1_splitter(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_squashSeq_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Stream_x27_Seq_nats;
lean_object* l_Stream_x27_Seq_zipWith___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GenContFract_squashSeq___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_nat_dec_eq(x_5, x_1);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_inc(x_6);
return x_6;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = l_Ring_toNonAssocRing___rarg(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_12);
x_14 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_13);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_3, 2);
lean_inc(x_16);
lean_dec(x_3);
x_17 = lean_ctor_get(x_4, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_4, 1);
lean_inc(x_18);
lean_dec(x_4);
x_19 = lean_apply_2(x_16, x_17, x_18);
x_20 = lean_apply_2(x_15, x_9, x_19);
lean_ctor_set(x_2, 1, x_20);
return x_2;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
x_23 = lean_ctor_get(x_3, 0);
lean_inc(x_23);
x_24 = l_Ring_toNonAssocRing___rarg(x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_25);
x_27 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_26);
lean_dec(x_26);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_ctor_get(x_3, 2);
lean_inc(x_29);
lean_dec(x_3);
x_30 = lean_ctor_get(x_4, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_4, 1);
lean_inc(x_31);
lean_dec(x_4);
x_32 = lean_apply_2(x_29, x_30, x_31);
x_33 = lean_apply_2(x_28, x_22, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_21);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
LEAN_EXPORT lean_object* l_GenContFract_squashSeq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_2);
lean_inc(x_3);
x_4 = lean_apply_1(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_3, x_6);
lean_inc(x_2);
x_8 = lean_apply_1(x_2, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_closure((void*)(l_GenContFract_squashSeq___rarg___lambda__1___boxed), 6, 4);
lean_closure_set(x_10, 0, x_3);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_1);
lean_closure_set(x_10, 3, x_9);
x_11 = l_Stream_x27_Seq_nats;
x_12 = lean_alloc_closure((void*)(l_Stream_x27_Seq_zipWith___elambda__1___rarg), 4, 3);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_11);
lean_closure_set(x_12, 2, x_2);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_GenContFract_squashSeq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_GenContFract_squashSeq___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GenContFract_squashSeq___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GenContFract_squashSeq___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_squashSeq_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_apply_2(x_3, x_1, lean_box(0));
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_apply_2(x_3, x_1, lean_box(0));
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_apply_2(x_2, x_8, x_9);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_squashSeq_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_squashSeq_match__1_splitter___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_contsAux_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_contsAux_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_contsAux_match__1_splitter___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_contsAux_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_contsAux_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GenContFract_squashGCF___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_2, 1);
x_10 = l_GenContFract_squashSeq___rarg(x_1, x_9, x_7);
lean_ctor_set(x_2, 1, x_10);
return x_2;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = l_GenContFract_squashSeq___rarg(x_1, x_12, x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_inc(x_16);
x_17 = lean_apply_1(x_16, x_4);
if (lean_obj_tag(x_17) == 0)
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_2);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_19 = lean_ctor_get(x_2, 1);
lean_dec(x_19);
x_20 = lean_ctor_get(x_2, 0);
lean_dec(x_20);
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = l_Ring_toNonAssocRing___rarg(x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_24);
x_26 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_25);
lean_dec(x_25);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_ctor_get(x_1, 2);
lean_inc(x_28);
lean_dec(x_1);
x_29 = lean_ctor_get(x_21, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
lean_dec(x_21);
x_31 = lean_apply_2(x_28, x_29, x_30);
x_32 = lean_apply_2(x_27, x_15, x_31);
lean_ctor_set(x_2, 0, x_32);
return x_2;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_2);
x_33 = lean_ctor_get(x_17, 0);
lean_inc(x_33);
lean_dec(x_17);
x_34 = lean_ctor_get(x_1, 0);
lean_inc(x_34);
x_35 = l_Ring_toNonAssocRing___rarg(x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
lean_dec(x_35);
x_37 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_36);
x_38 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_37);
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_ctor_get(x_1, 2);
lean_inc(x_40);
lean_dec(x_1);
x_41 = lean_ctor_get(x_33, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_33, 1);
lean_inc(x_42);
lean_dec(x_33);
x_43 = lean_apply_2(x_40, x_41, x_42);
x_44 = lean_apply_2(x_39, x_15, x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_16);
return x_45;
}
}
}
}
}
LEAN_EXPORT lean_object* l_GenContFract_squashGCF(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_GenContFract_squashGCF___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GenContFract_squashGCF___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_GenContFract_squashGCF___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_squashGCF_match__2_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_squashGCF_match__2_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_squashGCF_match__2_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_squashGCF_match__2_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv_0__GenContFract_squashGCF_match__2_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Field_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_ContinuedFractions_ContinuantsRecurrence(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_ContinuedFractions_TerminatedStable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FieldSimp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Ring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_ContinuedFractions_ConvergentsEquiv(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Field_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_ContinuedFractions_ContinuantsRecurrence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_ContinuedFractions_TerminatedStable(builtin, lean_io_mk_world());
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
