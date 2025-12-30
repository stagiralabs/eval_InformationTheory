// Lean compiler output
// Module: Mathlib.CategoryTheory.Category.TwoP
// Imports: Init Mathlib.CategoryTheory.Category.Bipointed Mathlib.Data.TwoPointing
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
LEAN_EXPORT lean_object* l_TwoP_of___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_TwoP_of(lean_object*);
LEAN_EXPORT lean_object* l_TwoPointing_TwoP(lean_object*);
LEAN_EXPORT lean_object* l_TwoP_of___rarg(lean_object*);
LEAN_EXPORT lean_object* l_TwoP_instInhabited;
LEAN_EXPORT lean_object* l_TwoP_instCoeSortType;
LEAN_EXPORT lean_object* l_TwoPointing_TwoP___rarg___boxed(lean_object*);
extern lean_object* l_TwoPointing_bool;
LEAN_EXPORT lean_object* l_TwoPointing_TwoP___rarg(lean_object*);
static lean_object* _init_l_TwoP_instCoeSortType() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_TwoP_of___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_TwoP_of(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_TwoP_of___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TwoP_of___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_TwoP_of___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_TwoP___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_TwoP(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_TwoPointing_TwoP___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TwoPointing_TwoP___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_TwoPointing_TwoP___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_TwoP_instInhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_TwoPointing_bool;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Category_Bipointed(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_TwoPointing(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Category_TwoP(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Category_Bipointed(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_TwoPointing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_TwoP_instCoeSortType = _init_l_TwoP_instCoeSortType();
l_TwoP_instInhabited = _init_l_TwoP_instInhabited();
lean_mark_persistent(l_TwoP_instInhabited);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
