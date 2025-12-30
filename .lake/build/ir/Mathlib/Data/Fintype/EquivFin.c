// Lean compiler output
// Module: Mathlib.Data.Fintype.EquivFin
// Imports: Init Mathlib.Data.Fintype.Card Mathlib.Data.List.NodupEquivFin
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
LEAN_EXPORT lean_object* l_Fintype_truncEquivFinOfCardEq___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_truncEquivFinOfCardEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_Nodup_getBijectionOfForallMemList___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ofLeftInverseOfCardLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_truncFinBijection(lean_object*);
lean_object* l_finCongr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_truncEquivFin___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ofRightInverseOfCardLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_Nodup_getEquivOfForallMemList___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_truncEquivFin(lean_object*);
lean_object* l_Fin_castLEEmb___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_truncEquivOfCardEq___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_truncOfCardLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ofLeftInverseOfCardLE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Trunc_mk___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_truncOfCardLE___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ofLeftInverseOfCardLE___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_truncFinBijection___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_truncEquivOfCardEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
static lean_object* l_Fintype_truncEquivFinOfCardEq___rarg___closed__1;
static lean_object* l_Function_Embedding_truncOfCardLE___rarg___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Fintype_truncEquivFinOfCardEq___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ofRightInverseOfCardLE___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_truncOfCardLE___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_truncEquivFinOfCardEq(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ofRightInverseOfCardLE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Embedding_trans___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_truncEquivOfCardEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_truncEquivFin___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_Nodup_getEquivOfForallMemList___rarg(x_1, x_2, lean_box(0), lean_box(0));
x_4 = l_Equiv_symm___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_truncEquivFin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_truncEquivFin___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_truncFinBijection___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Nodup_getBijectionOfForallMemList___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_truncFinBijection(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_truncFinBijection___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_truncEquivFinOfCardEq___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_1, x_4);
x_6 = l_finCongr(x_5, x_2, lean_box(0));
lean_dec(x_5);
x_7 = l_Equiv_trans___rarg(x_3, x_6);
return x_7;
}
}
static lean_object* _init_l_Fintype_truncEquivFinOfCardEq___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Trunc_mk___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Fintype_truncEquivFinOfCardEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Fintype_truncEquivFinOfCardEq___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
x_6 = l_Fintype_truncEquivFin___rarg(x_2, x_1);
x_7 = l_Fintype_truncEquivFinOfCardEq___rarg___closed__1;
x_8 = l_Function_comp___rarg(x_7, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Fintype_truncEquivFinOfCardEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_truncEquivFinOfCardEq___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_truncEquivFinOfCardEq___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Fintype_truncEquivFinOfCardEq___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_truncEquivOfCardEq___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Equiv_symm___rarg(x_2);
x_4 = l_Equiv_trans___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_truncEquivOfCardEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_List_lengthTRAux___rarg(x_2, x_6);
x_8 = l_Fintype_truncEquivFinOfCardEq___rarg(x_1, x_3, x_7, lean_box(0));
x_9 = lean_alloc_closure((void*)(l_Fintype_truncEquivOfCardEq___rarg___lambda__1), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = l_Fintype_truncEquivFin___rarg(x_4, x_2);
x_11 = l_Fintype_truncEquivFinOfCardEq___rarg___closed__1;
x_12 = l_Function_comp___rarg(x_11, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Fintype_truncEquivOfCardEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fintype_truncEquivOfCardEq___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_ofLeftInverseOfCardLE___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_ofLeftInverseOfCardLE(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Equiv_ofLeftInverseOfCardLE___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_ofLeftInverseOfCardLE___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Equiv_ofLeftInverseOfCardLE(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_ofRightInverseOfCardLE___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_ofRightInverseOfCardLE(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Equiv_ofRightInverseOfCardLE___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_ofRightInverseOfCardLE___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Equiv_ofRightInverseOfCardLE(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
static lean_object* _init_l_Function_Embedding_truncOfCardLE___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fin_castLEEmb___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_truncOfCardLE___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Equiv_symm___rarg(x_2);
x_5 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_Function_Embedding_truncOfCardLE___rarg___lambda__1___closed__1;
x_7 = lean_alloc_closure((void*)(l_Function_Embedding_trans___elambda__1___rarg), 3, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_6);
x_8 = lean_alloc_closure((void*)(l_Function_Embedding_trans___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_truncOfCardLE___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l_Fintype_truncEquivFin___rarg(x_3, x_1);
x_7 = lean_alloc_closure((void*)(l_Function_Embedding_truncOfCardLE___rarg___lambda__1), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Fintype_truncEquivFin___rarg(x_4, x_2);
x_9 = l_Fintype_truncEquivFinOfCardEq___rarg___closed__1;
x_10 = l_Function_comp___rarg(x_9, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_truncOfCardLE(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_Embedding_truncOfCardLE___rarg), 5, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_NodupEquivFin(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Fintype_EquivFin(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Card(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_NodupEquivFin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Fintype_truncEquivFinOfCardEq___rarg___closed__1 = _init_l_Fintype_truncEquivFinOfCardEq___rarg___closed__1();
lean_mark_persistent(l_Fintype_truncEquivFinOfCardEq___rarg___closed__1);
l_Function_Embedding_truncOfCardLE___rarg___lambda__1___closed__1 = _init_l_Function_Embedding_truncOfCardLE___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Function_Embedding_truncOfCardLE___rarg___lambda__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
