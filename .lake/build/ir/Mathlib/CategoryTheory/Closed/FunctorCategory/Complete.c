// Lean compiler output
// Module: Mathlib.CategoryTheory.Closed.FunctorCategory.Complete
// Imports: Init Mathlib.CategoryTheory.Adjunction.Lifting.Right Mathlib.CategoryTheory.Closed.FunctorCategory.Groupoid Mathlib.CategoryTheory.Groupoid.Discrete Mathlib.CategoryTheory.Limits.Preserves.FunctorCategory Mathlib.CategoryTheory.Monad.Comonadicity
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
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl(lean_object*);
static lean_object* l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___closed__1;
static lean_object* l___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1(lean_object*);
static lean_object* l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___closed__2;
LEAN_EXPORT lean_object* l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_eqToHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_discreteCategory(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___lambda__1(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___lambda__1___boxed(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = lean_apply_1(x_1, x_3);
x_7 = lean_apply_1(x_1, x_4);
x_8 = l_CategoryTheory_eqToHom___rarg(x_2, x_6, x_7, lean_box(0));
lean_dec(x_6);
return x_8;
}
}
static lean_object* _init_l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_CategoryTheory_discreteCategory(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___closed__2;
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___lambda__2), 5, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___rarg___closed__1;
x_3 = l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg(x_1, lean_box(0), x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Adjunction_Lifting_Right(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Closed_FunctorCategory_Groupoid(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Groupoid_Discrete(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_FunctorCategory(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monad_Comonadicity(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Adjunction_Lifting_Right(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Closed_FunctorCategory_Groupoid(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Groupoid_Discrete(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_FunctorCategory(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monad_Comonadicity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___closed__1 = _init_l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___closed__1);
l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___closed__2 = _init_l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___closed__2();
lean_mark_persistent(l_CategoryTheory_Discrete_functor___at___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___spec__1___rarg___closed__2);
l___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___rarg___closed__1 = _init_l___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___rarg___closed__1();
lean_mark_persistent(l___private_Mathlib_CategoryTheory_Closed_FunctorCategory_Complete_0__CategoryTheory_Functor_incl___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
