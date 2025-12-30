// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Coloring
// Imports: Init Mathlib.Combinatorics.SimpleGraph.Clique Mathlib.Data.ENat.Lattice Mathlib.Data.Nat.Lattice Mathlib.Data.Setoid.Partition Mathlib.Order.Antichain Mathlib.Data.Nat.Cast.Order.Ring
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
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_CompleteBipartiteGraph_bicoloring___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_RelHom_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Coloring_mk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_CompleteBipartiteGraph_bicoloring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Coloring_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_selfColoring___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_CompleteBipartiteGraph_bicoloring___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEmbedding___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_selfColoring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEmbedding___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEmbedding___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_coloringOfIsEmpty___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEmbedding___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_CompleteBipartiteGraph_bicoloring___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_coloringOfIsEmpty___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_selfColoring___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Coloring_mk___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_selfColoring___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv(lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_coloringOfIsEmpty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_RelEmbedding_toRelHom___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_coloringOfIsEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEmbedding(lean_object*);
uint8_t l_Sum_isRight___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_selfColoring___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Coloring_mk___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Coloring_mk___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Coloring_mk(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SimpleGraph_Coloring_mk___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Coloring_mk___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_Coloring_mk___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Coloring_mk___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_Coloring_mk(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_coloringOfIsEmpty___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_coloringOfIsEmpty(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SimpleGraph_coloringOfIsEmpty___elambda__1___boxed), 4, 3);
lean_closure_set(x_5, 0, lean_box(0));
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_coloringOfIsEmpty___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_coloringOfIsEmpty___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_coloringOfIsEmpty___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_coloringOfIsEmpty(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_selfColoring___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_selfColoring___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_selfColoring___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_selfColoring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_selfColoring___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_selfColoring___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SimpleGraph_selfColoring___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_selfColoring___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_selfColoring(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEmbedding___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_RelEmbedding_toRelHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_RelHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEmbedding___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SimpleGraph_recolorOfEmbedding___elambda__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEmbedding___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SimpleGraph_recolorOfEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEmbedding(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_recolorOfEmbedding___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEmbedding___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_recolorOfEmbedding___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEmbedding___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_recolorOfEmbedding___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_recolorOfEmbedding___elambda__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SimpleGraph_recolorOfEquiv___elambda__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_recolorOfEmbedding___elambda__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SimpleGraph_recolorOfEquiv___elambda__2___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_SimpleGraph_recolorOfEquiv___elambda__2___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = l_Equiv_symm___rarg(x_4);
x_8 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_alloc_closure((void*)(l_SimpleGraph_recolorOfEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_recolorOfEquiv___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_recolorOfEquiv___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_recolorOfEquiv___elambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_recolorOfEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SimpleGraph_recolorOfEquiv___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_CompleteBipartiteGraph_bicoloring___elambda__1___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Sum_isRight___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_CompleteBipartiteGraph_bicoloring___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_CompleteBipartiteGraph_bicoloring___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_CompleteBipartiteGraph_bicoloring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_CompleteBipartiteGraph_bicoloring___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_CompleteBipartiteGraph_bicoloring___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_SimpleGraph_CompleteBipartiteGraph_bicoloring___elambda__1___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Clique(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ENat_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Setoid_Partition(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Antichain(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Cast_Order_Ring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Coloring(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Clique(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ENat_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Setoid_Partition(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Antichain(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Cast_Order_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
