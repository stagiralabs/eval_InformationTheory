// Lean compiler output
// Module: Mathlib.Order.OrderIsoNat
// Imports: Init Mathlib.Data.Nat.Lattice Mathlib.Logic.Denumerable Mathlib.Logic.Function.Iterate Mathlib.Order.Hom.Basic Mathlib.Data.Set.Subsingleton
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
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding___at_Nat_orderEmbeddingOfSet___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RelEmbedding_natLT(lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderEmbedding_subtype___at_Nat_orderEmbeddingOfSet___spec__2___closed__1;
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding___at_Nat_orderEmbeddingOfSet___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_RelEmbedding_natGT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelEmbedding_natGT___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelEmbedding_natLT___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Nat_Subtype_ofNat___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding___at_Nat_orderEmbeddingOfSet___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_orderEmbeddingOfSet___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_subtype___at_Nat_orderEmbeddingOfSet___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Nat_orderEmbeddingOfSet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelEmbedding_natLT___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelEmbedding_natGT___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Function_Embedding_trans___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Embedding_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RelEmbedding_natLT___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RelEmbedding_natLT(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RelEmbedding_natLT___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RelEmbedding_natLT___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RelEmbedding_natLT___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelEmbedding_natGT___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RelEmbedding_natGT(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RelEmbedding_natGT___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RelEmbedding_natGT___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RelEmbedding_natGT___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding___at_Nat_orderEmbeddingOfSet___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding___at_Nat_orderEmbeddingOfSet___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RelEmbedding_orderEmbeddingOfLTEmbedding___at_Nat_orderEmbeddingOfSet___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
static lean_object* _init_l_OrderEmbedding_subtype___at_Nat_orderEmbeddingOfSet___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_Embedding_subtype___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_subtype___at_Nat_orderEmbeddingOfSet___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderEmbedding_subtype___at_Nat_orderEmbeddingOfSet___spec__2___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_orderEmbeddingOfSet___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Nat_Subtype_ofNat___rarg___boxed), 3, 2);
lean_closure_set(x_2, 0, x_1);
lean_closure_set(x_2, 1, lean_box(0));
x_3 = lean_alloc_closure((void*)(l_Function_Embedding_subtype___elambda__1___rarg___boxed), 1, 0);
x_4 = lean_alloc_closure((void*)(l_Function_Embedding_trans___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_orderEmbeddingOfSet(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_orderEmbeddingOfSet___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding___at_Nat_orderEmbeddingOfSet___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RelEmbedding_orderEmbeddingOfLTEmbedding___at_Nat_orderEmbeddingOfSet___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Denumerable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Function_Iterate(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Hom_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Subsingleton(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_OrderIsoNat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Denumerable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Function_Iterate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Hom_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Subsingleton(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_OrderEmbedding_subtype___at_Nat_orderEmbeddingOfSet___spec__2___closed__1 = _init_l_OrderEmbedding_subtype___at_Nat_orderEmbeddingOfSet___spec__2___closed__1();
lean_mark_persistent(l_OrderEmbedding_subtype___at_Nat_orderEmbeddingOfSet___spec__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
