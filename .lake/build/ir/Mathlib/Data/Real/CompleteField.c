// Lean compiler output
// Module: Mathlib.Data.Real.CompleteField
// Imports: Init Mathlib.Algebra.Order.CompleteField Mathlib.Data.Real.Sqrt
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
LEAN_EXPORT lean_object* l_Real_RingHom_unique;
LEAN_EXPORT lean_object* l_RingHom_id___at_Real_RingHom_unique___spec__1;
lean_object* l_id___rarg___boxed(lean_object*);
static lean_object* l_RingHom_id___at_Real_RingHom_unique___spec__1___closed__1;
static lean_object* _init_l_RingHom_id___at_Real_RingHom_unique___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_RingHom_id___at_Real_RingHom_unique___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_RingHom_id___at_Real_RingHom_unique___spec__1___closed__1;
return x_1;
}
}
static lean_object* _init_l_Real_RingHom_unique() {
_start:
{
lean_object* x_1; 
x_1 = l_RingHom_id___at_Real_RingHom_unique___spec__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_CompleteField(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Real_Sqrt(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Real_CompleteField(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_CompleteField(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Real_Sqrt(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Real_RingHom_unique___spec__1___closed__1 = _init_l_RingHom_id___at_Real_RingHom_unique___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Real_RingHom_unique___spec__1___closed__1);
l_RingHom_id___at_Real_RingHom_unique___spec__1 = _init_l_RingHom_id___at_Real_RingHom_unique___spec__1();
lean_mark_persistent(l_RingHom_id___at_Real_RingHom_unique___spec__1);
l_Real_RingHom_unique = _init_l_Real_RingHom_unique();
lean_mark_persistent(l_Real_RingHom_unique);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
