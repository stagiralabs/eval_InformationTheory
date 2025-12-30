// Lean compiler output
// Module: Mathlib.Algebra.GCDMonoid.Basic
// Imports: Init Mathlib.Algebra.Ring.Associated Mathlib.Algebra.Ring.Regular
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
lean_object* l_Associates_mk___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_NormalizationMonoid_ofUniqueUnits___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NormalizationMonoid_ofUniqueUnits(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Associates_out___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_normalize___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_normalize___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_normalize___at_associatesEquivOfUniqueUnits___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Associates_out___at_associatesEquivOfUniqueUnits___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Associates_out___at_associatesEquivOfUniqueUnits___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_CommMonoidWithZero_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_normalize___at_associatesEquivOfUniqueUnits___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_normalize___at_associatesEquivOfUniqueUnits___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Units_mk0___at_CommGroupWithZero_instNormalizedGCDMonoid___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_mk0___at_CommGroupWithZero_instNormalizedGCDMonoid___spec__1(lean_object*);
lean_object* l_CommGroupWithZero_toCancelCommMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_uniqueNormalizationMonoidOfUniqueUnits___rarg(lean_object*, lean_object*);
static lean_object* l_associatesEquivOfUniqueUnits___rarg___closed__1;
LEAN_EXPORT lean_object* l_Associates_instGCDMonoid(lean_object*);
lean_object* l_MulZeroOneClass_toMulZeroClass___rarg(lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
lean_object* l_CommGroupWithZero_toGroupWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NormalizationMonoid_ofUniqueUnits___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommGroupWithZero_instNormalizedGCDMonoid(lean_object*);
LEAN_EXPORT lean_object* l_CommGroupWithZero_instNormalizedGCDMonoid___rarg(lean_object*, lean_object*);
lean_object* l_MonoidWithZero_toMulZeroOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Associates_instGCDMonoid___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_associatesEquivOfUniqueUnits(lean_object*);
LEAN_EXPORT lean_object* l_Associates_out(lean_object*);
LEAN_EXPORT lean_object* l_associatesEquivOfUniqueUnits___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommGroupWithZero_instNormalizedGCDMonoid___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CommGroupWithZero_toDivisionCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommGroupWithZero_instNormalizedGCDMonoid___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_normalize(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Associates_instGCDMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommGroupWithZero_instNormalizedGCDMonoid___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_uniqueNormalizationMonoidOfUniqueUnits(lean_object*);
LEAN_EXPORT lean_object* l_normalize___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_3);
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_4, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_normalize___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_CommMonoidWithZero_toMonoidWithZero___rarg(x_1);
x_4 = l_MonoidWithZero_toMulZeroOneClass___rarg(x_3);
x_5 = l_MulZeroOneClass_toMulZeroClass___rarg(x_4);
x_6 = lean_alloc_closure((void*)(l_normalize___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_normalize(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_normalize___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Associates_out___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_normalize___rarg(x_1, x_2);
x_5 = lean_apply_1(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Associates_out(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Associates_out___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NormalizationMonoid_ofUniqueUnits___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_CommMonoidWithZero_toMonoidWithZero___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_NormalizationMonoid_ofUniqueUnits(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NormalizationMonoid_ofUniqueUnits___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NormalizationMonoid_ofUniqueUnits___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_NormalizationMonoid_ofUniqueUnits___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_uniqueNormalizationMonoidOfUniqueUnits___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NormalizationMonoid_ofUniqueUnits___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_uniqueNormalizationMonoidOfUniqueUnits(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_uniqueNormalizationMonoidOfUniqueUnits___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_normalize___at_associatesEquivOfUniqueUnits___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_4, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_normalize___at_associatesEquivOfUniqueUnits___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_CommMonoidWithZero_toMonoidWithZero___rarg(x_1);
lean_inc(x_3);
x_4 = l_MonoidWithZero_toMulZeroOneClass___rarg(x_3);
x_5 = l_MulZeroOneClass_toMulZeroClass___rarg(x_4);
x_6 = lean_alloc_closure((void*)(l_normalize___at_associatesEquivOfUniqueUnits___spec__2___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_normalize___at_associatesEquivOfUniqueUnits___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_normalize___at_associatesEquivOfUniqueUnits___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Associates_out___at_associatesEquivOfUniqueUnits___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_normalize___at_associatesEquivOfUniqueUnits___spec__2___rarg(x_1, lean_box(0));
x_5 = lean_apply_1(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Associates_out___at_associatesEquivOfUniqueUnits___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Associates_out___at_associatesEquivOfUniqueUnits___spec__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_associatesEquivOfUniqueUnits___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Associates_mk___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_associatesEquivOfUniqueUnits___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Associates_out___at_associatesEquivOfUniqueUnits___spec__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
x_4 = l_associatesEquivOfUniqueUnits___rarg___closed__1;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_associatesEquivOfUniqueUnits(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_associatesEquivOfUniqueUnits___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Units_mk0___at_CommGroupWithZero_instNormalizedGCDMonoid___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_2);
x_5 = lean_apply_1(x_4, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Units_mk0___at_CommGroupWithZero_instNormalizedGCDMonoid___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Units_mk0___at_CommGroupWithZero_instNormalizedGCDMonoid___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CommGroupWithZero_instNormalizedGCDMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
lean_inc(x_1);
x_5 = l_CommGroupWithZero_toGroupWithZero___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_4);
x_8 = lean_apply_2(x_2, x_4, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
lean_inc(x_4);
x_10 = l_Units_mk0___at_CommGroupWithZero_instNormalizedGCDMonoid___spec__1___rarg(x_1, x_4, lean_box(0));
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_4);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
lean_dec(x_1);
x_13 = l_CommMonoidWithZero_toMonoidWithZero___rarg(x_3);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_15);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_CommGroupWithZero_instNormalizedGCDMonoid___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
lean_inc(x_1);
x_5 = l_CommGroupWithZero_toGroupWithZero___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_2);
lean_inc(x_7);
x_8 = lean_apply_2(x_2, x_3, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
x_10 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_1);
x_11 = l_DivInvOneMonoid_toInvOneClass___rarg(x_10);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
lean_inc(x_7);
x_13 = lean_apply_2(x_2, x_4, x_7);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_7);
x_15 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_1);
x_16 = l_DivInvOneMonoid_toInvOneClass___rarg(x_15);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
return x_17;
}
else
{
lean_dec(x_1);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_CommGroupWithZero_instNormalizedGCDMonoid___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
lean_inc(x_1);
x_5 = l_CommGroupWithZero_toGroupWithZero___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_2);
lean_inc(x_7);
x_8 = lean_apply_2(x_2, x_3, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
lean_inc(x_7);
x_10 = lean_apply_2(x_2, x_4, x_7);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_7);
x_12 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_1);
x_13 = l_DivInvOneMonoid_toInvOneClass___rarg(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
return x_14;
}
else
{
lean_dec(x_1);
return x_7;
}
}
else
{
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_CommGroupWithZero_instNormalizedGCDMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_3 = l_CommGroupWithZero_toCancelCommMonoidWithZero___rarg(x_1);
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_CommGroupWithZero_instNormalizedGCDMonoid___rarg___lambda__1), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_CommGroupWithZero_instNormalizedGCDMonoid___rarg___lambda__2), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_closure((void*)(l_CommGroupWithZero_instNormalizedGCDMonoid___rarg___lambda__3), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CommGroupWithZero_instNormalizedGCDMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CommGroupWithZero_instNormalizedGCDMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__2___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Associates_instGCDMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, lean_box(0));
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__2___rarg), 4, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, lean_box(0));
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Associates_instGCDMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Associates_instGCDMonoid___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Quotient_map_u2082___at_Associates_instGCDMonoid___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Associates_instGCDMonoid___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Associates_instGCDMonoid___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Associated(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Regular(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_GCDMonoid_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Associated(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Regular(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_associatesEquivOfUniqueUnits___rarg___closed__1 = _init_l_associatesEquivOfUniqueUnits___rarg___closed__1();
lean_mark_persistent(l_associatesEquivOfUniqueUnits___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
