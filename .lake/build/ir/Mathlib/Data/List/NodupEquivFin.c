// Lean compiler output
// Module: Mathlib.Data.List.NodupEquivFin
// Imports: Init Mathlib.Data.List.Duplicate Mathlib.Data.List.Sort
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
LEAN_EXPORT lean_object* l_List_Nodup_getBijectionOfForallMemList___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_List_Nodup_getEquiv___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv(lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList___elambda__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Sorted_getIso___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getBijectionOfForallMemList___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_Nodup_getEquivOfForallMemList___elambda__1___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_get___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_List_Nodup_getEquivOfForallMemList___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getBijectionOfForallMemList___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_Nodup_getEquiv___elambda__1___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_List_Sorted_getIso___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___elambda__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getBijectionOfForallMemList(lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_List_Nodup_getEquiv___elambda__1___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getBijectionOfForallMemList___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_Nodup_getEquiv___elambda__1___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_List_Nodup_getEquivOfForallMemList___elambda__1___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_Sorted_getIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_Nodup_getEquivOfForallMemList___elambda__1___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList___elambda__1(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList(lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getBijectionOfForallMemList___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_get___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getBijectionOfForallMemList___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Nodup_getBijectionOfForallMemList___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getBijectionOfForallMemList___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_Nodup_getBijectionOfForallMemList___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getBijectionOfForallMemList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Nodup_getBijectionOfForallMemList___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getBijectionOfForallMemList___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Nodup_getBijectionOfForallMemList___elambda__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_Nodup_getEquiv___elambda__1___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_7 = lean_apply_2(x_1, x_5, x_2);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_4, x_9);
lean_dec(x_4);
x_3 = x_6;
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_Nodup_getEquiv___elambda__1___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_findIdx_go___at_List_Nodup_getEquiv___elambda__1___spec__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_List_Nodup_getEquiv___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_List_Nodup_getEquiv___elambda__1___spec__2___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_List_Nodup_getEquiv___elambda__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_idxOf___at_List_Nodup_getEquiv___elambda__1___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_List_Nodup_getEquiv___elambda__1___spec__2___rarg(x_1, x_3, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Nodup_getEquiv___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_get___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Nodup_getEquiv___elambda__2___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_List_Nodup_getEquiv___elambda__2___rarg___boxed), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_List_Nodup_getEquiv___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Nodup_getEquiv___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Nodup_getEquiv___elambda__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_Nodup_getEquivOfForallMemList___elambda__1___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_7 = lean_apply_2(x_1, x_5, x_2);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_4, x_9);
lean_dec(x_4);
x_3 = x_6;
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_Nodup_getEquivOfForallMemList___elambda__1___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_findIdx_go___at_List_Nodup_getEquivOfForallMemList___elambda__1___spec__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_List_Nodup_getEquivOfForallMemList___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_List_Nodup_getEquivOfForallMemList___elambda__1___spec__2___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_List_Nodup_getEquivOfForallMemList___elambda__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_idxOf___at_List_Nodup_getEquivOfForallMemList___elambda__1___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_List_Nodup_getEquivOfForallMemList___elambda__1___spec__2___rarg(x_1, x_3, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Nodup_getEquivOfForallMemList___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_get___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Nodup_getEquivOfForallMemList___elambda__2___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_List_Nodup_getEquivOfForallMemList___elambda__2___rarg___boxed), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = lean_alloc_closure((void*)(l_List_Nodup_getEquivOfForallMemList___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Nodup_getEquivOfForallMemList___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquivOfForallMemList___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Nodup_getEquivOfForallMemList___elambda__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Sorted_getIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_Nodup_getEquiv___rarg(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Sorted_getIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Sorted_getIso___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Sorted_getIso___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Sorted_getIso(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Duplicate(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Sort(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_List_NodupEquivFin(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Duplicate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Sort(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
