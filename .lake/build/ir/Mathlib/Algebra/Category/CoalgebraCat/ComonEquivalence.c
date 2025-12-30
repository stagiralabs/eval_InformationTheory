// Lean compiler output
// Module: Mathlib.Algebra.Category.CoalgebraCat.ComonEquivalence
// Imports: Init Mathlib.CategoryTheory.Monoidal.Braided.Opposite Mathlib.Algebra.Category.ModuleCat.Monoidal.Symmetric Mathlib.CategoryTheory.Monoidal.Comon_ Mathlib.Algebra.Category.CoalgebraCat.Basic
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
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComonObj___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_toComon(lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComon___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_CoalgebraCat_toComon___spec__1___closed__1;
LEAN_EXPORT lean_object* l_CoalgebraCat_toComon___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComonObjCoalgebraStruct___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemilinearMapClass_semilinearMap___at_CoalgebraCat_toComon___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemilinearMapClass_semilinearMap___at_CoalgebraCat_toComon___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_toComon___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComon___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_toComonObj(lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComonObjCoalgebraStruct(lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComonObj___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_toComonObj___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComon(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_CoalgebraCat_toComon___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComonObj(lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_toComon___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CoalgebraCat_ofComon___rarg___closed__1;
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComon___rarg(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComonObjCoalgebraStruct___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemilinearMapClass_semilinearMap___at_CoalgebraCat_toComon___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_CoalgebraCat_toComon___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_toComonObj___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CoalgebraCat_toComonObj___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_7);
lean_ctor_set(x_8, 2, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_15, 2, x_13);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_toComonObj(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CoalgebraCat_toComonObj___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_toComonObj___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CoalgebraCat_toComonObj___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_RingHom_id___at_CoalgebraCat_toComon___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_CoalgebraCat_toComon___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_CoalgebraCat_toComon___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_SemilinearMapClass_semilinearMap___at_CoalgebraCat_toComon___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SemilinearMapClass_semilinearMap___at_CoalgebraCat_toComon___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_SemilinearMapClass_semilinearMap___at_CoalgebraCat_toComon___spec__2___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_toComon___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_SemilinearMapClass_semilinearMap___at_CoalgebraCat_toComon___spec__2___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_toComon___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_CoalgebraCat_toComonObj___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_CoalgebraCat_toComon___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_toComon(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CoalgebraCat_toComon___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_CoalgebraCat_toComon___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_CoalgebraCat_toComon___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SemilinearMapClass_semilinearMap___at_CoalgebraCat_toComon___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SemilinearMapClass_semilinearMap___at_CoalgebraCat_toComon___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_toComon___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CoalgebraCat_toComon___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComonObjCoalgebraStruct___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = lean_ctor_get(x_2, 2);
lean_inc(x_3);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComonObjCoalgebraStruct(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CoalgebraCat_ofComonObjCoalgebraStruct___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComonObjCoalgebraStruct___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CoalgebraCat_ofComonObjCoalgebraStruct___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComonObj___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_CoalgebraCat_ofComonObjCoalgebraStruct___rarg(x_1, x_2);
lean_dec(x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_CoalgebraCat_ofComonObjCoalgebraStruct___rarg(x_1, x_2);
lean_dec(x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComonObj(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CoalgebraCat_ofComonObj___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComonObj___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CoalgebraCat_ofComonObj___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComon___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_CoalgebraCat_ofComon___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CoalgebraCat_ofComon___rarg___lambda__1___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComon___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_CoalgebraCat_ofComonObj___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_CoalgebraCat_ofComon___rarg___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComon(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CoalgebraCat_ofComon___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CoalgebraCat_ofComon___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CoalgebraCat_ofComon___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Braided_Opposite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Monoidal_Symmetric(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Comon__(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_CoalgebraCat_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_CoalgebraCat_ComonEquivalence(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_Braided_Opposite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_ModuleCat_Monoidal_Symmetric(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_Comon__(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_CoalgebraCat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_CoalgebraCat_toComon___spec__1___closed__1 = _init_l_RingHom_id___at_CoalgebraCat_toComon___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_CoalgebraCat_toComon___spec__1___closed__1);
l_CoalgebraCat_ofComon___rarg___closed__1 = _init_l_CoalgebraCat_ofComon___rarg___closed__1();
lean_mark_persistent(l_CoalgebraCat_ofComon___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
