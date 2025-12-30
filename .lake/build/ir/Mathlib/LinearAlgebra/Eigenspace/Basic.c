// Lean compiler output
// Module: Mathlib.LinearAlgebra.Eigenspace.Basic
// Imports: Init Mathlib.Algebra.Algebra.Spectrum Mathlib.Algebra.Module.LinearMap.Basic Mathlib.LinearAlgebra.GeneralLinearGroup Mathlib.LinearAlgebra.FiniteDimensional Mathlib.RingTheory.Nilpotent.Defs Mathlib.RingTheory.Nilpotent.Lemmas Mathlib.RingTheory.Nilpotent.Basic Mathlib.Tactic.Peel
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
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__8___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_Module_End_genEigenspace___elambda__1___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Module_End_genEigenspace___elambda__1___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Module_End_genEigenrange___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_Module_End_genEigenrange___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Module_End_genEigenspace___elambda__1___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_Eigenvalues_val___rarg(lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_UnifEigenvalues_instCoeOut___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_End_genEigenrange___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_eigenspace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Module_End_genEigenspace___elambda__1___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__8___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Module_End_genEigenrange___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Module_End_genEigenrange___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_Module_End_genEigenspace___elambda__1___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Module_End_genEigenrange___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_End_genEigenrange___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenrange(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_UnivEigenvalues_instDecidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_Module_End_genEigenrange___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Module_End_genEigenrange___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Module_End_genEigenrange___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Module_End_UnifEigenvalues_instCoeOut___closed__1;
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_maxGenEigenspace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_maxGenEigenspace___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_UnifEigenvalues_val___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Module_End_Eigenvalues_val(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_End_genEigenrange___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_Module_End_genEigenrange___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_eigenspace___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_Module_End_genEigenrange___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_UnifEigenvalues_val(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenrange___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__12___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Module_End_eigenspace___rarg___closed__1;
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_UnifEigenvalues_val___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_End_genEigenrange___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_UnivEigenvalues_instDecidableEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Module_End_genEigenspace___elambda__1___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_Module_End_genEigenrange___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_Module_End_genEigenspace___elambda__1___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_UnivEigenvalues_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_Module_End_genEigenrange___spec__10(lean_object*, lean_object*, lean_object*);
static lean_object* l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___closed__1;
lean_object* l_Pi_instSub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Module_End_genEigenspace___elambda__1___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_UnivEigenvalues_instDecidableEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_Module_End_genEigenrange___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_Module_End_genEigenrange___spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Module_End_genEigenrange___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Module_End_genEigenrange___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Module_End_genEigenrange___spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Module_End_genEigenspace___elambda__1___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenspace(lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Module_End_genEigenspace___elambda__1___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_UnifEigenvalues_instCoeOut(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Module_End_genEigenrange___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Module_End_genEigenrange___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_Eigenvalues_val___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Module_End_genEigenrange___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Module_End_genEigenspace___elambda__1___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenrange___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_UnifEigenvalues_val___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_Eigenvalues_val___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_Module_End_genEigenrange___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_Module_End_genEigenspace___elambda__1___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_Module_End_genEigenrange___spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Module_End_genEigenspace___elambda__1___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenrange___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Module_End_genEigenspace___elambda__1___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_9, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_land(x_14, x_9);
x_16 = lean_nat_dec_eq(x_15, x_12);
lean_dec(x_15);
x_17 = lean_nat_shiftr(x_9, x_14);
lean_dec(x_9);
if (x_16 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_inc_n(x_11, 2);
x_18 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_18, 0, x_11);
lean_closure_set(x_18, 1, x_11);
x_19 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_19, 0, x_10);
lean_closure_set(x_19, 1, x_11);
x_9 = x_17;
x_10 = x_19;
x_11 = x_18;
goto _start;
}
else
{
lean_object* x_21; 
lean_inc(x_11);
x_21 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_21, 0, x_11);
lean_closure_set(x_21, 1, x_11);
x_9 = x_17;
x_11 = x_21;
goto _start;
}
}
else
{
lean_object* x_23; 
lean_dec(x_9);
x_23 = lean_apply_2(x_8, x_10, x_11);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Module_End_genEigenspace___elambda__1___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_Module_End_genEigenspace___elambda__1___spec__4___rarg___boxed), 11, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___closed__1;
x_12 = l_Nat_binaryRec___at_Module_End_genEigenspace___elambda__1___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___boxed), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Module_End_genEigenspace___elambda__1___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___lambda__1___boxed), 2, 0);
x_11 = l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1___closed__1;
x_12 = l_Nat_binaryRec___at_Module_End_genEigenspace___elambda__1___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_8, x_11, x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Module_End_genEigenspace___elambda__1___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec___at_Module_End_genEigenspace___elambda__1___spec__2___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_Module_End_genEigenspace___elambda__1___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_Module_End_genEigenspace___elambda__1___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Submodule_comap___at_Module_End_genEigenspace___elambda__1___spec__6___rarg___boxed), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Module_End_genEigenspace___elambda__1___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, lean_box(0));
x_10 = l_Submodule_comap___at_Module_End_genEigenspace___elambda__1___spec__6___rarg(x_5, x_6, lean_box(0), x_8, x_9);
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Module_End_genEigenspace___elambda__1___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_ker___at_Module_End_genEigenspace___elambda__1___spec__5___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_iSup___at_Module_End_genEigenspace___elambda__1___spec__7___rarg___boxed), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_iSup___at_Module_End_genEigenspace___elambda__1___spec__8___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = l_Semiring_toNonAssocSemiring___rarg(x_1);
lean_inc(x_2);
x_11 = lean_apply_1(x_2, x_3);
lean_inc(x_4);
x_12 = lean_alloc_closure((void*)(l_Module_End_genEigenspace___elambda__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_12, 0, x_4);
x_13 = lean_alloc_closure((void*)(l_Pi_instSub___elambda__1___rarg), 4, 3);
lean_closure_set(x_13, 0, x_12);
lean_closure_set(x_13, 1, x_5);
lean_closure_set(x_13, 2, x_11);
x_14 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_15 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___lambda__1___boxed), 2, 0);
lean_inc(x_14);
x_16 = l_Nat_binaryRec___at_Module_End_genEigenspace___elambda__1___spec__4___rarg(x_6, x_4, x_2, x_1, x_7, x_10, x_14, x_15, x_8, x_14, x_13);
lean_dec(x_10);
x_17 = l_LinearMap_ker___at_Module_End_genEigenspace___elambda__1___spec__5___rarg(x_6, x_4, x_2, x_1, x_7, x_14, lean_box(0), x_16);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_4);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_7);
x_10 = lean_alloc_closure((void*)(l_Module_End_genEigenspace___elambda__1___rarg___lambda__2___boxed), 9, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
lean_closure_set(x_10, 6, x_7);
lean_closure_set(x_10, 7, x_9);
x_11 = l_iSup___at_Module_End_genEigenspace___elambda__1___spec__7___rarg(x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
x_9 = lean_alloc_closure((void*)(l_Module_End_genEigenspace___elambda__1___rarg___lambda__3___boxed), 9, 8);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_3);
lean_closure_set(x_9, 2, x_5);
lean_closure_set(x_9, 3, x_2);
lean_closure_set(x_9, 4, x_4);
lean_closure_set(x_9, 5, x_1);
lean_closure_set(x_9, 6, x_7);
lean_closure_set(x_9, 7, x_8);
x_10 = l_iSup___at_Module_End_genEigenspace___elambda__1___spec__8___rarg(x_7, x_9);
lean_dec(x_9);
lean_dec(x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Module_End_genEigenspace___elambda__1___rarg), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_Module_End_genEigenspace___elambda__1___rarg), 8, 7);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_4);
lean_closure_set(x_8, 4, x_5);
lean_closure_set(x_8, 5, x_6);
lean_closure_set(x_8, 6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenspace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Module_End_genEigenspace___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Module_End_genEigenspace___elambda__1___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Nat_binaryRec___at_Module_End_genEigenspace___elambda__1___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Module_End_genEigenspace___elambda__1___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_npowBinRec___at_Module_End_genEigenspace___elambda__1___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_Module_End_genEigenspace___elambda__1___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submodule_comap___at_Module_End_genEigenspace___elambda__1___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_Module_End_genEigenspace___elambda__1___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_comap___at_Module_End_genEigenspace___elambda__1___spec__6(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_Module_End_genEigenspace___elambda__1___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_ker___at_Module_End_genEigenspace___elambda__1___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_iSup___at_Module_End_genEigenspace___elambda__1___spec__7___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_iSup___at_Module_End_genEigenspace___elambda__1___spec__7(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_iSup___at_Module_End_genEigenspace___elambda__1___spec__8___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iSup___at_Module_End_genEigenspace___elambda__1___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_iSup___at_Module_End_genEigenspace___elambda__1___spec__8(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Module_End_genEigenspace___elambda__1___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Module_End_genEigenspace___elambda__1___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenspace___elambda__1___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Module_End_genEigenspace___elambda__1___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Module_End_UnifEigenvalues_val___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Module_End_UnifEigenvalues_val(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Module_End_UnifEigenvalues_val___rarg___boxed), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Module_End_UnifEigenvalues_val___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Module_End_UnifEigenvalues_val___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Module_End_UnifEigenvalues_val___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Module_End_UnifEigenvalues_val(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
static lean_object* _init_l_Module_End_UnifEigenvalues_instCoeOut___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Module_End_UnifEigenvalues_val___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Module_End_UnifEigenvalues_instCoeOut(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Module_End_UnifEigenvalues_instCoeOut___closed__1;
return x_8;
}
}
LEAN_EXPORT lean_object* l_Module_End_UnifEigenvalues_instCoeOut___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Module_End_UnifEigenvalues_instCoeOut(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Module_End_UnivEigenvalues_instDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Module_End_UnivEigenvalues_instDecidableEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Module_End_UnivEigenvalues_instDecidableEq___rarg___boxed), 5, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Module_End_UnivEigenvalues_instDecidableEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Module_End_UnivEigenvalues_instDecidableEq___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Module_End_UnivEigenvalues_instDecidableEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Module_End_UnivEigenvalues_instDecidableEq(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_End_genEigenrange___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_End_genEigenrange___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_Module_End_genEigenrange___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Module_End_genEigenrange___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Module_End_genEigenrange___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_comp___at_Module_End_genEigenrange___spec__4___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Module_End_genEigenrange___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_9, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_land(x_14, x_9);
x_16 = lean_nat_dec_eq(x_15, x_12);
lean_dec(x_15);
x_17 = lean_nat_shiftr(x_9, x_14);
lean_dec(x_9);
if (x_16 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_inc_n(x_11, 2);
x_18 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_18, 0, x_11);
lean_closure_set(x_18, 1, x_11);
x_19 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_19, 0, x_10);
lean_closure_set(x_19, 1, x_11);
x_9 = x_17;
x_10 = x_19;
x_11 = x_18;
goto _start;
}
else
{
lean_object* x_21; 
lean_inc(x_11);
x_21 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_21, 0, x_11);
lean_closure_set(x_21, 1, x_11);
x_9 = x_17;
x_11 = x_21;
goto _start;
}
}
else
{
lean_object* x_23; 
lean_dec(x_9);
x_23 = lean_apply_2(x_8, x_10, x_11);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Module_End_genEigenrange___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_Module_End_genEigenrange___spec__7___rarg___boxed), 11, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenrange___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___closed__1;
x_12 = l_Nat_binaryRec___at_Module_End_genEigenrange___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenrange___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Module_End_genEigenrange___spec__6___rarg___boxed), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Module_End_genEigenrange___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___lambda__1___boxed), 2, 0);
x_11 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_12 = l_Nat_binaryRec___at_Module_End_genEigenrange___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_8, x_11, x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Module_End_genEigenrange___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec___at_Module_End_genEigenrange___spec__5___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Module_End_genEigenrange___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Module_End_genEigenrange___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_Module_End_genEigenrange___spec__9___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_Module_End_genEigenrange___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_Module_End_genEigenrange___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_copy___at_Module_End_genEigenrange___spec__10___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_Module_End_genEigenrange___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
x_9 = l_Submodule_map___at_Module_End_genEigenrange___spec__9___rarg(x_2, x_3, x_4, lean_box(0), x_4, lean_box(0), x_7, x_8);
lean_dec(x_8);
x_10 = l_Submodule_copy___at_Module_End_genEigenrange___spec__10___rarg(x_2, x_3, x_9, lean_box(0), lean_box(0));
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_Module_End_genEigenrange___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_range___at_Module_End_genEigenrange___spec__8___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_iInf___at_Module_End_genEigenrange___spec__11___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_iInf___at_Module_End_genEigenrange___spec__12___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = l_Semiring_toNonAssocSemiring___rarg(x_1);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = lean_alloc_closure((void*)(l_Module_End_genEigenrange___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_3);
lean_closure_set(x_11, 2, x_4);
lean_closure_set(x_11, 3, x_5);
lean_inc(x_3);
x_12 = lean_alloc_closure((void*)(l_Module_End_genEigenspace___elambda__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_12, 0, x_3);
x_13 = lean_alloc_closure((void*)(l_Pi_instSub___elambda__1___rarg), 4, 3);
lean_closure_set(x_13, 0, x_12);
lean_closure_set(x_13, 1, x_6);
lean_closure_set(x_13, 2, x_11);
x_14 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_15 = l_npowBinRec___at_Module_End_genEigenrange___spec__5___rarg(x_2, x_3, x_4, x_1, x_7, x_10, x_14, x_8, x_13);
lean_dec(x_10);
x_16 = l_LinearMap_range___at_Module_End_genEigenrange___spec__8___rarg(x_2, x_3, x_4, x_14, lean_box(0), lean_box(0), x_15);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_4);
lean_inc(x_3);
x_10 = lean_alloc_closure((void*)(l_Module_End_genEigenrange___rarg___lambda__2___boxed), 9, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
lean_closure_set(x_10, 6, x_7);
lean_closure_set(x_10, 7, x_9);
x_11 = l_iInf___at_Module_End_genEigenrange___spec__11___rarg(x_3, x_4, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_inc(x_3);
lean_inc(x_2);
x_9 = lean_alloc_closure((void*)(l_Module_End_genEigenrange___rarg___lambda__3___boxed), 9, 8);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_1);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_3);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, x_4);
lean_closure_set(x_9, 6, x_8);
lean_closure_set(x_9, 7, x_6);
x_10 = l_iInf___at_Module_End_genEigenrange___spec__12___rarg(x_2, x_3, x_9);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenrange(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Module_End_genEigenrange___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_End_genEigenrange___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Module_End_genEigenrange___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_End_genEigenrange___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Module_End_genEigenrange___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_Module_End_genEigenrange___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_id___at_Module_End_genEigenrange___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_Module_End_genEigenrange___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_comp___at_Module_End_genEigenrange___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Module_End_genEigenrange___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Nat_binaryRec___at_Module_End_genEigenrange___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Module_End_genEigenrange___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_npowBinRec_go___at_Module_End_genEigenrange___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Module_End_genEigenrange___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_npowBinRec___at_Module_End_genEigenrange___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Module_End_genEigenrange___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Submodule_map___at_Module_End_genEigenrange___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_Module_End_genEigenrange___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_Module_End_genEigenrange___spec__9(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_Module_End_genEigenrange___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submodule_copy___at_Module_End_genEigenrange___spec__10___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_Module_End_genEigenrange___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_copy___at_Module_End_genEigenrange___spec__10(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_Module_End_genEigenrange___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LinearMap_range___at_Module_End_genEigenrange___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_iInf___at_Module_End_genEigenrange___spec__11___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iInf___at_Module_End_genEigenrange___spec__11(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iInf___at_Module_End_genEigenrange___spec__12___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Module_End_genEigenrange___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iInf___at_Module_End_genEigenrange___spec__12(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Module_End_genEigenrange___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Module_End_genEigenrange___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Module_End_genEigenrange___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Module_End_genEigenrange___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
static lean_object* _init_l_Module_End_eigenspace___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Module_End_eigenspace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Module_End_eigenspace___rarg___closed__1;
x_7 = l_Module_End_genEigenspace___rarg(x_1, x_2, x_3, x_4, x_5);
x_8 = lean_apply_1(x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Module_End_eigenspace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Module_End_eigenspace___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Module_End_Eigenvalues_val___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Module_End_Eigenvalues_val(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Module_End_Eigenvalues_val___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Module_End_Eigenvalues_val___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Module_End_Eigenvalues_val___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Module_End_Eigenvalues_val___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Module_End_Eigenvalues_val(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Module_End_maxGenEigenspace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_box(0);
x_7 = l_Module_End_genEigenspace___rarg(x_1, x_2, x_3, x_4, x_5);
x_8 = lean_apply_1(x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Module_End_maxGenEigenspace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Module_End_maxGenEigenspace___rarg), 5, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Spectrum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_LinearMap_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_GeneralLinearGroup(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FiniteDimensional(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Nilpotent_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Nilpotent_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Nilpotent_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Peel(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Eigenspace_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Spectrum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_LinearMap_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_GeneralLinearGroup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FiniteDimensional(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Nilpotent_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Nilpotent_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Nilpotent_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Peel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1___closed__1 = _init_l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Module_End_genEigenspace___elambda__1___spec__1___closed__1);
l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___closed__1 = _init_l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___closed__1();
lean_mark_persistent(l_npowBinRec_go___at_Module_End_genEigenspace___elambda__1___spec__3___rarg___closed__1);
l_Module_End_UnifEigenvalues_instCoeOut___closed__1 = _init_l_Module_End_UnifEigenvalues_instCoeOut___closed__1();
lean_mark_persistent(l_Module_End_UnifEigenvalues_instCoeOut___closed__1);
l_Module_End_eigenspace___rarg___closed__1 = _init_l_Module_End_eigenspace___rarg___closed__1();
lean_mark_persistent(l_Module_End_eigenspace___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
