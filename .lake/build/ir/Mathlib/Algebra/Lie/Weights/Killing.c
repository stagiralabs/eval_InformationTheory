// Lean compiler output
// Module: Mathlib.Algebra.Lie.Weights.Killing
// Imports: Init Mathlib.Algebra.Lie.Derivation.Killing Mathlib.Algebra.Lie.Killing Mathlib.Algebra.Lie.Sl2 Mathlib.Algebra.Lie.Weights.Chain Mathlib.LinearAlgebra.Eigenspace.Semisimple Mathlib.LinearAlgebra.JordanChevalley
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
LEAN_EXPORT lean_object* l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Pi_instNeg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Field_toDivisionRing___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Ring_toAddCommGroup___rarg(x_4);
lean_dec(x_4);
x_6 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LieModule_Weight_instInvolutiveNegSubtypeMemLieSubalgebra(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_Derivation_Killing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_Killing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_Sl2(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_Weights_Chain(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Eigenspace_Semisimple(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_JordanChevalley(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Lie_Weights_Killing(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_Derivation_Killing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_Killing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_Sl2(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_Weights_Chain(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Eigenspace_Semisimple(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_JordanChevalley(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
