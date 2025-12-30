// Lean compiler output
// Module: Mathlib.Algebra.Category.Grp.Abelian
// Imports: Init Mathlib.Algebra.Category.Grp.Colimits Mathlib.Algebra.Category.Grp.Limits Mathlib.Algebra.Category.Grp.ZModuleEquivalence Mathlib.Algebra.Category.ModuleCat.Abelian Mathlib.CategoryTheory.Adjunction.Limits Mathlib.CategoryTheory.Limits.ConcreteCategory.Basic
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
LEAN_EXPORT lean_object* l_AddCommGrp_instAbelian;
extern lean_object* l_AddCommGrp_instPreadditive;
static lean_object* _init_l_AddCommGrp_instAbelian() {
_start:
{
lean_object* x_1; 
x_1 = l_AddCommGrp_instPreadditive;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Grp_Colimits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Grp_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Grp_ZModuleEquivalence(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Abelian(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Adjunction_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_ConcreteCategory_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_Grp_Abelian(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Grp_Colimits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Grp_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Grp_ZModuleEquivalence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_ModuleCat_Abelian(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Adjunction_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_ConcreteCategory_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AddCommGrp_instAbelian = _init_l_AddCommGrp_instAbelian();
lean_mark_persistent(l_AddCommGrp_instAbelian);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
