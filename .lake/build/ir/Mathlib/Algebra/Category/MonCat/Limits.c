// Lean compiler output
// Module: Mathlib.Algebra.Category.MonCat.Limits
// Imports: Init Mathlib.Algebra.Category.MonCat.Basic Mathlib.Algebra.Small.Group Mathlib.CategoryTheory.Limits.Creates Mathlib.CategoryTheory.Limits.Types
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
LEAN_EXPORT lean_object* l_MonCat_sectionsSubmonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_addMonoidObj___rarg(lean_object*, lean_object*);
lean_object* l_Pi_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_addMonoidObj(lean_object*, lean_object*);
lean_object* l_Pi_monoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonCat_sectionsMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_commMonoidObj___rarg(lean_object*, lean_object*);
lean_object* l_Submonoid_toMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddSubmonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_sectionsSubmonoid___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_addCommMonoidObj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_sectionsMonoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddSubmonoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_sectionsSubmonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_addCommMonoidObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommMonCat_addCommMonoidObj___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_monoidObj___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddSubmonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_sectionsSubmonoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_commMonoidObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddSubmonoid___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_addMonoidObj___boxed(lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddMonoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_monoidObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_sectionsMonoid___rarg(lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
lean_object* l_AddSubmonoid_toAddMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonCat_commMonoidObj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_sectionsSubmonoid___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonCat_monoidObj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddSubmonoid___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonCat_sectionsMonoid___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonCat_monoidObj___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonCat_monoidObj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonCat_monoidObj___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_monoidObj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonCat_monoidObj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_addMonoidObj___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_addMonoidObj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonCat_addMonoidObj___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_addMonoidObj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonCat_addMonoidObj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_sectionsSubmonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
x_5 = l_Monoid_toMulOneClass___rarg(x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonCat_sectionsSubmonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonCat_sectionsSubmonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonCat_sectionsSubmonoid___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_sectionsSubmonoid___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonCat_sectionsSubmonoid___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonCat_sectionsSubmonoid___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonCat_sectionsSubmonoid(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddSubmonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
x_5 = l_AddMonoid_toAddZeroClass___rarg(x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddSubmonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddSubmonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonCat_sectionsAddSubmonoid___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddSubmonoid___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddMonCat_sectionsAddSubmonoid___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddSubmonoid___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonCat_sectionsAddSubmonoid(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_sectionsMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonCat_sectionsMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_MonCat_sectionsMonoid___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_monoid___rarg(x_2);
x_4 = l_MonCat_sectionsSubmonoid___rarg(x_1);
lean_dec(x_1);
x_5 = l_Submonoid_toMonoid___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonCat_sectionsMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonCat_sectionsMonoid___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonCat_sectionsMonoid___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonCat_sectionsMonoid(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_MonCat_sectionsMonoid___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_addMonoid___rarg(x_2);
x_4 = l_AddMonCat_sectionsAddSubmonoid___rarg(x_1);
lean_dec(x_1);
x_5 = l_AddSubmonoid_toAddMonoid___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonCat_sectionsAddMonoid___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonCat_sectionsAddMonoid___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonCat_sectionsAddMonoid(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_commMonoidObj___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_commMonoidObj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CommMonCat_commMonoidObj___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommMonCat_commMonoidObj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CommMonCat_commMonoidObj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_addCommMonoidObj___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_addCommMonoidObj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddCommMonCat_addCommMonoidObj___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommMonCat_addCommMonoidObj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddCommMonCat_addCommMonoidObj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_MonCat_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Small_Group(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Creates(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Types(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_MonCat_Limits(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_MonCat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Small_Group(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Creates(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
