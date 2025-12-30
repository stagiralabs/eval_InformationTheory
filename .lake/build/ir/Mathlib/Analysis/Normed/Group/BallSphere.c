// Lean compiler output
// Module: Mathlib.Analysis.Normed.Group.BallSphere
// Imports: Init Mathlib.Analysis.Normed.Group.Uniform
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
LEAN_EXPORT lean_object* l_instInvolutiveNegElemSphereOfNat___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInvolutiveNegElemSphereOfNat___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInvolutiveNegElemClosedBallOfNat___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Subtype_map___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInvolutiveNegElemClosedBallOfNat(lean_object*);
LEAN_EXPORT lean_object* l_instInvolutiveNegElemBallOfNat___rarg(lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instInvolutiveNegElemBallOfNat(lean_object*);
LEAN_EXPORT lean_object* l_instInvolutiveNegElemClosedBallOfNat___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInvolutiveNegElemSphereOfNat(lean_object*);
LEAN_EXPORT lean_object* l_instInvolutiveNegElemBallOfNat___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInvolutiveNegElemSphereOfNat___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_closure((void*)(l_Subtype_map___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_instInvolutiveNegElemSphereOfNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instInvolutiveNegElemSphereOfNat___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instInvolutiveNegElemSphereOfNat___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instInvolutiveNegElemSphereOfNat___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instInvolutiveNegElemBallOfNat___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_closure((void*)(l_Subtype_map___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_instInvolutiveNegElemBallOfNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instInvolutiveNegElemBallOfNat___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instInvolutiveNegElemBallOfNat___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instInvolutiveNegElemBallOfNat___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instInvolutiveNegElemClosedBallOfNat___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_closure((void*)(l_Subtype_map___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_instInvolutiveNegElemClosedBallOfNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instInvolutiveNegElemClosedBallOfNat___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instInvolutiveNegElemClosedBallOfNat___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instInvolutiveNegElemClosedBallOfNat___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_Uniform(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Normed_Group_BallSphere(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_Uniform(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
