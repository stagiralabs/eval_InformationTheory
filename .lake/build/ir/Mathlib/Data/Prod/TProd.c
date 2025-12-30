// Lean compiler output
// Module: Mathlib.Data.Prod.TProd
// Imports: Init Mathlib.Data.List.Nodup
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__List_TProd_elim_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_mk___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__Set_tprod_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_elim_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__List_TProd_elim_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_elim(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_elim_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__Set_tprod_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_elim_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_elim___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__List_TProd_mk_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_instInhabited___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_elim___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__List_TProd_mk_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__Set_tprod_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__List_TProd_mk_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_TProd_mk___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_7 = lean_apply_1(x_2, x_5);
x_8 = l_List_TProd_mk___rarg(x_6, x_2);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
lean_inc(x_2);
x_11 = lean_apply_1(x_2, x_9);
x_12 = l_List_TProd_mk___rarg(x_10, x_2);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l_List_TProd_mk(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_TProd_mk___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_TProd_instInhabited___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_TProd_mk___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_TProd_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_TProd_instInhabited___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_TProd_elim___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_4);
x_8 = lean_apply_2(x_1, x_4, x_6);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_3, 1);
x_2 = x_7;
x_3 = x_10;
x_5 = lean_box(0);
goto _start;
}
else
{
lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_List_TProd_elim(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_TProd_elim___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_TProd_elim___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_TProd_elim___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__List_TProd_elim_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_5(x_5, x_6, x_7, x_2, x_3, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__List_TProd_elim_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Prod_TProd_0__List_TProd_elim_match__1_splitter___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_TProd_elim_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_TProd_elim___rarg(x_2, x_1, x_4, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_TProd_elim_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_TProd_elim_x27___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_TProd_elim_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_TProd_elim_x27___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_TProd_elim___rarg(x_2, x_1, x_4, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_TProd_piEquivTProd___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_TProd_mk___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_TProd_piEquivTProd___elambda__2___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_List_TProd_piEquivTProd___elambda__2___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_List_TProd_piEquivTProd___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, lean_box(0));
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_TProd_piEquivTProd___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_TProd_piEquivTProd___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_TProd_piEquivTProd___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__Set_tprod_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_apply_1(x_3, lean_box(0));
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_4, x_6, x_7, lean_box(0));
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__Set_tprod_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Prod_TProd_0__Set_tprod_match__1_splitter___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__Set_tprod_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Data_Prod_TProd_0__Set_tprod_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__List_TProd_mk_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_3, x_4, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__List_TProd_mk_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Prod_TProd_0__List_TProd_mk_match__1_splitter___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Prod_TProd_0__List_TProd_mk_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Prod_TProd_0__List_TProd_mk_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Nodup(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Prod_TProd(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Nodup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
