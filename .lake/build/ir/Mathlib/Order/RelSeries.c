// Lean compiler output
// Module: Mathlib.Order.RelSeries
// Imports: Init Mathlib.Algebra.Order.Ring.Nat Mathlib.Data.Fintype.Pigeonhole Mathlib.Data.Fintype.Pi Mathlib.Data.Fintype.Sigma Mathlib.Data.Rel Mathlib.Data.Fin.VecNotation
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
LEAN_EXPORT lean_object* l_RelSeries_reverse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_fromListChain_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_drop___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_insertNth___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_reverse___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_drop___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_eraseLast___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_tail___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_Equiv___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_last(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_snoc___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_ofLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt(lean_object*, lean_object*);
lean_object* l_Fintype_piFinset___at_Pi_instFintype___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_smash___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_take___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_instCoeFunForallFinHAddNatLengthOfNat___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_fromListChain_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_ofLE___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_map___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_drop___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_tail___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_mk(lean_object*, lean_object*);
static lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___closed__2;
LEAN_EXPORT lean_object* l_RelSeries_insertNth___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_get___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_tail___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_range___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_cons___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_map___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_map___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_tail___rarg(lean_object*, lean_object*);
lean_object* l_instDecidableEqFin___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_append___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__5(lean_object*, lean_object*);
static lean_object* l_RelSeries_append___rarg___closed__1;
LEAN_EXPORT lean_object* l_RelSeries_append___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_smash(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_toList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_injStrictMono(lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_eraseLast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_smash___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_reverse___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_smash___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_reverse___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_insertNth___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_take___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_Equiv___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_drop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_map___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_snoc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_append___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_range___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_Equiv(lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_head___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_instCoeFunForallFinHAddNatLengthOfNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_Equiv___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_singleton___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_injStrictMono___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_insertNth___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_fromListChain_x27___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_singleton___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_insertNth___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_append___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_ofLE___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_drop___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_Equiv___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_mk___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_mk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_eraseLast___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_ofLE___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_map___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_cast___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_injStrictMono___rarg(lean_object*, lean_object*);
lean_object* l_Fin_succAboveCases___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_eraseLast___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_last___rarg(lean_object*);
lean_object* l_List_ofFn___rarg(lean_object*, lean_object*);
lean_object* l_Fin_rev___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_take___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_injStrictMono___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_range___elambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_cons(lean_object*, lean_object*);
lean_object* l_Multiset_sigma___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_reverse___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_eraseLast___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_map(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_head(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_tail(lean_object*, lean_object*);
static lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___closed__1;
lean_object* l_Nat_decidableForallFin(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_tail___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_take___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_append___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_range(lean_object*);
lean_object* l_forall__prop__decidable___rarg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_fromListChain_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_insertNth(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_insertNth___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_tail___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_singleton(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_range___elambda__1___rarg(lean_object*);
lean_object* l_Subtype_fintype___rarg(lean_object*, lean_object*);
lean_object* l_List_finRange___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_injStrictMono___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_injStrictMono___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_map___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_membership(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_append___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_smash___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_singleton___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_toList___rarg(lean_object*);
static lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___closed__1;
LEAN_EXPORT lean_object* l_RelSeries_singleton___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LTSeries_map___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_fromListChain_x27___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelSeries_instCoeFunForallFinHAddNatLengthOfNat___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_RelSeries_instCoeFunForallFinHAddNatLengthOfNat(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_instCoeFunForallFinHAddNatLengthOfNat___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_singleton___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RelSeries_singleton___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RelSeries_singleton___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RelSeries_singleton___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_RelSeries_singleton___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RelSeries_singleton(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_singleton___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_singleton___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RelSeries_singleton___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RelSeries_singleton___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RelSeries_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_instInhabited___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_ofLE___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_RelSeries_ofLE___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_ofLE___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_ofLE___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_RelSeries_ofLE___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 1);
lean_dec(x_7);
x_8 = lean_ctor_get(x_1, 0);
lean_dec(x_8);
lean_ctor_set(x_1, 1, x_5);
return x_1;
}
else
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_RelSeries_ofLE(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_ofLE___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_toList___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_2, x_3);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_List_ofFn___rarg(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RelSeries_toList(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_toList___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_fromListChain_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_get___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_fromListChain_x27___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RelSeries_fromListChain_x27___elambda__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RelSeries_fromListChain_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_1, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_5, x_6);
x_8 = lean_alloc_closure((void*)(l_RelSeries_fromListChain_x27___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RelSeries_fromListChain_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_fromListChain_x27___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_fromListChain_x27___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RelSeries_fromListChain_x27___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_Equiv___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RelSeries_fromListChain_x27___rarg(x_1, lean_box(0), lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_RelSeries_Equiv___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_Equiv___elambda__1___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_Equiv___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RelSeries_toList___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RelSeries_Equiv___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_Equiv___elambda__2___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_Equiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_Equiv___elambda__2___rarg), 1, 0);
x_4 = lean_alloc_closure((void*)(l_RelSeries_Equiv___elambda__1___rarg), 1, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_membership(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_head___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_3, x_4);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_mod(x_6, x_5);
lean_dec(x_5);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RelSeries_head(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_head___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_last___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RelSeries_last(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_last___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_append___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_1(x_4, x_5);
x_7 = lean_apply_1(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RelSeries_append___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_RelSeries_append___elambda__1___rarg___boxed), 5, 0);
return x_7;
}
}
static lean_object* _init_l_RelSeries_append___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fin_cast___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RelSeries_append___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_nat_add(x_4, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_6, x_7);
lean_dec(x_6);
x_9 = lean_nat_add(x_4, x_7);
lean_dec(x_4);
x_10 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
lean_inc(x_10);
lean_inc(x_9);
x_13 = lean_alloc_closure((void*)(l_Fin_append___boxed), 6, 5);
lean_closure_set(x_13, 0, x_9);
lean_closure_set(x_13, 1, x_10);
lean_closure_set(x_13, 2, lean_box(0));
lean_closure_set(x_13, 3, x_11);
lean_closure_set(x_13, 4, x_12);
x_14 = lean_nat_add(x_8, x_7);
x_15 = lean_nat_add(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
x_16 = l_RelSeries_append___rarg___closed__1;
x_17 = lean_alloc_closure((void*)(l_RelSeries_append___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_17, 0, x_13);
lean_closure_set(x_17, 1, x_14);
lean_closure_set(x_17, 2, x_15);
lean_closure_set(x_17, 3, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_8);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_RelSeries_append(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_append___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_append___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RelSeries_append___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RelSeries_append___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RelSeries_append___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RelSeries_map___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_map___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_RelSeries_map___elambda__1___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_map___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_alloc_closure((void*)(l_RelSeries_map___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
lean_ctor_set(x_1, 1, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_8 = lean_alloc_closure((void*)(l_RelSeries_map___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_RelSeries_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_RelSeries_map___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_map___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RelSeries_map___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_insertNth___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Fin_succAboveCases___rarg(x_3, x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RelSeries_insertNth___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RelSeries_insertNth___elambda__1___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RelSeries_insertNth___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_6, x_7);
lean_dec(x_6);
x_9 = lean_nat_add(x_2, x_7);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
lean_inc(x_8);
x_11 = lean_alloc_closure((void*)(l_RelSeries_insertNth___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_11, 0, x_3);
lean_closure_set(x_11, 1, x_8);
lean_closure_set(x_11, 2, x_9);
lean_closure_set(x_11, 3, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_RelSeries_insertNth(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_insertNth___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_insertNth___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RelSeries_insertNth___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RelSeries_insertNth___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RelSeries_insertNth___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RelSeries_insertNth___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RelSeries_insertNth___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RelSeries_reverse___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_3, x_4);
x_6 = lean_apply_1(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RelSeries_reverse___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RelSeries_reverse___elambda__1___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RelSeries_reverse___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_3, x_5);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Fin_rev___boxed), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_closure((void*)(l_RelSeries_reverse___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, x_7);
lean_ctor_set(x_1, 1, x_8);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_9, x_11);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l_Fin_rev___boxed), 2, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_closure((void*)(l_RelSeries_reverse___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_14, 0, x_10);
lean_closure_set(x_14, 1, x_12);
lean_closure_set(x_14, 2, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_RelSeries_reverse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_reverse___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_reverse___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RelSeries_reverse___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_reverse___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RelSeries_reverse___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RelSeries_cons___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_RelSeries_singleton___rarg(x_2);
x_5 = l_RelSeries_append___rarg(x_4, x_1, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_cons(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_cons___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_snoc___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_RelSeries_singleton___rarg(x_2);
x_5 = l_RelSeries_append___rarg(x_1, x_4, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_snoc(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_snoc___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_tail___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_3, x_4);
x_6 = lean_apply_1(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RelSeries_tail___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_RelSeries_tail___elambda__1___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_tail___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_3, x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_Fin_tail___rarg___boxed), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_nat_add(x_5, x_4);
x_9 = l_RelSeries_append___rarg___closed__1;
x_10 = lean_alloc_closure((void*)(l_RelSeries_tail___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_10, 0, x_7);
lean_closure_set(x_10, 1, x_8);
lean_closure_set(x_10, 2, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_5);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RelSeries_tail(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_tail___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_tail___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RelSeries_tail___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_tail___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RelSeries_tail___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_eraseLast___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_eraseLast___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_eraseLast___elambda__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_eraseLast___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_2, x_3);
x_5 = lean_alloc_closure((void*)(l_RelSeries_eraseLast___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RelSeries_eraseLast(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_eraseLast___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_eraseLast___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RelSeries_eraseLast___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RelSeries_smash___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_nat_sub(x_5, x_3);
lean_dec(x_5);
x_9 = lean_apply_1(x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_10, x_5);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_RelSeries_smash___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_smash___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_smash___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_nat_add(x_4, x_5);
x_7 = lean_alloc_closure((void*)(l_RelSeries_smash___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_4);
lean_closure_set(x_7, 3, x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RelSeries_smash(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_smash___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_smash___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RelSeries_smash___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RelSeries_take___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RelSeries_take___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_take___elambda__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_take___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc_n(x_2, 2);
x_3 = lean_alloc_closure((void*)(l_RelSeries_take___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
lean_closure_set(x_3, 2, x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RelSeries_take(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_take___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_take___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RelSeries_take___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelSeries_drop___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_nat_add(x_6, x_4);
x_9 = lean_apply_1(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RelSeries_drop___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_drop___elambda__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_drop___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_nat_sub(x_3, x_2);
lean_inc(x_4);
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_RelSeries_drop___elambda__1___rarg___boxed), 6, 5);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_2);
lean_closure_set(x_5, 4, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RelSeries_drop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelSeries_drop___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelSeries_drop___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RelSeries_drop___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LTSeries_mk___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LTSeries_mk(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LTSeries_mk___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LTSeries_mk___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LTSeries_mk(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LTSeries_injStrictMono___elambda__1___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LTSeries_injStrictMono___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LTSeries_injStrictMono___elambda__1___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LTSeries_injStrictMono___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LTSeries_injStrictMono___elambda__1___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LTSeries_injStrictMono(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LTSeries_injStrictMono___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LTSeries_injStrictMono___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LTSeries_injStrictMono___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LTSeries_injStrictMono___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LTSeries_injStrictMono___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LTSeries_map___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LTSeries_map___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LTSeries_map___elambda__1___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LTSeries_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_alloc_closure((void*)(l_LTSeries_map___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_7);
lean_ctor_set(x_3, 1, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_3);
x_11 = lean_alloc_closure((void*)(l_LTSeries_map___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_LTSeries_map(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LTSeries_map___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LTSeries_map___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LTSeries_map___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LTSeries_map___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LTSeries_map___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LTSeries_range___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LTSeries_range___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LTSeries_range___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LTSeries_range(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_LTSeries_range___elambda__1___rarg___boxed), 1, 0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LTSeries_range___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LTSeries_range___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LTSeries_range___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LTSeries_range___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_2);
x_8 = lean_apply_1(x_6, x_3);
x_9 = lean_apply_2(x_4, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_nat_dec_lt(x_1, x_4);
x_6 = lean_alloc_closure((void*)(l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__1), 5, 4);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_1);
lean_closure_set(x_6, 2, x_4);
lean_closure_set(x_6, 3, x_3);
x_7 = l_forall__prop__decidable___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__2), 4, 3);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
lean_closure_set(x_5, 2, x_2);
x_6 = l_Nat_decidableForallFin(x_3, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_3, x_4);
lean_dec(x_3);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__3___boxed), 4, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_1);
lean_closure_set(x_6, 2, x_5);
x_7 = l_Nat_decidableForallFin(x_5, lean_box(0), x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_finRange___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqFin___rarg___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_2, x_3);
x_5 = l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___closed__1;
x_6 = l_List_ofFn___rarg(x_4, x_5);
x_7 = lean_alloc_closure((void*)(l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__5___boxed), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___closed__2;
x_9 = l_Fintype_piFinset___at_Pi_instFintype___spec__1___rarg(x_8, x_6, lean_box(0), x_7);
return x_9;
}
}
static lean_object* _init_l_LTSeries_instFintypeOfDecidableRelLt___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_LTSeries_injStrictMono___elambda__1___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_lengthTRAux___rarg(x_1, x_3);
x_5 = lean_alloc_closure((void*)(l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__4), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = lean_alloc_closure((void*)(l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___boxed), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___closed__1;
x_8 = l_List_ofFn___rarg(x_4, x_7);
x_9 = l_Multiset_sigma___rarg(x_8, x_6);
x_10 = l_Subtype_fintype___rarg(x_5, x_9);
x_11 = l_LTSeries_instFintypeOfDecidableRelLt___rarg___closed__1;
x_12 = l_Multiset_map___rarg(x_11, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LTSeries_instFintypeOfDecidableRelLt___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LTSeries_instFintypeOfDecidableRelLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LTSeries_instFintypeOfDecidableRelLt(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Pigeonhole(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Sigma(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rel(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_VecNotation(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_RelSeries(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Pigeonhole(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Sigma(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_VecNotation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RelSeries_append___rarg___closed__1 = _init_l_RelSeries_append___rarg___closed__1();
lean_mark_persistent(l_RelSeries_append___rarg___closed__1);
l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___closed__1 = _init_l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___closed__1();
lean_mark_persistent(l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___closed__1);
l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___closed__2 = _init_l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___closed__2();
lean_mark_persistent(l_LTSeries_instFintypeOfDecidableRelLt___rarg___lambda__6___closed__2);
l_LTSeries_instFintypeOfDecidableRelLt___rarg___closed__1 = _init_l_LTSeries_instFintypeOfDecidableRelLt___rarg___closed__1();
lean_mark_persistent(l_LTSeries_instFintypeOfDecidableRelLt___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
