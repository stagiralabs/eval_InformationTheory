// Lean compiler output
// Module: Mathlib.Analysis.BoxIntegral.Partition.Measure
// Imports: Init Mathlib.Analysis.BoxIntegral.Partition.Additive Mathlib.MeasureTheory.Measure.Lebesgue.Basic
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
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
static lean_object* l_MeasureTheory_Measure_toBoxAdditive___elambda__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_toBoxAdditive___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_toBoxAdditive___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_toBoxAdditive(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_toBoxAdditive___elambda__1(lean_object*);
lean_object* l_WithTop_recTopCoe___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_toBoxAdditive___elambda__1___rarg(lean_object*, lean_object*);
static lean_object* _init_l_MeasureTheory_Measure_toBoxAdditive___elambda__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_toBoxAdditive___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_apply_1(x_1, lean_box(0));
x_4 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_5 = l_MeasureTheory_Measure_toBoxAdditive___elambda__1___rarg___closed__1;
x_6 = l_WithTop_recTopCoe___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_toBoxAdditive___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MeasureTheory_Measure_toBoxAdditive___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_toBoxAdditive___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_Measure_toBoxAdditive___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_toBoxAdditive(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_Measure_toBoxAdditive___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_toBoxAdditive___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_Measure_toBoxAdditive___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_BoxIntegral_Partition_Additive(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_Lebesgue_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_BoxIntegral_Partition_Measure(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_BoxIntegral_Partition_Additive(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_Lebesgue_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MeasureTheory_Measure_toBoxAdditive___elambda__1___rarg___closed__1 = _init_l_MeasureTheory_Measure_toBoxAdditive___elambda__1___rarg___closed__1();
lean_mark_persistent(l_MeasureTheory_Measure_toBoxAdditive___elambda__1___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
