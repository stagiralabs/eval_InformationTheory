// Lean compiler output
// Module: Mathlib.Algebra.FreeMonoid.Count
// Imports: Init Mathlib.Algebra.FreeMonoid.Basic Mathlib.Algebra.Group.TypeTags.Basic
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
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP___at_FreeAddMonoid_count___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeAddMonoid_countP_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_countP___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_countP___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeAddMonoid_count___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_count___rarg(lean_object*, lean_object*);
static lean_object* l_FreeMonoid_countP___rarg___closed__1;
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_countP_x27___at_FreeMonoid_count___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeMonoid_count___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeMonoid_countP_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeAddMonoid_countP_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_countP___at_FreeMonoid_count___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP___at_FreeAddMonoid_count___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_FreeAddMonoid_count(lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_countP_x27___at_FreeMonoid_count___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_countP_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeMonoid_countP_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP_x27___at_FreeAddMonoid_count___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeMonoid_count___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_countP(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_countP___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_count(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeAddMonoid_count___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_countP_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeMonoid_countP___at_FreeMonoid_count___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeAddMonoid_count___rarg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP_x27___at_FreeAddMonoid_count___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeMonoid_countP_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_1);
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_2 = x_5;
x_3 = x_10;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeMonoid_countP_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_countP_go___at_FreeMonoid_countP_x27___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_countP_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_countP_go___at_FreeMonoid_countP_x27___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_countP_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FreeMonoid_countP_x27___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeAddMonoid_countP_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_1);
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_2 = x_5;
x_3 = x_10;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeAddMonoid_countP_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_countP_go___at_FreeAddMonoid_countP_x27___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_countP_go___at_FreeAddMonoid_countP_x27___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FreeAddMonoid_countP_x27___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_countP___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_FreeMonoid_countP___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_FreeMonoid_countP___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_countP___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_FreeMonoid_countP_x27___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_FreeMonoid_countP___rarg___closed__1;
x_4 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_countP(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FreeMonoid_countP___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_countP___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FreeMonoid_countP___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeMonoid_count___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
lean_dec(x_4);
x_3 = x_6;
x_4 = x_11;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeMonoid_count___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_countP_go___at_FreeMonoid_count___spec__3___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_countP_x27___at_FreeMonoid_count___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_countP_go___at_FreeMonoid_count___spec__3___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_countP_x27___at_FreeMonoid_count___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeMonoid_countP_x27___at_FreeMonoid_count___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_countP___at_FreeMonoid_count___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_FreeMonoid_countP_x27___at_FreeMonoid_count___spec__2___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_FreeMonoid_countP___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_countP___at_FreeMonoid_count___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeMonoid_countP___at_FreeMonoid_count___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_count___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_FreeMonoid_countP___at_FreeMonoid_count___spec__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeMonoid_count(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeMonoid_count___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeAddMonoid_countP_x27___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FreeAddMonoid_countP___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeAddMonoid_count___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
lean_dec(x_4);
x_3 = x_6;
x_4 = x_11;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_countP_go___at_FreeAddMonoid_count___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_countP_go___at_FreeAddMonoid_count___spec__3___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP_x27___at_FreeAddMonoid_count___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_countP_go___at_FreeAddMonoid_count___spec__3___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP_x27___at_FreeAddMonoid_count___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeAddMonoid_countP_x27___at_FreeAddMonoid_count___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP___at_FreeAddMonoid_count___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FreeAddMonoid_countP_x27___at_FreeAddMonoid_count___spec__2___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeAddMonoid_countP___at_FreeAddMonoid_count___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeAddMonoid_countP___at_FreeAddMonoid_count___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FreeAddMonoid_count___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FreeAddMonoid_countP_x27___at_FreeAddMonoid_count___spec__2___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeAddMonoid_count(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FreeAddMonoid_count___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_FreeMonoid_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_TypeTags_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_FreeMonoid_Count(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_FreeMonoid_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_TypeTags_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_FreeMonoid_countP___rarg___closed__1 = _init_l_FreeMonoid_countP___rarg___closed__1();
lean_mark_persistent(l_FreeMonoid_countP___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
