// Lean compiler output
// Module: Mathlib.MeasureTheory.Decomposition.Jordan
// Imports: Init Mathlib.MeasureTheory.Decomposition.SignedHahn Mathlib.MeasureTheory.Measure.MutuallySingular Mathlib.Topology.Algebra.UniformMulAction
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
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instZero___rarg___boxed(lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instInvolutiveNeg(lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instInvolutiveNeg___rarg(lean_object*, lean_object*);
static lean_object* l_MeasureTheory_JordanDecomposition_instZero___rarg___closed__1;
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instZero(lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instZero___rarg(lean_object*);
static lean_object* l_MeasureTheory_JordanDecomposition_instZero___rarg___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instZero___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instInvolutiveNeg___rarg___boxed(lean_object*, lean_object*);
static lean_object* _init_l_MeasureTheory_JordanDecomposition_instZero___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instZero___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MeasureTheory_JordanDecomposition_instZero___rarg___lambda__1___closed__1;
return x_2;
}
}
static lean_object* _init_l_MeasureTheory_JordanDecomposition_instZero___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MeasureTheory_JordanDecomposition_instZero___rarg___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MeasureTheory_JordanDecomposition_instZero___rarg___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MeasureTheory_JordanDecomposition_instZero___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instZero___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MeasureTheory_JordanDecomposition_instZero___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MeasureTheory_JordanDecomposition_instZero___rarg___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MeasureTheory_JordanDecomposition_instInhabited___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MeasureTheory_JordanDecomposition_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instInvolutiveNeg___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instInvolutiveNeg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MeasureTheory_JordanDecomposition_instInvolutiveNeg___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_JordanDecomposition_instInvolutiveNeg___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_JordanDecomposition_instInvolutiveNeg___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Decomposition_SignedHahn(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_MutuallySingular(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_UniformMulAction(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Decomposition_Jordan(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Decomposition_SignedHahn(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_MutuallySingular(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_UniformMulAction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MeasureTheory_JordanDecomposition_instZero___rarg___lambda__1___closed__1 = _init_l_MeasureTheory_JordanDecomposition_instZero___rarg___lambda__1___closed__1();
lean_mark_persistent(l_MeasureTheory_JordanDecomposition_instZero___rarg___lambda__1___closed__1);
l_MeasureTheory_JordanDecomposition_instZero___rarg___closed__1 = _init_l_MeasureTheory_JordanDecomposition_instZero___rarg___closed__1();
lean_mark_persistent(l_MeasureTheory_JordanDecomposition_instZero___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
