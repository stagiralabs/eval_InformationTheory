// Lean compiler output
// Module: Mathlib.MeasureTheory.Measure.MeasureSpace
// Imports: Init Mathlib.MeasureTheory.Measure.NullMeasurable Mathlib.Topology.Algebra.Order.LiminfLimsup Mathlib.Order.Interval.Set.Monotone
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
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_coeAddHom___rarg(lean_object*, lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_cofinite___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instMulAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instPartialOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instInhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instDistribMulAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_coeAddHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instModule___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instModule___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instSMul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_cofinite(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instZero(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instMulAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instDistribMulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instMulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instModule___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instDistribMulAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instPartialOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_coeAddHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instZero___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instDistribMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory_Measure_instPartialOrder___closed__1;
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instModule(lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory_Measure_instZero___closed__1;
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instSMul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_MeasureTheory_Measure_instZero___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instZero(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasureTheory_Measure_instZero___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instZero___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasureTheory_Measure_instZero(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instInhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasureTheory_Measure_instZero___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instInhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasureTheory_Measure_instInhabited(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_apply_1(x_5, lean_box(0));
x_8 = lean_apply_2(x_1, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instSMul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_Measure_instSMul___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instSMul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_Measure_instSMul___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_apply_1(x_5, lean_box(0));
x_8 = lean_apply_2(x_1, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MeasureTheory_Measure_instMulAction___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instMulAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_Measure_instMulAction___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasureTheory_Measure_instMulAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_coeAddHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_coeAddHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_Measure_coeAddHom___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_coeAddHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_Measure_coeAddHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instDistribMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_apply_1(x_5, lean_box(0));
x_8 = lean_apply_2(x_1, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instDistribMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MeasureTheory_Measure_instDistribMulAction___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instDistribMulAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_Measure_instDistribMulAction___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instDistribMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasureTheory_Measure_instDistribMulAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instModule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_apply_1(x_5, lean_box(0));
x_8 = lean_apply_2(x_1, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instModule(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MeasureTheory_Measure_instModule___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instModule___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_Measure_instModule___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasureTheory_Measure_instModule(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_MeasureTheory_Measure_instPartialOrder___closed__1() {
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
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instPartialOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_Measure_instPartialOrder___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_instPartialOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_Measure_instPartialOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_cofinite(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_cofinite___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasureTheory_Measure_cofinite(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_NullMeasurable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Order_LiminfLimsup(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Set_Monotone(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Measure_MeasureSpace(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_NullMeasurable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Order_LiminfLimsup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Set_Monotone(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MeasureTheory_Measure_instZero___closed__1 = _init_l_MeasureTheory_Measure_instZero___closed__1();
lean_mark_persistent(l_MeasureTheory_Measure_instZero___closed__1);
l_MeasureTheory_Measure_instPartialOrder___closed__1 = _init_l_MeasureTheory_Measure_instPartialOrder___closed__1();
lean_mark_persistent(l_MeasureTheory_Measure_instPartialOrder___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
