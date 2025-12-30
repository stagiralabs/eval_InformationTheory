// Lean compiler output
// Module: Mathlib.Deprecated.NatLemmas
// Imports: Init Batteries.Data.Nat.Lemmas Mathlib.Util.AssertExists Mathlib.Data.Nat.Notation
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
lean_object* l___private_Init_Data_Nat_Basic_0__Nat_recCompiled___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_discriminate___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_discriminate___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_discriminate___rarg___closed__1;
static lean_object* l_Nat_discriminate___rarg___closed__2;
LEAN_EXPORT lean_object* l_Nat_discriminate___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_discriminate___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_discriminate___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_discriminate(lean_object*);
LEAN_EXPORT lean_object* l_Nat_discriminate___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_discriminate___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_discriminate___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_4, x_1, lean_box(0));
return x_5;
}
}
static lean_object* _init_l_Nat_discriminate___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_discriminate___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_discriminate___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_discriminate___rarg___lambda__2___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_discriminate___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Nat_discriminate___rarg___closed__1;
x_5 = l_Nat_discriminate___rarg___closed__2;
x_6 = l___private_Init_Data_Nat_Basic_0__Nat_recCompiled___rarg(x_4, x_5, x_1);
x_7 = lean_apply_2(x_6, x_2, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_discriminate(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_discriminate___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_discriminate___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_discriminate___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_discriminate___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_discriminate___rarg___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_discriminate___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_discriminate___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_Nat_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Util_AssertExists(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Notation(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Deprecated_NatLemmas(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_Nat_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Util_AssertExists(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_discriminate___rarg___closed__1 = _init_l_Nat_discriminate___rarg___closed__1();
lean_mark_persistent(l_Nat_discriminate___rarg___closed__1);
l_Nat_discriminate___rarg___closed__2 = _init_l_Nat_discriminate___rarg___closed__2();
lean_mark_persistent(l_Nat_discriminate___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
