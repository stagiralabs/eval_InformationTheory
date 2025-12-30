// Lean compiler output
// Module: Mathlib.Topology.EMetricSpace.Pi
// Imports: Init Mathlib.Topology.EMetricSpace.Basic Mathlib.Topology.UniformSpace.Pi
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
lean_object* l_Finset_fold___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
lean_object* l_Pi_uniformSpace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_emetricSpacePi(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_pseudoEMetricSpacePi___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_Finset_sup___at_instEDistForall___spec__1___rarg___closed__1;
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_4896_(lean_object*, lean_object*);
static lean_object* l_Finset_sup___at_instEDistForall___spec__1___rarg___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_emetricSpacePi___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_pseudoEMetricSpacePi(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_instEDistForall___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_pseudoEMetricSpacePi___rarg___lambda__2(lean_object*, lean_object*);
lean_object* l_Option_map_u2082___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_instEDistForall___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_Finset_sup___at_instEDistForall___spec__1___rarg___closed__2;
LEAN_EXPORT lean_object* l_instEDistForall___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instEDistForall(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_instEDistForall___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instEDistForall___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_pseudoEMetricSpacePi___rarg(lean_object*, lean_object*);
static lean_object* _init_l_Finset_sup___at_instEDistForall___spec__1___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_4896_), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_instEDistForall___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Finset_sup___at_instEDistForall___spec__1___rarg___lambda__1___closed__1;
x_4 = l_Option_map_u2082___rarg(x_3, x_1, x_2);
return x_4;
}
}
static lean_object* _init_l_Finset_sup___at_instEDistForall___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Finset_sup___at_instEDistForall___spec__1___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_sup___at_instEDistForall___spec__1___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_instEDistForall___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Finset_sup___at_instEDistForall___spec__1___rarg___closed__2;
x_4 = l_Finset_sup___at_instEDistForall___spec__1___rarg___closed__1;
x_5 = l_Finset_fold___rarg(x_3, lean_box(0), lean_box(0), x_4, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_instEDistForall___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sup___at_instEDistForall___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instEDistForall___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
lean_inc(x_4);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_apply_3(x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_instEDistForall___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_instEDistForall___rarg___lambda__1), 4, 3);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_2);
x_6 = l_Finset_sup___at_instEDistForall___spec__1___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instEDistForall(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instEDistForall___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_pseudoEMetricSpacePi___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_pseudoEMetricSpacePi___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_pseudoEMetricSpacePi___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_pseudoEMetricSpacePi___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_instEDistForall___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_alloc_closure((void*)(l_pseudoEMetricSpacePi___rarg___lambda__2), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Pi_uniformSpace(lean_box(0), lean_box(0), x_5);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_pseudoEMetricSpacePi(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_pseudoEMetricSpacePi___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_emetricSpacePi___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_pseudoEMetricSpacePi___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_emetricSpacePi(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_emetricSpacePi___rarg), 2, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_EMetricSpace_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_Pi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_EMetricSpace_Pi(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_EMetricSpace_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_sup___at_instEDistForall___spec__1___rarg___lambda__1___closed__1 = _init_l_Finset_sup___at_instEDistForall___spec__1___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Finset_sup___at_instEDistForall___spec__1___rarg___lambda__1___closed__1);
l_Finset_sup___at_instEDistForall___spec__1___rarg___closed__1 = _init_l_Finset_sup___at_instEDistForall___spec__1___rarg___closed__1();
lean_mark_persistent(l_Finset_sup___at_instEDistForall___spec__1___rarg___closed__1);
l_Finset_sup___at_instEDistForall___spec__1___rarg___closed__2 = _init_l_Finset_sup___at_instEDistForall___spec__1___rarg___closed__2();
lean_mark_persistent(l_Finset_sup___at_instEDistForall___spec__1___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
