// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.LapMatrix
// Imports: Init Mathlib.Combinatorics.SimpleGraph.AdjMatrix Mathlib.LinearAlgebra.Matrix.PosDef
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
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_SimpleGraph_degMatrix___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degMatrix___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_SimpleGraph_degMatrix___spec__3(lean_object*, lean_object*);
lean_object* l_SimpleGraph_adjMatrix___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degMatrix___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix___rarg___lambda__1___boxed(lean_object*, lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_one;
LEAN_EXPORT lean_object* l_SimpleGraph_degMatrix___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_degMatrix___spec__1(lean_object*);
lean_object* l_SimpleGraph_neighborSetFintype___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_SimpleGraph_degMatrix___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degMatrix(lean_object*, lean_object*);
lean_object* l_Pi_instSub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_degMatrix___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_degMatrix___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Embedding_subtype___elambda__1___rarg___boxed(lean_object*);
static lean_object* _init_l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_Embedding_subtype___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_SimpleGraph_neighborSetFintype___rarg(x_1, x_3, x_4);
x_8 = l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2___rarg___closed__1;
x_9 = l_Multiset_map___rarg(x_8, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_degMatrix___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_List_lengthTRAux___rarg(x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_degMatrix___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_degree___at_SimpleGraph_degMatrix___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_SimpleGraph_degMatrix___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_4);
x_8 = lean_apply_2(x_1, x_4, x_5);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_7);
return x_7;
}
else
{
lean_object* x_10; 
x_10 = lean_apply_1(x_3, x_4);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_SimpleGraph_degMatrix___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_SimpleGraph_degMatrix___spec__3___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degMatrix___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_5);
x_7 = l_SimpleGraph_degree___at_SimpleGraph_degMatrix___spec__1___rarg(x_2, x_3, x_4, x_5, x_3, x_5);
lean_dec(x_5);
x_8 = lean_apply_1(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degMatrix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
x_8 = lean_alloc_closure((void*)(l_SimpleGraph_degMatrix___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_1);
lean_closure_set(x_8, 2, x_2);
lean_closure_set(x_8, 3, x_3);
x_9 = l_Matrix_diagonal___at_SimpleGraph_degMatrix___spec__3___rarg(x_4, x_5, x_8, x_6, x_7);
lean_dec(x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degMatrix(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_degMatrix___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degree___at_SimpleGraph_degMatrix___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SimpleGraph_degree___at_SimpleGraph_degMatrix___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_SimpleGraph_degMatrix___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_diagonal___at_SimpleGraph_degMatrix___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_degMatrix___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SimpleGraph_degMatrix___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_lapMatrix___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Pi_instSub___elambda__1___rarg), 4, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_8 = l_AddGroupWithOne_toAddGroup___rarg(x_5);
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_3);
x_11 = lean_alloc_closure((void*)(l_SimpleGraph_degMatrix___rarg), 7, 5);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_4);
lean_closure_set(x_11, 4, x_10);
x_12 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_8);
lean_dec(x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_10, 2);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_alloc_closure((void*)(l_SimpleGraph_adjMatrix___rarg___boxed), 5, 3);
lean_closure_set(x_15, 0, x_3);
lean_closure_set(x_15, 1, x_13);
lean_closure_set(x_15, 2, x_14);
x_16 = lean_alloc_closure((void*)(l_SimpleGraph_lapMatrix___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_16, 0, x_9);
x_17 = l_Pi_instSub___elambda__1___rarg(x_16, x_11, x_15, x_6);
x_18 = lean_apply_1(x_17, x_7);
return x_18;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_lapMatrix___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_lapMatrix___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_lapMatrix___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_apply_2(x_1, x_3, x_2);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = l___private_Mathlib_Data_Real_Basic_0__Real_one;
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_lapMatrix__ker__basis__aux___elambda__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_SimpleGraph_lapMatrix__ker__basis__aux___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_lapMatrix__ker__basis__aux___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_lapMatrix__ker__basis__aux___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SimpleGraph_lapMatrix__ker__basis__aux___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_lapMatrix__ker__basis__aux___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_lapMatrix__ker__basis__aux(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_AdjMatrix(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_PosDef(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_LapMatrix(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_AdjMatrix(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_PosDef(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2___rarg___closed__1 = _init_l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2___rarg___closed__1();
lean_mark_persistent(l_Set_toFinset___at_SimpleGraph_degMatrix___spec__2___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
