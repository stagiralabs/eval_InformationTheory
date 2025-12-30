// Lean compiler output
// Module: Mathlib.Topology.MetricSpace.IsometricSMul
// Imports: Init Mathlib.Data.Set.Pointwise.SMul Mathlib.Topology.MetricSpace.Isometry Mathlib.Topology.MetricSpace.Lipschitz
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
LEAN_EXPORT lean_object* l_IsometryEquiv_addLeft(lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_mulLeft(lean_object*);
lean_object* l_Equiv_addLeft___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_divRight___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_inv(lean_object*);
lean_object* l_Equiv_subLeft___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_divLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_constSMul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_subRight___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_subLeft___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_mulRight(lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_neg___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_addRight___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_neg(lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_neg___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_mulLeft___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_constVAdd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_constVAdd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_constSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_mulLeft___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_addRight(lean_object*);
lean_object* l_AddAction_toPerm___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_addRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MulAction_toPerm___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_subLeft(lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_subRight(lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_mulLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_divLeft___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_inv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_divRight___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_neg___at_IsometryEquiv_neg___spec__1___rarg(lean_object*);
lean_object* l_Equiv_neg___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_constVAdd___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_addLeft___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_divLeft(lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_addRight___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_subRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_subRight___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_inv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_mulRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_mulRight___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_addLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_inv___at_IsometryEquiv_inv___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_neg___at_IsometryEquiv_neg___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_inv___at_IsometryEquiv_inv___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_divLeft___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_inv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_divRight(lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_constSMul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_mulRight___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_divRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_subLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsometryEquiv_constSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulAction_toPerm___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_constSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IsometryEquiv_constSMul___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_constSMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IsometryEquiv_constSMul(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_constVAdd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddAction_toPerm___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_constVAdd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IsometryEquiv_constVAdd___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_constVAdd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IsometryEquiv_constVAdd(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_mulLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_mulLeft___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_mulLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsometryEquiv_mulLeft___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_mulLeft___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsometryEquiv_mulLeft___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_addLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_addLeft___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_addLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsometryEquiv_addLeft___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_addLeft___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsometryEquiv_addLeft___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_mulRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_mulRight___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_mulRight(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsometryEquiv_mulRight___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_mulRight___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsometryEquiv_mulRight___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_addRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_addRight___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_addRight(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsometryEquiv_addRight___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_addRight___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsometryEquiv_addRight___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_divRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_divRight___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_divRight(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsometryEquiv_divRight___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_divRight___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsometryEquiv_divRight___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_subRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_subRight___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_subRight(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsometryEquiv_subRight___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_subRight___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsometryEquiv_subRight___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_divLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Equiv_divLeft___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_divLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsometryEquiv_divLeft___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_divLeft___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IsometryEquiv_divLeft___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_subLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Equiv_subLeft___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_subLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsometryEquiv_subLeft___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_subLeft___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IsometryEquiv_subLeft___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_inv___at_IsometryEquiv_inv___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_inv___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_inv___at_IsometryEquiv_inv___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_inv___at_IsometryEquiv_inv___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_inv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_inv___at_IsometryEquiv_inv___spec__1___rarg(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_inv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsometryEquiv_inv___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_inv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsometryEquiv_inv___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_neg___at_IsometryEquiv_neg___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_neg___at_IsometryEquiv_neg___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_neg___at_IsometryEquiv_neg___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_neg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_neg___at_IsometryEquiv_neg___spec__1___rarg(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_neg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsometryEquiv_neg___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsometryEquiv_neg___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsometryEquiv_neg___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Pointwise_SMul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Isometry(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Lipschitz(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_MetricSpace_IsometricSMul(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Pointwise_SMul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Isometry(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Lipschitz(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
