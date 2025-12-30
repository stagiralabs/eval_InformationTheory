// Lean compiler output
// Module: Mathlib.Algebra.Group.Action.TypeTags
// Imports: Init Mathlib.Algebra.Group.Action.Defs Mathlib.Algebra.Group.TypeTags.Basic Mathlib.Tactic.MinImports
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
LEAN_EXPORT lean_object* l_Multiplicative_smul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Additive_vadd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiplicative_smul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Additive_addAction___rarg(lean_object*);
lean_object* l_Additive_toMul(lean_object*);
LEAN_EXPORT lean_object* l_Multiplicative_mulAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Additive_addAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiplicative_mulAction___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Additive_vadd___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Multiplicative_smul___rarg___closed__1;
lean_object* l_Multiplicative_toAdd(lean_object*);
LEAN_EXPORT lean_object* l_Multiplicative_mulAction(lean_object*, lean_object*, lean_object*);
static lean_object* l_Additive_vadd___rarg___closed__1;
LEAN_EXPORT lean_object* l_Additive_addAction___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Additive_vadd___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Additive_toMul(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Additive_vadd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Additive_vadd___rarg___closed__1;
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_2);
x_7 = lean_apply_2(x_1, x_6, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Additive_vadd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Additive_vadd___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l_Multiplicative_smul___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Multiplicative_toAdd(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiplicative_smul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Multiplicative_smul___rarg___closed__1;
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_2);
x_7 = lean_apply_2(x_1, x_6, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiplicative_smul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiplicative_smul___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Additive_addAction___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Additive_vadd___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Additive_addAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Additive_addAction___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Additive_addAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Additive_addAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiplicative_mulAction___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiplicative_smul___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiplicative_mulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Multiplicative_mulAction___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiplicative_mulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiplicative_mulAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_TypeTags_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_MinImports(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Action_TypeTags(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_TypeTags_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_MinImports(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Additive_vadd___rarg___closed__1 = _init_l_Additive_vadd___rarg___closed__1();
lean_mark_persistent(l_Additive_vadd___rarg___closed__1);
l_Multiplicative_smul___rarg___closed__1 = _init_l_Multiplicative_smul___rarg___closed__1();
lean_mark_persistent(l_Multiplicative_smul___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
