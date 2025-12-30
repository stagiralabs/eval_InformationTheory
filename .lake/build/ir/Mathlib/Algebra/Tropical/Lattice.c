// Lean compiler output
// Module: Mathlib.Algebra.Tropical.Lattice
// Imports: Init Mathlib.Algebra.Tropical.Basic Mathlib.Order.ConditionallyCompleteLattice.Basic
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
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__1(lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instLatticeTropical(lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tropical_decidableLE___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSemilatticeInfTropical___rarg(lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSemilatticeSupTropical___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSemilatticeSupTropical(lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__2(lean_object*, lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instConditionallyCompleteLatticeTropical(lean_object*);
LEAN_EXPORT lean_object* l_instSupSetTropical___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInfSetTropical___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSupSetTropical(lean_object*);
LEAN_EXPORT lean_object* l_instInfSetTropical(lean_object*);
LEAN_EXPORT lean_object* l_instConditionallyCompleteLatticeTropical___rarg(lean_object*);
lean_object* l_ConditionallyCompleteLinearOrder_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instConditionallyCompleteLinearOrderTropical(lean_object*);
LEAN_EXPORT lean_object* l_instConditionallyCompleteLinearOrderTropical___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instSemilatticeSupTropical___rarg(lean_object*);
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSemilatticeInfTropical___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSemilatticeInfTropical(lean_object*);
lean_object* l_Tropical_instPreorderTropical(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instLatticeTropical___rarg(lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSemilatticeInfTropical___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instSemilatticeInfTropical___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Tropical_instPreorderTropical(lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_instSemilatticeInfTropical___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instSemilatticeInfTropical(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instSemilatticeInfTropical___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instSemilatticeSupTropical___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instSemilatticeSupTropical___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Tropical_instPreorderTropical(lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_instSemilatticeSupTropical___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instSemilatticeSupTropical(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instSemilatticeSupTropical___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instLatticeTropical___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
x_2 = l_Lattice_toSemilatticeInf___rarg(x_1);
x_3 = l_instSemilatticeInfTropical___rarg(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_3, 1);
lean_dec(x_6);
x_7 = lean_alloc_closure((void*)(l_instSemilatticeSupTropical___rarg___lambda__1), 3, 1);
lean_closure_set(x_7, 0, x_4);
lean_ctor_set(x_3, 1, x_7);
x_8 = lean_alloc_closure((void*)(l_Lattice_toSemilatticeInf___elambda__1___rarg), 3, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_alloc_closure((void*)(l_instSemilatticeSupTropical___rarg___lambda__1), 3, 1);
lean_closure_set(x_11, 0, x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_closure((void*)(l_Lattice_toSemilatticeInf___elambda__1___rarg), 3, 1);
lean_closure_set(x_13, 0, x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_instLatticeTropical(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instLatticeTropical___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instSupSetTropical___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_instSupSetTropical(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instSupSetTropical___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instInfSetTropical___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_instInfSetTropical(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instInfSetTropical___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instConditionallyCompleteLatticeTropical___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_instLatticeTropical___rarg(x_2);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_instSupSetTropical___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_instInfSetTropical___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_instConditionallyCompleteLatticeTropical(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instConditionallyCompleteLatticeTropical___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_5 = l_instDecidableLe__mathlib___rarg(x_1, x_3, x_4);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
uint8_t x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = 0;
x_8 = lean_box(x_7);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = l_instDecidableLe__mathlib___rarg(x_1, x_4, x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_decidableEqOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_5 = l_instDecidableLe__mathlib___rarg(x_1, x_3, x_4);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_instDecidableLe__mathlib___rarg(x_1, x_4, x_3);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
else
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_decidableLTOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__2___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instConditionallyCompleteLinearOrderTropical___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_instConditionallyCompleteLatticeTropical___rarg(x_2);
x_4 = l_ConditionallyCompleteLinearOrder_toLinearOrder___rarg(x_1);
x_5 = l_LinearOrder_toLattice___rarg(x_4);
x_6 = l_Lattice_toSemilatticeInf___rarg(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_9, 0, x_4);
x_10 = lean_alloc_closure((void*)(l_Tropical_decidableLE___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
lean_inc(x_8);
lean_inc(x_4);
x_11 = lean_alloc_closure((void*)(l_decidableEqOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__1___rarg___boxed), 4, 2);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_8);
x_12 = lean_alloc_closure((void*)(l_decidableLTOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__2___rarg___boxed), 4, 2);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_8);
x_13 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_10);
lean_ctor_set(x_13, 2, x_11);
lean_ctor_set(x_13, 3, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_instConditionallyCompleteLinearOrderTropical(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instConditionallyCompleteLinearOrderTropical___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_decidableEqOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_decidableEqOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_decidableLTOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_decidableLTOfDecidableLE___at_instConditionallyCompleteLinearOrderTropical___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Tropical_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_ConditionallyCompleteLattice_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Tropical_Lattice(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Tropical_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_ConditionallyCompleteLattice_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
