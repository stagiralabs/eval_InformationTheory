// Lean compiler output
// Module: Mathlib.Control.Fix
// Imports: Init Mathlib.Data.Part Mathlib.Data.Nat.Find Mathlib.Data.Nat.Upto Mathlib.Data.Stream.Defs Mathlib.Tactic.Common
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
LEAN_EXPORT lean_object* l_Part_Fix_approx___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_fix___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Part_fix___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_fixAux___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_fixAux___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Fix_0__Part_Fix_approx_match__1_splitter(lean_object*);
lean_object* l_Part_assert___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Fix_0__Part_Fix_approx_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_hasFix___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_Part_hasFix(lean_object*, lean_object*);
lean_object* l_Part_none___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_fix___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Fix_0__Part_Fix_approx_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Pi_Part_hasFix___closed__1;
static lean_object* l_Part_Fix_approx___rarg___closed__1;
LEAN_EXPORT lean_object* l_Part_fixAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_fixAux___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_Fix_approx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_Fix_approx___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_hasFix(lean_object*);
LEAN_EXPORT lean_object* l_Part_hasFix___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Part_fix(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Part_fix___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Part_fix___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Part_fixAux(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* _init_l_Part_Fix_approx___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Part_none___elambda__1___boxed), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Part_Fix_approx___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Part_Fix_approx___rarg___boxed), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_apply_2(x_1, x_8, x_3);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_1);
x_10 = l_Part_Fix_approx___rarg___closed__1;
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Part_Fix_approx(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Part_Fix_approx___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Part_Fix_approx___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Part_Fix_approx___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Part_fixAux___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_1, x_5);
x_7 = lean_apply_3(x_2, x_6, lean_box(0), x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Part_fixAux___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Part_fixAux___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
x_5 = lean_alloc_closure((void*)(l_Part_assert___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Part_fixAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_Part_fixAux___rarg___lambda__2), 3, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_apply_2(x_1, x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Part_fixAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Part_fixAux___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Part_fixAux___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Part_fixAux___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Part_fix___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Batteries_WF_0__WellFounded_fixC___at_Part_fix___spec__1___rarg(x_1, x_2, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Part_fix___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_Part_fix___spec__1___rarg___lambda__1), 5, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = l_Part_fixAux___rarg(x_1, lean_box(0), x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Part_fix___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_Part_fix___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Part_fix___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
x_5 = l___private_Batteries_WF_0__WellFounded_fixC___at_Part_fix___spec__1___rarg(x_1, x_2, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Part_fix___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Part_fix___rarg___lambda__1), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Part_assert___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Part_fix(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Part_fix___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Fix_0__Part_Fix_approx_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Fix_0__Part_Fix_approx_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Control_Fix_0__Part_Fix_approx_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Control_Fix_0__Part_Fix_approx_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Control_Fix_0__Part_Fix_approx_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Part_hasFix___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Part_hasFix___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Part_hasFix___rarg___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_box(0);
x_4 = l_Part_fix___rarg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Part_hasFix(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Part_hasFix___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_Pi_Part_hasFix___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Part_fix___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Pi_Part_hasFix(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_Part_hasFix___closed__1;
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Part(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Find(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Upto(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Stream_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Common(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Control_Fix(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Part(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Find(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Upto(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Stream_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Common(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Part_Fix_approx___rarg___closed__1 = _init_l_Part_Fix_approx___rarg___closed__1();
lean_mark_persistent(l_Part_Fix_approx___rarg___closed__1);
l_Pi_Part_hasFix___closed__1 = _init_l_Pi_Part_hasFix___closed__1();
lean_mark_persistent(l_Pi_Part_hasFix___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
