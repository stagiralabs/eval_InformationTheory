// Lean compiler output
// Module: Mathlib.Data.Rat.Denumerable
// Imports: Init Mathlib.Algebra.Order.Ring.Rat Mathlib.Data.Rat.Encodable Mathlib.Algebra.CharZero.Infinite Mathlib.Logic.Denumerable
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
static lean_object* l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__2;
lean_object* l_Encodable_ofLeftInjection___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9___closed__1;
LEAN_EXPORT lean_object* l_Option_guard___at_Rat_instDenumerable___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_instDenumerable;
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Rat_instDenumerable___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l_Encodable_equivRangeEncode___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Denumerable_ofEncodableOfInfinite___at_Rat_instDenumerable___spec__1(lean_object*);
extern lean_object* l_Rat_instEncodable;
static lean_object* l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9___closed__2;
LEAN_EXPORT uint8_t l_Encodable_decidableRangeEncode___at_Rat_instDenumerable___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decidableRangeEncode___at_Rat_instDenumerable___spec__2___boxed(lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Rat_instDenumerable___spec__7___lambda__1(lean_object*, lean_object*);
lean_object* l_Nat_Subtype_denumerable___rarg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__1;
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Rat_instDenumerable___spec__8___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Rat_instDenumerable___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5;
static lean_object* l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__3;
static lean_object* l_Encodable_ofLeftInverse___at_Rat_instDenumerable___spec__8___closed__1;
LEAN_EXPORT lean_object* l_Denumerable_ofEquiv___at_Rat_instDenumerable___spec__6(lean_object*);
lean_object* l_Encodable_ofLeftInjection___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_guard___at_Rat_instDenumerable___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decode_u2082___at_Rat_instDenumerable___spec__3(lean_object*);
lean_object* l_Encodable_equivRangeEncode___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_guard___at_Rat_instDenumerable___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = l_Rat_instEncodable;
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_2);
x_5 = lean_apply_1(x_4, x_2);
x_6 = lean_nat_dec_eq(x_5, x_1);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_2);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Encodable_decode_u2082___at_Rat_instDenumerable___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Rat_instEncodable;
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_apply_1(x_3, x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_inc(x_7);
x_9 = lean_apply_1(x_8, x_7);
x_10 = lean_nat_dec_eq(x_9, x_1);
lean_dec(x_1);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_free_object(x_4);
lean_dec(x_7);
x_11 = lean_box(0);
return x_11;
}
else
{
return x_4;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_4, 0);
lean_inc(x_12);
lean_dec(x_4);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_inc(x_12);
x_14 = lean_apply_1(x_13, x_12);
x_15 = lean_nat_dec_eq(x_14, x_1);
lean_dec(x_1);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_12);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_12);
return x_17;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Encodable_decidableRangeEncode___at_Rat_instDenumerable___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Encodable_decode_u2082___at_Rat_instDenumerable___spec__3(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8_t x_4; 
lean_dec(x_2);
x_4 = 1;
return x_4;
}
}
}
static lean_object* _init_l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instEncodable;
x_2 = lean_alloc_closure((void*)(l_Encodable_equivRangeEncode___elambda__2___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instEncodable;
x_2 = lean_alloc_closure((void*)(l_Encodable_equivRangeEncode___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__1;
x_2 = l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5() {
_start:
{
lean_object* x_1; 
x_1 = l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__3;
return x_1;
}
}
static lean_object* _init_l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Encodable_decidableRangeEncode___at_Rat_instDenumerable___spec__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9___closed__1;
x_2 = l_Nat_Subtype_denumerable___rarg(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9___closed__2;
x_5 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__2___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
x_6 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Rat_instDenumerable___spec__8___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Encodable_ofLeftInverse___at_Rat_instDenumerable___spec__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Encodable_ofLeftInverse___at_Rat_instDenumerable___spec__8___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Rat_instDenumerable___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Encodable_ofLeftInverse___at_Rat_instDenumerable___spec__8___closed__1;
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
x_6 = l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9(x_1, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Rat_instDenumerable___spec__7___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Rat_instDenumerable___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___at_Rat_instDenumerable___spec__7___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Encodable_ofLeftInverse___at_Rat_instDenumerable___spec__8(x_2, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Denumerable_ofEquiv___at_Rat_instDenumerable___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Encodable_ofEquiv___at_Rat_instDenumerable___spec__7(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Denumerable_ofEncodableOfInfinite___at_Rat_instDenumerable___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5;
x_3 = l_Encodable_ofEquiv___at_Rat_instDenumerable___spec__7(x_2);
return x_3;
}
}
static lean_object* _init_l_Rat_instDenumerable() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5;
x_2 = l_Encodable_ofEquiv___at_Rat_instDenumerable___spec__7(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Option_guard___at_Rat_instDenumerable___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Option_guard___at_Rat_instDenumerable___spec__4(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_decidableRangeEncode___at_Rat_instDenumerable___spec__2___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Encodable_decidableRangeEncode___at_Rat_instDenumerable___spec__2(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_Encodable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_CharZero_Infinite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Denumerable(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Rat_Denumerable(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_Encodable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_CharZero_Infinite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Denumerable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__1 = _init_l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__1();
lean_mark_persistent(l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__1);
l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__2 = _init_l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__2();
lean_mark_persistent(l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__2);
l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__3 = _init_l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__3();
lean_mark_persistent(l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5___closed__3);
l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5 = _init_l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5();
lean_mark_persistent(l_Encodable_equivRangeEncode___at_Rat_instDenumerable___spec__5);
l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9___closed__1 = _init_l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9___closed__1();
lean_mark_persistent(l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9___closed__1);
l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9___closed__2 = _init_l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9___closed__2();
lean_mark_persistent(l_Encodable_ofLeftInjection___at_Rat_instDenumerable___spec__9___closed__2);
l_Encodable_ofLeftInverse___at_Rat_instDenumerable___spec__8___closed__1 = _init_l_Encodable_ofLeftInverse___at_Rat_instDenumerable___spec__8___closed__1();
lean_mark_persistent(l_Encodable_ofLeftInverse___at_Rat_instDenumerable___spec__8___closed__1);
l_Rat_instDenumerable = _init_l_Rat_instDenumerable();
lean_mark_persistent(l_Rat_instDenumerable);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
