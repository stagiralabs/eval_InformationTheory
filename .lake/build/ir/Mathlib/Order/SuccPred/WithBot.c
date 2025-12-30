// Lean compiler output
// Module: Mathlib.Order.SuccPred.WithBot
// Imports: Init Mathlib.Order.SuccPred.Basic
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
LEAN_EXPORT lean_object* l_WithTop_pred___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_pred(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_succ___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_succ(lean_object*, lean_object*);
lean_object* l_Order_succ___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_pred___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_succ___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_succ___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_WithBot_recBotCoe___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Order_pred___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_pred___boxed(lean_object*, lean_object*);
lean_object* l_WithTop_recTopCoe___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_succ___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Order_succ___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_WithBot_recBotCoe___rarg(x_1, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithBot_succ(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithBot_succ___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_succ___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_WithBot_succ___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithBot_succ___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_succ(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_pred___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Order_pred___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_WithTop_recTopCoe___rarg(x_1, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithTop_pred(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithTop_pred___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_pred___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_WithTop_pred___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithTop_pred___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_pred(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SuccPred_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_SuccPred_WithBot(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SuccPred_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
