// Lean compiler output
// Module: Mathlib.Analysis.Complex.Circle
// Imports: Init Mathlib.Analysis.SpecialFunctions.Exp Mathlib.Topology.ContinuousMap.Basic Mathlib.Analysis.Normed.Field.UnitBall
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
LEAN_EXPORT lean_object* l_instCircleTopologicalSpace;
lean_object* l_subtypeCoe___rarg___boxed(lean_object*);
static lean_object* l_Circle_instCoeOut___closed__1;
LEAN_EXPORT lean_object* l_Circle_coeHom(lean_object*);
LEAN_EXPORT lean_object* l_Circle_coeHom___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Circle_instCoeOut;
static lean_object* _init_l_instCircleTopologicalSpace() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Circle_instCoeOut___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_subtypeCoe___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Circle_instCoeOut() {
_start:
{
lean_object* x_1; 
x_1 = l_Circle_instCoeOut___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Circle_coeHom(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Circle_coeHom___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Circle_coeHom(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_Exp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Field_UnitBall(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Complex_Circle(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_Exp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Field_UnitBall(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instCircleTopologicalSpace = _init_l_instCircleTopologicalSpace();
lean_mark_persistent(l_instCircleTopologicalSpace);
l_Circle_instCoeOut___closed__1 = _init_l_Circle_instCoeOut___closed__1();
lean_mark_persistent(l_Circle_instCoeOut___closed__1);
l_Circle_instCoeOut = _init_l_Circle_instCoeOut();
lean_mark_persistent(l_Circle_instCoeOut);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
