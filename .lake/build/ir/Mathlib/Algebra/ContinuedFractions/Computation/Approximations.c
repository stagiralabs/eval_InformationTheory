// Lean compiler output
// Module: Mathlib.Algebra.ContinuedFractions.Computation.Approximations
// Imports: Init Mathlib.Algebra.ContinuedFractions.Determinant Mathlib.Algebra.ContinuedFractions.Computation.CorrectnessTerminating Mathlib.Algebra.Order.Ring.Basic Mathlib.Data.Nat.Fib.Basic Mathlib.Tactic.Monotonicity
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
LEAN_EXPORT lean_object* l_ContFract_of(lean_object*);
lean_object* l_GenContFract_of___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpContFract_of___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContFract_of___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpContFract_of(lean_object*);
LEAN_EXPORT lean_object* l_SimpContFract_of___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_GenContFract_of___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpContFract_of(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpContFract_of___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContFract_of___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_GenContFract_of___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContFract_of(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ContFract_of___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_ContinuedFractions_Determinant(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_ContinuedFractions_Computation_CorrectnessTerminating(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Fib_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Monotonicity(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_ContinuedFractions_Computation_Approximations(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_ContinuedFractions_Determinant(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_ContinuedFractions_Computation_CorrectnessTerminating(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Fib_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Monotonicity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
