// Lean compiler output
// Module: Mathlib.RingTheory.Localization.FractionRing
// Imports: Init Mathlib.Algebra.Field.Equiv Mathlib.Algebra.Field.Subfield.Basic Mathlib.Algebra.Order.Field.Rat Mathlib.Algebra.Order.Ring.Int Mathlib.RingTheory.Localization.Basic Mathlib.RingTheory.SimpleRing.Basic
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
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_FractionRing_unique___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_FractionRing_unique___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FractionRing_unique(lean_object*);
LEAN_EXPORT lean_object* l_FractionRing_unique___rarg(lean_object*, lean_object*);
lean_object* l_Localization_instUniqueLocalization___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_FractionRing_unique___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_FractionRing_unique___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_FractionRing_unique___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_FractionRing_unique___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_nonZeroDivisors___at_FractionRing_unique___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FractionRing_unique___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_nonZeroDivisors___at_FractionRing_unique___spec__1___rarg(x_1);
x_5 = l_Localization_instUniqueLocalization___rarg(x_3, x_4, lean_box(0));
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FractionRing_unique(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FractionRing_unique___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_FractionRing_unique___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_nonZeroDivisors___at_FractionRing_unique___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FractionRing_unique___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_FractionRing_unique___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Subfield_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Field_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Int(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_SimpleRing_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Localization_FractionRing(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Subfield_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Field_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Int(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_SimpleRing_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
