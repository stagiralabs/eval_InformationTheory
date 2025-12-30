// Lean compiler output
// Module: Mathlib.Analysis.BoxIntegral.Box.Basic
// Imports: Init Mathlib.Data.NNReal.Basic Mathlib.Order.Fin.Tuple Mathlib.Order.Interval.Set.Monotone Mathlib.Topology.MetricSpace.Basic Mathlib.Topology.MetricSpace.Bounded Mathlib.Topology.MetricSpace.Pseudo.Real Mathlib.Topology.Order.MonotoneConvergence
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
lean_object* l_Fin_succAbove___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instSemilatticeSup___lambda__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_BoxIntegral_Box_instCoeTCSetForallReal___closed__1;
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face(lean_object*, lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_5240_(lean_object*, lean_object*);
extern lean_object* l_Real_instZero;
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_withBotCoe(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instInhabited___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_Icc(lean_object*);
static lean_object* l_BoxIntegral_Box_instInhabited___closed__1;
static lean_object* l_BoxIntegral_Box_instInhabited___closed__4;
static lean_object* l_BoxIntegral_Box_instSemilatticeSup___closed__3;
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instInhabited___lambda__2(lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_4896_(lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instInhabited___lambda__1___boxed(lean_object*);
static lean_object* l_BoxIntegral_Box_instInhabited___closed__3;
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___elambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instInhabited___lambda__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instPartialOrder(lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_one;
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instSemilatticeSup(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instCoeTCSetForallReal(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instMembershipForallReal(lean_object*);
static lean_object* l_BoxIntegral_Box_instPartialOrder___closed__1;
static lean_object* l_BoxIntegral_Box_instSemilatticeSup___closed__1;
LEAN_EXPORT lean_object* l_BoxIntegral_Box_Ioo(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instLE(lean_object*);
static lean_object* l_BoxIntegral_Box_instSemilatticeSup___closed__2;
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___elambda__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instSemilatticeSup___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instSemilatticeSup___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instInhabited(lean_object*);
static lean_object* l_BoxIntegral_Box_instInhabited___closed__2;
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instInhabited___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Real_instZero;
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instInhabited___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Mathlib_Data_Real_Basic_0__Real_one;
return x_2;
}
}
static lean_object* _init_l_BoxIntegral_Box_instInhabited___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_BoxIntegral_Box_instInhabited___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_BoxIntegral_Box_instInhabited___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_BoxIntegral_Box_instInhabited___closed__1;
x_2 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_BoxIntegral_Box_instInhabited___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_BoxIntegral_Box_instInhabited___lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_BoxIntegral_Box_instInhabited___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_BoxIntegral_Box_instInhabited___closed__2;
x_2 = l_BoxIntegral_Box_instInhabited___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_BoxIntegral_Box_instInhabited___closed__4;
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instInhabited___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_BoxIntegral_Box_instInhabited___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instInhabited___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_BoxIntegral_Box_instInhabited___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instMembershipForallReal(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_BoxIntegral_Box_instCoeTCSetForallReal___closed__1() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instCoeTCSetForallReal(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_BoxIntegral_Box_instCoeTCSetForallReal___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instLE(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_BoxIntegral_Box_instPartialOrder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instPartialOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_BoxIntegral_Box_instPartialOrder___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_Icc(lean_object* x_1) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instSemilatticeSup___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_3);
x_6 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_5240_(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instSemilatticeSup___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_3);
x_6 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_4896_(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instSemilatticeSup___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_BoxIntegral_Box_instSemilatticeSup___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_BoxIntegral_Box_instSemilatticeSup___lambda__2), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
static lean_object* _init_l_BoxIntegral_Box_instSemilatticeSup___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_BoxIntegral_Box_instPartialOrder(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_BoxIntegral_Box_instSemilatticeSup___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_BoxIntegral_Box_instSemilatticeSup___lambda__3), 2, 0);
return x_1;
}
}
static lean_object* _init_l_BoxIntegral_Box_instSemilatticeSup___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_BoxIntegral_Box_instSemilatticeSup___closed__1;
x_2 = l_BoxIntegral_Box_instSemilatticeSup___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_instSemilatticeSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_BoxIntegral_Box_instSemilatticeSup___closed__3;
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_withBotCoe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_BoxIntegral_Box_instCoeTCSetForallReal___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_BoxIntegral_Box_face___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_BoxIntegral_Box_face___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Fin_succAbove___rarg___boxed), 2, 1);
lean_closure_set(x_5, 0, x_3);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_BoxIntegral_Box_face___elambda__2___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_BoxIntegral_Box_face___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_BoxIntegral_Box_face___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_BoxIntegral_Box_face___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_face___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_BoxIntegral_Box_face(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Box_Ioo(lean_object* x_1) {
_start:
{
return lean_box(0);
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_NNReal_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Fin_Tuple(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Set_Monotone(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Bounded(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Pseudo_Real(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_MonotoneConvergence(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_BoxIntegral_Box_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_NNReal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Fin_Tuple(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Set_Monotone(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Bounded(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Pseudo_Real(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_MonotoneConvergence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_BoxIntegral_Box_instInhabited___closed__1 = _init_l_BoxIntegral_Box_instInhabited___closed__1();
lean_mark_persistent(l_BoxIntegral_Box_instInhabited___closed__1);
l_BoxIntegral_Box_instInhabited___closed__2 = _init_l_BoxIntegral_Box_instInhabited___closed__2();
lean_mark_persistent(l_BoxIntegral_Box_instInhabited___closed__2);
l_BoxIntegral_Box_instInhabited___closed__3 = _init_l_BoxIntegral_Box_instInhabited___closed__3();
lean_mark_persistent(l_BoxIntegral_Box_instInhabited___closed__3);
l_BoxIntegral_Box_instInhabited___closed__4 = _init_l_BoxIntegral_Box_instInhabited___closed__4();
lean_mark_persistent(l_BoxIntegral_Box_instInhabited___closed__4);
l_BoxIntegral_Box_instCoeTCSetForallReal___closed__1 = _init_l_BoxIntegral_Box_instCoeTCSetForallReal___closed__1();
lean_mark_persistent(l_BoxIntegral_Box_instCoeTCSetForallReal___closed__1);
l_BoxIntegral_Box_instPartialOrder___closed__1 = _init_l_BoxIntegral_Box_instPartialOrder___closed__1();
lean_mark_persistent(l_BoxIntegral_Box_instPartialOrder___closed__1);
l_BoxIntegral_Box_instSemilatticeSup___closed__1 = _init_l_BoxIntegral_Box_instSemilatticeSup___closed__1();
lean_mark_persistent(l_BoxIntegral_Box_instSemilatticeSup___closed__1);
l_BoxIntegral_Box_instSemilatticeSup___closed__2 = _init_l_BoxIntegral_Box_instSemilatticeSup___closed__2();
lean_mark_persistent(l_BoxIntegral_Box_instSemilatticeSup___closed__2);
l_BoxIntegral_Box_instSemilatticeSup___closed__3 = _init_l_BoxIntegral_Box_instSemilatticeSup___closed__3();
lean_mark_persistent(l_BoxIntegral_Box_instSemilatticeSup___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
