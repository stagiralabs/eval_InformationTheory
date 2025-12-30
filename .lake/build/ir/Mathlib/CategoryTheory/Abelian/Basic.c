// Lean compiler output
// Module: Mathlib.CategoryTheory.Abelian.Basic
// Imports: Init Mathlib.CategoryTheory.Limits.Constructions.Pullbacks Mathlib.CategoryTheory.Preadditive.Biproducts Mathlib.CategoryTheory.Limits.Preserves.Shapes.Kernels Mathlib.CategoryTheory.Limits.Shapes.Images Mathlib.CategoryTheory.Limits.Constructions.LimitsOfProductsAndEqualizers Mathlib.CategoryTheory.Abelian.NonPreadditive
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
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_ofCoimageImageComparisonIsIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_nonPreadditiveAbelian___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_ofCoimageImageComparisonIsIso___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_ofCoimageImageComparisonIsIso___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_ofCoimageImageComparisonIsIso___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_nonPreadditiveAbelian(lean_object*, lean_object*);
lean_object* l_CategoryTheory_Preadditive_preadditiveHasZeroMorphisms___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_nonPreadditiveAbelian___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_ofCoimageImageComparisonIsIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_ofCoimageImageComparisonIsIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Abelian_ofCoimageImageComparisonIsIso___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_ofCoimageImageComparisonIsIso___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Abelian_ofCoimageImageComparisonIsIso___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_ofCoimageImageComparisonIsIso___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Abelian_ofCoimageImageComparisonIsIso(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_nonPreadditiveAbelian___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Preadditive_preadditiveHasZeroMorphisms___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_nonPreadditiveAbelian(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Abelian_nonPreadditiveAbelian___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Abelian_nonPreadditiveAbelian___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Abelian_nonPreadditiveAbelian(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Constructions_Pullbacks(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Preadditive_Biproducts(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_Kernels(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Images(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Constructions_LimitsOfProductsAndEqualizers(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Abelian_NonPreadditive(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Abelian_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Constructions_Pullbacks(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Preadditive_Biproducts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_Kernels(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Images(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Constructions_LimitsOfProductsAndEqualizers(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Abelian_NonPreadditive(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
