// Lean compiler output
// Module: Mathlib.Analysis.NormedSpace.ENormedSpace
// Imports: Init Mathlib.Analysis.Normed.Module.Basic Mathlib.LinearAlgebra.Basis.VectorSpace
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
lean_object* l_DivisionRing_toDivisionSemiring___rarg(lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
LEAN_EXPORT lean_object* l_ENormedSpace_normedAddCommGroup___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_ENormedSpace_partialOrder___closed__1;
LEAN_EXPORT lean_object* l_ENormedSpace_metricSpace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_emetricSpace___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_instCoeFunForallENNReal___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_finiteSubspace___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_UniformSpace_ofFun___at_uniformSpaceOfEDist___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_finiteSubspace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_normedAddCommGroup___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_addCommGroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_finiteSubspace___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_metricSpace___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NormedField_toNormedDivisionRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_emetricSpace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_instCoeFunForallENNReal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_normedAddCommGroup___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_normedSpace___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_emetricSpace___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_partialOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_emetricSpace___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_module___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_metricSpace___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_normedSpace___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_instCoeFunForallENNReal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_finiteSubspace___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_normedAddCommGroup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_normedSpace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_normedAddCommGroup___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_partialOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instEMetricSpaceSubtype___rarg(lean_object*);
static lean_object* l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg___lambda__1___closed__1;
lean_object* l_WithTop_recTopCoe___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_emetricSpace___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENormedSpace_instCoeFunForallENNReal___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_instCoeFunForallENNReal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_ENormedSpace_instCoeFunForallENNReal___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_instCoeFunForallENNReal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ENormedSpace_instCoeFunForallENNReal(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
static lean_object* _init_l_ENormedSpace_partialOrder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_partialOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ENormedSpace_partialOrder___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_partialOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ENormedSpace_partialOrder(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_emetricSpace___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, x_3, x_4);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_emetricSpace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_ENormedSpace_emetricSpace___rarg___lambda__1), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_UniformSpace_ofFun___at_uniformSpaceOfEDist___spec__1(lean_box(0), x_4, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_emetricSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ENormedSpace_emetricSpace___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_emetricSpace___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ENormedSpace_emetricSpace___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_emetricSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ENormedSpace_emetricSpace(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_finiteSubspace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_finiteSubspace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ENormedSpace_finiteSubspace___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_finiteSubspace___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ENormedSpace_finiteSubspace___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_finiteSubspace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ENormedSpace_finiteSubspace(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, x_3, x_4);
x_7 = lean_apply_1(x_2, x_6);
x_8 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_9 = l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg___lambda__1___closed__1;
x_10 = l_WithTop_recTopCoe___rarg(x_8, x_9, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_3);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_ENormedSpace_emetricSpace___rarg___lambda__1), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
x_6 = l_UniformSpace_ofFun___at_uniformSpaceOfEDist___spec__1(lean_box(0), x_5, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
lean_inc(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_instEMetricSpaceSubtype___rarg(x_7);
x_9 = lean_alloc_closure((void*)(l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg___lambda__1), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, lean_box(0));
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_5);
lean_ctor_set(x_12, 2, x_10);
lean_ctor_set(x_12, 3, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_metricSpace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg(x_2, x_3, x_4, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_metricSpace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ENormedSpace_metricSpace___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_metricSpace___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ENormedSpace_metricSpace___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_normedAddCommGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_5 = l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg___lambda__1___closed__1;
x_6 = l_WithTop_recTopCoe___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_normedAddCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_1);
x_4 = l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg(x_1, x_2, x_3, lean_box(0));
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_ENormedSpace_normedAddCommGroup___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = l_ENormedSpace_finiteSubspace___rarg(x_1, x_2, x_3);
lean_dec(x_3);
x_7 = l_Submodule_addCommGroup___rarg(x_1, x_2, x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
lean_ctor_set(x_8, 2, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_normedAddCommGroup(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ENormedSpace_normedAddCommGroup___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_normedAddCommGroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ENormedSpace_normedAddCommGroup___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_normedAddCommGroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ENormedSpace_normedAddCommGroup(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_normedSpace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = l_NormedField_toNormedDivisionRing___rarg(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_DivisionRing_toDivisionSemiring___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
x_10 = l_ENormedSpace_finiteSubspace___rarg(x_2, x_3, x_4);
x_11 = l_Submodule_module___rarg(x_8, x_9, x_3, x_10);
lean_dec(x_10);
lean_dec(x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_normedSpace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ENormedSpace_normedSpace___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ENormedSpace_normedSpace___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ENormedSpace_normedSpace___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Module_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Basis_VectorSpace(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_NormedSpace_ENormedSpace(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Module_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Basis_VectorSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ENormedSpace_partialOrder___closed__1 = _init_l_ENormedSpace_partialOrder___closed__1();
lean_mark_persistent(l_ENormedSpace_partialOrder___closed__1);
l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg___lambda__1___closed__1 = _init_l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg___lambda__1___closed__1();
lean_mark_persistent(l_EMetricSpace_toMetricSpace___at_ENormedSpace_metricSpace___spec__1___rarg___lambda__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
