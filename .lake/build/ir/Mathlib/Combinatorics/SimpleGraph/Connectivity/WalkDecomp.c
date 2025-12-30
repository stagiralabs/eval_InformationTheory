// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Connectivity.WalkDecomp
// Imports: Init Mathlib.Combinatorics.SimpleGraph.Walk
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
lean_object* l_SimpleGraph_Walk_append___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_rotate(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_rotate___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_dropUntil(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_takeUntil___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Connectivity_WalkDecomp_0__SimpleGraph_Walk_takeUntil_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_takeUntil(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Connectivity_WalkDecomp_0__SimpleGraph_Walk_takeUntil_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_dropUntil___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_takeUntil___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_dropUntil___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Connectivity_WalkDecomp_0__SimpleGraph_Walk_takeUntil_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_rotate___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_takeUntil___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_8; 
lean_dec(x_6);
lean_dec(x_2);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_5, 0);
lean_dec(x_9);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_10; 
lean_dec(x_5);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_3);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_5);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_5, 1);
x_13 = lean_ctor_get(x_5, 3);
x_14 = lean_ctor_get(x_5, 2);
lean_dec(x_14);
x_15 = lean_ctor_get(x_5, 0);
lean_dec(x_15);
lean_inc(x_2);
lean_inc(x_6);
lean_inc(x_3);
x_16 = lean_apply_2(x_2, x_3, x_6);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_inc(x_6);
lean_inc(x_12);
x_18 = l_SimpleGraph_Walk_takeUntil___rarg(x_1, x_2, x_12, x_4, x_13, x_6, lean_box(0));
lean_ctor_set(x_5, 3, x_18);
lean_ctor_set(x_5, 2, x_6);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_19; 
lean_free_object(x_5);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_2);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_3);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_5, 1);
x_21 = lean_ctor_get(x_5, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_5);
lean_inc(x_2);
lean_inc(x_6);
lean_inc(x_3);
x_22 = lean_apply_2(x_2, x_3, x_6);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_inc(x_6);
lean_inc(x_20);
x_24 = l_SimpleGraph_Walk_takeUntil___rarg(x_1, x_2, x_20, x_4, x_21, x_6, lean_box(0));
x_25 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_25, 0, x_3);
lean_ctor_set(x_25, 1, x_20);
lean_ctor_set(x_25, 2, x_6);
lean_ctor_set(x_25, 3, x_24);
return x_25;
}
else
{
lean_object* x_26; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_6);
lean_dec(x_2);
x_26 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_26, 0, x_3);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_takeUntil(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_Walk_takeUntil___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_takeUntil___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_SimpleGraph_Walk_takeUntil___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Connectivity_WalkDecomp_0__SimpleGraph_Walk_takeUntil_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_apply_2(x_5, x_3, lean_box(0));
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 3);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_apply_6(x_6, x_1, x_8, lean_box(0), x_9, x_3, lean_box(0));
return x_10;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Connectivity_WalkDecomp_0__SimpleGraph_Walk_takeUntil_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_SimpleGraph_Connectivity_WalkDecomp_0__SimpleGraph_Walk_takeUntil_match__1_splitter___rarg), 6, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Connectivity_WalkDecomp_0__SimpleGraph_Walk_takeUntil_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Combinatorics_SimpleGraph_Connectivity_WalkDecomp_0__SimpleGraph_Walk_takeUntil_match__1_splitter(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_dropUntil___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_8; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_5, 0);
lean_dec(x_9);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_10; 
lean_dec(x_5);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_3);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_5);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_5, 1);
x_13 = lean_ctor_get(x_5, 3);
x_14 = lean_ctor_get(x_5, 2);
lean_dec(x_14);
x_15 = lean_ctor_get(x_5, 0);
lean_dec(x_15);
lean_inc(x_2);
lean_inc(x_6);
lean_inc(x_3);
x_16 = lean_apply_2(x_2, x_3, x_6);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_free_object(x_5);
lean_dec(x_3);
x_3 = x_12;
x_5 = x_13;
x_7 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_6);
lean_dec(x_2);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_5, 1);
x_20 = lean_ctor_get(x_5, 3);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_5);
lean_inc(x_2);
lean_inc(x_6);
lean_inc(x_3);
x_21 = lean_apply_2(x_2, x_3, x_6);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_dec(x_3);
x_3 = x_19;
x_5 = x_20;
x_7 = lean_box(0);
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_6);
lean_dec(x_2);
x_24 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_24, 0, x_3);
lean_ctor_set(x_24, 1, x_19);
lean_ctor_set(x_24, 2, x_4);
lean_ctor_set(x_24, 3, x_20);
return x_24;
}
}
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_dropUntil(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_Walk_dropUntil___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_dropUntil___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_SimpleGraph_Walk_dropUntil___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_rotate___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_3);
lean_inc(x_5);
lean_inc_n(x_4, 2);
lean_inc(x_2);
x_7 = l_SimpleGraph_Walk_dropUntil___rarg(x_1, x_2, x_4, x_4, x_5, x_3, lean_box(0));
lean_inc(x_3);
lean_inc(x_4);
x_8 = l_SimpleGraph_Walk_takeUntil___rarg(x_1, x_2, x_4, x_4, x_5, x_3, lean_box(0));
lean_inc(x_3);
x_9 = l_SimpleGraph_Walk_append___rarg(x_1, x_3, x_4, x_3, x_7, x_8);
lean_dec(x_8);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_rotate(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_Walk_rotate___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_Walk_rotate___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_SimpleGraph_Walk_rotate___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Walk(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Connectivity_WalkDecomp(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Walk(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
