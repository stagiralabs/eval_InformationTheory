// Lean compiler output
// Module: Mathlib.FieldTheory.PolynomialGaloisGroup
// Imports: Init Mathlib.FieldTheory.Galois.Basic
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
LEAN_EXPORT lean_object* l_Polynomial_Gal_galActionAux___rarg(lean_object*, lean_object*);
static lean_object* l_Polynomial_Gal_instEquivLikeSplittingField___closed__1;
LEAN_EXPORT lean_object* l_Polynomial_Gal_instEquivLikeSplittingField___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_Gal_galActionAux(lean_object*, lean_object*, lean_object*);
lean_object* l_AlgEquiv_applyMulSemiringAction___rarg(lean_object*, lean_object*);
static lean_object* l_Polynomial_Gal_applyMulSemiringAction___closed__1;
static lean_object* l_Polynomial_Gal_instEquivLikeSplittingField___closed__2;
lean_object* l_AlgEquiv_instEquivLike___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_Gal_applyMulSemiringAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_Gal_instEquivLikeSplittingField(lean_object*, lean_object*, lean_object*);
static lean_object* l_Polynomial_Gal_instEquivLikeSplittingField___closed__3;
lean_object* l_AlgEquiv_instEquivLike___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_Gal_galActionAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_Gal_applyMulSemiringAction___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Polynomial_Gal_instEquivLikeSplittingField___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AlgEquiv_instEquivLike___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Polynomial_Gal_instEquivLikeSplittingField___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AlgEquiv_instEquivLike___lambda__2), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Polynomial_Gal_instEquivLikeSplittingField___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Polynomial_Gal_instEquivLikeSplittingField___closed__1;
x_2 = l_Polynomial_Gal_instEquivLikeSplittingField___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_Gal_instEquivLikeSplittingField(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_Gal_instEquivLikeSplittingField___closed__3;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_Gal_instEquivLikeSplittingField___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_Gal_instEquivLikeSplittingField(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Polynomial_Gal_applyMulSemiringAction___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AlgEquiv_applyMulSemiringAction___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Polynomial_Gal_applyMulSemiringAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_Gal_applyMulSemiringAction___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_Gal_applyMulSemiringAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_Gal_applyMulSemiringAction(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_Gal_galActionAux___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_Gal_galActionAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Polynomial_Gal_galActionAux___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_Gal_galActionAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_Gal_galActionAux(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Galois_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_FieldTheory_PolynomialGaloisGroup(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Galois_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Polynomial_Gal_instEquivLikeSplittingField___closed__1 = _init_l_Polynomial_Gal_instEquivLikeSplittingField___closed__1();
lean_mark_persistent(l_Polynomial_Gal_instEquivLikeSplittingField___closed__1);
l_Polynomial_Gal_instEquivLikeSplittingField___closed__2 = _init_l_Polynomial_Gal_instEquivLikeSplittingField___closed__2();
lean_mark_persistent(l_Polynomial_Gal_instEquivLikeSplittingField___closed__2);
l_Polynomial_Gal_instEquivLikeSplittingField___closed__3 = _init_l_Polynomial_Gal_instEquivLikeSplittingField___closed__3();
lean_mark_persistent(l_Polynomial_Gal_instEquivLikeSplittingField___closed__3);
l_Polynomial_Gal_applyMulSemiringAction___closed__1 = _init_l_Polynomial_Gal_applyMulSemiringAction___closed__1();
lean_mark_persistent(l_Polynomial_Gal_applyMulSemiringAction___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
