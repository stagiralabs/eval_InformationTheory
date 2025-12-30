// Lean compiler output
// Module: Mathlib.Algebra.Ring.Rat
// Imports: Init Mathlib.Algebra.GroupWithZero.Units.Basic Mathlib.Algebra.Ring.Basic Mathlib.Algebra.Ring.Int.Defs Mathlib.Data.Rat.Defs Mathlib.Algebra.Group.Nat.Defs
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
LEAN_EXPORT lean_object* l_Rat_commRing___lambda__1(lean_object*);
lean_object* l_nsmulRec___at_Rat_addCommGroup___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Nat_cast___at_Rat_instOfNat___spec__1(lean_object*);
static lean_object* l_Rat_commRing___closed__2;
static lean_object* l_Rat_commRing___closed__3;
static lean_object* l_Rat_commGroupWithZero___closed__4;
LEAN_EXPORT lean_object* l_npowRec___at_Rat_commGroupWithZero___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_commSemiring;
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
static lean_object* l_Rat_commGroupWithZero___closed__3;
LEAN_EXPORT lean_object* l_zpowRec___at_Rat_commGroupWithZero___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_zpowRec___at_Rat_commGroupWithZero___spec__2___closed__1;
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
static lean_object* l_Rat_commRing___closed__5;
LEAN_EXPORT lean_object* l_Int_cast___at_Rat_commRing___spec__1(lean_object*);
extern lean_object* l_Rat_commMonoid;
lean_object* l_Rat_mul(lean_object*, lean_object*);
lean_object* l_Rat_inv(lean_object*);
extern lean_object* l_Rat_instInv;
static lean_object* l_Rat_commGroupWithZero___closed__2;
LEAN_EXPORT lean_object* l_zpowRec___at_Rat_commGroupWithZero___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
static lean_object* l_Rat_commRing___closed__6;
LEAN_EXPORT lean_object* l_Rat_commRing___lambda__2(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_zsmulRec___at_Rat_addCommGroup___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_commGroupWithZero;
static lean_object* l_Rat_commRing___closed__1;
LEAN_EXPORT lean_object* l_Rat_commRing___lambda__2___boxed(lean_object*, lean_object*);
static lean_object* l_Rat_commRing___closed__4;
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Rat_commGroupWithZero___closed__1;
LEAN_EXPORT lean_object* l_npowRec___at_Rat_commGroupWithZero___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_semiring;
static lean_object* l_npowRec___at_Rat_commGroupWithZero___spec__1___closed__1;
extern lean_object* l_Rat_instDiv;
LEAN_EXPORT lean_object* l_Rat_commRing;
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Rat_addCommGroup;
LEAN_EXPORT lean_object* l_Int_cast___at_Rat_commRing___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Rat_commRing___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_nat_to_int(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Rat_commRing___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_Int_pow(x_3, x_1);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_nat_pow(x_5, x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
static lean_object* _init_l_Rat_commRing___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_commRing___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_commRing___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_commRing___lambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_commRing___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_nsmulRec___at_Rat_addCommGroup___spec__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_commRing___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_commRing___closed__3;
x_2 = lean_alloc_closure((void*)(l_zsmulRec___at_Rat_addCommGroup___spec__2___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_commRing___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_cast___at_Rat_commRing___spec__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_commRing___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_Rat_addCommGroup;
x_2 = l_Rat_commMonoid;
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
lean_dec(x_7);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_8);
x_11 = l_Rat_commRing___closed__1;
x_12 = l_Rat_commRing___closed__2;
lean_ctor_set(x_1, 3, x_12);
lean_ctor_set(x_1, 2, x_11);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_10);
x_13 = l_Rat_commRing___closed__4;
x_14 = l_Rat_commRing___closed__5;
x_15 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 2, x_6);
lean_ctor_set(x_15, 3, x_13);
lean_ctor_set(x_15, 4, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_16 = lean_ctor_get(x_1, 0);
x_17 = lean_ctor_get(x_1, 1);
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_1);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_19);
x_22 = l_Rat_commRing___closed__1;
x_23 = l_Rat_commRing___closed__2;
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_23);
x_25 = l_Rat_commRing___closed__4;
x_26 = l_Rat_commRing___closed__5;
x_27 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_17);
lean_ctor_set(x_27, 2, x_18);
lean_ctor_set(x_27, 3, x_25);
lean_ctor_set(x_27, 4, x_26);
return x_27;
}
}
}
static lean_object* _init_l_Rat_commRing() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_commRing___closed__6;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Rat_commRing___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Rat_commRing___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_npowRec___at_Rat_commGroupWithZero___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Rat_commGroupWithZero___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_1, x_5);
x_7 = l_npowRec___at_Rat_commGroupWithZero___spec__1(x_6, x_2);
lean_dec(x_6);
x_8 = l_Rat_mul(x_7, x_2);
lean_dec(x_7);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = l_npowRec___at_Rat_commGroupWithZero___spec__1___closed__1;
return x_9;
}
}
}
static lean_object* _init_l_zpowRec___at_Rat_commGroupWithZero___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Rat_commGroupWithZero___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_zpowRec___at_Rat_commGroupWithZero___spec__2___closed__1;
x_5 = lean_int_dec_lt(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_nat_abs(x_2);
x_7 = lean_apply_2(x_1, x_6, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_nat_abs(x_2);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_8, x_9);
lean_dec(x_8);
x_11 = lean_nat_add(x_10, x_9);
lean_dec(x_10);
x_12 = lean_apply_2(x_1, x_11, x_3);
x_13 = l_Rat_inv(x_12);
return x_13;
}
}
}
static lean_object* _init_l_Rat_commGroupWithZero___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_commRing;
x_2 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_commGroupWithZero___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_commGroupWithZero___closed__1;
x_2 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_commGroupWithZero___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_commGroupWithZero___closed__2;
x_2 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_commGroupWithZero___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_npowRec___at_Rat_commGroupWithZero___spec__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_commGroupWithZero() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = l_Rat_commGroupWithZero___closed__3;
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_dec(x_3);
x_4 = l_Rat_commMonoid;
lean_ctor_set(x_1, 0, x_4);
x_5 = l_Rat_commGroupWithZero___closed__4;
x_6 = lean_alloc_closure((void*)(l_zpowRec___at_Rat_commGroupWithZero___spec__2___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = l_Rat_instInv;
x_8 = l_Rat_instDiv;
x_9 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_9, 2, x_8);
lean_ctor_set(x_9, 3, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_Rat_commMonoid;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Rat_commGroupWithZero___closed__4;
x_14 = lean_alloc_closure((void*)(l_zpowRec___at_Rat_commGroupWithZero___spec__2___boxed), 3, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = l_Rat_instInv;
x_16 = l_Rat_instDiv;
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_16);
lean_ctor_set(x_17, 3, x_14);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Rat_commGroupWithZero___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_npowRec___at_Rat_commGroupWithZero___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Rat_commGroupWithZero___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_zpowRec___at_Rat_commGroupWithZero___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Rat_commSemiring() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_commRing;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Rat_semiring() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_commSemiring;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Units_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Int_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Nat_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_Rat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Units_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Int_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Nat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Rat_commRing___closed__1 = _init_l_Rat_commRing___closed__1();
lean_mark_persistent(l_Rat_commRing___closed__1);
l_Rat_commRing___closed__2 = _init_l_Rat_commRing___closed__2();
lean_mark_persistent(l_Rat_commRing___closed__2);
l_Rat_commRing___closed__3 = _init_l_Rat_commRing___closed__3();
lean_mark_persistent(l_Rat_commRing___closed__3);
l_Rat_commRing___closed__4 = _init_l_Rat_commRing___closed__4();
lean_mark_persistent(l_Rat_commRing___closed__4);
l_Rat_commRing___closed__5 = _init_l_Rat_commRing___closed__5();
lean_mark_persistent(l_Rat_commRing___closed__5);
l_Rat_commRing___closed__6 = _init_l_Rat_commRing___closed__6();
lean_mark_persistent(l_Rat_commRing___closed__6);
l_Rat_commRing = _init_l_Rat_commRing();
lean_mark_persistent(l_Rat_commRing);
l_npowRec___at_Rat_commGroupWithZero___spec__1___closed__1 = _init_l_npowRec___at_Rat_commGroupWithZero___spec__1___closed__1();
lean_mark_persistent(l_npowRec___at_Rat_commGroupWithZero___spec__1___closed__1);
l_zpowRec___at_Rat_commGroupWithZero___spec__2___closed__1 = _init_l_zpowRec___at_Rat_commGroupWithZero___spec__2___closed__1();
lean_mark_persistent(l_zpowRec___at_Rat_commGroupWithZero___spec__2___closed__1);
l_Rat_commGroupWithZero___closed__1 = _init_l_Rat_commGroupWithZero___closed__1();
lean_mark_persistent(l_Rat_commGroupWithZero___closed__1);
l_Rat_commGroupWithZero___closed__2 = _init_l_Rat_commGroupWithZero___closed__2();
lean_mark_persistent(l_Rat_commGroupWithZero___closed__2);
l_Rat_commGroupWithZero___closed__3 = _init_l_Rat_commGroupWithZero___closed__3();
lean_mark_persistent(l_Rat_commGroupWithZero___closed__3);
l_Rat_commGroupWithZero___closed__4 = _init_l_Rat_commGroupWithZero___closed__4();
lean_mark_persistent(l_Rat_commGroupWithZero___closed__4);
l_Rat_commGroupWithZero = _init_l_Rat_commGroupWithZero();
lean_mark_persistent(l_Rat_commGroupWithZero);
l_Rat_commSemiring = _init_l_Rat_commSemiring();
lean_mark_persistent(l_Rat_commSemiring);
l_Rat_semiring = _init_l_Rat_semiring();
lean_mark_persistent(l_Rat_semiring);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
