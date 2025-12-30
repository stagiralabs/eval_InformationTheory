// Lean compiler output
// Module: Mathlib.Data.DFinsupp.BigOperators
// Imports: Init Mathlib.Algebra.BigOperators.GroupWithZero.Action Mathlib.Data.DFinsupp.Ext
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
LEAN_EXPORT lean_object* l_Finset_sum___at_DFinsupp_sumAddHom___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_DFinsupp_liftAddHom___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_evalAddMonoidHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_liftAddHom___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_evalAddMonoidHom___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_sum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_DFinsupp_liftAddHom___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoidHom_instFunLike___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_prod___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_DFinsupp_liftAddHom___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_DFinsupp_coeFnAddMonoidHom___rarg(lean_object*, lean_object*);
lean_object* l_DFinsupp_support___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_sum(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_liftAddHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_liftAddHom___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_DFinsupp_single___at_DFinsupp_singleAddHom___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_DFinsupp_evalAddMonoidHom___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_prod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_DFinsupp_prod___spec__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_DFinsupp_evalAddMonoidHom___rarg___closed__1;
LEAN_EXPORT lean_object* l_DFinsupp_liftAddHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_sum___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_sum___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_DFinsupp_evalAddMonoidHom___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_prod___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_sumAddHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_prod___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_sumAddHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_prod___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_DFinsupp_sum___spec__1(lean_object*, lean_object*);
lean_object* l_Pi_evalAddMonoidHom___rarg(lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_DFinsupp_sum___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_sumAddHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DFinsupp_evalAddMonoidHom___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_DFinsupp_evalAddMonoidHom___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_DFinsupp_prod___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_DFinsupp_sumAddHom___spec__1(lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_DFinsupp_evalAddMonoidHom___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_DFinsupp_evalAddMonoidHom___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddMonoidHom_comp___at_DFinsupp_evalAddMonoidHom___spec__1___rarg), 2, 0);
return x_5;
}
}
static lean_object* _init_l_DFinsupp_evalAddMonoidHom___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_DFinsupp_coeFnAddMonoidHom___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_evalAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Pi_evalAddMonoidHom___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_DFinsupp_evalAddMonoidHom___rarg___closed__1;
x_5 = l_AddMonoidHom_comp___at_DFinsupp_evalAddMonoidHom___spec__1___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_evalAddMonoidHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DFinsupp_evalAddMonoidHom___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_DFinsupp_evalAddMonoidHom___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_comp___at_DFinsupp_evalAddMonoidHom___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_evalAddMonoidHom___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DFinsupp_evalAddMonoidHom___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_DFinsupp_prod___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_prod___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_DFinsupp_prod___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_prod___at_DFinsupp_prod___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_prod___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_3);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_2(x_2, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_prod___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
x_7 = l_DFinsupp_support___rarg(x_1, x_2, x_3, x_5);
x_8 = lean_alloc_closure((void*)(l_DFinsupp_prod___rarg___lambda__1), 3, 2);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_6);
x_9 = l_Finset_prod___at_DFinsupp_prod___spec__1___rarg(x_4, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_prod(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_DFinsupp_prod___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_prod___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_DFinsupp_prod___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_DFinsupp_sum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_DFinsupp_sum___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_DFinsupp_sum___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_sum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
x_7 = l_DFinsupp_support___rarg(x_1, x_2, x_3, x_5);
x_8 = lean_alloc_closure((void*)(l_DFinsupp_prod___rarg___lambda__1), 3, 2);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_6);
x_9 = l_Finset_sum___at_DFinsupp_sum___spec__1___rarg(x_4, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_sum(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_DFinsupp_sum___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_sum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_DFinsupp_sum___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_DFinsupp_sumAddHom___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_DFinsupp_sumAddHom___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_DFinsupp_sumAddHom___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_sumAddHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_6);
x_8 = lean_alloc_closure((void*)(l_DFinsupp_prod___rarg___lambda__1), 3, 2);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_4);
x_9 = l_Finset_sum___at_DFinsupp_sumAddHom___spec__1___rarg(x_3, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_sumAddHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_DFinsupp_sumAddHom___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_sumAddHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_DFinsupp_sumAddHom___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_DFinsupp_liftAddHom___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_DFinsupp_liftAddHom___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddMonoidHom_comp___at_DFinsupp_liftAddHom___spec__1___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_liftAddHom___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_DFinsupp_single___at_DFinsupp_singleAddHom___spec__1___rarg), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_5);
x_7 = l_AddMonoidHom_comp___at_DFinsupp_liftAddHom___spec__1___rarg(x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_liftAddHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_DFinsupp_sumAddHom___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
x_5 = lean_alloc_closure((void*)(l_DFinsupp_liftAddHom___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_liftAddHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_DFinsupp_liftAddHom___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_DFinsupp_liftAddHom___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddMonoidHom_comp___at_DFinsupp_liftAddHom___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_DFinsupp_liftAddHom___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_DFinsupp_liftAddHom___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_GroupWithZero_Action(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_DFinsupp_Ext(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_DFinsupp_BigOperators(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_GroupWithZero_Action(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_DFinsupp_Ext(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_DFinsupp_evalAddMonoidHom___rarg___closed__1 = _init_l_DFinsupp_evalAddMonoidHom___rarg___closed__1();
lean_mark_persistent(l_DFinsupp_evalAddMonoidHom___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
