// Lean compiler output
// Module: Mathlib.Data.Finsupp.Order
// Imports: Init Mathlib.Algebra.Order.BigOperators.Group.Finset Mathlib.Algebra.Order.Module.Defs Mathlib.Algebra.Order.Pi Mathlib.Data.Finsupp.Basic Mathlib.Data.Finsupp.SMulWithZero
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
uint8_t l_Multiset_decidableDforallMultiset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_instLEFinsupp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_partialorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_decidableLE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_Finsupp_decidableLT___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_orderEmbeddingToFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_Finsupp_decidableLT___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_decidableLT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_orderEmbeddingToFun___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_decidableLT___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_decidableLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_partialorder___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_orderBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_orderBot___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Finsupp_preorder___closed__1;
LEAN_EXPORT lean_object* l_Finsupp_preorder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_Finsupp_decidableLT___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_preorder___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_Finsupp_decidableLT___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_decidableLE___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_instLEFinsupp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_orderBot___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Finsupp_decidableLE___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_decidableLE___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Finsupp_decidableLT___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_orderBot___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_orderEmbeddingToFun(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_partialorder___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_orderBot___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_instLEFinsupp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_instLEFinsupp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finsupp_instLEFinsupp(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_orderEmbeddingToFun___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Finsupp_orderEmbeddingToFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finsupp_orderEmbeddingToFun___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_orderEmbeddingToFun___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finsupp_orderEmbeddingToFun(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_Finsupp_preorder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_preorder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finsupp_preorder___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_preorder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finsupp_preorder(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_partialorder___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finsupp_preorder(lean_box(0), lean_box(0), x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_partialorder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finsupp_partialorder___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_partialorder___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finsupp_partialorder___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_orderBot___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finsupp_orderBot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_closure((void*)(l_Finsupp_orderBot___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finsupp_orderBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finsupp_orderBot___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_orderBot___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finsupp_orderBot___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_orderBot___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finsupp_orderBot___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_decidableLE___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_4);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_apply_1(x_8, x_4);
x_10 = lean_apply_2(x_3, x_7, x_9);
return x_10;
}
}
LEAN_EXPORT uint8_t l_Finsupp_decidableLE___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Finsupp_decidableLE___rarg___lambda__1), 5, 3);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
lean_closure_set(x_5, 2, x_1);
x_6 = l_Multiset_decidableDforallMultiset___rarg(x_4, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finsupp_decidableLE(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Finsupp_decidableLE___rarg___boxed), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finsupp_decidableLE___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Finsupp_decidableLE___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_decidableLE___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finsupp_decidableLE(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_Finsupp_decidableLT___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_Finsupp_decidableLE___rarg(x_1, x_2, x_3);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = l_Finsupp_decidableLE___rarg(x_1, x_3, x_2);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_Finsupp_decidableLT___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_decidableLTOfDecidableLE___at_Finsupp_decidableLT___spec__1___rarg___boxed), 3, 0);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Finsupp_decidableLT___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_decidableLTOfDecidableLE___at_Finsupp_decidableLT___spec__1___rarg(x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finsupp_decidableLT(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finsupp_decidableLT___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_Finsupp_decidableLT___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_decidableLTOfDecidableLE___at_Finsupp_decidableLT___spec__1___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_Finsupp_decidableLT___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_decidableLTOfDecidableLE___at_Finsupp_decidableLT___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finsupp_decidableLT___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Finsupp_decidableLT___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_BigOperators_Group_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Module_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_SMulWithZero(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finsupp_Order(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_BigOperators_Group_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Module_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_SMulWithZero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finsupp_preorder___closed__1 = _init_l_Finsupp_preorder___closed__1();
lean_mark_persistent(l_Finsupp_preorder___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
