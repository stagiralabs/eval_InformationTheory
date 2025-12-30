// Lean compiler output
// Module: Mathlib.Control.LawfulFix
// Imports: Init Mathlib.Data.Stream.Init Mathlib.Tactic.ApplyFun Mathlib.Control.Fix Mathlib.Order.OmegaCompletePartialOrder
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
static lean_object* l_Part_lawfulFix___closed__1;
LEAN_EXPORT lean_object* l_Pi_lawfulFix_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Part_Fix_approx___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Part_fix___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_lawfulFix_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_lawfulFix_x27___rarg(lean_object*);
lean_object* l_Sigma_uncurry___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_monotoneUncurry___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_lawfulFix(lean_object*);
LEAN_EXPORT lean_object* l_Part_toUnitMono(lean_object*);
LEAN_EXPORT lean_object* l_Part_Fix_approxChain(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_monotoneUncurry(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_toUnitMono___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Part_toUnitMono___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_monotoneCurry___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_Fix_approxChain___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_toUnitMono___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_monotoneCurry___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_monotoneUncurry___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_hasFix___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_Fix_approxChain___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Sigma_curry___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_monotoneUncurry___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_hasFix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_Fix_approxChain___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_monotoneCurry___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_monotoneCurry(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Part_hasFix___rarg(lean_object*);
static lean_object* l_Pi_hasFix___rarg___closed__1;
LEAN_EXPORT lean_object* l_Pi_lawfulFix(lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_Fix_approxChain___elambda__1(lean_object*, lean_object*);
static lean_object* l_Pi_hasFix___rarg___closed__2;
static lean_object* l_Pi_lawfulFix___closed__1;
LEAN_EXPORT lean_object* l_Part_Fix_approxChain___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Part_Fix_approx___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Part_Fix_approxChain___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Part_Fix_approxChain___elambda__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Part_Fix_approxChain___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Part_Fix_approxChain___elambda__1___rarg___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Part_Fix_approxChain(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Part_Fix_approxChain___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Part_Fix_approxChain___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Part_Fix_approxChain___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Part_toUnitMono___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Part_toUnitMono___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Part_toUnitMono___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Part_toUnitMono___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Part_toUnitMono___elambda__1___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Part_toUnitMono(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Part_toUnitMono___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_Part_lawfulFix___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Part_hasFix___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Part_lawfulFix(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Part_lawfulFix___closed__1;
return x_2;
}
}
static lean_object* _init_l_Pi_lawfulFix___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Part_fix___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Pi_lawfulFix(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_lawfulFix___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_monotoneCurry___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Sigma_curry___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_monotoneCurry___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_monotoneCurry___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_monotoneCurry(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Pi_monotoneCurry___elambda__1___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_monotoneCurry___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Pi_monotoneCurry(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_monotoneUncurry___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Sigma_uncurry___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_monotoneUncurry___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_monotoneUncurry___elambda__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_monotoneUncurry(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Pi_monotoneUncurry___elambda__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_monotoneUncurry___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Pi_monotoneUncurry(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
static lean_object* _init_l_Pi_hasFix___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Sigma_curry___rarg), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Pi_hasFix___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Sigma_uncurry___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Pi_hasFix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Pi_hasFix___rarg___closed__1;
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_5);
x_7 = l_Pi_hasFix___rarg___closed__2;
x_8 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_6);
x_9 = lean_apply_1(x_1, x_8);
x_10 = l_Sigma_curry___rarg(x_9, x_3, x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Pi_hasFix(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_hasFix___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_lawfulFix_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Pi_hasFix___rarg), 4, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pi_lawfulFix_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Pi_lawfulFix_x27___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_lawfulFix_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Pi_lawfulFix_x27(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Stream_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_ApplyFun(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Fix(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_OmegaCompletePartialOrder(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Control_LawfulFix(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Stream_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_ApplyFun(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Fix(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_OmegaCompletePartialOrder(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Part_lawfulFix___closed__1 = _init_l_Part_lawfulFix___closed__1();
lean_mark_persistent(l_Part_lawfulFix___closed__1);
l_Pi_lawfulFix___closed__1 = _init_l_Pi_lawfulFix___closed__1();
lean_mark_persistent(l_Pi_lawfulFix___closed__1);
l_Pi_hasFix___rarg___closed__1 = _init_l_Pi_hasFix___rarg___closed__1();
lean_mark_persistent(l_Pi_hasFix___rarg___closed__1);
l_Pi_hasFix___rarg___closed__2 = _init_l_Pi_hasFix___rarg___closed__2();
lean_mark_persistent(l_Pi_hasFix___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
