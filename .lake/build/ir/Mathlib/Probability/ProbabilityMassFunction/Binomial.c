// Lean compiler output
// Module: Mathlib.Probability.ProbabilityMassFunction.Binomial
// Imports: Init Mathlib.Data.Nat.Choose.Sum Mathlib.Probability.ProbabilityMassFunction.Constructions Mathlib.Tactic.FinCases
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
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
LEAN_EXPORT lean_object* l_PMF_binomial(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_PMF_binomial___elambda__1___spec__1(lean_object*);
static lean_object* l_Nat_cast___at_PMF_binomial___elambda__1___spec__1___closed__1;
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_4896_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PMF_binomial___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
extern lean_object* l_Real_semiring;
static lean_object* l_PMF_binomial___elambda__1___closed__1;
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_one;
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_PMF_binomial___elambda__1___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PMF_binomial___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(lean_object*, lean_object*);
static lean_object* l_Nat_cast___at_PMF_binomial___elambda__1___spec__1___closed__2;
lean_object* l_npowRec___at_Real_commRing___spec__2(lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Nat_fast__choose(lean_object*, lean_object*);
lean_object* l_WithTop_recTopCoe___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_PMF_binomial___elambda__1___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_Nat_cast___at_PMF_binomial___elambda__1___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Real_semiring;
x_2 = l_Semiring_toNonAssocSemiring___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_cast___at_PMF_binomial___elambda__1___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_cast___at_PMF_binomial___elambda__1___spec__1___closed__1;
x_2 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_PMF_binomial___elambda__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_cast___at_PMF_binomial___elambda__1___spec__1___closed__2;
x_3 = l_Nat_cast___at_PMF_binomial___elambda__1___spec__2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_PMF_binomial___elambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PMF_binomial___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_4 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_5 = l_PMF_binomial___elambda__1___closed__1;
x_6 = l_WithTop_recTopCoe___rarg(x_4, x_5, x_1);
lean_inc(x_6);
x_7 = l_npowRec___at_Real_commRing___spec__2(x_3, x_6);
x_8 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_6);
x_9 = l___private_Mathlib_Data_Real_Basic_0__Real_one;
x_10 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_9, x_8);
x_11 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_4896_(x_10, x_4);
x_12 = lean_nat_sub(x_2, x_3);
x_13 = l_npowRec___at_Real_commRing___spec__2(x_12, x_11);
lean_dec(x_12);
x_14 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(x_7, x_13);
x_15 = l_Nat_fast__choose(x_2, x_3);
x_16 = l_Nat_cast___at_PMF_binomial___elambda__1___spec__1(x_15);
x_17 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(x_14, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_PMF_binomial(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_PMF_binomial___elambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PMF_binomial___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PMF_binomial___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Sum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Probability_ProbabilityMassFunction_Constructions(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FinCases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Probability_ProbabilityMassFunction_Binomial(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Sum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Probability_ProbabilityMassFunction_Constructions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FinCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_cast___at_PMF_binomial___elambda__1___spec__1___closed__1 = _init_l_Nat_cast___at_PMF_binomial___elambda__1___spec__1___closed__1();
lean_mark_persistent(l_Nat_cast___at_PMF_binomial___elambda__1___spec__1___closed__1);
l_Nat_cast___at_PMF_binomial___elambda__1___spec__1___closed__2 = _init_l_Nat_cast___at_PMF_binomial___elambda__1___spec__1___closed__2();
lean_mark_persistent(l_Nat_cast___at_PMF_binomial___elambda__1___spec__1___closed__2);
l_PMF_binomial___elambda__1___closed__1 = _init_l_PMF_binomial___elambda__1___closed__1();
lean_mark_persistent(l_PMF_binomial___elambda__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
