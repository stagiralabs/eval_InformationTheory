// Lean compiler output
// Module: Mathlib.Combinatorics.SetFamily.KruskalKatona
// Imports: Init Mathlib.Combinatorics.Colex Mathlib.Combinatorics.SetFamily.Compression.UV Mathlib.Combinatorics.SetFamily.Intersecting Mathlib.Data.Finset.Fin
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
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1___rarg___closed__1;
lean_object* l_Finset_sup_x27___at_Finset_max_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Finset_decidableNonempty___rarg(lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* l_exists__prop__decidable___rarg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__2___rarg(lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___lambda__1___closed__1;
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel(lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1___boxed(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Finset_decidableDisjoint___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Nat_pow___boxed(lean_object*, lean_object*);
static lean_object* _init_l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg___lambda__1___closed__1;
lean_inc(x_1);
x_6 = l_Finset_sup_x27___at_Finset_max_x27___spec__1___rarg(x_1, x_2, lean_box(0), x_5);
lean_inc(x_1);
x_7 = l_Finset_sup_x27___at_Finset_max_x27___spec__1___rarg(x_1, x_3, lean_box(0), x_5);
x_8 = l_instDecidableLt__mathlib___rarg(x_1, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Finset_decidableNonempty___rarg(x_1);
x_6 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg___lambda__1), 4, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_1);
x_7 = l_exists__prop__decidable___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_3);
lean_inc(x_2);
x_5 = l_Finset_decidableDisjoint___rarg(x_4, x_2, x_3);
if (x_5 == 0)
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_List_lengthTRAux___rarg(x_2, x_8);
x_10 = l_List_lengthTRAux___rarg(x_3, x_8);
x_11 = lean_nat_dec_eq(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = 0;
x_13 = lean_box(x_12);
return x_13;
}
else
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_14 = l_Finset_decidableNonempty___rarg(x_2);
x_15 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg___lambda__2), 4, 3);
lean_closure_set(x_15, 0, x_3);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_2);
x_16 = l_exists__prop__decidable___rarg(x_14, x_15);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_add___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1___rarg___closed__1;
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1___rarg___closed__1;
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__2___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_alloc_closure((void*)(l_Nat_pow___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___lambda__1___closed__1;
x_4 = l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1___rarg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__2___rarg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_Colex(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SetFamily_Compression_UV(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SetFamily_Intersecting(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Fin(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SetFamily_KruskalKatona(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_Colex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SetFamily_Compression_UV(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SetFamily_Intersecting(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg___lambda__1___closed__1 = _init_l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg___lambda__1___closed__1();
lean_mark_persistent(l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_UsefulCompression_instDecidableRel___rarg___lambda__1___closed__1);
l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1___rarg___closed__1 = _init_l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1___rarg___closed__1();
lean_mark_persistent(l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___spec__1___rarg___closed__1);
l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___lambda__1___closed__1 = _init_l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___lambda__1___closed__1();
lean_mark_persistent(l___private_Mathlib_Combinatorics_SetFamily_KruskalKatona_0__Finset_UV_familyMeasure___lambda__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
