// Lean compiler output
// Module: Mathlib.Order.Interval.Set.OrderIso
// Imports: Init Mathlib.Order.Interval.Set.Basic Mathlib.Order.Hom.Set
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
LEAN_EXPORT lean_object* l_OrderIso_IicTop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_IciBot___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_subtypeUnivEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_IciBot(lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderIso_IicTop___closed__1;
LEAN_EXPORT lean_object* l_OrderIso_IicTop(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_OrderIso_IicTop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_subtypeUnivEquiv(lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderIso_IicTop(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderIso_IicTop___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderIso_IicTop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderIso_IicTop(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderIso_IciBot(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderIso_IicTop___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderIso_IciBot___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderIso_IciBot(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Set_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Hom_Set(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Interval_Set_OrderIso(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Set_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Hom_Set(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_OrderIso_IicTop___closed__1 = _init_l_OrderIso_IicTop___closed__1();
lean_mark_persistent(l_OrderIso_IicTop___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
