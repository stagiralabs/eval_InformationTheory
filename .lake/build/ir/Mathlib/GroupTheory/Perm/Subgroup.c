// Lean compiler output
// Module: Mathlib.GroupTheory.Perm.Subgroup
// Imports: Init Mathlib.Algebra.Group.Action.End Mathlib.Algebra.Group.Subgroup.Finite Mathlib.Data.Fintype.Perm
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
LEAN_EXPORT lean_object* l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange(lean_object*, lean_object*);
lean_object* l_Multiset_disjSum___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Equiv_Perm_subtypeCongrHom_decidableMemRange___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Fintype_decidableEqEquivFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_Perm_sigmaCongrRight___rarg(lean_object*);
lean_object* l_Fintype_piFinset___at_Pi_instFintype___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_instFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___closed__1;
lean_object* l_Equiv_Perm_subtypeCongrHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongrHom_decidableMemRange(lean_object*, lean_object*);
static lean_object* l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___closed__1;
lean_object* l_Equiv_Perm_sumCongrHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongrHom_decidableMemRange___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_sumCongrHom_decidableMemRange(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Sigma_instDecidableEqSigma___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_sigma___rarg(lean_object*, lean_object*);
uint8_t l_MonoidHom_decidableMemRange___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_product___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Sum_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_alloc_closure((void*)(l_Sum_instDecidableEq___rarg), 4, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
x_8 = l_Multiset_disjSum___rarg(x_3, x_4);
x_9 = l_Fintype_decidableEqEquivFintype___rarg(x_7, x_8, x_5, x_6);
return x_9;
}
}
static lean_object* _init_l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_Perm_sumCongrHom___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc_n(x_3, 2);
lean_inc_n(x_1, 2);
x_6 = l_Equiv_instFintype___rarg(x_1, x_1, x_3, x_3);
lean_inc_n(x_4, 2);
lean_inc_n(x_2, 2);
x_7 = l_Equiv_instFintype___rarg(x_2, x_2, x_4, x_4);
x_8 = l_Multiset_product___rarg(x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___lambda__1___boxed), 6, 4);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
x_10 = l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___closed__1;
x_11 = l_MonoidHom_decidableMemRange___rarg(x_10, x_8, x_9, x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_sumCongrHom_decidableMemRange(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_3);
lean_inc(x_5);
lean_inc(x_4);
x_6 = l_Equiv_instFintype___rarg(x_4, x_4, x_5, x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_alloc_closure((void*)(l_Sigma_instDecidableEqSigma___rarg), 4, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
x_8 = l_Multiset_sigma___rarg(x_3, x_4);
x_9 = l_Fintype_decidableEqEquivFintype___rarg(x_7, x_8, x_5, x_6);
return x_9;
}
}
static lean_object* _init_l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_Perm_sigmaCongrRight___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_4);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_4);
lean_inc(x_3);
lean_inc(x_1);
x_7 = l_Fintype_piFinset___at_Pi_instFintype___spec__1___rarg(x_1, x_3, lean_box(0), x_6);
x_8 = lean_alloc_closure((void*)(l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___lambda__2___boxed), 6, 4);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_4);
x_9 = l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___closed__1;
x_10 = l_MonoidHom_decidableMemRange___rarg(x_9, x_7, x_8, x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Equiv_Perm_subtypeCongrHom_decidableMemRange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_alloc_closure((void*)(l_Equiv_Perm_subtypeCongrHom___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_MonoidHom_decidableMemRange___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongrHom_decidableMemRange(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_Perm_subtypeCongrHom_decidableMemRange___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongrHom_decidableMemRange___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Equiv_Perm_subtypeCongrHom_decidableMemRange___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_End(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subgroup_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Perm(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Perm_Subgroup(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_End(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subgroup_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Perm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___closed__1 = _init_l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___closed__1();
lean_mark_persistent(l_Equiv_Perm_sumCongrHom_decidableMemRange___rarg___closed__1);
l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___closed__1 = _init_l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___closed__1();
lean_mark_persistent(l_Equiv_Perm_sigmaCongrRightHom_decidableMemRange___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
