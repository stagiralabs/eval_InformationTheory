// Lean compiler output
// Module: Mathlib.Algebra.Ring.Int.Parity
// Imports: Init Mathlib.Algebra.Ring.Parity Mathlib.Algebra.Ring.Int.Defs Mathlib.Algebra.Group.Int.Even
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
uint8_t l_Int_instDecidablePredEven(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT uint8_t l_Int_instDecidablePredOdd(lean_object*);
LEAN_EXPORT lean_object* l_Int_instDecidablePredOdd___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Int_instDecidablePredOdd(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; 
x_2 = l_Int_instDecidablePredEven(x_1);
x_3 = l_instDecidableNot___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_instDecidablePredOdd___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Int_instDecidablePredOdd(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Parity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Int_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Int_Even(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_Int_Parity(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Parity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Int_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Int_Even(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
