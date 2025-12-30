// Lean compiler output
// Module: Mathlib.Data.Rat.Defs
// Imports: Init Batteries.Data.Rat.Lemmas Mathlib.Algebra.Group.Defs Mathlib.Data.Rat.Init Mathlib.Order.Basic Mathlib.Tactic.Common Mathlib.Data.Int.Init Mathlib.Data.Nat.Basic
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
LEAN_EXPORT lean_object* l_Rat_addCommMonoid;
lean_object* l_AddCommGroup_toAddCancelCommMonoid___rarg(lean_object*);
extern lean_object* l_Rat_instSub;
LEAN_EXPORT lean_object* l_nsmulRec___at_Rat_addCommGroup___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_Rat_instInv___closed__1;
lean_object* l_Nat_cast___at_Rat_instOfNat___spec__1(lean_object*);
static lean_object* l_Rat_commMonoid___closed__1;
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn_x27_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Rat_addCommGroup___closed__2;
static lean_object* l_Rat_addCommGroup___closed__1;
lean_object* l_Rat_mul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_addRightCancelSemigroup;
LEAN_EXPORT lean_object* l_nsmulRec___at_Rat_addCommGroup___spec__1(lean_object*, lean_object*);
static lean_object* l_Rat_commMonoid___closed__2;
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn_x27_x27(lean_object*);
LEAN_EXPORT lean_object* l_Rat_addMonoid;
LEAN_EXPORT lean_object* l_Rat_instPowNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_Rat_addCommGroup___spec__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_Rat_addCommGroup___closed__4;
static lean_object* l_nsmulRec___at_Rat_addCommGroup___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Rat_commMonoid___lambda__1___boxed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_commMonoid___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_addSemigroup;
LEAN_EXPORT lean_object* l_Rat_commMonoid;
lean_object* l_Rat_inv(lean_object*);
LEAN_EXPORT lean_object* l_Rat_semigroup;
LEAN_EXPORT lean_object* l_Rat_divCasesOn(lean_object*);
static lean_object* l_Rat_addCommGroup___closed__3;
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn_x27_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_instInv;
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn(lean_object*);
lean_object* lean_nat_abs(lean_object*);
static lean_object* l_Rat_addLeftCancelSemigroup___closed__1;
static lean_object* l_Rat_addRightCancelSemigroup___closed__1;
LEAN_EXPORT lean_object* l_Rat_divCasesOn___rarg(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_Rat_addCommGroup___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_add(lean_object*, lean_object*);
static lean_object* l_Rat_commMonoid___closed__3;
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_addGroup;
lean_object* l_AddGroup_toAddCancelMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn_x27(lean_object*);
LEAN_EXPORT lean_object* l_Rat_monoid;
LEAN_EXPORT lean_object* l_Rat_addLeftCancelSemigroup;
LEAN_EXPORT lean_object* l_Rat_commSemigroup;
LEAN_EXPORT lean_object* l_Rat_instPowNat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_addCommSemigroup;
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn___rarg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_zsmulRec___at_Rat_addCommGroup___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Rat_addCommGroup;
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn_x27___rarg(lean_object*, lean_object*);
lean_object* l_Rat_neg(lean_object*);
static lean_object* l_Rat_commMonoid___closed__4;
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_4(x_2, x_3, x_4, lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Rat_numDenCasesOn___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_3(x_1, x_2, x_3, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Rat_numDenCasesOn_x27___rarg___lambda__1), 5, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Rat_numDenCasesOn___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Rat_numDenCasesOn_x27___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn_x27_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_4(x_1, x_2, x_3, lean_box(0), lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn_x27_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Rat_numDenCasesOn_x27_x27___rarg___lambda__1), 5, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Rat_numDenCasesOn___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Rat_numDenCasesOn_x27_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Rat_numDenCasesOn_x27_x27___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Rat_instPowNat(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Int_pow(x_3, x_2);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_nat_pow(x_5, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Rat_instPowNat___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Rat_instPowNat(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Rat_instInv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_inv), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instInv() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instInv___closed__1;
return x_1;
}
}
static lean_object* _init_l_nsmulRec___at_Rat_addCommGroup___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Rat_addCommGroup___spec__1(lean_object* x_1, lean_object* x_2) {
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
lean_inc(x_2);
x_7 = l_nsmulRec___at_Rat_addCommGroup___spec__1(x_6, x_2);
lean_dec(x_6);
x_8 = l_Rat_add(x_7, x_2);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = l_nsmulRec___at_Rat_addCommGroup___spec__1___closed__1;
return x_9;
}
}
}
static lean_object* _init_l_zsmulRec___at_Rat_addCommGroup___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_Rat_addCommGroup___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_zsmulRec___at_Rat_addCommGroup___spec__2___closed__1;
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
x_13 = l_Rat_neg(x_12);
return x_13;
}
}
}
static lean_object* _init_l_Rat_addCommGroup___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_add), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_addCommGroup___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_nsmulRec___at_Rat_addCommGroup___spec__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_addCommGroup___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Rat_addCommGroup___closed__1;
x_2 = l_nsmulRec___at_Rat_addCommGroup___spec__1___closed__1;
x_3 = l_Rat_addCommGroup___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Rat_addCommGroup___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_neg), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_addCommGroup() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Rat_addCommGroup___closed__2;
x_2 = lean_alloc_closure((void*)(l_zsmulRec___at_Rat_addCommGroup___spec__2___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Rat_addCommGroup___closed__3;
x_4 = l_Rat_addCommGroup___closed__4;
x_5 = l_Rat_instSub;
x_6 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_5);
lean_ctor_set(x_6, 3, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Rat_addCommGroup___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_nsmulRec___at_Rat_addCommGroup___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_Rat_addCommGroup___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_zsmulRec___at_Rat_addCommGroup___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Rat_addGroup() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_addCommGroup;
return x_1;
}
}
static lean_object* _init_l_Rat_addCommMonoid() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_addCommGroup;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Rat_addMonoid() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_addGroup;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Rat_addLeftCancelSemigroup___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_addCommGroup;
x_2 = l_AddCommGroup_toAddCancelCommMonoid___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_addLeftCancelSemigroup() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_addLeftCancelSemigroup___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Rat_addRightCancelSemigroup___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_addGroup;
x_2 = l_AddGroup_toAddCancelMonoid___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_addRightCancelSemigroup() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_addRightCancelSemigroup___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Rat_addCommSemigroup() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_addCommMonoid;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Rat_addSemigroup() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_addMonoid;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Rat_commMonoid___lambda__1(lean_object* x_1, lean_object* x_2) {
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
static lean_object* _init_l_Rat_commMonoid___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_commMonoid___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_mul___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_commMonoid___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_commMonoid___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_commMonoid___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Rat_commMonoid___closed__2;
x_2 = l_Rat_commMonoid___closed__1;
x_3 = l_Rat_commMonoid___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Rat_commMonoid() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_commMonoid___closed__4;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Rat_commMonoid___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Rat_commMonoid___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Rat_monoid() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_commMonoid;
return x_1;
}
}
static lean_object* _init_l_Rat_commSemigroup() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_commMonoid;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Rat_semigroup() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_monoid;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Rat_divCasesOn___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_4(x_2, x_3, x_4, lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Rat_divCasesOn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Rat_divCasesOn___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_Rat_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Common(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Rat_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_Rat_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Common(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Rat_instInv___closed__1 = _init_l_Rat_instInv___closed__1();
lean_mark_persistent(l_Rat_instInv___closed__1);
l_Rat_instInv = _init_l_Rat_instInv();
lean_mark_persistent(l_Rat_instInv);
l_nsmulRec___at_Rat_addCommGroup___spec__1___closed__1 = _init_l_nsmulRec___at_Rat_addCommGroup___spec__1___closed__1();
lean_mark_persistent(l_nsmulRec___at_Rat_addCommGroup___spec__1___closed__1);
l_zsmulRec___at_Rat_addCommGroup___spec__2___closed__1 = _init_l_zsmulRec___at_Rat_addCommGroup___spec__2___closed__1();
lean_mark_persistent(l_zsmulRec___at_Rat_addCommGroup___spec__2___closed__1);
l_Rat_addCommGroup___closed__1 = _init_l_Rat_addCommGroup___closed__1();
lean_mark_persistent(l_Rat_addCommGroup___closed__1);
l_Rat_addCommGroup___closed__2 = _init_l_Rat_addCommGroup___closed__2();
lean_mark_persistent(l_Rat_addCommGroup___closed__2);
l_Rat_addCommGroup___closed__3 = _init_l_Rat_addCommGroup___closed__3();
lean_mark_persistent(l_Rat_addCommGroup___closed__3);
l_Rat_addCommGroup___closed__4 = _init_l_Rat_addCommGroup___closed__4();
lean_mark_persistent(l_Rat_addCommGroup___closed__4);
l_Rat_addCommGroup = _init_l_Rat_addCommGroup();
lean_mark_persistent(l_Rat_addCommGroup);
l_Rat_addGroup = _init_l_Rat_addGroup();
lean_mark_persistent(l_Rat_addGroup);
l_Rat_addCommMonoid = _init_l_Rat_addCommMonoid();
lean_mark_persistent(l_Rat_addCommMonoid);
l_Rat_addMonoid = _init_l_Rat_addMonoid();
lean_mark_persistent(l_Rat_addMonoid);
l_Rat_addLeftCancelSemigroup___closed__1 = _init_l_Rat_addLeftCancelSemigroup___closed__1();
lean_mark_persistent(l_Rat_addLeftCancelSemigroup___closed__1);
l_Rat_addLeftCancelSemigroup = _init_l_Rat_addLeftCancelSemigroup();
lean_mark_persistent(l_Rat_addLeftCancelSemigroup);
l_Rat_addRightCancelSemigroup___closed__1 = _init_l_Rat_addRightCancelSemigroup___closed__1();
lean_mark_persistent(l_Rat_addRightCancelSemigroup___closed__1);
l_Rat_addRightCancelSemigroup = _init_l_Rat_addRightCancelSemigroup();
lean_mark_persistent(l_Rat_addRightCancelSemigroup);
l_Rat_addCommSemigroup = _init_l_Rat_addCommSemigroup();
lean_mark_persistent(l_Rat_addCommSemigroup);
l_Rat_addSemigroup = _init_l_Rat_addSemigroup();
lean_mark_persistent(l_Rat_addSemigroup);
l_Rat_commMonoid___closed__1 = _init_l_Rat_commMonoid___closed__1();
lean_mark_persistent(l_Rat_commMonoid___closed__1);
l_Rat_commMonoid___closed__2 = _init_l_Rat_commMonoid___closed__2();
lean_mark_persistent(l_Rat_commMonoid___closed__2);
l_Rat_commMonoid___closed__3 = _init_l_Rat_commMonoid___closed__3();
lean_mark_persistent(l_Rat_commMonoid___closed__3);
l_Rat_commMonoid___closed__4 = _init_l_Rat_commMonoid___closed__4();
lean_mark_persistent(l_Rat_commMonoid___closed__4);
l_Rat_commMonoid = _init_l_Rat_commMonoid();
lean_mark_persistent(l_Rat_commMonoid);
l_Rat_monoid = _init_l_Rat_monoid();
lean_mark_persistent(l_Rat_monoid);
l_Rat_commSemigroup = _init_l_Rat_commSemigroup();
lean_mark_persistent(l_Rat_commSemigroup);
l_Rat_semigroup = _init_l_Rat_semigroup();
lean_mark_persistent(l_Rat_semigroup);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
