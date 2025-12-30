// Lean compiler output
// Module: Mathlib.Topology.MetricSpace.Defs
// Imports: Init Mathlib.Topology.MetricSpace.Pseudo.Defs
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
LEAN_EXPORT lean_object* l_instMetricSpaceOrderDual___rarg(lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
extern lean_object* l_instUniformSpacePUnit;
LEAN_EXPORT lean_object* l_instDistOrderDual___rarg___boxed(lean_object*);
static lean_object* l_instMetricSpacePUnit___closed__1;
LEAN_EXPORT lean_object* l_MetricSpace_replaceUniformity___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_instUniformSpaceEmpty;
LEAN_EXPORT lean_object* l_instMetricSpaceMultiplicative(lean_object*);
LEAN_EXPORT lean_object* l_instMetricSpacePUnit;
LEAN_EXPORT lean_object* l_instDistMultiplicative(lean_object*);
LEAN_EXPORT lean_object* l_instMetricSpaceMultiplicative___rarg___boxed(lean_object*);
static lean_object* l_instMetricSpaceEmpty___closed__1;
LEAN_EXPORT lean_object* l_instMetricSpaceEmpty___lambda__2(uint8_t, uint8_t);
static lean_object* l_instMetricSpacePUnit___closed__2;
LEAN_EXPORT lean_object* l_instMetricSpaceAdditive___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instMetricSpaceOrderDual(lean_object*);
LEAN_EXPORT lean_object* l_instMetricSpacePUnit___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MetricSpace_replaceBornology___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMetricSpaceOrderDual___rarg___boxed(lean_object*);
static lean_object* l_instMetricSpaceEmpty___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_instMetricSpacePUnit___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDistOrderDual(lean_object*);
static lean_object* l_instMetricSpaceEmpty___closed__3;
LEAN_EXPORT lean_object* l_instDistAdditive(lean_object*);
LEAN_EXPORT lean_object* l_instMetricSpaceEmpty___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MetricSpace_replaceUniformity(lean_object*);
LEAN_EXPORT lean_object* l_instMetricSpaceAdditive___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instDistMultiplicative___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MetricSpace_replaceBornology(lean_object*);
LEAN_EXPORT lean_object* l_MetricSpace_replaceTopology___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMetricSpaceEmpty___lambda__1(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_instMetricSpacePUnit___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MetricSpace_replaceTopology(lean_object*);
static lean_object* l_instMetricSpaceEmpty___closed__2;
LEAN_EXPORT lean_object* l_MetricSpace_ofDistTopology___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMetricSpacePUnit___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDistMultiplicative___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instMetricSpaceEmpty___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDistOrderDual___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instDistAdditive___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MetricSpace_ofDistTopology(lean_object*);
LEAN_EXPORT lean_object* l_instMetricSpaceMultiplicative___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instMetricSpaceAdditive(lean_object*);
LEAN_EXPORT lean_object* l_instDistAdditive___rarg(lean_object*);
static lean_object* l_instMetricSpacePUnit___closed__3;
LEAN_EXPORT lean_object* l_instMetricSpaceEmpty;
lean_object* l_PseudoMetricSpace_ofDistTopology___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MetricSpace_ofDistTopology___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_PseudoMetricSpace_ofDistTopology___rarg(x_1, x_2, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_MetricSpace_ofDistTopology(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MetricSpace_ofDistTopology___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MetricSpace_replaceUniformity___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_2, 2);
lean_dec(x_5);
lean_ctor_set(x_2, 2, x_1);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_2, 3);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_2);
x_9 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_9, 2, x_1);
lean_ctor_set(x_9, 3, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_MetricSpace_replaceUniformity(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MetricSpace_replaceUniformity___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MetricSpace_replaceTopology___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_2, 2);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
lean_ctor_set(x_5, 0, x_1);
return x_2;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_2, 2, x_9);
return x_2;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_2, 2);
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
x_13 = lean_ctor_get(x_2, 3);
lean_inc(x_13);
lean_inc(x_10);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_15 = x_10;
} else {
 lean_dec_ref(x_10);
 x_15 = lean_box(0);
}
if (lean_is_scalar(x_15)) {
 x_16 = lean_alloc_ctor(0, 2, 0);
} else {
 x_16 = x_15;
}
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_12);
lean_ctor_set(x_17, 2, x_16);
lean_ctor_set(x_17, 3, x_13);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_MetricSpace_replaceTopology(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MetricSpace_replaceTopology___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MetricSpace_replaceBornology___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_2, 3);
lean_dec(x_5);
lean_ctor_set(x_2, 3, x_1);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_2, 2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_2);
x_9 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_9, 2, x_8);
lean_ctor_set(x_9, 3, x_1);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_MetricSpace_replaceBornology(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MetricSpace_replaceBornology___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instMetricSpaceEmpty___lambda__1(uint8_t x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
return x_3;
}
}
static lean_object* _init_l_instMetricSpaceEmpty___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instMetricSpaceEmpty___lambda__2(uint8_t x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instMetricSpaceEmpty___lambda__2___closed__1;
return x_3;
}
}
static lean_object* _init_l_instMetricSpaceEmpty___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instMetricSpaceEmpty___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instMetricSpaceEmpty___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instMetricSpaceEmpty___lambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instMetricSpaceEmpty___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
x_2 = l_instMetricSpaceEmpty___closed__1;
x_3 = l_instMetricSpaceEmpty___closed__2;
x_4 = l_instUniformSpaceEmpty;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_instMetricSpaceEmpty() {
_start:
{
lean_object* x_1; 
x_1 = l_instMetricSpaceEmpty___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_instMetricSpaceEmpty___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_instMetricSpaceEmpty___lambda__1(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instMetricSpaceEmpty___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_instMetricSpaceEmpty___lambda__2(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instMetricSpacePUnit___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMetricSpacePUnit___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instMetricSpaceEmpty___lambda__2___closed__1;
return x_3;
}
}
static lean_object* _init_l_instMetricSpacePUnit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instMetricSpacePUnit___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instMetricSpacePUnit___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instMetricSpacePUnit___lambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instMetricSpacePUnit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
x_2 = l_instMetricSpacePUnit___closed__1;
x_3 = l_instMetricSpacePUnit___closed__2;
x_4 = l_instUniformSpacePUnit;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_instMetricSpacePUnit() {
_start:
{
lean_object* x_1; 
x_1 = l_instMetricSpacePUnit___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_instMetricSpacePUnit___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instMetricSpacePUnit___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMetricSpacePUnit___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instMetricSpacePUnit___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDistAdditive___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instDistAdditive(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instDistAdditive___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instDistAdditive___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instDistAdditive___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instDistMultiplicative___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instDistMultiplicative(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instDistMultiplicative___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instDistMultiplicative___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instDistMultiplicative___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instMetricSpaceAdditive___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instMetricSpaceAdditive(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instMetricSpaceAdditive___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instMetricSpaceAdditive___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instMetricSpaceAdditive___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instMetricSpaceMultiplicative___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instMetricSpaceMultiplicative(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instMetricSpaceMultiplicative___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instMetricSpaceMultiplicative___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instMetricSpaceMultiplicative___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instDistOrderDual___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instDistOrderDual(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instDistOrderDual___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instDistOrderDual___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instDistOrderDual___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instMetricSpaceOrderDual___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instMetricSpaceOrderDual(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instMetricSpaceOrderDual___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instMetricSpaceOrderDual___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instMetricSpaceOrderDual___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Pseudo_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_MetricSpace_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Pseudo_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instMetricSpaceEmpty___lambda__2___closed__1 = _init_l_instMetricSpaceEmpty___lambda__2___closed__1();
lean_mark_persistent(l_instMetricSpaceEmpty___lambda__2___closed__1);
l_instMetricSpaceEmpty___closed__1 = _init_l_instMetricSpaceEmpty___closed__1();
lean_mark_persistent(l_instMetricSpaceEmpty___closed__1);
l_instMetricSpaceEmpty___closed__2 = _init_l_instMetricSpaceEmpty___closed__2();
lean_mark_persistent(l_instMetricSpaceEmpty___closed__2);
l_instMetricSpaceEmpty___closed__3 = _init_l_instMetricSpaceEmpty___closed__3();
lean_mark_persistent(l_instMetricSpaceEmpty___closed__3);
l_instMetricSpaceEmpty = _init_l_instMetricSpaceEmpty();
lean_mark_persistent(l_instMetricSpaceEmpty);
l_instMetricSpacePUnit___closed__1 = _init_l_instMetricSpacePUnit___closed__1();
lean_mark_persistent(l_instMetricSpacePUnit___closed__1);
l_instMetricSpacePUnit___closed__2 = _init_l_instMetricSpacePUnit___closed__2();
lean_mark_persistent(l_instMetricSpacePUnit___closed__2);
l_instMetricSpacePUnit___closed__3 = _init_l_instMetricSpacePUnit___closed__3();
lean_mark_persistent(l_instMetricSpacePUnit___closed__3);
l_instMetricSpacePUnit = _init_l_instMetricSpacePUnit();
lean_mark_persistent(l_instMetricSpacePUnit);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
