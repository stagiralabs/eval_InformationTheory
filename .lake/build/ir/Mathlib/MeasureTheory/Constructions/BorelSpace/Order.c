// Lean compiler output
// Module: Mathlib.MeasureTheory.Constructions.BorelSpace.Order
// Imports: Init Mathlib.Topology.Semicontinuous Mathlib.MeasureTheory.Function.AEMeasurableSequence Mathlib.MeasureTheory.Order.Lattice Mathlib.Topology.Order.Lattice Mathlib.MeasureTheory.Constructions.BorelSpace.Basic
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
LEAN_EXPORT lean_object* l_Homemorph_toMeasurableEquiv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Homemorph_toMeasurableEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homemorph_toMeasurableEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homemorph_toMeasurableEquiv___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Homemorph_toMeasurableEquiv___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Homemorph_toMeasurableEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Homemorph_toMeasurableEquiv___rarg___boxed), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Homemorph_toMeasurableEquiv___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Homemorph_toMeasurableEquiv___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Homemorph_toMeasurableEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Homemorph_toMeasurableEquiv(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Semicontinuous(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Function_AEMeasurableSequence(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Order_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_Order(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Semicontinuous(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Function_AEMeasurableSequence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Order_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
