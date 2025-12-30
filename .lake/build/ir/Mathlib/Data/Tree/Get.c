// Lean compiler output
// Module: Mathlib.Data.Tree.Get
// Imports: Init Mathlib.Data.Num.Basic Mathlib.Data.Ordering.Basic Mathlib.Data.Tree.Basic
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
LEAN_EXPORT lean_object* l_Tree_get(lean_object*);
LEAN_EXPORT lean_object* l_Tree_get___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tree_getOrElse___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_cmpUsing___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tree_indexOf___rarg___closed__1;
LEAN_EXPORT lean_object* l_Tree_indexOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tree_getOrElse(lean_object*);
LEAN_EXPORT lean_object* l_Tree_get___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tree_getOrElse___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tree_indexOf___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Tree_indexOf___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tree_indexOf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_cmpUsing___rarg(x_1, x_2, x_5);
switch (x_8) {
case 0:
{
lean_object* x_9; 
lean_dec(x_7);
x_9 = l_Tree_indexOf___rarg(x_1, x_2, x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
case 1:
{
lean_object* x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_17 = l_Tree_indexOf___rarg___closed__1;
return x_17;
}
default: 
{
lean_object* x_18; 
lean_dec(x_6);
x_18 = l_Tree_indexOf___rarg(x_1, x_2, x_7);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 0);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_18, 0, x_22);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Tree_indexOf(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Tree_indexOf___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Tree_get___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
case 1:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_2, 2);
x_1 = x_7;
x_2 = x_8;
goto _start;
}
}
default: 
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_2, 1);
x_1 = x_11;
x_2 = x_12;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Tree_get(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tree_get___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tree_get___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Tree_get___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Tree_getOrElse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Tree_get___rarg(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Tree_getOrElse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tree_getOrElse___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tree_getOrElse___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Tree_getOrElse___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Num_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Ordering_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Tree_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Tree_Get(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Num_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Ordering_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Tree_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Tree_indexOf___rarg___closed__1 = _init_l_Tree_indexOf___rarg___closed__1();
lean_mark_persistent(l_Tree_indexOf___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
