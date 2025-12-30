// Lean compiler output
// Module: Mathlib.AlgebraicTopology.DoldKan.FunctorGamma
// Imports: Init Mathlib.AlgebraicTopology.SimplicialObject.Split Mathlib.AlgebraicTopology.DoldKan.PInfty
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
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan__u0393_u2080_Obj_summand(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan__u0393_u2080_Obj_summand___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan__u0393_u2080_Obj_summand___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan__u0393_u2080_Obj_summand___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan__u0393_u2080_Obj_summand___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan__u0393_u2080_Obj_summand(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgebraicTopology_DoldKan__u0393_u2080_Obj_summand___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan__u0393_u2080_Obj_summand___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AlgebraicTopology_DoldKan__u0393_u2080_Obj_summand___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan__u0393_u2080_Obj_summand___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AlgebraicTopology_DoldKan__u0393_u2080_Obj_summand(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicTopology_SimplicialObject_Split(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicTopology_DoldKan_PInfty(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicTopology_DoldKan_FunctorGamma(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicTopology_SimplicialObject_Split(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicTopology_DoldKan_PInfty(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
