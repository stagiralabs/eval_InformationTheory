// Lean compiler output
// Module: Mathlib.RingTheory.MvPowerSeries.LinearTopology
// Imports: Init Mathlib.Data.Finsupp.Interval Mathlib.RingTheory.MvPowerSeries.PiTopology Mathlib.Topology.Algebra.LinearTopology Mathlib.RingTheory.TwoSidedIdeal.Operations
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
LEAN_EXPORT lean_object* l_MvPowerSeries_LinearTopology_basis(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_mk_x27___at_MvPowerSeries_LinearTopology_basis___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_mk_x27___at_MvPowerSeries_LinearTopology_basis___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_LinearTopology_basis___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_LinearTopology_basis___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_mk_x27___at_MvPowerSeries_LinearTopology_basis___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_LinearTopology_basis___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_LinearTopology_basis(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvPowerSeries_LinearTopology_basis___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_mk_x27___at_MvPowerSeries_LinearTopology_basis___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_TwoSidedIdeal_mk_x27___at_MvPowerSeries_LinearTopology_basis___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_LinearTopology_basis___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvPowerSeries_LinearTopology_basis___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Interval(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_MvPowerSeries_PiTopology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_LinearTopology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_TwoSidedIdeal_Operations(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_MvPowerSeries_LinearTopology(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Interval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_MvPowerSeries_PiTopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_LinearTopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_TwoSidedIdeal_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
