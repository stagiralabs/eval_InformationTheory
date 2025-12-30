// Lean compiler output
// Module: Mathlib.Data.Rat.Cast.CharZero
// Imports: Init Mathlib.Algebra.GroupWithZero.Units.Lemmas Mathlib.Data.Rat.Cast.Defs
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
lean_object* l_NNRat_cast___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_castHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NNRat_castHom(lean_object*);
LEAN_EXPORT lean_object* l_NNRat_castHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_castHom(lean_object*);
lean_object* l_Rat_cast___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_castHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 5);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_Rat_cast___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Rat_castHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Rat_castHom___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NNRat_castHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 4);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_NNRat_cast___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_NNRat_castHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NNRat_castHom___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Units_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_Cast_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Rat_Cast_CharZero(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Units_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_Cast_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
