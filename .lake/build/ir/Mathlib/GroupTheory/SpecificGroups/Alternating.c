// Lean compiler output
// Module: Mathlib.GroupTheory.SpecificGroups.Alternating
// Imports: Init Mathlib.Algebra.Ring.CharZero Mathlib.Data.Fintype.Units Mathlib.GroupTheory.IndexNormal Mathlib.GroupTheory.Perm.Fin Mathlib.GroupTheory.Subgroup.Simple Mathlib.Tactic.IntervalCases
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
static lean_object* l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___closed__2;
LEAN_EXPORT lean_object* l_alternatingGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instUniqueSubtypePermMemSubgroupAlternatingGroupOfSubsingleton___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_alternatingGroup___spec__1(lean_object*);
lean_object* l_Equiv_instFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_alternatingGroup_instFintype(lean_object*);
LEAN_EXPORT lean_object* l_alternatingGroup_instFintype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_alternatingGroup___spec__1___rarg(lean_object*);
lean_object* l_MonoidHom_decidableMemKer___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Units_instMul___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___boxed(lean_object*);
static lean_object* l_instUniqueSubtypePermMemSubgroupAlternatingGroupOfSubsingleton___closed__1;
static lean_object* l_alternatingGroup_instFintype___rarg___closed__1;
LEAN_EXPORT lean_object* l_Submonoid_comap___at_alternatingGroup___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Int_instMonoid;
lean_object* l_Equiv_Perm_permGroup(lean_object*);
static lean_object* l_Submonoid_comap___at_alternatingGroup___spec__3___closed__1;
lean_object* l_Units_instMulOneClass___rarg(lean_object*);
static lean_object* l_alternatingGroup_instFintype___rarg___closed__2;
static lean_object* l_Submonoid_comap___at_alternatingGroup___spec__3___closed__2;
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg(lean_object*);
lean_object* l_Units_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_instDecidableEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_alternatingGroup(lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
static lean_object* l_Submonoid_comap___at_alternatingGroup___spec__3___closed__3;
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_alternatingGroup___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instUniqueSubtypePermMemSubgroupAlternatingGroupOfSubsingleton(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_alternatingGroup___spec__2(lean_object*, lean_object*);
lean_object* l_Equiv_Perm_sign___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
lean_object* l_Subtype_fintype___rarg(lean_object*, lean_object*);
static lean_object* l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___closed__1;
static lean_object* l_alternatingGroup_instFintype___rarg___closed__3;
LEAN_EXPORT lean_object* l_Submonoid_comap___at_alternatingGroup___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Submonoid_comap___at_alternatingGroup___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_Perm_permGroup(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Submonoid_comap___at_alternatingGroup___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Submonoid_comap___at_alternatingGroup___spec__3___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Monoid_toMulOneClass___rarg(x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Submonoid_comap___at_alternatingGroup___spec__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_alternatingGroup___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submonoid_comap___at_alternatingGroup___spec__3___closed__3;
return x_5;
}
}
static lean_object* _init_l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_instMonoid;
x_2 = lean_alloc_closure((void*)(l_Units_instMul___rarg___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___closed__2;
x_3 = l_Submonoid_comap___at_alternatingGroup___spec__3(lean_box(0), lean_box(0), x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_alternatingGroup___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_alternatingGroup___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_alternatingGroup___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_ker___at_alternatingGroup___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_alternatingGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Equiv_Perm_sign___rarg(x_2, x_1);
x_4 = l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg(x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_alternatingGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_alternatingGroup___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_comap___at_alternatingGroup___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submonoid_comap___at_alternatingGroup___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_ker___at_alternatingGroup___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_ker___at_alternatingGroup___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_alternatingGroup_instFintype___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_instMonoid;
x_2 = l_Units_instMulOneClass___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_alternatingGroup_instFintype___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instDecidableEq___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_alternatingGroup_instFintype___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_alternatingGroup_instFintype___rarg___closed__2;
x_2 = lean_alloc_closure((void*)(l_Units_instDecidableEq___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_alternatingGroup_instFintype___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
lean_inc(x_2);
x_3 = l_Equiv_Perm_sign___rarg(x_2, x_1);
x_4 = l_alternatingGroup_instFintype___rarg___closed__1;
x_5 = l_alternatingGroup_instFintype___rarg___closed__3;
x_6 = lean_alloc_closure((void*)(l_MonoidHom_decidableMemKer___rarg), 4, 3);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
lean_closure_set(x_6, 2, x_3);
lean_inc(x_1);
lean_inc(x_2);
x_7 = l_Equiv_instFintype___rarg(x_2, x_2, x_1, x_1);
x_8 = l_Subtype_fintype___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_alternatingGroup_instFintype(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_alternatingGroup_instFintype___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_instUniqueSubtypePermMemSubgroupAlternatingGroupOfSubsingleton___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_instUniqueSubtypePermMemSubgroupAlternatingGroupOfSubsingleton(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_instUniqueSubtypePermMemSubgroupAlternatingGroupOfSubsingleton___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_instUniqueSubtypePermMemSubgroupAlternatingGroupOfSubsingleton___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_instUniqueSubtypePermMemSubgroupAlternatingGroupOfSubsingleton(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_CharZero(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_IndexNormal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_Fin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Subgroup_Simple(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_IntervalCases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_SpecificGroups_Alternating(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_CharZero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_IndexNormal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Subgroup_Simple(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_IntervalCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Submonoid_comap___at_alternatingGroup___spec__3___closed__1 = _init_l_Submonoid_comap___at_alternatingGroup___spec__3___closed__1();
lean_mark_persistent(l_Submonoid_comap___at_alternatingGroup___spec__3___closed__1);
l_Submonoid_comap___at_alternatingGroup___spec__3___closed__2 = _init_l_Submonoid_comap___at_alternatingGroup___spec__3___closed__2();
lean_mark_persistent(l_Submonoid_comap___at_alternatingGroup___spec__3___closed__2);
l_Submonoid_comap___at_alternatingGroup___spec__3___closed__3 = _init_l_Submonoid_comap___at_alternatingGroup___spec__3___closed__3();
lean_mark_persistent(l_Submonoid_comap___at_alternatingGroup___spec__3___closed__3);
l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___closed__1 = _init_l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___closed__1();
lean_mark_persistent(l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___closed__1);
l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___closed__2 = _init_l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___closed__2();
lean_mark_persistent(l_MonoidHom_mker___at_alternatingGroup___spec__2___rarg___closed__2);
l_alternatingGroup_instFintype___rarg___closed__1 = _init_l_alternatingGroup_instFintype___rarg___closed__1();
lean_mark_persistent(l_alternatingGroup_instFintype___rarg___closed__1);
l_alternatingGroup_instFintype___rarg___closed__2 = _init_l_alternatingGroup_instFintype___rarg___closed__2();
lean_mark_persistent(l_alternatingGroup_instFintype___rarg___closed__2);
l_alternatingGroup_instFintype___rarg___closed__3 = _init_l_alternatingGroup_instFintype___rarg___closed__3();
lean_mark_persistent(l_alternatingGroup_instFintype___rarg___closed__3);
l_instUniqueSubtypePermMemSubgroupAlternatingGroupOfSubsingleton___closed__1 = _init_l_instUniqueSubtypePermMemSubgroupAlternatingGroupOfSubsingleton___closed__1();
lean_mark_persistent(l_instUniqueSubtypePermMemSubgroupAlternatingGroupOfSubsingleton___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
