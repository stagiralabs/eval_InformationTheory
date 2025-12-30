// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Finite
// Imports: Init Mathlib.Algebra.Order.Ring.Defs Mathlib.Combinatorics.SimpleGraph.Maps Mathlib.Data.Finset.Max Mathlib.Data.Sym.Card
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
LEAN_EXPORT lean_object* l_SimpleGraph_minDegree___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_fold___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_maxDegree(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_edgeFinset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_SimpleGraph_minDegree___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_SimpleGraph_minDegree___spec__7(lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_SimpleGraph_minDegree___spec__9___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_minDegree___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_minDegree___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_incidenceFinset___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_maxDegree___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_SimpleGraph_minDegree___spec__9___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_minDegree___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_min___at_SimpleGraph_minDegree___spec__10___closed__1;
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_maxDegree___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_minDegree___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
static lean_object* l_Finset_max___at_SimpleGraph_maxDegree___spec__4___closed__1;
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidablePredMemSetSupport(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_neighborFinset___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_SimpleGraph_minDegree___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidablePredMemSetSupport___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_SimpleGraph_minDegree___rarg___closed__1;
LEAN_EXPORT lean_object* l_SimpleGraph_neighborFinset(lean_object*, lean_object*, lean_object*);
lean_object* l_WithTop_some___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_maxDegree___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_maxDegree___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidablePredMemSetSupport___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_SimpleGraph_minDegree___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_minDegree___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_minDegree(lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_SimpleGraph_maxDegree___spec__3(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_SimpleGraph_minDegree___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_maxDegree___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_inf___at_SimpleGraph_minDegree___spec__11___closed__1;
LEAN_EXPORT lean_object* l_Finset_min___at_SimpleGraph_minDegree___spec__10(lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_SimpleGraph_maxDegree___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_edgeFinset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_incidenceFinset___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_dedup___at_SimpleGraph_minDegree___spec__5(lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_minDegree___spec__2(lean_object*, lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_neighborSetFintype(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_incidenceFinset___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degree___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_SimpleGraph_minDegree___spec__9(lean_object*, size_t, size_t, lean_object*);
uint8_t l_List_decidableBAll___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_neighborSetFintype___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degree___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_inf___at_SimpleGraph_minDegree___spec__11___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_inf___at_SimpleGraph_minDegree___spec__11(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_neighborSetFintype___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_minDegree___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_max___at_SimpleGraph_maxDegree___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_maxDegree___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_incidenceSetFintype___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_incidenceFinset___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
uint8_t l_Finset_decidableExistsAndFinset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_SimpleGraph_maxDegree___spec__5___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_edgeFinset___rarg(lean_object*);
static lean_object* l_SimpleGraph_edgeFinset___rarg___closed__1;
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_incidenceFinset___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_SimpleGraph_minDegree___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_incidenceSetFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_maxDegree___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_SimpleGraph_minDegree___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_maxDegree___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_incidenceFinset(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degree(lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_sup___at_SimpleGraph_maxDegree___spec__5___closed__1;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Fintype_ofEquiv___rarg(lean_object*, lean_object*);
lean_object* l_WithBot_some___rarg(lean_object*);
lean_object* l_SimpleGraph_incidenceSetEquivNeighborSet___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_fintype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_SimpleGraph_maxDegree___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_SimpleGraph_minDegree___spec__3___rarg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_neighborFinset___rarg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_maxDegree___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_minDegree___spec__1(lean_object*);
lean_object* l_WithTop_recTopCoe___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Embedding_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_incidenceSetFintype(lean_object*);
extern lean_object* l_Nat_instLinearOrder;
LEAN_EXPORT lean_object* l_SimpleGraph_maxDegree___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_SimpleGraph_edgeFinset___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_Embedding_subtype___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_edgeFinset___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_SimpleGraph_edgeFinset___rarg___closed__1;
x_3 = l_Multiset_map___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_edgeFinset(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_edgeFinset___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_edgeFinset___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_edgeFinset(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_neighborFinset___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_SimpleGraph_edgeFinset___rarg___closed__1;
x_3 = l_Multiset_map___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_neighborFinset(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SimpleGraph_neighborFinset___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_neighborFinset___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_neighborFinset(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degree___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_SimpleGraph_edgeFinset___rarg___closed__1;
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degree(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SimpleGraph_degree___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degree___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_degree(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_incidenceSetFintype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_SimpleGraph_incidenceSetEquivNeighborSet___rarg(x_1, x_4, x_2);
x_6 = l_Equiv_symm___rarg(x_5);
x_7 = l_Fintype_ofEquiv___rarg(x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_incidenceSetFintype(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_incidenceSetFintype___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_incidenceSetFintype___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_incidenceSetFintype___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_incidenceFinset___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_SimpleGraph_incidenceSetFintype___rarg(x_1, x_2, x_3, x_4);
x_6 = l_SimpleGraph_edgeFinset___rarg___closed__1;
x_7 = l_Multiset_map___rarg(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_incidenceFinset___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_toFinset___at_SimpleGraph_incidenceFinset___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_incidenceFinset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Set_toFinset___at_SimpleGraph_incidenceFinset___spec__1___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_incidenceFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_incidenceFinset___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_incidenceFinset___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Set_toFinset___at_SimpleGraph_incidenceFinset___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_incidenceFinset___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_incidenceFinset___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_neighborSetFintype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = l_Subtype_fintype___rarg(x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_neighborSetFintype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_neighborSetFintype___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_neighborSetFintype___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_neighborSetFintype(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_minDegree___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_SimpleGraph_neighborSetFintype___rarg(x_1, x_2, x_3);
x_7 = l_SimpleGraph_edgeFinset___rarg___closed__1;
x_8 = l_Multiset_map___rarg(x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_minDegree___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_toFinset___at_SimpleGraph_minDegree___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_minDegree___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Set_toFinset___at_SimpleGraph_minDegree___spec__2___rarg(x_2, x_3, x_4, x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_List_lengthTRAux___rarg(x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_minDegree___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_degree___at_SimpleGraph_minDegree___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_SimpleGraph_minDegree___spec__9___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = lean_nat_dec_eq(x_1, x_2);
x_4 = l_instDecidableNot___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_SimpleGraph_minDegree___spec__9(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_SimpleGraph_minDegree___spec__9___lambda__1___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
lean_inc(x_4);
x_10 = l_List_decidableBAll___rarg(x_9, x_4);
if (x_10 == 0)
{
lean_dec(x_8);
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_4);
x_2 = x_7;
x_4 = x_12;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_SimpleGraph_minDegree___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_array_mk(x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_8 = 0;
x_9 = l_Array_foldrMUnsafe_fold___at_SimpleGraph_minDegree___spec__9(x_3, x_7, x_8, x_1);
lean_dec(x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_SimpleGraph_minDegree___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_List_foldrTR___at_SimpleGraph_minDegree___spec__8(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_SimpleGraph_minDegree___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_SimpleGraph_minDegree___spec__7(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_dedup___at_SimpleGraph_minDegree___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_SimpleGraph_minDegree___spec__7(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_SimpleGraph_minDegree___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_SimpleGraph_minDegree___spec__7(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_SimpleGraph_minDegree___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Multiset_map___rarg(x_1, x_2);
x_4 = l_List_pwFilter___at_SimpleGraph_minDegree___spec__7(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_SimpleGraph_minDegree___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_image___at_SimpleGraph_minDegree___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_inf___at_SimpleGraph_minDegree___spec__11___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_1, x_11, x_13);
lean_ctor_set(x_3, 0, x_14);
return x_3;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_3, 0);
lean_inc(x_15);
lean_dec(x_3);
x_16 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_1, x_11, x_15);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
}
}
static lean_object* _init_l_Finset_inf___at_SimpleGraph_minDegree___spec__11___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instLinearOrder;
x_2 = l_LinearOrder_toLattice___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_inf___at_SimpleGraph_minDegree___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Finset_inf___at_SimpleGraph_minDegree___spec__11___closed__1;
x_4 = lean_alloc_closure((void*)(l_Finset_inf___at_SimpleGraph_minDegree___spec__11___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_box(0);
x_6 = l_Finset_fold___rarg(x_4, lean_box(0), lean_box(0), x_5, x_2, x_1);
return x_6;
}
}
static lean_object* _init_l_Finset_min___at_SimpleGraph_minDegree___spec__10___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_WithTop_some___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_min___at_SimpleGraph_minDegree___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Finset_min___at_SimpleGraph_minDegree___spec__10___closed__1;
x_3 = l_Finset_inf___at_SimpleGraph_minDegree___spec__11(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_minDegree___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_4);
x_5 = l_SimpleGraph_degree___at_SimpleGraph_minDegree___spec__1___rarg(x_1, x_2, x_3, x_4, x_1, x_4);
lean_dec(x_4);
return x_5;
}
}
static lean_object* _init_l_SimpleGraph_minDegree___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_minDegree___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_SimpleGraph_minDegree___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
x_5 = l_Finset_image___at_SimpleGraph_minDegree___spec__3___rarg(x_4, x_2);
x_6 = lean_alloc_closure((void*)(l_WithTop_some___rarg), 1, 0);
x_7 = l_Finset_inf___at_SimpleGraph_minDegree___spec__11(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_SimpleGraph_minDegree___rarg___closed__1;
x_10 = l_WithTop_recTopCoe___rarg(x_8, x_9, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_minDegree(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_minDegree___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_minDegree___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Set_toFinset___at_SimpleGraph_minDegree___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_minDegree___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_toFinset___at_SimpleGraph_minDegree___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_minDegree___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SimpleGraph_degree___at_SimpleGraph_minDegree___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_SimpleGraph_minDegree___spec__9___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_foldrMUnsafe_fold___at_SimpleGraph_minDegree___spec__9___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_SimpleGraph_minDegree___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_SimpleGraph_minDegree___spec__9(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_minDegree___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_minDegree___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_maxDegree___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_SimpleGraph_neighborSetFintype___rarg(x_1, x_2, x_3);
x_7 = l_SimpleGraph_edgeFinset___rarg___closed__1;
x_8 = l_Multiset_map___rarg(x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_maxDegree___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_toFinset___at_SimpleGraph_maxDegree___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_maxDegree___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Set_toFinset___at_SimpleGraph_maxDegree___spec__2___rarg(x_2, x_3, x_4, x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_List_lengthTRAux___rarg(x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_maxDegree___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_degree___at_SimpleGraph_maxDegree___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_SimpleGraph_maxDegree___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Multiset_map___rarg(x_1, x_2);
x_4 = l_List_pwFilter___at_SimpleGraph_minDegree___spec__7(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_SimpleGraph_maxDegree___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_image___at_SimpleGraph_maxDegree___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_SimpleGraph_maxDegree___spec__5___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_nat_dec_le(x_10, x_12);
if (x_13 == 0)
{
lean_dec(x_12);
lean_ctor_set(x_2, 0, x_10);
return x_2;
}
else
{
lean_dec(x_10);
return x_2;
}
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_nat_dec_le(x_10, x_14);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_10);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
}
}
}
}
static lean_object* _init_l_Finset_sup___at_SimpleGraph_maxDegree___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_sup___at_SimpleGraph_maxDegree___spec__5___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_SimpleGraph_maxDegree___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = l_Finset_sup___at_SimpleGraph_maxDegree___spec__5___closed__1;
x_5 = l_Finset_fold___rarg(x_4, lean_box(0), lean_box(0), x_3, x_2, x_1);
return x_5;
}
}
static lean_object* _init_l_Finset_max___at_SimpleGraph_maxDegree___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_WithBot_some___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_max___at_SimpleGraph_maxDegree___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Finset_max___at_SimpleGraph_maxDegree___spec__4___closed__1;
x_3 = l_Finset_sup___at_SimpleGraph_maxDegree___spec__5(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_maxDegree___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_4);
x_5 = l_SimpleGraph_degree___at_SimpleGraph_maxDegree___spec__1___rarg(x_1, x_2, x_3, x_4, x_1, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_maxDegree___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_SimpleGraph_maxDegree___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
x_5 = l_Finset_image___at_SimpleGraph_maxDegree___spec__3___rarg(x_4, x_2);
x_6 = lean_alloc_closure((void*)(l_WithBot_some___rarg), 1, 0);
x_7 = l_Finset_sup___at_SimpleGraph_maxDegree___spec__5(x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_unsigned_to_nat(0u);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_maxDegree(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_maxDegree___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_maxDegree___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Set_toFinset___at_SimpleGraph_maxDegree___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_maxDegree___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_toFinset___at_SimpleGraph_maxDegree___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_maxDegree___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SimpleGraph_degree___at_SimpleGraph_maxDegree___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_maxDegree___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_maxDegree___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidablePredMemSetSupport___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_apply_1(x_3, x_4);
x_6 = l_Finset_decidableExistsAndFinset___rarg(x_1, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidablePredMemSetSupport(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_instDecidablePredMemSetSupport___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidablePredMemSetSupport___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_SimpleGraph_instDecidablePredMemSetSupport___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Maps(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Max(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Sym_Card(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Finite(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Maps(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Max(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Sym_Card(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_SimpleGraph_edgeFinset___rarg___closed__1 = _init_l_SimpleGraph_edgeFinset___rarg___closed__1();
lean_mark_persistent(l_SimpleGraph_edgeFinset___rarg___closed__1);
l_Finset_inf___at_SimpleGraph_minDegree___spec__11___closed__1 = _init_l_Finset_inf___at_SimpleGraph_minDegree___spec__11___closed__1();
lean_mark_persistent(l_Finset_inf___at_SimpleGraph_minDegree___spec__11___closed__1);
l_Finset_min___at_SimpleGraph_minDegree___spec__10___closed__1 = _init_l_Finset_min___at_SimpleGraph_minDegree___spec__10___closed__1();
lean_mark_persistent(l_Finset_min___at_SimpleGraph_minDegree___spec__10___closed__1);
l_SimpleGraph_minDegree___rarg___closed__1 = _init_l_SimpleGraph_minDegree___rarg___closed__1();
lean_mark_persistent(l_SimpleGraph_minDegree___rarg___closed__1);
l_Finset_sup___at_SimpleGraph_maxDegree___spec__5___closed__1 = _init_l_Finset_sup___at_SimpleGraph_maxDegree___spec__5___closed__1();
lean_mark_persistent(l_Finset_sup___at_SimpleGraph_maxDegree___spec__5___closed__1);
l_Finset_max___at_SimpleGraph_maxDegree___spec__4___closed__1 = _init_l_Finset_max___at_SimpleGraph_maxDegree___spec__4___closed__1();
lean_mark_persistent(l_Finset_max___at_SimpleGraph_maxDegree___spec__4___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
