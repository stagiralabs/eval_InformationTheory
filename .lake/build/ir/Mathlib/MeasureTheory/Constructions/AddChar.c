// Lean compiler output
// Module: Mathlib.MeasureTheory.Constructions.AddChar
// Imports: Init Mathlib.Algebra.Group.AddChar Mathlib.MeasureTheory.MeasurableSpace.Defs
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
static lean_object* l_AddChar_instMeasurableSpace___closed__1;
LEAN_EXPORT lean_object* l_AddChar_instMeasurableSpace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MeasurableSpace_instCompleteLattice(lean_object*);
LEAN_EXPORT lean_object* l_AddChar_instMeasurableSpace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_AddChar_instMeasurableSpace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_MeasurableSpace_instCompleteLattice(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddChar_instMeasurableSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_AddChar_instMeasurableSpace___closed__1;
x_9 = lean_ctor_get(x_8, 3);
lean_inc(x_9);
return x_9;
}
}
LEAN_EXPORT lean_object* l_AddChar_instMeasurableSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddChar_instMeasurableSpace(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_AddChar(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_MeasurableSpace_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Constructions_AddChar(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_AddChar(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_MeasurableSpace_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AddChar_instMeasurableSpace___closed__1 = _init_l_AddChar_instMeasurableSpace___closed__1();
lean_mark_persistent(l_AddChar_instMeasurableSpace___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
