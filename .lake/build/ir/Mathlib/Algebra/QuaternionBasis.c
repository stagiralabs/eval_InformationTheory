// Lean compiler output
// Module: Mathlib.Algebra.QuaternionBasis
// Imports: Init Mathlib.Algebra.Quaternion Mathlib.Tactic.Ring
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
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_self___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_instInhabited___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_self___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Algebra_id___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_self(lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
lean_object* l_QuaternionAlgebra_instRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_liftHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_liftHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_compHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_compHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_lift___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toNonAssocRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_lift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_mk_x27___at_QuaternionAlgebra_Basis_liftHom___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_mk_x27___at_QuaternionAlgebra_Basis_liftHom___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_compHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_QuaternionAlgebra_instAlgebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_liftHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_lift___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_lift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_mk_x27___at_QuaternionAlgebra_Basis_liftHom___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_instInhabited___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_self___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_1);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_10, 2);
x_13 = lean_ctor_get(x_10, 1);
lean_dec(x_13);
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
lean_inc(x_12);
lean_inc_n(x_8, 3);
x_15 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_8);
lean_ctor_set(x_15, 3, x_8);
lean_inc(x_12);
lean_inc_n(x_8, 3);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_8);
lean_ctor_set(x_16, 1, x_8);
lean_ctor_set(x_16, 2, x_12);
lean_ctor_set(x_16, 3, x_8);
lean_inc_n(x_8, 2);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_8);
lean_ctor_set(x_17, 1, x_8);
lean_ctor_set(x_17, 2, x_8);
lean_ctor_set(x_17, 3, x_12);
lean_ctor_set(x_10, 2, x_17);
lean_ctor_set(x_10, 1, x_16);
lean_ctor_set(x_10, 0, x_15);
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_10, 2);
lean_inc(x_18);
lean_dec(x_10);
lean_inc(x_18);
lean_inc_n(x_8, 3);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_8);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_19, 2, x_8);
lean_ctor_set(x_19, 3, x_8);
lean_inc(x_18);
lean_inc_n(x_8, 3);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_8);
lean_ctor_set(x_20, 1, x_8);
lean_ctor_set(x_20, 2, x_18);
lean_ctor_set(x_20, 3, x_8);
lean_inc_n(x_8, 2);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_8);
lean_ctor_set(x_21, 1, x_8);
lean_ctor_set(x_21, 2, x_8);
lean_ctor_set(x_21, 3, x_18);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_20);
lean_ctor_set(x_22, 2, x_21);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_self(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuaternionAlgebra_Basis_self___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_self___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuaternionAlgebra_Basis_self___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_instInhabited___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuaternionAlgebra_Basis_self___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuaternionAlgebra_Basis_instInhabited___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuaternionAlgebra_Basis_instInhabited___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_8 = l_Ring_toNonAssocRing___rarg(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_9);
x_11 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_10);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
x_15 = lean_apply_1(x_13, x_14);
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
lean_dec(x_2);
x_17 = lean_ctor_get(x_7, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_6, 0);
lean_inc(x_18);
lean_inc(x_16);
x_19 = lean_apply_2(x_16, x_17, x_18);
lean_inc(x_12);
x_20 = lean_apply_2(x_12, x_15, x_19);
x_21 = lean_ctor_get(x_7, 2);
lean_inc(x_21);
x_22 = lean_ctor_get(x_6, 1);
lean_inc(x_22);
lean_inc(x_16);
x_23 = lean_apply_2(x_16, x_21, x_22);
lean_inc(x_12);
x_24 = lean_apply_2(x_12, x_20, x_23);
x_25 = lean_ctor_get(x_7, 3);
lean_inc(x_25);
lean_dec(x_7);
x_26 = lean_ctor_get(x_6, 2);
lean_inc(x_26);
lean_dec(x_6);
x_27 = lean_apply_2(x_16, x_25, x_26);
x_28 = lean_apply_2(x_12, x_24, x_27);
return x_28;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_lift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_QuaternionAlgebra_Basis_lift___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_lift___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_QuaternionAlgebra_Basis_lift___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_lift___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_QuaternionAlgebra_Basis_lift(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgHom_mk_x27___at_QuaternionAlgebra_Basis_liftHom___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgHom_mk_x27___at_QuaternionAlgebra_Basis_liftHom___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_AlgHom_mk_x27___at_QuaternionAlgebra_Basis_liftHom___spec__1___rarg), 3, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_liftHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_QuaternionAlgebra_Basis_lift___rarg___boxed), 7, 6);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_3);
lean_closure_set(x_8, 2, x_4);
lean_closure_set(x_8, 3, x_5);
lean_closure_set(x_8, 4, x_6);
lean_closure_set(x_8, 5, x_7);
x_9 = lean_alloc_closure((void*)(l_AlgHom_mk_x27___at_QuaternionAlgebra_Basis_liftHom___spec__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_liftHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuaternionAlgebra_Basis_liftHom___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHom_mk_x27___at_QuaternionAlgebra_Basis_liftHom___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_AlgHom_mk_x27___at_QuaternionAlgebra_Basis_liftHom___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_liftHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_QuaternionAlgebra_Basis_liftHom___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_compHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_inc(x_10);
x_12 = lean_apply_1(x_10, x_11);
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_inc(x_10);
x_14 = lean_apply_1(x_10, x_13);
x_15 = lean_ctor_get(x_9, 2);
lean_inc(x_15);
lean_dec(x_9);
x_16 = lean_apply_1(x_10, x_15);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_14);
lean_ctor_set(x_17, 2, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_compHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_QuaternionAlgebra_Basis_compHom___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_Basis_compHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_QuaternionAlgebra_Basis_compHom___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_QuaternionAlgebra_Basis_compHom___rarg(x_1, x_7, x_2, x_9, x_3, x_4, x_5, x_6, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuaternionAlgebra_lift___elambda__1___rarg___boxed), 11, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_QuaternionAlgebra_Basis_liftHom___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuaternionAlgebra_lift___elambda__2___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_QuaternionAlgebra_lift___elambda__2___rarg___boxed), 7, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_5);
lean_closure_set(x_7, 5, x_6);
lean_inc(x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_8 = l_QuaternionAlgebra_instRing___rarg(x_4, x_5, x_6, x_1);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_inc(x_9);
x_10 = l_Algebra_id___rarg(x_9);
lean_inc(x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_11 = l_QuaternionAlgebra_instAlgebra___rarg(x_4, x_5, x_6, x_1, x_9, x_10);
lean_inc(x_1);
x_12 = l_QuaternionAlgebra_Basis_self___rarg(x_1, x_4, x_5, x_6);
x_13 = lean_alloc_closure((void*)(l_QuaternionAlgebra_lift___elambda__1___rarg___boxed), 11, 10);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_3);
lean_closure_set(x_13, 3, x_4);
lean_closure_set(x_13, 4, x_5);
lean_closure_set(x_13, 5, x_6);
lean_closure_set(x_13, 6, x_8);
lean_closure_set(x_13, 7, x_9);
lean_closure_set(x_13, 8, x_11);
lean_closure_set(x_13, 9, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuaternionAlgebra_lift___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_QuaternionAlgebra_lift___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuaternionAlgebra_lift___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_QuaternionAlgebra_lift___elambda__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Quaternion(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Ring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_QuaternionBasis(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Quaternion(builtin, lean_io_mk_world());
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
