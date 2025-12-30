// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.AdjMatrix
// Imports: Init Mathlib.Combinatorics.SimpleGraph.Basic Mathlib.Combinatorics.SimpleGraph.Connectivity.WalkCounting Mathlib.LinearAlgebra.Matrix.Trace Mathlib.LinearAlgebra.Matrix.Symmetric
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__13;
LEAN_EXPORT lean_object* l_SimpleGraph_adjMatrix___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__5;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__8;
LEAN_EXPORT lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_17_;
LEAN_EXPORT lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_16_;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__12;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__22;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__11;
LEAN_EXPORT lean_object* l_Matrix_IsAdjMatrix_toGraph(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_adjMatrix___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__25;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__23;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__24;
LEAN_EXPORT lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15_;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__26;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__2;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__4;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__3;
LEAN_EXPORT lean_object* l_Matrix_IsAdjMatrix_toGraph___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_adjMatrix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_compl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__15;
LEAN_EXPORT lean_object* l_Matrix_IsAdjMatrix_instDecidableRelAdjToGraphOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__6;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__16;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__7;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__18;
LEAN_EXPORT lean_object* l_Matrix_IsAdjMatrix_instDecidableRelAdjToGraphOfDecidableEq(lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__1;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__17;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__19;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__10;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__9;
LEAN_EXPORT lean_object* l_Matrix_compl___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__14;
LEAN_EXPORT lean_object* l_SimpleGraph_adjMatrix___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_compl(lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__20;
static lean_object* l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__21;
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq", 9, 9);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__1;
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__2;
x_3 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__3;
x_4 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__1;
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__2;
x_3 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__3;
x_4 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__7;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Aesop", 5, 5);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Frontend", 8, 8);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("aesopTactic", 11, 11);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__11;
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__12;
x_3 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__2;
x_4 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__13;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("aesop", 5, 5);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__15;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__6;
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__16;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__10;
x_3 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__6;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__17;
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__18;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__14;
x_3 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__19;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__6;
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__20;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__10;
x_3 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__21;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__6;
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__22;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__8;
x_3 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__23;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__6;
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__24;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__5;
x_3 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__25;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__26;
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_16_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__26;
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_17_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__26;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_IsAdjMatrix_toGraph(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_IsAdjMatrix_toGraph___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_IsAdjMatrix_toGraph(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_IsAdjMatrix_instDecidableRelAdjToGraphOfDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_apply_2(x_1, x_6, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_4, x_8, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_IsAdjMatrix_instDecidableRelAdjToGraphOfDecidableEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_IsAdjMatrix_instDecidableRelAdjToGraphOfDecidableEq___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_compl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
lean_inc(x_7);
lean_inc(x_6);
x_8 = lean_apply_2(x_4, x_6, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_apply_2(x_5, x_6, x_7);
lean_inc(x_1);
x_11 = lean_apply_2(x_3, x_10, x_1);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
return x_1;
}
else
{
lean_dec(x_1);
lean_inc(x_2);
return x_2;
}
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_compl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_compl___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_compl___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Matrix_compl___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_adjMatrix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_apply_2(x_1, x_4, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_adjMatrix(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SimpleGraph_adjMatrix___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_adjMatrix___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SimpleGraph_adjMatrix___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_adjMatrix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_adjMatrix(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Connectivity_WalkCounting(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Trace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Symmetric(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_AdjMatrix(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Connectivity_WalkCounting(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Trace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Symmetric(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__1 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__1();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__1);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__2 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__2();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__2);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__3 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__3();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__3);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__4 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__4();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__4);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__5 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__5();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__5);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__6 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__6();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__6);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__7 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__7();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__7);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__8 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__8();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__8);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__9 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__9();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__9);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__10 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__10();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__10);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__11 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__11();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__11);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__12 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__12();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__12);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__13 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__13();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__13);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__14 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__14();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__14);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__15 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__15();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__15);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__16 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__16();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__16);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__17 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__17();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__17);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__18 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__18();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__18);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__19 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__19();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__19);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__20 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__20();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__20);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__21 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__21();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__21);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__22 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__22();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__22);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__23 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__23();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__23);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__24 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__24();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__24);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__25 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__25();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__25);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__26 = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__26();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15____closed__26);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15_ = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15_();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_15_);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_16_ = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_16_();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_16_);
l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_17_ = _init_l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_17_();
lean_mark_persistent(l___auto____x40_Mathlib_Combinatorics_SimpleGraph_AdjMatrix___hyg_17_);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
