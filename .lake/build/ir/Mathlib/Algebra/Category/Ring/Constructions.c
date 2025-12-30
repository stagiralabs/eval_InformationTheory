// Lean compiler output
// Module: Mathlib.Algebra.Category.Ring.Constructions
// Imports: Init Mathlib.Algebra.Category.Ring.Instances Mathlib.Algebra.Category.Ring.Limits Mathlib.CategoryTheory.Limits.Shapes.Pullback.CommSq Mathlib.CategoryTheory.Limits.Shapes.StrictInitial Mathlib.RingTheory.TensorProduct.Basic Mathlib.RingTheory.IsTensorProduct
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
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Category_Ring_Constructions_0__CategoryTheory_Limits_WalkingPair_swap_match__1_splitter___rarg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Category_Ring_Constructions_0__CategoryTheory_Limits_WalkingPair_swap_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Category_Ring_Constructions_0__CategoryTheory_Limits_WalkingPair_swap_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Category_Ring_Constructions_0__CategoryTheory_Limits_WalkingPair_swap_match__1_splitter___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Category_Ring_Constructions_0__CategoryTheory_Limits_WalkingPair_swap_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Category_Ring_Constructions_0__CategoryTheory_Limits_WalkingPair_swap_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Category_Ring_Constructions_0__CategoryTheory_Limits_WalkingPair_swap_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l___private_Mathlib_Algebra_Category_Ring_Constructions_0__CategoryTheory_Limits_WalkingPair_swap_match__1_splitter___rarg(x_4, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Ring_Instances(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Ring_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_CommSq(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_StrictInitial(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_TensorProduct_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_IsTensorProduct(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_Ring_Constructions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Ring_Instances(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Ring_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Pullback_CommSq(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_StrictInitial(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_TensorProduct_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_IsTensorProduct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
