// Lean compiler output
// Module: Mathlib.Dynamics.Ergodic.Action.OfMinimal
// Imports: Init Mathlib.Dynamics.Ergodic.Action.Regular Mathlib.MeasureTheory.Measure.ContinuousPreimage Mathlib.MeasureTheory.Measure.Haar.Unique
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
LEAN_EXPORT lean_object* l_DenseRange_zsmul__of__ergodic__add__left_match__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DenseRange_zsmul__of__ergodic__add__left_match__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DenseRange_zsmul__of__ergodic__add__left_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DenseRange_zsmul__of__ergodic__add__left_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DenseRange_zsmul__of__ergodic__add__left_match__1___rarg), 2, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Dynamics_Ergodic_Action_Regular(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_ContinuousPreimage(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_Haar_Unique(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Dynamics_Ergodic_Action_OfMinimal(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Dynamics_Ergodic_Action_Regular(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_ContinuousPreimage(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_Haar_Unique(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
