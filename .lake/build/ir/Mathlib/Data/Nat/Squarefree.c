// Lean compiler output
// Module: Mathlib.Data.Nat.Squarefree
// Imports: Init Mathlib.Algebra.Squarefree.Basic Mathlib.Data.Nat.Factorization.PrimePow Mathlib.RingTheory.UniqueFactorizationDomain.Nat
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
static lean_object* l_Nat_minSqFac___closed__1;
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Squarefree_0__Nat_minSqFacAux_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Squarefree_0__Nat_minSqFacAux_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Nat_decidable__dvd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Squarefree_0__Nat_MinSqFacProp_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_minSqFacAux(lean_object*, lean_object*);
uint8_t l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_Lean_PrettyPrinter_Delaborator_delabAppExplicitCore___spec__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Nat_instDecidablePredSquarefree(lean_object*);
LEAN_EXPORT lean_object* l_Nat_instDecidablePredSquarefree___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_minSqFac(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Squarefree_0__Nat_MinSqFacProp_match__1_splitter(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Squarefree_0__Nat_MinSqFacProp_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_minSqFacAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_nat_mul(x_2, x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = l_Nat_decidable__dvd(x_2, x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(2u);
x_7 = lean_nat_add(x_2, x_6);
lean_dec(x_2);
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_nat_div(x_1, x_2);
lean_dec(x_1);
x_10 = l_Nat_decidable__dvd(x_2, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_add(x_2, x_11);
lean_dec(x_2);
x_1 = x_9;
x_2 = x_12;
goto _start;
}
else
{
lean_object* x_14; 
lean_dec(x_9);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_2);
return x_14;
}
}
}
else
{
lean_object* x_15; 
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_box(0);
return x_15;
}
}
}
static lean_object* _init_l_Nat_minSqFac___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_minSqFac(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(2u);
x_3 = l_Nat_decidable__dvd(x_2, x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(3u);
x_5 = l_Nat_minSqFacAux(x_1, x_4);
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_nat_div(x_1, x_2);
lean_dec(x_1);
x_7 = l_Nat_decidable__dvd(x_2, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(3u);
x_9 = l_Nat_minSqFacAux(x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_6);
x_10 = l_Nat_minSqFac___closed__1;
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Squarefree_0__Nat_MinSqFacProp_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Squarefree_0__Nat_MinSqFacProp_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Nat_Squarefree_0__Nat_MinSqFacProp_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Squarefree_0__Nat_MinSqFacProp_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Nat_Squarefree_0__Nat_MinSqFacProp_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Squarefree_0__Nat_minSqFacAux_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Squarefree_0__Nat_minSqFacAux_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Nat_Squarefree_0__Nat_minSqFacAux_match__1_splitter___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Nat_instDecidablePredSquarefree(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Nat_minSqFac(x_1);
x_3 = lean_box(0);
x_4 = l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_Lean_PrettyPrinter_Delaborator_delabAppExplicitCore___spec__1(x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_instDecidablePredSquarefree___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Nat_instDecidablePredSquarefree(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Squarefree_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Factorization_PrimePow(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_UniqueFactorizationDomain_Nat(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Squarefree(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Squarefree_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Factorization_PrimePow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_UniqueFactorizationDomain_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_minSqFac___closed__1 = _init_l_Nat_minSqFac___closed__1();
lean_mark_persistent(l_Nat_minSqFac___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
