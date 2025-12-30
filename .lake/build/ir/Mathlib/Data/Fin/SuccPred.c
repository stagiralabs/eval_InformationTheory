// Lean compiler output
// Module: Mathlib.Data.Fin.SuccPred
// Imports: Init Mathlib.Order.Fin.Basic Mathlib.Order.SuccPred.Basic
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
lean_object* l_Fin_succ___rarg___boxed(lean_object*);
lean_object* l_Fin_elim0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___at_Fin_instSuccOrder___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Fin_instPredOrder(lean_object*);
static lean_object* l_Fin_instSuccOrder___closed__2;
LEAN_EXPORT lean_object* l_Fin_instPredOrder___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_instSuccOrder(lean_object*);
lean_object* l_Fin_castSucc___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_PredOrder_ofCore___at_Fin_instPredOrder___spec__1___boxed(lean_object*);
static lean_object* l_Fin_instPredOrder___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___at_Fin_instSuccOrder___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PredOrder_ofCore___at_Fin_instPredOrder___spec__1(lean_object*);
static lean_object* l_Fin_instSuccOrder___closed__1;
LEAN_EXPORT lean_object* l_PredOrder_ofCore___at_Fin_instPredOrder___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___at_Fin_instSuccOrder___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_PredOrder_ofCore___at_Fin_instPredOrder___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_lastCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_instPredOrder___lambda__1(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___at_Fin_instSuccOrder___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_cases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_instSuccOrder___boxed(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_instPredOrder___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___at_Fin_instSuccOrder___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___at_Fin_instSuccOrder___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SuccOrder_ofCore___at_Fin_instSuccOrder___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Fin_instSuccOrder___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fin_succ___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Fin_instSuccOrder___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fin_elim0___boxed), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Fin_instSuccOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
x_6 = l_Fin_instSuccOrder___closed__1;
lean_inc(x_5);
x_7 = lean_alloc_closure((void*)(l_Fin_lastCases___boxed), 5, 4);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_5);
lean_closure_set(x_7, 3, x_6);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = l_Fin_instSuccOrder___closed__2;
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___at_Fin_instSuccOrder___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SuccOrder_ofCore___at_Fin_instSuccOrder___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SuccOrder_ofCore___at_Fin_instSuccOrder___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SuccOrder_ofCore___at_Fin_instSuccOrder___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fin_instSuccOrder___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Fin_instSuccOrder(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofCore___at_Fin_instPredOrder___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofCore___at_Fin_instPredOrder___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PredOrder_ofCore___at_Fin_instPredOrder___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Fin_instPredOrder___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fin_castSucc___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Fin_instPredOrder___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_mod(x_4, x_1);
x_6 = l_Fin_instPredOrder___lambda__1___closed__1;
x_7 = l_Fin_cases(x_2, lean_box(0), x_5, x_6, x_3);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fin_instPredOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
x_6 = lean_nat_add(x_5, x_4);
x_7 = lean_alloc_closure((void*)(l_Fin_instPredOrder___lambda__1___boxed), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = l_Fin_instSuccOrder___closed__2;
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofCore___at_Fin_instPredOrder___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PredOrder_ofCore___at_Fin_instPredOrder___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PredOrder_ofCore___at_Fin_instPredOrder___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PredOrder_ofCore___at_Fin_instPredOrder___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fin_instPredOrder___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Fin_instPredOrder___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fin_instPredOrder___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Fin_instPredOrder(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Fin_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SuccPred_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Fin_SuccPred(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Fin_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SuccPred_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Fin_instSuccOrder___closed__1 = _init_l_Fin_instSuccOrder___closed__1();
lean_mark_persistent(l_Fin_instSuccOrder___closed__1);
l_Fin_instSuccOrder___closed__2 = _init_l_Fin_instSuccOrder___closed__2();
lean_mark_persistent(l_Fin_instSuccOrder___closed__2);
l_Fin_instPredOrder___lambda__1___closed__1 = _init_l_Fin_instPredOrder___lambda__1___closed__1();
lean_mark_persistent(l_Fin_instPredOrder___lambda__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
