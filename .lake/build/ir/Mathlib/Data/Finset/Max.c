// Lean compiler output
// Module: Mathlib.Data.Finset.Max
// Imports: Init Mathlib.Data.Finset.Card Mathlib.Data.Finset.Lattice.Fold
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
LEAN_EXPORT lean_object* l_Finset_min_x27(lean_object*);
lean_object* l_Finset_fold___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_WithBot_unbot___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_max___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_inf_x27___at_Finset_min_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_min___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_min_x27___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_min_x27___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_max___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_max___spec__1(lean_object*);
lean_object* l_WithTop_some___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_max_x27(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup_x27___at_Finset_max_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_min(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_max___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_inf_x27___at_Finset_min_x27___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_min_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min_x27___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_WithTop_untop___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min_x27___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_min___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_max_x27___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_max(lean_object*);
LEAN_EXPORT lean_object* l_Finset_inf_x27___at_Finset_min_x27___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_max___rarg___closed__1;
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Finset_min___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min_x27___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_WithBot_some___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_max_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup_x27___at_Finset_max_x27___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_max_x27___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_max___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_2(x_14, x_11, x_13);
lean_ctor_set(x_3, 0, x_15);
return x_3;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
lean_dec(x_3);
x_17 = lean_ctor_get(x_1, 2);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_apply_2(x_17, x_11, x_16);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_max___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Finset_sup___at_Finset_max___spec__1___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_box(0);
x_6 = l_Finset_fold___rarg(x_4, lean_box(0), lean_box(0), x_5, x_3, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_max___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sup___at_Finset_max___spec__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Finset_max___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_WithBot_some___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_max___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Finset_max___rarg___closed__1;
x_4 = l_Finset_sup___at_Finset_max___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_max(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_max___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_1, x_11, x_13);
lean_ctor_set(x_3, 0, x_14);
return x_3;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_3, 0);
lean_inc(x_15);
lean_dec(x_3);
x_16 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_1, x_11, x_15);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_LinearOrder_toLattice___rarg(x_1);
x_5 = lean_alloc_closure((void*)(l_Finset_inf___at_Finset_min___spec__1___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_box(0);
x_7 = l_Finset_fold___rarg(x_5, lean_box(0), lean_box(0), x_6, x_3, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_inf___at_Finset_min___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Finset_min___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_WithTop_some___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_min___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Finset_min___rarg___closed__1;
x_4 = l_Finset_inf___at_Finset_min___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_min(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_min___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_inf___at_Finset_min___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_min___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_min___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min_x27___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_LinearOrder_toLattice___rarg(x_1);
x_5 = lean_alloc_closure((void*)(l_Finset_inf___at_Finset_min___spec__1___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_box(0);
x_7 = l_Finset_fold___rarg(x_5, lean_box(0), lean_box(0), x_6, x_3, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min_x27___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_inf___at_Finset_min_x27___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_inf_x27___at_Finset_min_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Finset_min___rarg___closed__1;
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = l_Finset_inf___at_Finset_min_x27___spec__2___rarg(x_1, x_2, x_6);
x_8 = l_WithTop_untop___rarg(x_7, lean_box(0));
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_inf_x27___at_Finset_min_x27___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_inf_x27___at_Finset_min_x27___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
static lean_object* _init_l_Finset_min_x27___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_min_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Finset_min_x27___rarg___closed__1;
x_5 = l_Finset_inf_x27___at_Finset_min_x27___spec__1___rarg(x_1, x_2, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_min_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_min_x27___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_inf___at_Finset_min_x27___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_inf___at_Finset_min_x27___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_inf_x27___at_Finset_min_x27___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_inf_x27___at_Finset_min_x27___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_min_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_min_x27___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_max_x27___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Finset_sup___at_Finset_max___spec__1___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_box(0);
x_6 = l_Finset_fold___rarg(x_4, lean_box(0), lean_box(0), x_5, x_3, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_max_x27___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sup___at_Finset_max_x27___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sup_x27___at_Finset_max_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Finset_max___rarg___closed__1;
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = l_Finset_sup___at_Finset_max_x27___spec__2___rarg(x_1, x_2, x_6);
x_8 = l_WithBot_unbot___rarg(x_7, lean_box(0));
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_sup_x27___at_Finset_max_x27___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sup_x27___at_Finset_max_x27___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_max_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Finset_min_x27___rarg___closed__1;
x_5 = l_Finset_sup_x27___at_Finset_max_x27___spec__1___rarg(x_1, x_2, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_max_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_max_x27___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Lattice_Fold(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Max(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Card(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Lattice_Fold(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_max___rarg___closed__1 = _init_l_Finset_max___rarg___closed__1();
lean_mark_persistent(l_Finset_max___rarg___closed__1);
l_Finset_min___rarg___closed__1 = _init_l_Finset_min___rarg___closed__1();
lean_mark_persistent(l_Finset_min___rarg___closed__1);
l_Finset_min_x27___rarg___closed__1 = _init_l_Finset_min_x27___rarg___closed__1();
lean_mark_persistent(l_Finset_min_x27___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
