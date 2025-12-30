// Lean compiler output
// Module: Mathlib.Order.RelIso.Group
// Imports: Init Mathlib.Algebra.Group.Defs Mathlib.Order.RelIso.Basic
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
static lean_object* l_RelIso_instGroup___closed__2;
LEAN_EXPORT lean_object* l_zpowRec___at_RelIso_instGroup___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_RelIso_instGroup___spec__6___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_RelIso_instGroup___spec__7___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_zpowRec___at_RelIso_instGroup___spec__7___rarg___closed__1;
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_RelIso_instGroup___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_RelIso_instGroup___spec__5___rarg(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_RelIso_instGroup___lambda__1(lean_object*, lean_object*);
static lean_object* l_RelIso_instGroup___closed__1;
lean_object* l_RelIso_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_RelIso_instGroup___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_RelIso_instGroup___spec__2(lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_RelIso_instGroup___spec__1___rarg(lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
static lean_object* l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg___closed__1;
LEAN_EXPORT lean_object* l_npowBinRec_go___at_RelIso_instGroup___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_RelIso_instGroup___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_RelIso_instGroup___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_npowBinRec___at_RelIso_instGroup___spec__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg___lambda__1(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelIso_instGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_RelIso_instGroup___spec__4(lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_RelIso_instGroup___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_RelIso_instGroup___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_RelIso_instGroup___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_RelIso_instGroup___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_2, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_land(x_7, x_2);
x_9 = lean_nat_dec_eq(x_8, x_5);
lean_dec(x_8);
x_10 = lean_nat_shiftr(x_2, x_7);
lean_dec(x_2);
if (x_9 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_inc_n(x_4, 2);
x_11 = l_Equiv_trans___rarg(x_4, x_4);
x_12 = l_Equiv_trans___rarg(x_4, x_3);
x_2 = x_10;
x_3 = x_12;
x_4 = x_11;
goto _start;
}
else
{
lean_object* x_14; 
lean_inc(x_4);
x_14 = l_Equiv_trans___rarg(x_4, x_4);
x_2 = x_10;
x_4 = x_14;
goto _start;
}
}
else
{
lean_object* x_16; 
lean_dec(x_2);
x_16 = lean_apply_2(x_1, x_3, x_4);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_RelIso_instGroup___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_RelIso_instGroup___spec__4___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg___closed__1;
x_5 = l_Nat_binaryRec___at_RelIso_instGroup___spec__4___rarg(x_4, x_1, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_RelIso_instGroup___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l_npowBinRec___at_RelIso_instGroup___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_RelIso_instGroup___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg___lambda__1___boxed), 2, 0);
x_4 = l_npowBinRec___at_RelIso_instGroup___spec__2___rarg___closed__1;
x_5 = l_Nat_binaryRec___at_RelIso_instGroup___spec__4___rarg(x_3, x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_RelIso_instGroup___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec___at_RelIso_instGroup___spec__2___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_RelIso_instGroup___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_npowBinRec___at_RelIso_instGroup___spec__2___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_RelIso_instGroup___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_RelIso_instGroup___spec__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_RelIso_instGroup___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Equiv_symm___rarg(x_2);
x_4 = l_Equiv_trans___rarg(x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_RelIso_instGroup___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DivInvMonoid_div_x27___at_RelIso_instGroup___spec__5___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_RelIso_instGroup___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
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
x_7 = l_npowRec___at_RelIso_instGroup___spec__6___rarg(x_6, x_2);
lean_dec(x_6);
x_8 = l_Equiv_trans___rarg(x_2, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = l_npowBinRec___at_RelIso_instGroup___spec__2___rarg___closed__1;
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_npowRec___at_RelIso_instGroup___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowRec___at_RelIso_instGroup___spec__6___rarg___boxed), 2, 0);
return x_3;
}
}
static lean_object* _init_l_zpowRec___at_RelIso_instGroup___spec__7___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_RelIso_instGroup___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_zpowRec___at_RelIso_instGroup___spec__7___rarg___closed__1;
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
x_13 = l_Equiv_symm___rarg(x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_RelIso_instGroup___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_zpowRec___at_RelIso_instGroup___spec__7___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelIso_instGroup___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_trans___rarg(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_RelIso_instGroup___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_RelIso_instGroup___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_RelIso_instGroup___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_RelIso_symm___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RelIso_instGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = l_RelIso_instGroup___closed__1;
x_4 = l_npowBinRec___at_RelIso_instGroup___spec__2___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_RelIso_instGroup___spec__1___rarg), 2, 0);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_5);
x_7 = lean_alloc_closure((void*)(l_npowRec___at_RelIso_instGroup___spec__6___rarg___boxed), 2, 0);
x_8 = lean_alloc_closure((void*)(l_zpowRec___at_RelIso_instGroup___spec__7___rarg___boxed), 3, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = l_RelIso_instGroup___closed__2;
x_10 = lean_alloc_closure((void*)(l_DivInvMonoid_div_x27___at_RelIso_instGroup___spec__5___rarg), 2, 0);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_10);
lean_ctor_set(x_11, 3, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_RelIso_instGroup___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_npowRec___at_RelIso_instGroup___spec__6___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_RelIso_instGroup___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_zpowRec___at_RelIso_instGroup___spec__7___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_RelIso_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_RelIso_Group(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_RelIso_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg___closed__1 = _init_l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg___closed__1();
lean_mark_persistent(l_npowBinRec_go___at_RelIso_instGroup___spec__3___rarg___closed__1);
l_npowBinRec___at_RelIso_instGroup___spec__2___rarg___closed__1 = _init_l_npowBinRec___at_RelIso_instGroup___spec__2___rarg___closed__1();
lean_mark_persistent(l_npowBinRec___at_RelIso_instGroup___spec__2___rarg___closed__1);
l_zpowRec___at_RelIso_instGroup___spec__7___rarg___closed__1 = _init_l_zpowRec___at_RelIso_instGroup___spec__7___rarg___closed__1();
lean_mark_persistent(l_zpowRec___at_RelIso_instGroup___spec__7___rarg___closed__1);
l_RelIso_instGroup___closed__1 = _init_l_RelIso_instGroup___closed__1();
lean_mark_persistent(l_RelIso_instGroup___closed__1);
l_RelIso_instGroup___closed__2 = _init_l_RelIso_instGroup___closed__2();
lean_mark_persistent(l_RelIso_instGroup___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
