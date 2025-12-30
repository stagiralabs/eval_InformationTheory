// Lean compiler output
// Module: Mathlib.AlgebraicTopology.FundamentalGroupoid.InducedMaps
// Imports: Init Mathlib.Topology.Homotopy.Equiv Mathlib.CategoryTheory.Equivalence Mathlib.AlgebraicTopology.FundamentalGroupoid.Product
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
LEAN_EXPORT lean_object* l_unitInterval_path01;
static lean_object* l_unitInterval_path01___closed__1;
LEAN_EXPORT lean_object* l_ContinuousMap_Homotopy_uliftMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_Homotopy_uliftMap___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitInterval_uhpath01;
LEAN_EXPORT lean_object* l_ContinuousMap_Homotopy_uliftMap___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_Homotopy_uliftMap___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_unitInterval_uhpath01___closed__1;
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_Homotopy_uliftMap___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitInterval_upath01(lean_object*);
LEAN_EXPORT lean_object* l_unitInterval_upath01___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_Homotopy_uliftMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_unitInterval_path01___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_unitInterval_path01() {
_start:
{
lean_object* x_1; 
x_1 = l_unitInterval_path01___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_unitInterval_upath01(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_unitInterval_upath01___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_unitInterval_upath01(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_unitInterval_uhpath01___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_unitInterval_upath01___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_unitInterval_uhpath01() {
_start:
{
lean_object* x_1; 
x_1 = l_unitInterval_uhpath01___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_Homotopy_uliftMap___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_apply_1(x_1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_4);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_apply_1(x_1, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_Homotopy_uliftMap___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContinuousMap_Homotopy_uliftMap___elambda__1___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_Homotopy_uliftMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_ContinuousMap_Homotopy_uliftMap___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_1);
lean_closure_set(x_6, 2, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_Homotopy_uliftMap___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContinuousMap_Homotopy_uliftMap___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_Homotopy_uliftMap___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContinuousMap_Homotopy_uliftMap___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_Homotopy_uliftMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ContinuousMap_Homotopy_uliftMap(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Homotopy_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Equivalence(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicTopology_FundamentalGroupoid_Product(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicTopology_FundamentalGroupoid_InducedMaps(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Homotopy_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Equivalence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicTopology_FundamentalGroupoid_Product(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_unitInterval_path01___closed__1 = _init_l_unitInterval_path01___closed__1();
lean_mark_persistent(l_unitInterval_path01___closed__1);
l_unitInterval_path01 = _init_l_unitInterval_path01();
lean_mark_persistent(l_unitInterval_path01);
l_unitInterval_uhpath01___closed__1 = _init_l_unitInterval_uhpath01___closed__1();
lean_mark_persistent(l_unitInterval_uhpath01___closed__1);
l_unitInterval_uhpath01 = _init_l_unitInterval_uhpath01();
lean_mark_persistent(l_unitInterval_uhpath01);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
