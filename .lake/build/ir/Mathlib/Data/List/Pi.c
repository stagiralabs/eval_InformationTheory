// Lean compiler output
// Module: Mathlib.Data.List.Pi
// Imports: Init Mathlib.Data.Multiset.Pi
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
LEAN_EXPORT lean_object* l_List_pi___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_cons(lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_nil___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_head(lean_object*, lean_object*);
static lean_object* l_List_pi___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_pi___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_tail(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_tail___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_pi___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pi___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_head___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_cons___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_head___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_pi___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_nil(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Array_appendList___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_cons___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_List_pi(lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_tail___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_Pi_cons___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_pi___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_pi___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_nil(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_List_Pi_nil___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_Pi_nil(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Pi_head___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Pi_head(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Pi_head___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Pi_head___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_Pi_head___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Pi_tail___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Pi_tail(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_List_Pi_tail___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Pi_tail___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_Pi_tail(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Pi_cons___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Multiset_Pi_cons___rarg(x_1, lean_box(0), x_4, x_3, x_5, x_6, x_7, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_Pi_cons(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Pi_cons___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Pi_cons___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_Pi_cons___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_pi___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_pi___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = l_List_reverse___rarg(x_7);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_List_Pi_cons___rarg___boxed), 8, 6);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_4);
lean_closure_set(x_12, 4, x_5);
lean_closure_set(x_12, 5, x_10);
lean_ctor_set(x_6, 1, x_7);
lean_ctor_set(x_6, 0, x_12);
{
lean_object* _tmp_1 = lean_box(0);
lean_object* _tmp_5 = x_11;
lean_object* _tmp_6 = x_6;
x_2 = _tmp_1;
x_6 = _tmp_5;
x_7 = _tmp_6;
}
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_List_Pi_cons___rarg___boxed), 8, 6);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, lean_box(0));
lean_closure_set(x_16, 2, x_3);
lean_closure_set(x_16, 3, x_4);
lean_closure_set(x_16, 4, x_5);
lean_closure_set(x_16, 5, x_14);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_7);
x_2 = lean_box(0);
x_6 = x_15;
x_7 = x_17;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_pi___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_pi___spec__1___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_pi___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_array_to_list(x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
lean_inc(x_3);
lean_inc(x_5);
lean_inc(x_1);
x_11 = l_List_pi___rarg(x_1, lean_box(0), x_5, x_3);
x_12 = lean_box(0);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_13 = l_List_mapTR_loop___at_List_pi___spec__1___rarg(x_1, lean_box(0), x_4, x_5, x_9, x_11, x_12);
x_14 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_7, x_13);
x_2 = lean_box(0);
x_6 = x_10;
x_7 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_pi___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_flatMapTR_go___at_List_pi___spec__2___rarg), 7, 0);
return x_2;
}
}
static lean_object* _init_l_List_pi___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pi___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_1);
x_5 = lean_alloc_closure((void*)(l_List_pi___elambda__1___boxed), 4, 2);
lean_closure_set(x_5, 0, lean_box(0));
lean_closure_set(x_5, 1, lean_box(0));
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
lean_inc(x_4);
lean_inc(x_8);
x_10 = lean_apply_1(x_4, x_8);
x_11 = l_List_pi___rarg___closed__1;
x_12 = l_List_flatMapTR_go___at_List_pi___spec__2___rarg(x_1, lean_box(0), x_4, x_8, x_9, x_10, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_List_pi(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pi___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pi___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_pi___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Multiset_Pi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_List_Pi(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Multiset_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_List_pi___rarg___closed__1 = _init_l_List_pi___rarg___closed__1();
lean_mark_persistent(l_List_pi___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
