// Lean compiler output
// Module: Mathlib.Analysis.Calculus.ContDiff.FaaDiBruno
// Imports: Init Mathlib.Analysis.Analytic.Within Mathlib.Analysis.Calculus.FDeriv.Analytic Mathlib.Analysis.Calculus.ContDiff.FTaylorSeries
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
lean_object* l_Fin_succ___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_OrderedFinpartition_compAlongOrderedFinpartition_u2097___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqOrderedFinpartition___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqOrderedFinpartition___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___at_FormalMultilinearSeries_compAlongOrderedFinpartition___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FormalMultilinearSeries_compAlongOrderedFinpartition(lean_object*);
lean_object* l_Function_update___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition_u2097___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__Fin_succ_match__1_splitter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_embSigma___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_OrderedFinpartition_compAlongOrderedFinpartition_u2097___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic___elambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition_u2097(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_applyOrderedFinpartition___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_embSigma___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1(lean_object*);
lean_object* l_instDecidableEqFin___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_OrderedFinpartition_compAlongOrderedFinpartition_u2097___spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__OrderedFinpartition_extend_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_applyOrderedFinpartition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____boxed(lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqOrderedFinpartition___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__Fin_succ_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FormalMultilinearSeries_compAlongOrderedFinpartition___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_embSigma___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__OrderedFinpartition_extend_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_applyOrderedFinpartition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___closed__1;
static lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__2___closed__1;
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__OrderedFinpartition_extend_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_instUniqueOfNatNat;
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_OrderedFinpartition_instUniqueOfNatNat___closed__1;
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__OrderedFinpartition_extend_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extend___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__Fin_succ_match__1_splitter___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle(lean_object*, lean_object*, lean_object*);
uint8_t l_Fintype_decidablePiFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_OrderedFinpartition_extendMiddle___closed__1;
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FormalMultilinearSeries_compAlongOrderedFinpartition___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
lean_object* l_List_ofFn___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition_u2097___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_NormedAddCommGroup_toSeminormedAddCommGroup___rarg(lean_object*);
lean_object* l_Fin_cases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic___elambda__1(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__2___boxed(lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqOrderedFinpartition(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___at_FormalMultilinearSeries_compAlongOrderedFinpartition___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_embSigma___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_List_finRange___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_embSigma(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__2(lean_object*, lean_object*);
static lean_object* l_OrderedFinpartition_extendMiddle___elambda__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___at_FormalMultilinearSeries_compAlongOrderedFinpartition___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FormalMultilinearSeries_compAlongOrderedFinpartition___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570_(lean_object*);
LEAN_EXPORT uint8_t l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_eq(x_2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_finRange___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT uint8_t l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_apply_1(x_1, x_3);
x_7 = l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__2___closed__1;
x_8 = l_List_ofFn___rarg(x_6, x_7);
x_9 = l_Fintype_decidablePiFintype___rarg(x_2, x_8, x_4, x_5);
return x_9;
}
}
static lean_object* _init_l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__1___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT uint8_t l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 2);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_nat_dec_eq(x_3, x_6);
lean_dec(x_6);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = 0;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__2___closed__1;
x_12 = l_List_ofFn___rarg(x_3, x_11);
x_13 = l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___closed__1;
lean_inc(x_4);
lean_inc(x_12);
x_14 = l_Fintype_decidablePiFintype___rarg(x_13, x_12, x_4, x_7);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
x_15 = 0;
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_alloc_closure((void*)(l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__2___boxed), 5, 2);
lean_closure_set(x_16, 0, x_4);
lean_closure_set(x_16, 1, x_13);
x_17 = l_Fintype_decidablePiFintype___rarg(x_16, x_12, x_5, x_8);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570_(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570_(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqOrderedFinpartition___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqOrderedFinpartition(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instDecidableEqOrderedFinpartition___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqOrderedFinpartition___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_instDecidableEqOrderedFinpartition___rarg(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqOrderedFinpartition___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instDecidableEqOrderedFinpartition(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedFinpartition_atomic___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(1u);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_OrderedFinpartition_atomic___elambda__2___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_OrderedFinpartition_atomic___elambda__1___rarg___boxed), 2, 0);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderedFinpartition_atomic___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderedFinpartition_atomic___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_atomic___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderedFinpartition_atomic___elambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderedFinpartition_atomic(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_embSigma___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_embSigma___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_OrderedFinpartition_embSigma___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_OrderedFinpartition_embSigma___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_OrderedFinpartition_embSigma___rarg___lambda__2), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_embSigma(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedFinpartition_embSigma___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_embSigma___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderedFinpartition_embSigma(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_OrderedFinpartition_instUniqueOfNatNat___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_OrderedFinpartition_atomic(x_1);
return x_2;
}
}
static lean_object* _init_l_OrderedFinpartition_instUniqueOfNatNat() {
_start:
{
lean_object* x_1; 
x_1 = l_OrderedFinpartition_instUniqueOfNatNat___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_mod(x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_alloc_closure((void*)(l_OrderedFinpartition_extendLeft___elambda__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_OrderedFinpartition_extendLeft___elambda__1___rarg___lambda__2), 3, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Fin_cases(x_3, lean_box(0), x_6, x_7, x_4);
lean_dec(x_6);
x_9 = lean_apply_1(x_8, x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedFinpartition_extendLeft___elambda__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Fin_cases(x_1, lean_box(0), x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderedFinpartition_extendLeft___elambda__2___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_1, x_3);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_nat_add(x_5, x_3);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_inc(x_5);
x_8 = lean_alloc_closure((void*)(l_OrderedFinpartition_extendLeft___elambda__2___rarg___boxed), 3, 2);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_closure((void*)(l_OrderedFinpartition_extendLeft___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_4);
lean_closure_set(x_9, 2, x_5);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderedFinpartition_extendLeft___elambda__1___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderedFinpartition_extendLeft___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderedFinpartition_extendLeft___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderedFinpartition_extendLeft___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderedFinpartition_extendLeft___elambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendLeft___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderedFinpartition_extendLeft(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__Fin_succ_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_2, x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__Fin_succ_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__Fin_succ_match__1_splitter___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__Fin_succ_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__Fin_succ_match__1_splitter(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_OrderedFinpartition_extendMiddle___elambda__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fin_succ___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_nat_dec_eq(x_9, x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_2(x_12, x_9, x_10);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_13, x_14);
lean_dec(x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_9);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_mod(x_16, x_3);
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_apply_1(x_18, x_2);
x_20 = l_OrderedFinpartition_extendMiddle___elambda__1___rarg___closed__1;
x_21 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_21, 0, x_20);
lean_closure_set(x_21, 1, x_19);
x_22 = l_Fin_cases(x_7, lean_box(0), x_17, x_21, x_10);
lean_dec(x_10);
lean_dec(x_17);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedFinpartition_extendMiddle___elambda__1___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Function_update___rarg(x_3, x_4, x_1, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderedFinpartition_extendMiddle___elambda__2___rarg___boxed), 6, 0);
return x_3;
}
}
static lean_object* _init_l_OrderedFinpartition_extendMiddle___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqFin___rarg___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_1, x_4);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_inc(x_7);
lean_inc(x_3);
x_8 = lean_apply_1(x_7, x_3);
x_9 = lean_nat_add(x_8, x_4);
x_10 = l_OrderedFinpartition_extendMiddle___closed__1;
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_3);
x_11 = lean_alloc_closure((void*)(l_OrderedFinpartition_extendMiddle___elambda__2___rarg___boxed), 6, 5);
lean_closure_set(x_11, 0, x_3);
lean_closure_set(x_11, 1, x_6);
lean_closure_set(x_11, 2, x_10);
lean_closure_set(x_11, 3, x_7);
lean_closure_set(x_11, 4, x_9);
lean_inc(x_6);
lean_inc(x_2);
x_12 = lean_alloc_closure((void*)(l_OrderedFinpartition_extendMiddle___elambda__1___rarg___boxed), 10, 8);
lean_closure_set(x_12, 0, x_2);
lean_closure_set(x_12, 1, x_3);
lean_closure_set(x_12, 2, x_5);
lean_closure_set(x_12, 3, x_6);
lean_closure_set(x_12, 4, x_10);
lean_closure_set(x_12, 5, x_7);
lean_closure_set(x_12, 6, x_8);
lean_closure_set(x_12, 7, x_9);
x_13 = !lean_is_exclusive(x_2);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_2, 2);
lean_dec(x_14);
x_15 = lean_ctor_get(x_2, 1);
lean_dec(x_15);
x_16 = lean_ctor_get(x_2, 0);
lean_dec(x_16);
lean_ctor_set(x_2, 2, x_12);
lean_ctor_set(x_2, 1, x_11);
return x_2;
}
else
{
lean_object* x_17; 
lean_dec(x_2);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_11);
lean_ctor_set(x_17, 2, x_12);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_OrderedFinpartition_extendMiddle___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderedFinpartition_extendMiddle___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderedFinpartition_extendMiddle___elambda__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderedFinpartition_extendMiddle___elambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extendMiddle___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderedFinpartition_extendMiddle(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extend(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = l_OrderedFinpartition_extendLeft(x_1, x_2);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_OrderedFinpartition_extendMiddle(x_1, x_2, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_extend___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderedFinpartition_extend(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_4, x_7);
x_9 = lean_apply_2(x_6, x_8, x_5);
x_10 = lean_nat_sub(x_9, x_7);
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedFinpartition_eraseLeft___elambda__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_4, x_6);
x_8 = lean_apply_1(x_5, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedFinpartition_eraseLeft___elambda__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_4, x_5);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_OrderedFinpartition_eraseLeft___elambda__2___rarg___boxed), 4, 3);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_6);
lean_inc(x_6);
x_8 = lean_alloc_closure((void*)(l_OrderedFinpartition_eraseLeft___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_6);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_9, 2, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderedFinpartition_eraseLeft___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderedFinpartition_eraseLeft___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderedFinpartition_eraseLeft___elambda__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderedFinpartition_eraseLeft___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_eraseLeft___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderedFinpartition_eraseLeft(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__OrderedFinpartition_extend_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__OrderedFinpartition_extend_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__OrderedFinpartition_extend_match__1_splitter___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__OrderedFinpartition_extend_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__OrderedFinpartition_extend_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__OrderedFinpartition_extend_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__OrderedFinpartition_extend_match__1_splitter(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_applyOrderedFinpartition___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_4);
x_6 = lean_apply_1(x_5, x_4);
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_6);
x_8 = lean_apply_2(x_2, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_applyOrderedFinpartition(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_OrderedFinpartition_applyOrderedFinpartition___rarg), 4, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_applyOrderedFinpartition___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_OrderedFinpartition_applyOrderedFinpartition(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_NormedAddCommGroup_toSeminormedAddCommGroup___rarg(x_1);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedFinpartition_compAlongOrderedFinpartition___elambda__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_OrderedFinpartition_applyOrderedFinpartition___rarg), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
lean_closure_set(x_5, 2, x_4);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_OrderedFinpartition_compAlongOrderedFinpartition___rarg), 4, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderedFinpartition_compAlongOrderedFinpartition___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_OrderedFinpartition_compAlongOrderedFinpartition(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
static lean_object* _init_l_RingHom_id___at_OrderedFinpartition_compAlongOrderedFinpartition_u2097___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_OrderedFinpartition_compAlongOrderedFinpartition_u2097___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_OrderedFinpartition_compAlongOrderedFinpartition_u2097___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition_u2097___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderedFinpartition_compAlongOrderedFinpartition___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition_u2097(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_OrderedFinpartition_compAlongOrderedFinpartition_u2097___rarg), 2, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_OrderedFinpartition_compAlongOrderedFinpartition_u2097___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_OrderedFinpartition_compAlongOrderedFinpartition_u2097___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition_u2097___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_OrderedFinpartition_compAlongOrderedFinpartition_u2097(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___at_FormalMultilinearSeries_compAlongOrderedFinpartition___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_OrderedFinpartition_applyOrderedFinpartition___rarg), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
lean_closure_set(x_5, 2, x_4);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___at_FormalMultilinearSeries_compAlongOrderedFinpartition___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_OrderedFinpartition_compAlongOrderedFinpartition___at_FormalMultilinearSeries_compAlongOrderedFinpartition___spec__1___rarg), 4, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_FormalMultilinearSeries_compAlongOrderedFinpartition___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FormalMultilinearSeries_compAlongOrderedFinpartition___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_apply_1(x_12, x_15);
lean_inc(x_14);
x_17 = lean_alloc_closure((void*)(l_FormalMultilinearSeries_compAlongOrderedFinpartition___rarg___lambda__1), 3, 2);
lean_closure_set(x_17, 0, x_14);
lean_closure_set(x_17, 1, x_13);
x_18 = lean_alloc_closure((void*)(l_OrderedFinpartition_compAlongOrderedFinpartition___at_FormalMultilinearSeries_compAlongOrderedFinpartition___spec__1___rarg), 4, 3);
lean_closure_set(x_18, 0, x_14);
lean_closure_set(x_18, 1, x_16);
lean_closure_set(x_18, 2, x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_FormalMultilinearSeries_compAlongOrderedFinpartition(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FormalMultilinearSeries_compAlongOrderedFinpartition___rarg___boxed), 14, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedFinpartition_compAlongOrderedFinpartition___at_FormalMultilinearSeries_compAlongOrderedFinpartition___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_OrderedFinpartition_compAlongOrderedFinpartition___at_FormalMultilinearSeries_compAlongOrderedFinpartition___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
LEAN_EXPORT lean_object* l_FormalMultilinearSeries_compAlongOrderedFinpartition___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_FormalMultilinearSeries_compAlongOrderedFinpartition___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_15;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Analytic_Within(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_FDeriv_Analytic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_ContDiff_FTaylorSeries(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Analytic_Within(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_FDeriv_Analytic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_ContDiff_FTaylorSeries(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__2___closed__1 = _init_l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__2___closed__1();
lean_mark_persistent(l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___lambda__2___closed__1);
l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___closed__1 = _init_l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___closed__1();
lean_mark_persistent(l___private_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno_0__decEqOrderedFinpartition____x40_Mathlib_Analysis_Calculus_ContDiff_FaaDiBruno___hyg_570____rarg___closed__1);
l_OrderedFinpartition_instUniqueOfNatNat___closed__1 = _init_l_OrderedFinpartition_instUniqueOfNatNat___closed__1();
lean_mark_persistent(l_OrderedFinpartition_instUniqueOfNatNat___closed__1);
l_OrderedFinpartition_instUniqueOfNatNat = _init_l_OrderedFinpartition_instUniqueOfNatNat();
lean_mark_persistent(l_OrderedFinpartition_instUniqueOfNatNat);
l_OrderedFinpartition_extendMiddle___elambda__1___rarg___closed__1 = _init_l_OrderedFinpartition_extendMiddle___elambda__1___rarg___closed__1();
lean_mark_persistent(l_OrderedFinpartition_extendMiddle___elambda__1___rarg___closed__1);
l_OrderedFinpartition_extendMiddle___closed__1 = _init_l_OrderedFinpartition_extendMiddle___closed__1();
lean_mark_persistent(l_OrderedFinpartition_extendMiddle___closed__1);
l_RingHom_id___at_OrderedFinpartition_compAlongOrderedFinpartition_u2097___spec__1___closed__1 = _init_l_RingHom_id___at_OrderedFinpartition_compAlongOrderedFinpartition_u2097___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_OrderedFinpartition_compAlongOrderedFinpartition_u2097___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
