// Lean compiler output
// Module: Mathlib.RingTheory.PowerSeries.PiTopology
// Imports: Init Mathlib.RingTheory.MvPowerSeries.PiTopology Mathlib.RingTheory.PowerSeries.Basic Mathlib.LinearAlgebra.Finsupp.Pi
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
LEAN_EXPORT lean_object* l_PowerSeries_WithPiTopology_instTopologicalSpace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_WithPiTopology_instUniformSpace___rarg(lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_WithPiTopology_instUniformSpace(lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_WithPiTopology_instTopologicalSpace(lean_object*, lean_object*);
lean_object* l_MvPowerSeries_WithPiTopology_instUniformSpace___rarg(lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_WithPiTopology_instTopologicalSpace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_WithPiTopology_instTopologicalSpace___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PowerSeries_WithPiTopology_instTopologicalSpace(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_WithPiTopology_instUniformSpace___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MvPowerSeries_WithPiTopology_instUniformSpace___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_WithPiTopology_instUniformSpace(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PowerSeries_WithPiTopology_instUniformSpace___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_MvPowerSeries_PiTopology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_PowerSeries_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Finsupp_Pi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_PowerSeries_PiTopology(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_MvPowerSeries_PiTopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_PowerSeries_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Finsupp_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
