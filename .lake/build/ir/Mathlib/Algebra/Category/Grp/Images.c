// Lean compiler output
// Module: Mathlib.Algebra.Category.Grp.Images
// Imports: Init Mathlib.Algebra.Category.Grp.Abelian Mathlib.CategoryTheory.Limits.Shapes.Images
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
LEAN_EXPORT lean_object* l_AddCommGrp_monoFactorisation___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_image(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_monoFactorisation(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_image__u03b9___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_AddSubgroup_subtype___rarg___boxed(lean_object*);
lean_object* l_AddMonoidHom_rangeRestrict___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_image___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_factorThruImage(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_factorThruImage___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoidHom_range___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_AddCommGrp_image__u03b9___closed__1;
lean_object* l_AddSubgroup_toAddGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_image__u03b9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_image(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_AddMonoidHom_range___rarg(x_1, lean_box(0), x_2, x_3);
x_5 = l_AddSubgroup_toAddGroup___rarg(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_image___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddCommGrp_image(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_AddCommGrp_image__u03b9___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddSubgroup_subtype___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_image__u03b9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddCommGrp_image__u03b9___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_image__u03b9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddCommGrp_image__u03b9(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_factorThruImage(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddMonoidHom_rangeRestrict___rarg(x_1, lean_box(0), x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_factorThruImage___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddCommGrp_factorThruImage(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_monoFactorisation(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_4 = l_AddCommGrp_image(x_1, x_2, x_3);
x_5 = l_AddMonoidHom_rangeRestrict___rarg(x_1, lean_box(0), x_2, x_3);
lean_dec(x_2);
x_6 = l_AddCommGrp_image__u03b9___closed__1;
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 2, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_monoFactorisation___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddCommGrp_monoFactorisation(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Grp_Abelian(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Images(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_Grp_Images(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Grp_Abelian(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Images(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AddCommGrp_image__u03b9___closed__1 = _init_l_AddCommGrp_image__u03b9___closed__1();
lean_mark_persistent(l_AddCommGrp_image__u03b9___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
