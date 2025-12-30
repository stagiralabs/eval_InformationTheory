// Lean compiler output
// Module: Mathlib.MeasureTheory.Measure.Stieltjes
// Imports: Init Mathlib.MeasureTheory.Constructions.BorelSpace.Order Mathlib.Topology.Order.LeftRightLim Mathlib.Topology.Algebra.UniformMulAction
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
LEAN_EXPORT lean_object* l_StieltjesFunction_id___elambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_StieltjesFunction_instAddCommMonoid___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StieltjesFunction_const___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StieltjesFunction_add(lean_object*, lean_object*);
static lean_object* l_StieltjesFunction_id___closed__1;
LEAN_EXPORT lean_object* l_StieltjesFunction_instAddCommMonoid;
static lean_object* l_StieltjesFunction_instAddCommMonoid___closed__2;
static lean_object* l_StieltjesFunction_instAddZeroClass___closed__1;
LEAN_EXPORT lean_object* l_StieltjesFunction_instAddZeroClass;
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_StieltjesFunction_instAddCommMonoid___spec__1(lean_object*, lean_object*);
static lean_object* l_StieltjesFunction_instAddZeroClass___closed__3;
static lean_object* l_StieltjesFunction_instAddZeroClass___closed__2;
LEAN_EXPORT lean_object* l_StieltjesFunction_const(lean_object*);
LEAN_EXPORT lean_object* l_StieltjesFunction_instCoeFun(lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StieltjesFunction_const___elambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_StieltjesFunction_instAddCommMonoid___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StieltjesFunction_add___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StieltjesFunction_id___elambda__1(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StieltjesFunction_id;
LEAN_EXPORT lean_object* l_StieltjesFunction_instModuleNNReal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StieltjesFunction_instInhabited;
LEAN_EXPORT lean_object* l_StieltjesFunction_instCoeFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StieltjesFunction_id___elambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_StieltjesFunction_id___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_StieltjesFunction_id___elambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_StieltjesFunction_id() {
_start:
{
lean_object* x_1; 
x_1 = l_StieltjesFunction_id___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_StieltjesFunction_id___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_StieltjesFunction_id___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_StieltjesFunction_instInhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_StieltjesFunction_id;
return x_1;
}
}
LEAN_EXPORT lean_object* l_StieltjesFunction_const___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_StieltjesFunction_const(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StieltjesFunction_const___elambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StieltjesFunction_const___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_StieltjesFunction_const___elambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StieltjesFunction_add___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_3);
x_6 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_StieltjesFunction_add(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_StieltjesFunction_add___elambda__1), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_StieltjesFunction_instAddZeroClass___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_2 = lean_alloc_closure((void*)(l_StieltjesFunction_const___elambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_StieltjesFunction_instAddZeroClass___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_StieltjesFunction_add), 2, 0);
return x_1;
}
}
static lean_object* _init_l_StieltjesFunction_instAddZeroClass___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_StieltjesFunction_instAddZeroClass___closed__1;
x_2 = l_StieltjesFunction_instAddZeroClass___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_StieltjesFunction_instAddZeroClass() {
_start:
{
lean_object* x_1; 
x_1 = l_StieltjesFunction_instAddZeroClass___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_StieltjesFunction_instAddCommMonoid___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_1, x_5);
lean_inc(x_2);
x_7 = l_nsmulRec___at_StieltjesFunction_instAddCommMonoid___spec__1(x_6, x_2);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_StieltjesFunction_add___elambda__1), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_2);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = l_StieltjesFunction_instAddZeroClass___closed__1;
return x_9;
}
}
}
static lean_object* _init_l_StieltjesFunction_instAddCommMonoid___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_nsmulRec___at_StieltjesFunction_instAddCommMonoid___spec__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_StieltjesFunction_instAddCommMonoid___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_StieltjesFunction_instAddZeroClass;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_StieltjesFunction_instAddZeroClass___closed__2;
x_4 = l_StieltjesFunction_instAddCommMonoid___closed__1;
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_StieltjesFunction_instAddCommMonoid() {
_start:
{
lean_object* x_1; 
x_1 = l_StieltjesFunction_instAddCommMonoid___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_StieltjesFunction_instAddCommMonoid___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_nsmulRec___at_StieltjesFunction_instAddCommMonoid___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StieltjesFunction_instModuleNNReal(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(x_1, x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_Order(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_LeftRightLim(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_UniformMulAction(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Measure_Stieltjes(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_Order(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_LeftRightLim(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_UniformMulAction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_StieltjesFunction_id___closed__1 = _init_l_StieltjesFunction_id___closed__1();
lean_mark_persistent(l_StieltjesFunction_id___closed__1);
l_StieltjesFunction_id = _init_l_StieltjesFunction_id();
lean_mark_persistent(l_StieltjesFunction_id);
l_StieltjesFunction_instInhabited = _init_l_StieltjesFunction_instInhabited();
lean_mark_persistent(l_StieltjesFunction_instInhabited);
l_StieltjesFunction_instAddZeroClass___closed__1 = _init_l_StieltjesFunction_instAddZeroClass___closed__1();
lean_mark_persistent(l_StieltjesFunction_instAddZeroClass___closed__1);
l_StieltjesFunction_instAddZeroClass___closed__2 = _init_l_StieltjesFunction_instAddZeroClass___closed__2();
lean_mark_persistent(l_StieltjesFunction_instAddZeroClass___closed__2);
l_StieltjesFunction_instAddZeroClass___closed__3 = _init_l_StieltjesFunction_instAddZeroClass___closed__3();
lean_mark_persistent(l_StieltjesFunction_instAddZeroClass___closed__3);
l_StieltjesFunction_instAddZeroClass = _init_l_StieltjesFunction_instAddZeroClass();
lean_mark_persistent(l_StieltjesFunction_instAddZeroClass);
l_StieltjesFunction_instAddCommMonoid___closed__1 = _init_l_StieltjesFunction_instAddCommMonoid___closed__1();
lean_mark_persistent(l_StieltjesFunction_instAddCommMonoid___closed__1);
l_StieltjesFunction_instAddCommMonoid___closed__2 = _init_l_StieltjesFunction_instAddCommMonoid___closed__2();
lean_mark_persistent(l_StieltjesFunction_instAddCommMonoid___closed__2);
l_StieltjesFunction_instAddCommMonoid = _init_l_StieltjesFunction_instAddCommMonoid();
lean_mark_persistent(l_StieltjesFunction_instAddCommMonoid);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
