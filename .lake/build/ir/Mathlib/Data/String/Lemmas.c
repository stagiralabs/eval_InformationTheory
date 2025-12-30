// Lean compiler output
// Module: Mathlib.Data.String.Lemmas
// Imports: Init Mathlib.Data.Nat.Notation Mathlib.Data.String.Defs Mathlib.Tactic.Basic
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
lean_object* lean_string_data(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_String_Lemmas_0__String_IsPrefix_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_String_Lemmas_0__String_IsPrefix_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_String_Lemmas_0__String_IsPrefix_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_string_data(x_1);
x_5 = lean_string_data(x_2);
x_6 = lean_apply_2(x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_String_Lemmas_0__String_IsPrefix_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_String_Lemmas_0__String_IsPrefix_match__1_splitter___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Notation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_String_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_String_Lemmas(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_String_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
