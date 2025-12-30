// Lean compiler output
// Module: Mathlib.MeasureTheory.Measure.Content
// Imports: Init Mathlib.MeasureTheory.Measure.MeasureSpace Mathlib.MeasureTheory.Measure.Regular Mathlib.Topology.Sets.Compacts
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
LEAN_EXPORT lean_object* l_MeasureTheory_instInhabitedContent(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_instInhabitedContent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Content_instFunLikeCompactsENNReal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Content_instFunLikeCompactsENNReal___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Content_instFunLikeCompactsENNReal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_instInhabitedContent(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_instInhabitedContent___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasureTheory_instInhabitedContent(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Content_instFunLikeCompactsENNReal___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Content_instFunLikeCompactsENNReal(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_Content_instFunLikeCompactsENNReal___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Content_instFunLikeCompactsENNReal___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_Content_instFunLikeCompactsENNReal(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_MeasureSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_Regular(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sets_Compacts(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Measure_Content(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_MeasureSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_Regular(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sets_Compacts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
