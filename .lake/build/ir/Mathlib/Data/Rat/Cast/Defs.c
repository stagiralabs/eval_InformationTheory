// Lean compiler output
// Module: Mathlib.Data.Rat.Cast.Defs
// Imports: Init Mathlib.Algebra.Field.Basic Mathlib.Algebra.Field.Rat Mathlib.Algebra.Group.Commute.Basic Mathlib.Data.Int.Cast.Lemmas Mathlib.Data.Rat.Lemmas Mathlib.Order.Nat Mathlib.Algebra.GroupWithZero.Units.Lemmas
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
LEAN_EXPORT lean_object* l_NNRat_instDistribSMul(lean_object*);
LEAN_EXPORT lean_object* l_NNRat_instDistribSMul___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Rat_instDistribSMul___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Rat_instDistribSMul(lean_object*);
LEAN_EXPORT lean_object* l_NNRat_instDistribSMul___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Rat_instDistribSMul___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_NNRat_instDistribSMul___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 5);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NNRat_instDistribSMul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NNRat_instDistribSMul___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NNRat_instDistribSMul___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_NNRat_instDistribSMul___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Rat_instDistribSMul___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 7);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Rat_instDistribSMul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Rat_instDistribSMul___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Rat_instDistribSMul___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Rat_instDistribSMul___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Commute_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Cast_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Units_Lemmas(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Rat_Cast_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Commute_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Cast_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Units_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
