// Lean compiler output
// Module: Mathlib.Data.Int.LeastGreatest
// Imports: Init Mathlib.Algebra.Order.Ring.Int Mathlib.Data.Nat.Find Mathlib.Order.Bounds.Defs
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
LEAN_EXPORT lean_object* l_Int_greatestOfBdd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_Int_greatestOfBdd___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_leastOfBdd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Int_leastOfBdd___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Int_greatestOfBdd___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Int_greatestOfBdd___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Int_greatestOfBdd___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Int_leastOfBdd(lean_object*);
LEAN_EXPORT lean_object* l_Int_greatestOfBdd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_leastOfBdd___at_Int_greatestOfBdd___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_Int_leastOfBdd___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Int_leastOfBdd___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Int_leastOfBdd___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Int_leastOfBdd___at_Int_greatestOfBdd___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Int_leastOfBdd___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_leastOfBdd___at_Int_greatestOfBdd___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_Int_greatestOfBdd___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Int_greatestOfBdd___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Int_leastOfBdd___rarg___closed__1;
LEAN_EXPORT lean_object* l_Nat_findX___at_Int_leastOfBdd___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_Int_leastOfBdd___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_greatestOfBdd(lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Int_greatestOfBdd___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Int_leastOfBdd___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Int_leastOfBdd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Int_leastOfBdd___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_Int_greatestOfBdd___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Int_greatestOfBdd___spec__2(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Int_leastOfBdd___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
lean_inc(x_3);
x_5 = lean_nat_to_int(x_3);
x_6 = lean_int_add(x_2, x_5);
lean_dec(x_5);
lean_inc(x_1);
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_1);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Int_leastOfBdd___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_Int_leastOfBdd___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Int_leastOfBdd___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l___private_Batteries_WF_0__WellFounded_fixC___at_Int_leastOfBdd___spec__3___rarg(x_1, x_2, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Int_leastOfBdd___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_findX___at_Int_leastOfBdd___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Int_leastOfBdd___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l___private_Batteries_WF_0__WellFounded_fixC___at_Int_leastOfBdd___spec__3___rarg(x_1, x_2, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Int_leastOfBdd___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_find___at_Int_leastOfBdd___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
static lean_object* _init_l_Int_leastOfBdd___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_add___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Int_leastOfBdd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l___private_Batteries_WF_0__WellFounded_fixC___at_Int_leastOfBdd___spec__3___rarg(x_1, x_2, x_5, lean_box(0));
x_7 = lean_nat_to_int(x_6);
x_8 = lean_int_add(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Int_leastOfBdd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Int_leastOfBdd___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Int_leastOfBdd___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Batteries_WF_0__WellFounded_fixC___at_Int_leastOfBdd___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Int_leastOfBdd___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_findX___at_Int_leastOfBdd___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Int_leastOfBdd___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_find___at_Int_leastOfBdd___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Int_leastOfBdd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Int_leastOfBdd___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Int_greatestOfBdd___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
lean_inc(x_3);
x_5 = lean_nat_to_int(x_3);
x_6 = lean_int_add(x_2, x_5);
lean_dec(x_5);
x_7 = lean_int_neg(x_6);
lean_dec(x_6);
lean_inc(x_1);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_1);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Int_greatestOfBdd___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_Int_greatestOfBdd___spec__4___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Int_greatestOfBdd___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l___private_Batteries_WF_0__WellFounded_fixC___at_Int_greatestOfBdd___spec__4___rarg(x_1, x_2, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Int_greatestOfBdd___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_findX___at_Int_greatestOfBdd___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Int_greatestOfBdd___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l___private_Batteries_WF_0__WellFounded_fixC___at_Int_greatestOfBdd___spec__4___rarg(x_1, x_2, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Int_greatestOfBdd___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_find___at_Int_greatestOfBdd___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_leastOfBdd___at_Int_greatestOfBdd___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l___private_Batteries_WF_0__WellFounded_fixC___at_Int_greatestOfBdd___spec__4___rarg(x_1, x_2, x_5, lean_box(0));
x_7 = lean_nat_to_int(x_6);
x_8 = lean_int_add(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Int_leastOfBdd___at_Int_greatestOfBdd___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Int_leastOfBdd___at_Int_greatestOfBdd___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_greatestOfBdd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_int_neg(x_2);
x_6 = l_Int_leastOfBdd___at_Int_greatestOfBdd___spec__1___rarg(x_1, x_5, lean_box(0), lean_box(0));
lean_dec(x_5);
x_7 = lean_int_neg(x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Int_greatestOfBdd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Int_greatestOfBdd___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Int_greatestOfBdd___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Batteries_WF_0__WellFounded_fixC___at_Int_greatestOfBdd___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Int_greatestOfBdd___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_findX___at_Int_greatestOfBdd___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Int_greatestOfBdd___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_find___at_Int_greatestOfBdd___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Int_leastOfBdd___at_Int_greatestOfBdd___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Int_leastOfBdd___at_Int_greatestOfBdd___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Int_greatestOfBdd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Int_greatestOfBdd___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Int(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Find(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Bounds_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Int_LeastGreatest(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Int(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Find(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Bounds_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_leastOfBdd___rarg___closed__1 = _init_l_Int_leastOfBdd___rarg___closed__1();
lean_mark_persistent(l_Int_leastOfBdd___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
