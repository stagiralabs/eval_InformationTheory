// Lean compiler output
// Module: Mathlib.Data.Set.Image
// Imports: Init Batteries.Tactic.Congr Mathlib.Data.Set.Subsingleton Mathlib.Data.Set.SymmDiff Mathlib.Order.Hom.Basic
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
LEAN_EXPORT lean_object* l_Set_sumEquiv(lean_object*, lean_object*);
static lean_object* l_Set_sumEquiv___closed__1;
static lean_object* l_Set_sumEquiv___closed__2;
LEAN_EXPORT lean_object* l_Set_sumEquiv___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Set_sumEquiv___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, lean_box(0));
lean_ctor_set(x_2, 1, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_Set_sumEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Set_sumEquiv___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Set_sumEquiv___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Set_sumEquiv___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_sumEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_sumEquiv___closed__2;
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Tactic_Congr(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Subsingleton(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_SymmDiff(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Hom_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Set_Image(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Tactic_Congr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Subsingleton(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_SymmDiff(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Hom_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Set_sumEquiv___closed__1 = _init_l_Set_sumEquiv___closed__1();
lean_mark_persistent(l_Set_sumEquiv___closed__1);
l_Set_sumEquiv___closed__2 = _init_l_Set_sumEquiv___closed__2();
lean_mark_persistent(l_Set_sumEquiv___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
