// Lean compiler output
// Module: Mathlib.Algebra.Ring.SumsOfSquares
// Imports: Init Mathlib.Algebra.Group.Subgroup.Even Mathlib.Algebra.Order.Ring.Basic Mathlib.Algebra.Ring.Subsemiring.Basic Mathlib.Tactic.ApplyFun
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
LEAN_EXPORT lean_object* l_sumSq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_sumSq(lean_object*);
lean_object* l_CommSemiring_toNonUnitalCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SumSqIn___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_nonUnitalSubsemiringClosure___at_Subsemiring_sumSq___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_square___at_NonUnitalSubsemiring_sumSq___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_square___at_Subsemiring_sumSq___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SumSqIn___rarg(lean_object*);
LEAN_EXPORT lean_object* l_sumSqIn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_sumSqIn___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_sumSq___at_Subsemiring_sumSq___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_sumSq___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_square___at_Subsemiring_sumSq___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_sumSq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_sumSq___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_sumSq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_sumSq___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_sumSqIn___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_square___at_NonUnitalSubsemiring_sumSq___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_sumSqIn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SumSqIn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_square___at_Subsemiring_sumSq___spec__2___rarg(lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_nonUnitalSubsemiringClosure___at_Subsemiring_sumSq___spec__3___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_sumSq___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SumSqIn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_square___at_NonUnitalSubsemiring_sumSq___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_sumSq___at_Subsemiring_sumSq___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_nonUnitalSubsemiringClosure___at_Subsemiring_sumSq___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_sumSq(lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_sumSq___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_sumSq___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_sumSq___rarg(lean_object*);
LEAN_EXPORT lean_object* l_sumSq___rarg(lean_object*);
lean_object* l_Subsemigroup_nonUnitalSubsemiringClosure___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_sumSq(lean_object*, lean_object*);
lean_object* l_AddSubmonoid_instInfSet___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_sumSq___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_sumSq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubmonoid_sumSq___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_sumSq___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubmonoid_sumSq___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_sumSq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddSubmonoid_sumSq(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SumSqIn___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubmonoid_sumSq___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SumSqIn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SumSqIn___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SumSqIn___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SumSqIn___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SumSqIn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SumSqIn(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_sumSqIn___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubmonoid_sumSq___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_sumSqIn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_sumSqIn___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_sumSqIn___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_sumSqIn___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_sumSqIn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_sumSqIn(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_sumSq___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubmonoid_sumSq___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_sumSq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_sumSq___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_sumSq___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_sumSq___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_sumSq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_sumSq(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_square___at_NonUnitalSubsemiring_sumSq___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_square___at_NonUnitalSubsemiring_sumSq___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemigroup_square___at_NonUnitalSubsemiring_sumSq___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_sumSq___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Subsemigroup_square___at_NonUnitalSubsemiring_sumSq___spec__1___rarg(x_1);
x_3 = l_Subsemigroup_nonUnitalSubsemiringClosure___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_sumSq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NonUnitalSubsemiring_sumSq___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_square___at_NonUnitalSubsemiring_sumSq___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subsemigroup_square___at_NonUnitalSubsemiring_sumSq___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_sumSq___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_NonUnitalSubsemiring_sumSq___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_square___at_Subsemiring_sumSq___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_square___at_Subsemiring_sumSq___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemigroup_square___at_Subsemiring_sumSq___spec__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_nonUnitalSubsemiringClosure___at_Subsemiring_sumSq___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_CommSemiring_toNonUnitalCommSemiring___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_AddMonoid_toAddZeroClass___rarg(x_4);
lean_dec(x_4);
x_6 = l_AddSubmonoid_instInfSet___elambda__1___rarg(x_5, lean_box(0));
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_nonUnitalSubsemiringClosure___at_Subsemiring_sumSq___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemigroup_nonUnitalSubsemiringClosure___at_Subsemiring_sumSq___spec__3___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_sumSq___at_Subsemiring_sumSq___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Subsemigroup_square___at_Subsemiring_sumSq___spec__2___rarg(x_1);
x_3 = l_Subsemigroup_nonUnitalSubsemiringClosure___at_Subsemiring_sumSq___spec__3___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_sumSq___at_Subsemiring_sumSq___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NonUnitalSubsemiring_sumSq___at_Subsemiring_sumSq___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_sumSq___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_sumSq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_sumSq___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_square___at_Subsemiring_sumSq___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subsemigroup_square___at_Subsemiring_sumSq___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_nonUnitalSubsemiringClosure___at_Subsemiring_sumSq___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subsemigroup_nonUnitalSubsemiringClosure___at_Subsemiring_sumSq___spec__3___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_sumSq___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subsemiring_sumSq___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subgroup_Even(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Subsemiring_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_ApplyFun(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_SumsOfSquares(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subgroup_Even(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Subsemiring_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_ApplyFun(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
