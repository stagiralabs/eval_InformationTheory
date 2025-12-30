// Lean compiler output
// Module: Mathlib.CategoryTheory.Category.PartialFun
// Imports: Init Mathlib.CategoryTheory.Category.Pointed Mathlib.Data.PFun
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
LEAN_EXPORT lean_object* l_PartialFun_instCoeSortType;
LEAN_EXPORT lean_object* l_PartialFun_Iso_mk___elambda__2___rarg(lean_object*, lean_object*);
lean_object* l_Part_ofOption___rarg(lean_object*);
LEAN_EXPORT lean_object* l_typeToPartialFun;
LEAN_EXPORT lean_object* l_PartialFun_Iso_mk___rarg(lean_object*);
lean_object* l_PFun_id(lean_object*);
static lean_object* l_PartialFun_largeCategory___closed__3;
LEAN_EXPORT lean_object* l_PartialFun_Iso_mk___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_PFun_toSubtype___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialFun_instInhabited;
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_pointedToPartialFun;
LEAN_EXPORT lean_object* l_PartialFun_largeCategory;
static lean_object* l_PartialFun_largeCategory___closed__2;
lean_object* l_PFun_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
static lean_object* l_typeToPartialFun___closed__1;
LEAN_EXPORT lean_object* l_PartialFun_largeCategory___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialFun_Iso_mk___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartialFun_Iso_mk___elambda__1(lean_object*, lean_object*);
static lean_object* l_PartialFun_instCoeSortType___closed__1;
static lean_object* l_pointedToPartialFun___closed__2;
lean_object* l_PFun_lift(lean_object*, lean_object*);
static lean_object* l_pointedToPartialFun___closed__1;
LEAN_EXPORT lean_object* l_PartialFun_Iso_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_pointedToPartialFun___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_PartialFun_largeCategory___closed__1;
LEAN_EXPORT lean_object* l_pointedToPartialFun___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_typeToPartialFun___closed__2;
static lean_object* _init_l_PartialFun_instCoeSortType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PartialFun_instCoeSortType() {
_start:
{
lean_object* x_1; 
x_1 = l_PartialFun_instCoeSortType___closed__1;
return x_1;
}
}
static lean_object* _init_l_PartialFun_instInhabited() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_PartialFun_largeCategory___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PFun_comp___rarg(x_5, x_4, x_6);
return x_7;
}
}
static lean_object* _init_l_PartialFun_largeCategory___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PFun_id), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PartialFun_largeCategory___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PartialFun_largeCategory___lambda__1), 6, 0);
return x_1;
}
}
static lean_object* _init_l_PartialFun_largeCategory___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_PartialFun_largeCategory___closed__1;
x_3 = l_PartialFun_largeCategory___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_PartialFun_largeCategory() {
_start:
{
lean_object* x_1; 
x_1 = l_PartialFun_largeCategory___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_PartialFun_Iso_mk___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Equiv_symm___elambda__2___rarg(x_1, x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = l_Part_ofOption___rarg(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PartialFun_Iso_mk___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PartialFun_Iso_mk___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PartialFun_Iso_mk___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = l_Part_ofOption___rarg(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_PartialFun_Iso_mk___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PartialFun_Iso_mk___elambda__2___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PartialFun_Iso_mk___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_PartialFun_Iso_mk___elambda__2___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_PartialFun_Iso_mk___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PartialFun_Iso_mk(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PartialFun_Iso_mk___rarg), 1, 0);
return x_3;
}
}
static lean_object* _init_l_typeToPartialFun___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PFun_lift), 2, 0);
return x_1;
}
}
static lean_object* _init_l_typeToPartialFun___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_typeToPartialFun___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, lean_box(0));
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_typeToPartialFun() {
_start:
{
lean_object* x_1; 
x_1 = l_typeToPartialFun___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_pointedToPartialFun___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_PFun_toSubtype___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
static lean_object* _init_l_pointedToPartialFun___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_pointedToPartialFun___lambda__1___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_pointedToPartialFun___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_pointedToPartialFun___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, lean_box(0));
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_pointedToPartialFun() {
_start:
{
lean_object* x_1; 
x_1 = l_pointedToPartialFun___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_pointedToPartialFun___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_pointedToPartialFun___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Category_Pointed(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PFun(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Category_PartialFun(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Category_Pointed(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PFun(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_PartialFun_instCoeSortType___closed__1 = _init_l_PartialFun_instCoeSortType___closed__1();
lean_mark_persistent(l_PartialFun_instCoeSortType___closed__1);
l_PartialFun_instCoeSortType = _init_l_PartialFun_instCoeSortType();
lean_mark_persistent(l_PartialFun_instCoeSortType);
l_PartialFun_instInhabited = _init_l_PartialFun_instInhabited();
l_PartialFun_largeCategory___closed__1 = _init_l_PartialFun_largeCategory___closed__1();
lean_mark_persistent(l_PartialFun_largeCategory___closed__1);
l_PartialFun_largeCategory___closed__2 = _init_l_PartialFun_largeCategory___closed__2();
lean_mark_persistent(l_PartialFun_largeCategory___closed__2);
l_PartialFun_largeCategory___closed__3 = _init_l_PartialFun_largeCategory___closed__3();
lean_mark_persistent(l_PartialFun_largeCategory___closed__3);
l_PartialFun_largeCategory = _init_l_PartialFun_largeCategory();
lean_mark_persistent(l_PartialFun_largeCategory);
l_typeToPartialFun___closed__1 = _init_l_typeToPartialFun___closed__1();
lean_mark_persistent(l_typeToPartialFun___closed__1);
l_typeToPartialFun___closed__2 = _init_l_typeToPartialFun___closed__2();
lean_mark_persistent(l_typeToPartialFun___closed__2);
l_typeToPartialFun = _init_l_typeToPartialFun();
lean_mark_persistent(l_typeToPartialFun);
l_pointedToPartialFun___closed__1 = _init_l_pointedToPartialFun___closed__1();
lean_mark_persistent(l_pointedToPartialFun___closed__1);
l_pointedToPartialFun___closed__2 = _init_l_pointedToPartialFun___closed__2();
lean_mark_persistent(l_pointedToPartialFun___closed__2);
l_pointedToPartialFun = _init_l_pointedToPartialFun();
lean_mark_persistent(l_pointedToPartialFun);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
