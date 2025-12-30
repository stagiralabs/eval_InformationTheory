// Lean compiler output
// Module: Mathlib.RingTheory.Ideal.IsPrincipal
// Imports: Init Mathlib.RingTheory.PrincipalIdealDomain
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
LEAN_EXPORT lean_object* l_Ideal_isPrincipalNonZeroDivisorsSubmonoid(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_isPrincipalNonZeroDivisorsSubmonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_isPrincipalSubmonoid___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_isPrincipalSubmonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_isPrincipalSubmonoid(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_isPrincipalNonZeroDivisorsSubmonoid___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_Ideal_isPrincipalNonZeroDivisorsSubmonoid___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_Ideal_isPrincipalNonZeroDivisorsSubmonoid___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_Ideal_isPrincipalNonZeroDivisorsSubmonoid___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_isPrincipalSubmonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_isPrincipalSubmonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_isPrincipalSubmonoid___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_isPrincipalSubmonoid___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Ideal_isPrincipalSubmonoid___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_Ideal_isPrincipalNonZeroDivisorsSubmonoid___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_Ideal_isPrincipalNonZeroDivisorsSubmonoid___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_nonZeroDivisors___at_Ideal_isPrincipalNonZeroDivisorsSubmonoid___spec__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_isPrincipalNonZeroDivisorsSubmonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_isPrincipalNonZeroDivisorsSubmonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_isPrincipalNonZeroDivisorsSubmonoid___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_nonZeroDivisors___at_Ideal_isPrincipalNonZeroDivisorsSubmonoid___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_nonZeroDivisors___at_Ideal_isPrincipalNonZeroDivisorsSubmonoid___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_isPrincipalNonZeroDivisorsSubmonoid___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Ideal_isPrincipalNonZeroDivisorsSubmonoid___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_PrincipalIdealDomain(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Ideal_IsPrincipal(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_PrincipalIdealDomain(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
