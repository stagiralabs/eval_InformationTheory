// Lean compiler output
// Module: Mathlib.Data.Fintype.Parity
// Imports: Init Mathlib.Data.Fintype.Card Mathlib.Algebra.Group.Even
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
LEAN_EXPORT lean_object* l_Fintype_IsSquare_decidablePred___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_IsSquare_decidablePred(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_IsSquare_decidablePred___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Finset_decidableExistsAndFinset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Fintype_IsSquare_decidablePred___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_IsSquare_decidablePred___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_4);
x_5 = lean_apply_2(x_1, x_4, x_4);
x_6 = lean_apply_2(x_2, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Fintype_IsSquare_decidablePred___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_alloc_closure((void*)(l_Fintype_IsSquare_decidablePred___rarg___lambda__1), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
lean_closure_set(x_5, 2, x_4);
x_6 = l_Finset_decidableExistsAndFinset___rarg(x_2, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fintype_IsSquare_decidablePred(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_IsSquare_decidablePred___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_IsSquare_decidablePred___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Fintype_IsSquare_decidablePred___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Even(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Fintype_Parity(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Card(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Even(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
