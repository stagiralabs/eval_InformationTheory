// Lean compiler output
// Module: Mathlib.GroupTheory.MonoidLocalization.Away
// Imports: Init Mathlib.Algebra.Group.Submonoid.Membership Mathlib.GroupTheory.MonoidLocalization.Basic
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
lean_object* l_Submonoid_powers___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Localization_Away_monoidOf(lean_object*);
LEAN_EXPORT lean_object* l_Localization_Away_monoidOf___rarg(lean_object*, lean_object*);
lean_object* l_Localization_monoidOf___rarg(lean_object*, lean_object*);
lean_object* l_AddSubmonoid_multiples___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Localization_Away_invSelf(lean_object*);
lean_object* l_AddLocalization_addMonoidOf___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Localization_Away_invSelf___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddLocalization_Away_addMonoidOf___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddLocalization_Away_addMonoidOf(lean_object*);
LEAN_EXPORT lean_object* l_Localization_Away_invSelf___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddLocalization_Away_negSelf___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddLocalization_Away_negSelf___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddLocalization_Away_negSelf(lean_object*);
LEAN_EXPORT lean_object* l_Localization_Away_invSelf___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Localization_Away_invSelf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Localization_Away_invSelf___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Localization_Away_invSelf___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Localization_Away_invSelf___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddLocalization_Away_negSelf___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddLocalization_Away_negSelf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddLocalization_Away_negSelf___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddLocalization_Away_negSelf___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddLocalization_Away_negSelf___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Localization_Away_monoidOf___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_3 = l_Submonoid_powers___rarg(x_1, x_2);
x_4 = l_Localization_monoidOf___rarg(x_1, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Localization_Away_monoidOf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Localization_Away_monoidOf___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddLocalization_Away_addMonoidOf___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_3 = l_AddSubmonoid_multiples___rarg(x_1, x_2);
x_4 = l_AddLocalization_addMonoidOf___rarg(x_1, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddLocalization_Away_addMonoidOf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddLocalization_Away_addMonoidOf___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_Membership(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_MonoidLocalization_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_MonoidLocalization_Away(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_Membership(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_MonoidLocalization_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
