// Lean compiler output
// Module: Mathlib.Data.NNRat.Lemmas
// Imports: Init Mathlib.Algebra.Field.Rat Mathlib.Algebra.Group.Indicator Mathlib.Algebra.GroupWithZero.Action.End Mathlib.Algebra.Order.Field.Rat
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
LEAN_EXPORT lean_object* l_NNRat_rec___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_NNRat_coeHom;
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instMulActionOfRat___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NNRat_instDistribMulActionOfRat___rarg(lean_object*, lean_object*);
lean_object* l_NNRat_num(lean_object*);
LEAN_EXPORT lean_object* l_NNRat_instMulActionOfRat(lean_object*);
LEAN_EXPORT lean_object* l_NNRat_rec(lean_object*);
LEAN_EXPORT lean_object* l_NNRat_instMulActionOfRat___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NNRat_instDistribMulActionOfRat(lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NNRat_instDistribMulActionOfRat___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instMulActionOfRat___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instMulActionOfRat___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_apply_2(x_1, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instMulActionOfRat___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SMul_comp_smul___at_NNRat_instMulActionOfRat___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NNRat_instMulActionOfRat___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_NNRat_coeHom;
x_3 = lean_alloc_closure((void*)(l_SMul_comp_smul___at_NNRat_instMulActionOfRat___spec__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NNRat_instMulActionOfRat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NNRat_instMulActionOfRat___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_apply_2(x_1, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_apply_2(x_1, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__2___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NNRat_instDistribMulActionOfRat___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_NNRat_coeHom;
x_4 = lean_alloc_closure((void*)(l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_NNRat_instDistribMulActionOfRat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NNRat_instDistribMulActionOfRat___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SMul_comp_smul___at_NNRat_instDistribMulActionOfRat___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NNRat_instDistribMulActionOfRat___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_NNRat_instDistribMulActionOfRat___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NNRat_rec___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_NNRat_num(x_2);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NNRat_rec(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NNRat_rec___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Indicator(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Action_End(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Field_Rat(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_NNRat_Lemmas(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Indicator(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Action_End(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Field_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
