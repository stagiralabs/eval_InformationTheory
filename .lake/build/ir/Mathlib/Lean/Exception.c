// Lean compiler output
// Module: Mathlib.Lean.Exception
// Imports: Init Mathlib.Init Lean.Exception
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
static lean_object* l_Lean_Exception_isFailedToSynthesize___closed__3;
lean_object* l_Lean_MessageData_toString(lean_object*, lean_object*);
static lean_object* l_Lean_Exception_isFailedToSynthesize___closed__4;
LEAN_EXPORT lean_object* l_successIfFail___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_successIfFail___rarg___lambda__3___closed__1;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
LEAN_EXPORT lean_object* l_successIfFail___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_successIfFail___rarg___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_successIfFail___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_successIfFail___rarg___lambda__3___closed__2;
lean_object* l_Substring_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
static lean_object* l_Lean_Exception_isFailedToSynthesize___closed__2;
static lean_object* l_Lean_Exception_isFailedToSynthesize___closed__1;
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Substring_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_successIfFail___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Exception_isFailedToSynthesize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_successIfFail(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_successIfFail___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_successIfFail___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_box(0);
x_5 = lean_apply_2(x_3, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_successIfFail___rarg___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_successIfFail___rarg___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Expected an exception.", 22, 22);
return x_1;
}
}
static lean_object* _init_l_successIfFail___rarg___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_successIfFail___rarg___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_successIfFail___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = l_successIfFail___rarg___lambda__3___closed__2;
x_6 = l_Lean_throwError___rarg(x_1, x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_apply_2(x_3, lean_box(0), x_7);
return x_8;
}
}
}
static lean_object* _init_l_successIfFail___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_successIfFail___rarg___lambda__2), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_successIfFail___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 4);
lean_inc(x_7);
lean_inc(x_6);
x_8 = lean_alloc_closure((void*)(l_successIfFail___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_3, x_8);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
lean_inc(x_10);
x_11 = lean_apply_1(x_10, lean_box(0));
x_12 = l_successIfFail___rarg___closed__1;
x_13 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_dec(x_5);
x_15 = lean_apply_3(x_14, lean_box(0), x_9, x_13);
x_16 = lean_alloc_closure((void*)(l_successIfFail___rarg___lambda__3), 4, 3);
lean_closure_set(x_16, 0, x_2);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_10);
x_17 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_15, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_successIfFail(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_successIfFail___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_successIfFail___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_successIfFail___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Exception_isFailedToSynthesize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("failed to synthesize", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Lean_Exception_isFailedToSynthesize___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Exception_isFailedToSynthesize___closed__1;
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Exception_isFailedToSynthesize___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Exception_isFailedToSynthesize___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Exception_isFailedToSynthesize___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Exception_isFailedToSynthesize___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Exception_isFailedToSynthesize___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Exception_isFailedToSynthesize(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Exception_toMessageData(x_1);
x_4 = l_Lean_MessageData_toString(x_3, x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_string_utf8_byte_size(x_6);
x_8 = lean_unsigned_to_nat(0u);
lean_inc(x_6);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 2, x_7);
x_10 = l_Lean_Exception_isFailedToSynthesize___closed__2;
x_11 = l_Substring_nextn(x_9, x_10, x_8);
lean_dec(x_9);
x_12 = lean_nat_add(x_8, x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_8);
lean_ctor_set(x_13, 2, x_12);
x_14 = l_Lean_Exception_isFailedToSynthesize___closed__4;
x_15 = l_Substring_beq(x_13, x_14);
x_16 = lean_box(x_15);
lean_ctor_set(x_4, 0, x_16);
return x_4;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_17 = lean_ctor_get(x_4, 0);
x_18 = lean_ctor_get(x_4, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_4);
x_19 = lean_string_utf8_byte_size(x_17);
x_20 = lean_unsigned_to_nat(0u);
lean_inc(x_17);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_21, 2, x_19);
x_22 = l_Lean_Exception_isFailedToSynthesize___closed__2;
x_23 = l_Substring_nextn(x_21, x_22, x_20);
lean_dec(x_21);
x_24 = lean_nat_add(x_20, x_23);
lean_dec(x_23);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_17);
lean_ctor_set(x_25, 1, x_20);
lean_ctor_set(x_25, 2, x_24);
x_26 = l_Lean_Exception_isFailedToSynthesize___closed__4;
x_27 = l_Substring_beq(x_25, x_26);
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_18);
return x_29;
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Exception(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Lean_Exception(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Exception(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_successIfFail___rarg___lambda__3___closed__1 = _init_l_successIfFail___rarg___lambda__3___closed__1();
lean_mark_persistent(l_successIfFail___rarg___lambda__3___closed__1);
l_successIfFail___rarg___lambda__3___closed__2 = _init_l_successIfFail___rarg___lambda__3___closed__2();
lean_mark_persistent(l_successIfFail___rarg___lambda__3___closed__2);
l_successIfFail___rarg___closed__1 = _init_l_successIfFail___rarg___closed__1();
lean_mark_persistent(l_successIfFail___rarg___closed__1);
l_Lean_Exception_isFailedToSynthesize___closed__1 = _init_l_Lean_Exception_isFailedToSynthesize___closed__1();
lean_mark_persistent(l_Lean_Exception_isFailedToSynthesize___closed__1);
l_Lean_Exception_isFailedToSynthesize___closed__2 = _init_l_Lean_Exception_isFailedToSynthesize___closed__2();
lean_mark_persistent(l_Lean_Exception_isFailedToSynthesize___closed__2);
l_Lean_Exception_isFailedToSynthesize___closed__3 = _init_l_Lean_Exception_isFailedToSynthesize___closed__3();
lean_mark_persistent(l_Lean_Exception_isFailedToSynthesize___closed__3);
l_Lean_Exception_isFailedToSynthesize___closed__4 = _init_l_Lean_Exception_isFailedToSynthesize___closed__4();
lean_mark_persistent(l_Lean_Exception_isFailedToSynthesize___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
