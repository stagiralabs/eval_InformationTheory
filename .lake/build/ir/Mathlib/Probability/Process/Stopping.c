// Lean compiler output
// Module: Mathlib.Probability.Process.Stopping
// Imports: Init Mathlib.Probability.Process.Adapted Mathlib.MeasureTheory.Constructions.BorelSpace.Order
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
LEAN_EXPORT lean_object* l_MeasureTheory_stoppedValue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_stoppedProcess___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_stoppedProcess___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_stoppedProcess(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_IsStoppingTime_measurableSpace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_stoppedValue___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_IsStoppingTime_measurableSpace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_IsStoppingTime_measurableSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_IsStoppingTime_measurableSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_IsStoppingTime_measurableSpace(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_stoppedValue___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_2(x_1, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_stoppedValue(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MeasureTheory_stoppedValue___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_stoppedProcess___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_LinearOrder_toLattice___rarg(x_1);
lean_inc(x_5);
x_7 = lean_apply_1(x_3, x_5);
x_8 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_6, x_4, x_7);
x_9 = lean_apply_2(x_2, x_8, x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_stoppedProcess(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MeasureTheory_stoppedProcess___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_stoppedProcess___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_stoppedProcess___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Probability_Process_Adapted(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_Order(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Probability_Process_Stopping(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Probability_Process_Adapted(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_Order(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
