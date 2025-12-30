// Lean compiler output
// Module: Mathlib.AlgebraicGeometry.EllipticCurve.ModelsWithJ
// Imports: Init Mathlib.AlgebraicGeometry.EllipticCurve.Weierstrass
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
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJ1728___rarg(lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJ1728(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJ(lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJNe0Or1728(lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_instInhabitedSubtypeIsElliptic___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJNe0Or1728___rarg(lean_object*, lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJ___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJ0___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_instInhabitedSubtypeIsElliptic(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJ0(lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJ0___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_2 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_3 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_2);
x_4 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_3);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
lean_inc_n(x_5, 3);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 2, x_8);
lean_ctor_set(x_9, 3, x_5);
lean_ctor_set(x_9, 4, x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJ0(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WeierstrassCurve_ofJ0___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJ1728___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_2 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_3 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_2);
x_4 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_3);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
lean_inc_n(x_5, 3);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 2, x_5);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set(x_9, 4, x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJ1728(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WeierstrassCurve_ofJ1728___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJNe0Or1728___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_inc(x_1);
x_3 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_4 = l_AddGroupWithOne_toAddGroup___rarg(x_3);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(1728u);
lean_inc(x_7);
x_9 = lean_apply_1(x_7, x_8);
x_10 = lean_apply_2(x_5, x_2, x_9);
lean_inc(x_1);
x_11 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_12 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_11);
x_13 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = l_Ring_toAddCommGroup___rarg(x_1);
x_17 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_16);
lean_dec(x_16);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_unsigned_to_nat(36u);
x_20 = lean_apply_1(x_7, x_19);
lean_inc(x_18);
x_21 = lean_apply_1(x_18, x_20);
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_ctor_get(x_22, 3);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_unsigned_to_nat(3u);
lean_inc(x_23);
lean_inc(x_10);
x_25 = lean_apply_2(x_23, x_24, x_10);
x_26 = lean_apply_2(x_15, x_21, x_25);
x_27 = lean_unsigned_to_nat(5u);
lean_inc(x_10);
x_28 = lean_apply_2(x_23, x_27, x_10);
x_29 = lean_apply_1(x_18, x_28);
lean_inc(x_14);
x_30 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_30, 0, x_10);
lean_ctor_set(x_30, 1, x_14);
lean_ctor_set(x_30, 2, x_14);
lean_ctor_set(x_30, 3, x_26);
lean_ctor_set(x_30, 4, x_29);
return x_30;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJNe0Or1728(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WeierstrassCurve_ofJNe0Or1728___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJ___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_inc(x_4);
x_5 = l_CommRing_toNonUnitalCommRing___rarg(x_4);
x_6 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_5);
x_7 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_3);
lean_inc(x_8);
lean_inc(x_2);
x_9 = lean_apply_2(x_3, x_2, x_8);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_8);
x_11 = l_Field_toDivisionRing___rarg(x_1);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Ring_toAddGroupWithOne___rarg(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(1728u);
x_17 = lean_apply_1(x_15, x_16);
lean_inc(x_2);
x_18 = lean_apply_2(x_3, x_2, x_17);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = l_WeierstrassCurve_ofJNe0Or1728___rarg(x_4, x_2);
return x_20;
}
else
{
lean_object* x_21; 
lean_dec(x_2);
x_21 = l_WeierstrassCurve_ofJ1728___rarg(x_4);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_2);
x_22 = l_Field_toDivisionRing___rarg(x_1);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Ring_toAddGroupWithOne___rarg(x_23);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_unsigned_to_nat(3u);
x_28 = lean_apply_1(x_26, x_27);
x_29 = lean_apply_2(x_3, x_28, x_8);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = l_WeierstrassCurve_ofJ0___rarg(x_4);
return x_31;
}
else
{
lean_object* x_32; 
x_32 = l_WeierstrassCurve_ofJ1728___rarg(x_4);
return x_32;
}
}
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_ofJ(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WeierstrassCurve_ofJ___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_instInhabitedSubtypeIsElliptic___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_3 = l_Field_toDivisionRing___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Ring_toAddGroupWithOne___rarg(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(37u);
x_9 = lean_apply_1(x_7, x_8);
x_10 = l_WeierstrassCurve_ofJ___rarg(x_1, x_9, x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_WeierstrassCurve_instInhabitedSubtypeIsElliptic(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WeierstrassCurve_instInhabitedSubtypeIsElliptic___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicGeometry_EllipticCurve_Weierstrass(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicGeometry_EllipticCurve_ModelsWithJ(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicGeometry_EllipticCurve_Weierstrass(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
