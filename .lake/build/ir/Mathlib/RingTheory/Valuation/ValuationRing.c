// Lean compiler output
// Module: Mathlib.RingTheory.Valuation.ValuationRing
// Imports: Init Mathlib.RingTheory.Bezout Mathlib.RingTheory.LocalRing.Basic Mathlib.RingTheory.Localization.FractionRing Mathlib.RingTheory.Localization.Integer Mathlib.RingTheory.Valuation.Integers Mathlib.Tactic.FieldSimp
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
LEAN_EXPORT lean_object* l_ValuationRing_instInvValueGroup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_mk_x27_x27___at_ValuationRing_valuation___spec__1___rarg___boxed(lean_object*);
lean_object* l_SemilatticeInf_toMin___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instMulValueGroup___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instOneValueGroup___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_valuation___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instInhabitedValueGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instLEValueGroup(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
lean_object* l_Semiring_toModule___rarg(lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_valuation(lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instLinearOrderIdealOfDecidableRelLe___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instInhabitedValueGroup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instMulValueGroup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
lean_object* l_Submodule_completeLattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instOneValueGroup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instInvValueGroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instInvValueGroup___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Semifield_toCommGroupWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instLinearOrderIdealOfDecidableRelLe(lean_object*);
lean_object* l_SemilatticeSup_toMax___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_valuation___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_mk_x27_x27___at_ValuationRing_valuation___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instMulValueGroup(lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instOneValueGroup___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instInhabitedValueGroup___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instZeroValueGroup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instZeroValueGroup___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082_x27___at_ValuationRing_instMulValueGroup___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082_x27___at_ValuationRing_instMulValueGroup___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instLinearOrderIdealOfDecidableRelLe___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_mk_x27_x27___at_ValuationRing_valuation___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CommGroupWithZero_toDivisionCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082_x27___at_ValuationRing_instMulValueGroup___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instInvValueGroup___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_mk_x27_x27___at_ValuationRing_valuation___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instLEValueGroup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CompleteLattice_toConditionallyCompleteLattice___rarg(lean_object*);
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
LEAN_EXPORT uint8_t l_ValuationRing_instLinearOrderIdealOfDecidableRelLe___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instZeroValueGroup___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instOneValueGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instInhabitedValueGroup___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instZeroValueGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instMulValueGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ValuationRing_instInhabitedValueGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_CommRing_toNonUnitalCommRing___rarg(x_3);
x_5 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_4);
x_6 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instInhabitedValueGroup(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ValuationRing_instInhabitedValueGroup___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instInhabitedValueGroup___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ValuationRing_instInhabitedValueGroup___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instInhabitedValueGroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ValuationRing_instInhabitedValueGroup(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instLEValueGroup(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instLEValueGroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ValuationRing_instLEValueGroup(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instZeroValueGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_CommRing_toNonUnitalCommRing___rarg(x_3);
x_5 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_4);
x_6 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instZeroValueGroup(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ValuationRing_instZeroValueGroup___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instZeroValueGroup___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ValuationRing_instZeroValueGroup___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instZeroValueGroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ValuationRing_instZeroValueGroup(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instOneValueGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Field_toDivisionRing___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Ring_toAddGroupWithOne___rarg(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instOneValueGroup(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ValuationRing_instOneValueGroup___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instOneValueGroup___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ValuationRing_instOneValueGroup___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instOneValueGroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ValuationRing_instOneValueGroup(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082_x27___at_ValuationRing_instMulValueGroup___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_3, x_1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082_x27___at_ValuationRing_instMulValueGroup___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Quotient_liftOn_u2082_x27___at_ValuationRing_instMulValueGroup___spec__1___rarg), 4, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instMulValueGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_4);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_2(x_7, x_2, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instMulValueGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_ValuationRing_instMulValueGroup___rarg___lambda__1(x_3, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instMulValueGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ValuationRing_instMulValueGroup___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082_x27___at_ValuationRing_instMulValueGroup___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Quotient_liftOn_u2082_x27___at_ValuationRing_instMulValueGroup___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instMulValueGroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_ValuationRing_instMulValueGroup___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instInvValueGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_Field_toSemifield___rarg(x_1);
x_5 = l_Semifield_toCommGroupWithZero___rarg(x_4);
x_6 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_5);
x_7 = l_DivInvOneMonoid_toInvOneClass___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_1(x_8, x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instInvValueGroup(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ValuationRing_instInvValueGroup___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instInvValueGroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ValuationRing_instInvValueGroup___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instInvValueGroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ValuationRing_instInvValueGroup(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quotient_mk_x27_x27___at_ValuationRing_valuation___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Quotient_mk_x27_x27___at_ValuationRing_valuation___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Quotient_mk_x27_x27___at_ValuationRing_valuation___spec__1___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_valuation___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Quotient_mk_x27_x27___at_ValuationRing_valuation___spec__1___rarg___boxed), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_valuation(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ValuationRing_valuation___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quotient_mk_x27_x27___at_ValuationRing_valuation___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Quotient_mk_x27_x27___at_ValuationRing_valuation___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quotient_mk_x27_x27___at_ValuationRing_valuation___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Quotient_mk_x27_x27___at_ValuationRing_valuation___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_valuation___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_ValuationRing_valuation___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_apply_2(x_1, x_3, x_2);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_apply_2(x_1, x_3, x_2);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__2___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_apply_2(x_1, x_3, x_2);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__3___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_apply_2(x_1, x_3, x_2);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__4___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_ValuationRing_instLinearOrderIdealOfDecidableRelLe___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_5 = l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__3___rarg(x_2, x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__4___rarg(x_2, x_3, x_4);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = 2;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
}
else
{
uint8_t x_10; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = 0;
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instLinearOrderIdealOfDecidableRelLe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Semiring_toModule___rarg(x_4);
lean_dec(x_4);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_3);
lean_inc(x_3);
x_10 = lean_alloc_closure((void*)(l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__2___rarg___boxed), 3, 1);
lean_closure_set(x_10, 0, x_3);
x_11 = l_Submodule_completeLattice___rarg(x_7, x_8);
x_12 = l_CompleteLattice_toConditionallyCompleteLattice___rarg(x_11);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = l_Lattice_toSemilatticeInf___rarg(x_13);
x_17 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_18, 0, x_14);
lean_inc(x_3);
x_19 = lean_alloc_closure((void*)(l_ValuationRing_instLinearOrderIdealOfDecidableRelLe___rarg___lambda__1___boxed), 4, 2);
lean_closure_set(x_19, 0, x_1);
lean_closure_set(x_19, 1, x_3);
x_20 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_17);
lean_ctor_set(x_20, 2, x_18);
lean_ctor_set(x_20, 3, x_19);
lean_ctor_set(x_20, 4, x_3);
lean_ctor_set(x_20, 5, x_9);
lean_ctor_set(x_20, 6, x_10);
return x_20;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instLinearOrderIdealOfDecidableRelLe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ValuationRing_instLinearOrderIdealOfDecidableRelLe___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__2___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__3___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_decidableLTOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_decidableEqOfDecidableLE___at_ValuationRing_instLinearOrderIdealOfDecidableRelLe___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ValuationRing_instLinearOrderIdealOfDecidableRelLe___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_ValuationRing_instLinearOrderIdealOfDecidableRelLe___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Bezout(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_LocalRing_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_FractionRing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_Integer(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Valuation_Integers(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FieldSimp(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Valuation_ValuationRing(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Bezout(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_LocalRing_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_FractionRing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_Integer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Valuation_Integers(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FieldSimp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
