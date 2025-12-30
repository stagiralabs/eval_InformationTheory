// Lean compiler output
// Module: Mathlib.RingTheory.MvPolynomial.MonomialOrder
// Imports: Init Mathlib.Data.Finsupp.Lex Mathlib.Data.Finsupp.MonomialOrder Mathlib.Data.Finsupp.WellFounded Mathlib.Data.List.TFAE Mathlib.RingTheory.MvPolynomial.Homogeneous Mathlib.RingTheory.Nilpotent.Defs
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
lean_object* l_Finset_fold___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonomialOrder_leadingCoeff___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonomialOrder_Monic_decidable(lean_object*);
lean_object* l_AddEquiv_instEquivLike___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonomialOrder_leadingCoeff(lean_object*);
lean_object* l_LinearOrderedCancelAddCommMonoid_toLinearOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonomialOrder_degree___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_MonomialOrder_degree___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_MonomialOrder_degree___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_MonomialOrder_degree___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_MonomialOrder_degree___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonomialOrder_degree___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
lean_object* l_MvPolynomial_coeff___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonomialOrder_lCoeff(lean_object*);
LEAN_EXPORT lean_object* l_MonomialOrder_degree(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_MonomialOrder_degree___spec__2(lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonomialOrder_Monic_decidable___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonomialOrder_lCoeff___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_MonomialOrder_degree___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonomialOrder_leadingCoeff___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonomialOrder_Monic_decidable___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonomialOrder_lCoeff___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_MonomialOrder_degree___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_MonomialOrder_degree___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddEquiv_symm___at_MonomialOrder_degree___spec__1___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_MonomialOrder_degree___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_MonomialOrder_degree___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_4);
x_5 = l_LinearOrderedCancelAddCommMonoid_toLinearOrderedAddCommMonoid___rarg(x_4);
x_6 = lean_alloc_closure((void*)(l_Finset_sup___at_MonomialOrder_degree___spec__2___rarg___lambda__1), 3, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Finset_fold___rarg(x_6, lean_box(0), lean_box(0), x_9, x_3, x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_MonomialOrder_degree___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sup___at_MonomialOrder_degree___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonomialOrder_degree___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_5);
x_6 = l_Equiv_symm___rarg(x_5);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_closure((void*)(l_AddEquiv_instEquivLike___elambda__2___rarg), 2, 1);
lean_closure_set(x_8, 0, x_5);
x_9 = l_Finset_sup___at_MonomialOrder_degree___spec__2___rarg(x_1, x_7, x_8);
x_10 = l_AddEquiv_instEquivLike___elambda__2___rarg(x_6, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonomialOrder_degree(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonomialOrder_degree___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_MonomialOrder_degree___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddEquiv_symm___at_MonomialOrder_degree___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonomialOrder_degree___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonomialOrder_degree___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonomialOrder_leadingCoeff___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_4);
x_5 = l_MonomialOrder_degree___rarg(x_1, lean_box(0), x_3, x_4);
x_6 = l_MvPolynomial_coeff___rarg(x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonomialOrder_leadingCoeff(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonomialOrder_leadingCoeff___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonomialOrder_leadingCoeff___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonomialOrder_leadingCoeff___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonomialOrder_lCoeff___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonomialOrder_leadingCoeff___rarg(x_1, lean_box(0), x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonomialOrder_lCoeff(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonomialOrder_lCoeff___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonomialOrder_lCoeff___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonomialOrder_lCoeff___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonomialOrder_Monic_decidable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l_MonomialOrder_leadingCoeff___rarg(x_1, lean_box(0), x_3, x_5);
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_3);
x_8 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_4, x_6, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonomialOrder_Monic_decidable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonomialOrder_Monic_decidable___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonomialOrder_Monic_decidable___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MonomialOrder_Monic_decidable___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Lex(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_MonomialOrder(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_WellFounded(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_TFAE(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_MvPolynomial_Homogeneous(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Nilpotent_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_MvPolynomial_MonomialOrder(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Lex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_MonomialOrder(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_WellFounded(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_TFAE(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_MvPolynomial_Homogeneous(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Nilpotent_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
