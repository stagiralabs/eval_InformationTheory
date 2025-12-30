// Lean compiler output
// Module: Mathlib.Data.Finset.BooleanAlgebra
// Imports: Init Mathlib.Data.Finset.Image Mathlib.Data.Fintype.Defs
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
lean_object* l_Finset_instSDiff___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_boundedOrder___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_boundedOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_decidableCodisjoint(lean_object*);
lean_object* l_Finset_instLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_decidableCodisjoint___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
lean_object* l_Finset_partialOrder(lean_object*);
LEAN_EXPORT lean_object* l_Finset_boundedOrder(lean_object*);
lean_object* l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_decidableIsCompl(lean_object*);
LEAN_EXPORT lean_object* l_Finset_decidableIsCompl___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Multiset_decidableMem___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Finset_decidableCodisjoint___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Finset_decidableIsCompl___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_booleanAlgebra(lean_object*);
LEAN_EXPORT lean_object* l_Finset_booleanAlgebra___rarg(lean_object*, lean_object*);
uint8_t l_Finset_decidableDisjoint___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_instGeneralizedBooleanAlgebra___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_decidableCodisjoint___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Finset_decidableCodisjoint___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_decidableCodisjoint___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_forall__prop__decidable___rarg(uint8_t, lean_object*);
lean_object* l_List_diff___at_Multiset_sub___spec__6___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Fintype_decidableForallFintype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_booleanAlgebra___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Finset_boundedOrder___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Finset_partialOrder(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_boundedOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_boundedOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_boundedOrder___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_booleanAlgebra___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_5 = l_List_diff___at_Multiset_sub___spec__6___rarg(x_1, x_2, x_3);
x_6 = l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(x_1, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_booleanAlgebra___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_3 = l_Finset_instGeneralizedBooleanAlgebra___rarg(x_2);
lean_inc(x_1);
x_4 = l_Finset_boundedOrder___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_2);
x_6 = l_Finset_instLattice___rarg(x_2);
lean_inc(x_1);
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_List_diff___at_Multiset_sub___spec__6___rarg), 3, 2);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_1);
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_Finset_instSDiff___rarg), 3, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = lean_alloc_closure((void*)(l_Finset_booleanAlgebra___rarg___lambda__1), 4, 2);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_1);
x_10 = lean_ctor_get(x_3, 2);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_8);
lean_ctor_set(x_11, 3, x_9);
lean_ctor_set(x_11, 4, x_5);
lean_ctor_set(x_11, 5, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Finset_booleanAlgebra(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_booleanAlgebra___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Finset_decidableCodisjoint___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Multiset_decidableMem___rarg(x_1, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_decidableCodisjoint___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_Multiset_decidableMem___rarg(x_1, x_4, x_2);
x_6 = l_instDecidableNot___rarg(x_5);
x_7 = lean_alloc_closure((void*)(l_Finset_decidableCodisjoint___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_3);
x_8 = l_forall__prop__decidable___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT uint8_t l_Finset_decidableCodisjoint___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_alloc_closure((void*)(l_Finset_decidableCodisjoint___rarg___lambda__2), 4, 3);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
lean_closure_set(x_5, 2, x_2);
x_6 = l_Fintype_decidableForallFintype___rarg(x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_decidableCodisjoint(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_decidableCodisjoint___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_decidableCodisjoint___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Finset_decidableCodisjoint___rarg___lambda__1(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_decidableCodisjoint___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Finset_decidableCodisjoint___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Finset_decidableIsCompl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_4);
x_5 = l_Finset_decidableDisjoint___rarg(x_4, x_1, x_2);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = l_Finset_decidableCodisjoint___rarg(x_1, x_2, x_3, x_4);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Finset_decidableIsCompl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_decidableIsCompl___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_decidableIsCompl___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Finset_decidableIsCompl___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Image(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_BooleanAlgebra(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Image(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_boundedOrder___rarg___closed__1 = _init_l_Finset_boundedOrder___rarg___closed__1();
lean_mark_persistent(l_Finset_boundedOrder___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
