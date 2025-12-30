// Lean compiler output
// Module: Mathlib.Algebra.EuclideanDomain.Int
// Imports: Init Mathlib.Algebra.Group.Nat.Defs Mathlib.Algebra.EuclideanDomain.Defs Mathlib.Algebra.Order.Group.Unbundled.Int Mathlib.Algebra.Ring.Int.Defs
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
LEAN_EXPORT lean_object* l_Int_euclideanDomain;
lean_object* l_Int_ediv___boxed(lean_object*, lean_object*);
static lean_object* l_Int_euclideanDomain___closed__3;
static lean_object* l_Int_euclideanDomain___closed__2;
static lean_object* l_Int_euclideanDomain___closed__1;
extern lean_object* l_Int_instCommRing;
lean_object* l_Int_emod___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Int_euclideanDomain___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_ediv___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_euclideanDomain___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_emod___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_euclideanDomain___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Int_instCommRing;
x_2 = l_Int_euclideanDomain___closed__1;
x_3 = l_Int_euclideanDomain___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Int_euclideanDomain() {
_start:
{
lean_object* x_1; 
x_1 = l_Int_euclideanDomain___closed__3;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Nat_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_EuclideanDomain_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Unbundled_Int(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Int_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_EuclideanDomain_Int(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Nat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_EuclideanDomain_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Unbundled_Int(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Int_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_euclideanDomain___closed__1 = _init_l_Int_euclideanDomain___closed__1();
lean_mark_persistent(l_Int_euclideanDomain___closed__1);
l_Int_euclideanDomain___closed__2 = _init_l_Int_euclideanDomain___closed__2();
lean_mark_persistent(l_Int_euclideanDomain___closed__2);
l_Int_euclideanDomain___closed__3 = _init_l_Int_euclideanDomain___closed__3();
lean_mark_persistent(l_Int_euclideanDomain___closed__3);
l_Int_euclideanDomain = _init_l_Int_euclideanDomain();
lean_mark_persistent(l_Int_euclideanDomain);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
