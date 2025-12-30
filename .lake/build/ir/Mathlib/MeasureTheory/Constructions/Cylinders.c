// Lean compiler output
// Module: Mathlib.MeasureTheory.Constructions.Cylinders
// Imports: Init Mathlib.MeasureTheory.PiSystem Mathlib.Topology.Constructions Mathlib.MeasureTheory.MeasurableSpace.Basic
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
LEAN_EXPORT lean_object* l_MeasureTheory_cylinderEvents___lambda__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_cylinderEvents___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_cylinderEvents___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_MeasureTheory_cylinderEvents___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_cylinderEvents(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory_cylinderEvents___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_iSup___at_MeasureTheory_cylinderEvents___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_MeasureTheory_cylinderEvents___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_cylinderEvents___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_MeasureTheory_cylinderEvents___spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory_cylinderEvents___closed__1;
LEAN_EXPORT lean_object* l_iSup___at_MeasureTheory_cylinderEvents___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_iSup___at_MeasureTheory_cylinderEvents___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_cylinderEvents___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_MeasureTheory_cylinderEvents___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MeasureTheory_cylinderEvents___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_cylinderEvents___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_MeasureTheory_cylinderEvents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MeasureTheory_cylinderEvents___lambda__2___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_cylinderEvents(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iSup___at_MeasureTheory_cylinderEvents___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_iSup___at_MeasureTheory_cylinderEvents___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_iSup___at_MeasureTheory_cylinderEvents___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iSup___at_MeasureTheory_cylinderEvents___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_cylinderEvents___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MeasureTheory_cylinderEvents___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_cylinderEvents___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasureTheory_cylinderEvents(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_PiSystem(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Constructions(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_MeasurableSpace_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Constructions_Cylinders(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_PiSystem(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Constructions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_MeasurableSpace_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MeasureTheory_cylinderEvents___lambda__2___closed__1 = _init_l_MeasureTheory_cylinderEvents___lambda__2___closed__1();
lean_mark_persistent(l_MeasureTheory_cylinderEvents___lambda__2___closed__1);
l_MeasureTheory_cylinderEvents___closed__1 = _init_l_MeasureTheory_cylinderEvents___closed__1();
lean_mark_persistent(l_MeasureTheory_cylinderEvents___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
