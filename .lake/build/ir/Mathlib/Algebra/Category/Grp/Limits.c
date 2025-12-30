// Lean compiler output
// Module: Mathlib.Algebra.Category.Grp.Limits
// Imports: Init Mathlib.Algebra.Category.MonCat.ForgetCorepresentable Mathlib.Algebra.Category.Grp.ForgetCorepresentable Mathlib.Algebra.Category.Grp.Preadditive Mathlib.Algebra.Category.MonCat.Limits Mathlib.CategoryTheory.ConcreteCategory.ReflectsIso Mathlib.CategoryTheory.Limits.ConcreteCategory.Basic
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
lean_object* l_Pi_subNegMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommGrp_commGroupObj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_addCommGroupObj___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddSubgroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Grp_sectionsGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Grp_sections_u03c0MonoidHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Grp_sectionsSubgroup___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Grp_sectionsSubgroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_addCommGroupObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Grp_sections_u03c0MonoidHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Grp_groupObj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommGrp_commGroupObj___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGrp_addGroupObj___boxed(lean_object*, lean_object*);
lean_object* l_Pi_divInvMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Grp_groupObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGrp_addGroupObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_addCommGroupObj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Grp_sectionsSubgroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddSubgroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommGrp_commGroupObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGrp_sections_u03c0AddMonoidHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGrp_addGroupObj___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddGroup___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Grp_groupObj___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGrp_sections_u03c0AddMonoidHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Grp_sections_u03c0MonoidHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Grp_sectionsSubgroup___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Grp_sectionsGroup___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Grp_sectionsSubgroup___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddGrp_sections_u03c0AddMonoidHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddSubgroup___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Grp_sectionsGroup___rarg(lean_object*);
lean_object* l_AddSubgroup_toAddGroup___rarg(lean_object*, lean_object*);
lean_object* l_Subgroup_toGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddSubgroup___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Grp_groupObj___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Grp_groupObj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Grp_groupObj___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Grp_groupObj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Grp_groupObj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddGrp_addGroupObj___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_AddGrp_addGroupObj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddGrp_addGroupObj___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddGrp_addGroupObj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddGrp_addGroupObj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Grp_sectionsSubgroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Grp_sectionsSubgroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Grp_sectionsSubgroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Grp_sectionsSubgroup___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Grp_sectionsSubgroup___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Grp_sectionsSubgroup___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Grp_sectionsSubgroup___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Grp_sectionsSubgroup(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddSubgroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddSubgroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddGrp_sectionsAddSubgroup___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddSubgroup___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddGrp_sectionsAddSubgroup___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddSubgroup___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddGrp_sectionsAddSubgroup(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Grp_sectionsGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Grp_sectionsSubgroup___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_divInvMonoid___rarg(x_2);
x_4 = l_Grp_sectionsSubgroup___rarg(x_1);
lean_dec(x_1);
x_5 = l_Subgroup_toGroup___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Grp_sectionsGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Grp_sectionsGroup___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Grp_sectionsGroup___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Grp_sectionsGroup(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Grp_sectionsSubgroup___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_subNegMonoid___rarg(x_2);
x_4 = l_AddGrp_sectionsAddSubgroup___rarg(x_1);
lean_dec(x_1);
x_5 = l_AddSubgroup_toAddGroup___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddGrp_sectionsAddGroup___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddGrp_sectionsAddGroup___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddGrp_sectionsAddGroup(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Grp_sections_u03c0MonoidHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Grp_sections_u03c0MonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Grp_sections_u03c0MonoidHom___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Grp_sections_u03c0MonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Grp_sections_u03c0MonoidHom(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddGrp_sections_u03c0AddMonoidHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddGrp_sections_u03c0AddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddGrp_sections_u03c0AddMonoidHom___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddGrp_sections_u03c0AddMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddGrp_sections_u03c0AddMonoidHom(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CommGrp_commGroupObj___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_CommGrp_commGroupObj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CommGrp_commGroupObj___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommGrp_commGroupObj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CommGrp_commGroupObj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_addCommGroupObj___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_AddCommGrp_addCommGroupObj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddCommGrp_addCommGroupObj___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_addCommGroupObj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddCommGrp_addCommGroupObj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_MonCat_ForgetCorepresentable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Grp_ForgetCorepresentable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Grp_Preadditive(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_MonCat_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_ConcreteCategory_ReflectsIso(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_ConcreteCategory_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_Grp_Limits(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_MonCat_ForgetCorepresentable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Grp_ForgetCorepresentable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Grp_Preadditive(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_MonCat_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_ConcreteCategory_ReflectsIso(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_ConcreteCategory_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
