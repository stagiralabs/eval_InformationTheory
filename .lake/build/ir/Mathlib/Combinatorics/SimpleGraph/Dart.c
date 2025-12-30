// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Dart
// Imports: Init Mathlib.Combinatorics.SimpleGraph.Basic Mathlib.Data.Fintype.Sigma
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
LEAN_EXPORT lean_object* l_SimpleGraph_dartOfNeighborSet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_symm___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_edge___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_fintype___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_SimpleGraph_Dart_fintype___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_SimpleGraph_Dart_fintype___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Dart_0__SimpleGraph_decEqDart____x40_Mathlib_Combinatorics_SimpleGraph_Dart___hyg_35____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_dartOfNeighborSet___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_SimpleGraph_Dart_fintype___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableEqDart___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_fintype___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_edge___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_SimpleGraph_Dart_fintype___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_SimpleGraph_Dart_fintype___rarg___closed__2;
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_symm___boxed(lean_object*, lean_object*);
lean_object* l_Prod_swap___rarg(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableEqDart(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_dartOfNeighborSet___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_edge___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_fintype___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableEqDart___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_fintype___rarg___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Dart_0__SimpleGraph_decEqDart____x40_Mathlib_Combinatorics_SimpleGraph_Dart___hyg_35____rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_symm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_fintype(lean_object*);
lean_object* l_SimpleGraph_neighborSet_memDecidable___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_edge(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_symm___rarg(lean_object*);
lean_object* l_instDecidableEqProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_SimpleGraph_Dart_fintype___spec__1(lean_object*);
lean_object* l_Multiset_sigma___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_SimpleGraph_Dart_fintype___spec__1___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_SimpleGraph_Dart_fintype___rarg___closed__1;
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_SimpleGraph_Dart_fintype___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_fintype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Dart_0__SimpleGraph_decEqDart____x40_Mathlib_Combinatorics_SimpleGraph_Dart___hyg_35_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_SimpleGraph_Dart_fintype___spec__2___boxed(lean_object*, lean_object*);
static lean_object* l_SimpleGraph_Dart_fintype___rarg___closed__3;
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Dart_0__SimpleGraph_decEqDart____x40_Mathlib_Combinatorics_SimpleGraph_Dart___hyg_35____rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_1);
x_4 = l_instDecidableEqProd___rarg(x_1, x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Dart_0__SimpleGraph_decEqDart____x40_Mathlib_Combinatorics_SimpleGraph_Dart___hyg_35_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_SimpleGraph_Dart_0__SimpleGraph_decEqDart____x40_Mathlib_Combinatorics_SimpleGraph_Dart___hyg_35____rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Dart_0__SimpleGraph_decEqDart____x40_Mathlib_Combinatorics_SimpleGraph_Dart___hyg_35____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_Combinatorics_SimpleGraph_Dart_0__SimpleGraph_decEqDart____x40_Mathlib_Combinatorics_SimpleGraph_Dart___hyg_35_(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableEqDart___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_1);
x_4 = l_instDecidableEqProd___rarg(x_1, x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableEqDart(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_instDecidableEqDart___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableEqDart___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_instDecidableEqDart(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_SimpleGraph_Dart_fintype___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_SimpleGraph_neighborSet_memDecidable___rarg), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
x_5 = l_Subtype_fintype___rarg(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_SimpleGraph_Dart_fintype___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Fintype_ofBijective___at_SimpleGraph_Dart_fintype___spec__2___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_1);
x_6 = l_Multiset_sigma___rarg(x_1, x_5);
x_7 = l_Multiset_map___rarg(x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_SimpleGraph_Dart_fintype___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fintype_ofBijective___at_SimpleGraph_Dart_fintype___spec__2___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_SimpleGraph_Dart_fintype___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_SimpleGraph_Dart_fintype___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Fintype_ofEquiv___at_SimpleGraph_Dart_fintype___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_Fintype_ofBijective___at_SimpleGraph_Dart_fintype___spec__2___rarg(x_2, x_3, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_SimpleGraph_Dart_fintype___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_ofEquiv___at_SimpleGraph_Dart_fintype___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_fintype___rarg___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_fintype___rarg___lambda__2(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
static lean_object* _init_l_SimpleGraph_Dart_fintype___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_SimpleGraph_Dart_fintype___rarg___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_SimpleGraph_Dart_fintype___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_SimpleGraph_Dart_fintype___rarg___lambda__2), 1, 0);
return x_1;
}
}
static lean_object* _init_l_SimpleGraph_Dart_fintype___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_SimpleGraph_Dart_fintype___rarg___closed__1;
x_2 = l_SimpleGraph_Dart_fintype___rarg___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_fintype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_SimpleGraph_Dart_fintype___rarg___closed__3;
x_5 = l_Fintype_ofEquiv___at_SimpleGraph_Dart_fintype___spec__1___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_fintype(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_Dart_fintype___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_SimpleGraph_Dart_fintype___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fintype_ofBijective___at_SimpleGraph_Dart_fintype___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___at_SimpleGraph_Dart_fintype___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Fintype_ofEquiv___at_SimpleGraph_Dart_fintype___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_fintype___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_Dart_fintype___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_edge___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_edge(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_Dart_edge___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_edge___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SimpleGraph_Dart_edge___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_edge___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_Dart_edge(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_symm___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Prod_swap___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_symm(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_Dart_symm___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_symm___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SimpleGraph_Dart_symm___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Dart_symm___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_Dart_symm(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_dartOfNeighborSet___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_dartOfNeighborSet(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_dartOfNeighborSet___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_dartOfNeighborSet___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_dartOfNeighborSet(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Sigma(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Dart(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Sigma(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_SimpleGraph_Dart_fintype___rarg___closed__1 = _init_l_SimpleGraph_Dart_fintype___rarg___closed__1();
lean_mark_persistent(l_SimpleGraph_Dart_fintype___rarg___closed__1);
l_SimpleGraph_Dart_fintype___rarg___closed__2 = _init_l_SimpleGraph_Dart_fintype___rarg___closed__2();
lean_mark_persistent(l_SimpleGraph_Dart_fintype___rarg___closed__2);
l_SimpleGraph_Dart_fintype___rarg___closed__3 = _init_l_SimpleGraph_Dart_fintype___rarg___closed__3();
lean_mark_persistent(l_SimpleGraph_Dart_fintype___rarg___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
