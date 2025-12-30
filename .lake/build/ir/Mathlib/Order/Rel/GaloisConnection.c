// Lean compiler output
// Module: Mathlib.Order.Rel.GaloisConnection
// Imports: Init Mathlib.Data.Rel
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
LEAN_EXPORT lean_object* l_Rel_equivFixedPoints___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rel_equivFixedPoints(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rel_equivFixedPoints___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Rel_equivFixedPoints___elambda__1___closed__1;
static lean_object* _init_l_Rel_equivFixedPoints___elambda__1___closed__1() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Rel_equivFixedPoints___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Rel_equivFixedPoints___elambda__1___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Rel_equivFixedPoints___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Rel_equivFixedPoints___elambda__1___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Rel_equivFixedPoints(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Rel_equivFixedPoints___elambda__2), 4, 3);
lean_closure_set(x_4, 0, lean_box(0));
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, lean_box(0));
x_5 = lean_alloc_closure((void*)(l_Rel_equivFixedPoints___elambda__1), 4, 3);
lean_closure_set(x_5, 0, lean_box(0));
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, lean_box(0));
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rel(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Rel_GaloisConnection(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Rel_equivFixedPoints___elambda__1___closed__1 = _init_l_Rel_equivFixedPoints___elambda__1___closed__1();
lean_mark_persistent(l_Rel_equivFixedPoints___elambda__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
