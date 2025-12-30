// Lean compiler output
// Module: Mathlib.LinearAlgebra.CliffordAlgebra.Star
// Imports: Init Mathlib.LinearAlgebra.CliffordAlgebra.Conjugation
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
lean_object* l_CliffordAlgebra_involute___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CliffordAlgebra_instStarRing___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CliffordAlgebra_reverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CliffordAlgebra_instStarRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CliffordAlgebra_instStarRing(lean_object*);
LEAN_EXPORT lean_object* l_CliffordAlgebra_instStarRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_7 = l_CliffordAlgebra_involute___rarg(x_1, lean_box(0), x_3, x_4, x_5);
x_8 = lean_apply_1(x_7, x_6);
x_9 = l_CliffordAlgebra_reverse___rarg(x_1, lean_box(0), x_3, x_4, x_5);
x_10 = lean_apply_1(x_9, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_CliffordAlgebra_instStarRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CliffordAlgebra_instStarRing___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CliffordAlgebra_instStarRing___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CliffordAlgebra_instStarRing___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_CliffordAlgebra_Conjugation(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_CliffordAlgebra_Star(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_CliffordAlgebra_Conjugation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
