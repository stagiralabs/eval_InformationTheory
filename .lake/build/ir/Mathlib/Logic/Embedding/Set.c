// Lean compiler output
// Module: Mathlib.Logic.Embedding.Set
// Imports: Init Mathlib.Data.Set.Notation Mathlib.Order.SetNotation Mathlib.Logic.Embedding.Basic Mathlib.Logic.Pairwise Mathlib.Data.Set.Image
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
LEAN_EXPORT lean_object* l_Function_Embedding_codRestrict___rarg(lean_object*, lean_object*);
static lean_object* l_Function_Embedding_image___closed__1;
LEAN_EXPORT lean_object* l_Function_Embedding_optionEmbeddingEquiv___elambda__1(lean_object*, lean_object*);
lean_object* l_Function_Embedding_coeWithTop___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_codRestrict(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_optionEmbeddingEquiv___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_sigmaSet___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_image___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Function_Embedding_optionEmbeddingEquiv___elambda__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_Function_Embedding_sigmaSet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_sigmaSet___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_sumSet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_sumSet___elambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Function_Embedding_sumSet___closed__1;
LEAN_EXPORT lean_object* l_subtypeOrEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_optionElim___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_subtypeOrEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_optionElim___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_sigmaSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_embeddingOfSubset___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_optionEmbeddingEquiv___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_sigmaSet___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_sumSet___lambda__1(lean_object*);
static lean_object* l_subtypeOrEquiv___rarg___closed__1;
LEAN_EXPORT lean_object* l_Function_Embedding_sumSet___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_codRestrict___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_subtypeOrLeftEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_embeddingOfSubset___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_subtypeOrEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_optionEmbeddingEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_sumSet___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_subtypeOrEquiv___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_sigmaSet___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Sum_elim___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_optionElim___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Option_elim_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_subtypeOrEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_optionElim___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_optionElim(lean_object*, lean_object*);
lean_object* l_Subtype_impEmbedding___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_subtypeOrEquiv___elambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_optionEmbeddingEquiv___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Set_embeddingOfSubset(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_embeddingOfSubset___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_codRestrict___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Function_Embedding_trans___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_image(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_optionElim___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Option_elim_x27___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_optionElim___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_Embedding_optionElim___elambda__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_optionElim___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_Embedding_optionElim___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_optionElim(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_Embedding_optionElim___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_optionElim___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Function_Embedding_optionElim___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_optionEmbeddingEquiv___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_Function_Embedding_optionElim___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_optionEmbeddingEquiv___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_Embedding_optionEmbeddingEquiv___elambda__1___rarg), 1, 0);
return x_3;
}
}
static lean_object* _init_l_Function_Embedding_optionEmbeddingEquiv___elambda__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_Embedding_coeWithTop___elambda__1___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_optionEmbeddingEquiv___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Function_Embedding_optionEmbeddingEquiv___elambda__2___rarg___closed__1;
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Function_Embedding_trans___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_optionEmbeddingEquiv___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_Embedding_optionEmbeddingEquiv___elambda__2___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_optionEmbeddingEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Function_Embedding_optionEmbeddingEquiv___elambda__2___rarg), 1, 0);
x_4 = lean_alloc_closure((void*)(l_Function_Embedding_optionEmbeddingEquiv___elambda__1___rarg), 1, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_codRestrict___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_codRestrict___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_Embedding_codRestrict___elambda__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_codRestrict___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_Embedding_codRestrict___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_codRestrict(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_Embedding_codRestrict___rarg), 2, 0);
return x_4;
}
}
static lean_object* _init_l_Function_Embedding_image___closed__1() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_image(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Function_Embedding_image___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_image___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Function_Embedding_image(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_embeddingOfSubset___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Set_embeddingOfSubset___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Set_embeddingOfSubset___elambda__1___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_embeddingOfSubset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Set_embeddingOfSubset___elambda__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Set_embeddingOfSubset___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Set_embeddingOfSubset___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_subtypeOrEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Sum_elim___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_subtypeOrEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_subtypeOrEquiv___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_subtypeOrEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_subtypeOrLeftEmbedding___elambda__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_subtypeOrEquiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_subtypeOrEquiv___elambda__2___rarg), 2, 0);
return x_4;
}
}
static lean_object* _init_l_subtypeOrEquiv___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Subtype_impEmbedding___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_subtypeOrEquiv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_subtypeOrEquiv___elambda__2___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_subtypeOrEquiv___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_subtypeOrEquiv___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_subtypeOrEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_subtypeOrEquiv___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_sumSet___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Sum_elim___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_sumSet___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_Embedding_sumSet___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_sumSet___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Function_Embedding_sumSet___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_Embedding_sumSet___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_sumSet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Function_Embedding_sumSet___closed__1;
x_6 = lean_alloc_closure((void*)(l_Function_Embedding_sumSet___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_sumSet___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Function_Embedding_sumSet___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_sigmaSet___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_sigmaSet___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_Embedding_sigmaSet___elambda__1___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_sigmaSet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Function_Embedding_sigmaSet___elambda__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_sigmaSet___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Function_Embedding_sigmaSet___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_sigmaSet___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Function_Embedding_sigmaSet___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_sigmaSet___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Function_Embedding_sigmaSet(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Notation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SetNotation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Embedding_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Pairwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Image(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Logic_Embedding_Set(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SetNotation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Embedding_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Pairwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Image(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Function_Embedding_optionEmbeddingEquiv___elambda__2___rarg___closed__1 = _init_l_Function_Embedding_optionEmbeddingEquiv___elambda__2___rarg___closed__1();
lean_mark_persistent(l_Function_Embedding_optionEmbeddingEquiv___elambda__2___rarg___closed__1);
l_Function_Embedding_image___closed__1 = _init_l_Function_Embedding_image___closed__1();
lean_mark_persistent(l_Function_Embedding_image___closed__1);
l_subtypeOrEquiv___rarg___closed__1 = _init_l_subtypeOrEquiv___rarg___closed__1();
lean_mark_persistent(l_subtypeOrEquiv___rarg___closed__1);
l_Function_Embedding_sumSet___closed__1 = _init_l_Function_Embedding_sumSet___closed__1();
lean_mark_persistent(l_Function_Embedding_sumSet___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
