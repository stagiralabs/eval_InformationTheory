// Lean compiler output
// Module: Mathlib.NumberTheory.Pell
// Imports: Init Mathlib.Data.ZMod.Basic Mathlib.NumberTheory.DiophantineApproximation.Basic Mathlib.NumberTheory.Zsqrtd.Basic Mathlib.Tactic.Qify
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
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_y___boxed(lean_object*);
lean_object* l_Zsqrtd_instStar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instCoeZsqrtd___boxed(lean_object*);
lean_object* l_Zsqrtd_instCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_x(lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_y___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_x___boxed(lean_object*);
lean_object* l_unitary_instGroupSubtypeMemSubmonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_y(lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instHasDistribNeg(lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instCoeZsqrtd___rarg___boxed(lean_object*);
lean_object* l_Zsqrtd_instMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_mk(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unitary_instHasDistribNegSubtypeMemSubmonoid___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_x___rarg___boxed(lean_object*);
lean_object* l_Zsqrtd_commRing(lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_x___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instCoeZsqrtd___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_y___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instCoeZsqrtd(lean_object*);
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = l_Zsqrtd_instCommMonoid(x_1);
x_3 = lean_alloc_closure((void*)(l_Zsqrtd_instStar___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_unitary_instGroupSubtypeMemSubmonoid___rarg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instHasDistribNeg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = l_Zsqrtd_commRing(x_1);
x_3 = lean_alloc_closure((void*)(l_Zsqrtd_instStar___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_unitary_instHasDistribNegSubtypeMemSubmonoid___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Zsqrtd_instMonoid(x_1);
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instCoeZsqrtd___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instCoeZsqrtd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Pell_Solution_u2081_instCoeZsqrtd___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instCoeZsqrtd___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Pell_Solution_u2081_instCoeZsqrtd___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_instCoeZsqrtd___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Pell_Solution_u2081_instCoeZsqrtd(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_x___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_x(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Pell_Solution_u2081_x___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_x___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Pell_Solution_u2081_x___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_x___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Pell_Solution_u2081_x(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_y___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_y(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Pell_Solution_u2081_y___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_y___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Pell_Solution_u2081_y___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_y___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Pell_Solution_u2081_y(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_mk(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pell_Solution_u2081_mk___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Pell_Solution_u2081_mk(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_DiophantineApproximation_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_Zsqrtd_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Qify(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_Pell(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_DiophantineApproximation_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_Zsqrtd_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Qify(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
