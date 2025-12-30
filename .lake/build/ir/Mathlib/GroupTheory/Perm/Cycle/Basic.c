// Lean compiler output
// Module: Mathlib.GroupTheory.Perm.Cycle.Basic
// Imports: Init Mathlib.Algebra.Module.BigOperators Mathlib.GroupTheory.Perm.Basic Mathlib.GroupTheory.Perm.Finite Mathlib.GroupTheory.Perm.List
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
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycleInv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePermOfSupport(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_Perm_subtypePerm___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePerm__of__support__le___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycleInv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePermOfSupport___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_SameCycle_setoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePerm__of__support__le___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_SameCycle_setoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycleInv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePerm__of__support__le(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePerm__of__support__le___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycleOfNatOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePermOfSupport___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycleOfNatOfDecidableEq(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_SameCycle_setoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_SameCycle_setoid___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_Perm_SameCycle_setoid(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycleInv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycleInv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_Perm_instDecidableRelSameCycleInv___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycleInv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_Perm_instDecidableRelSameCycleInv(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycleOfNatOfDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycleOfNatOfDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_instDecidableRelSameCycleOfNatOfDecidableEq___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePermOfSupport___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_Perm_subtypePerm___rarg(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePermOfSupport(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Equiv_Perm_subtypePermOfSupport___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePermOfSupport___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_Perm_subtypePermOfSupport(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePerm__of__support__le___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_Perm_subtypePerm___rarg(x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePerm__of__support__le(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Equiv_Perm_subtypePerm__of__support__le___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePerm__of__support__le___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_Perm_subtypePerm__of__support__le___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypePerm__of__support__le___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_Perm_subtypePerm__of__support__le(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_BigOperators(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_List(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Perm_Cycle_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_List(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
