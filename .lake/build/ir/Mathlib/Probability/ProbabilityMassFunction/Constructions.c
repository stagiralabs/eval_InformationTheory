// Lean compiler output
// Module: Mathlib.Probability.ProbabilityMassFunction.Constructions
// Imports: Init Mathlib.Probability.ProbabilityMassFunction.Monad Mathlib.Control.ULiftable
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
static lean_object* l_WithTop_sub___at_PMF_bernoulli___elambda__1___spec__1___closed__1;
static lean_object* l_PMF_bernoulli___elambda__1___closed__1;
LEAN_EXPORT lean_object* l_PMF_bernoulli___elambda__1(lean_object*, uint8_t);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_4896_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PMF_ofFintype___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PMF_ofFintype(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PMF_ofFinset(lean_object*);
LEAN_EXPORT lean_object* l_PMF_bernoulli___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PMF_ofFintype___rarg___boxed(lean_object*, lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_one;
LEAN_EXPORT lean_object* l_WithTop_sub___at_PMF_bernoulli___elambda__1___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PMF_bernoulli(lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PMF_ofFinset___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_toNonneg___at_PMF_bernoulli___elambda__1___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_PMF_ofFinset___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PMF_ofFintype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PMF_ofFinset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PMF_ofFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PMF_ofFinset___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PMF_ofFinset___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_PMF_ofFinset___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PMF_ofFintype___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PMF_ofFintype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PMF_ofFintype___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PMF_ofFintype___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PMF_ofFintype___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PMF_ofFintype___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PMF_ofFintype(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nonneg_toNonneg___at_PMF_bernoulli___elambda__1___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_3 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_4896_(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_WithTop_sub___at_PMF_bernoulli___elambda__1___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_sub___at_PMF_bernoulli___elambda__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = l_WithTop_sub___at_PMF_bernoulli___elambda__1___spec__1___closed__1;
return x_3;
}
else
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_box(0);
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = l_WithTop_sub___at_PMF_bernoulli___elambda__1___spec__1___closed__1;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_8);
x_10 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_6, x_9);
x_11 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_12 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_4896_(x_10, x_11);
lean_ctor_set(x_2, 0, x_12);
return x_2;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_13);
x_15 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_6, x_14);
x_16 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_17 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_4896_(x_15, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
}
static lean_object* _init_l_PMF_bernoulli___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Data_Real_Basic_0__Real_one;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PMF_bernoulli___elambda__1(lean_object* x_1, uint8_t x_2) {
_start:
{
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_PMF_bernoulli___elambda__1___closed__1;
x_4 = l_WithTop_sub___at_PMF_bernoulli___elambda__1___spec__1(x_3, x_1);
return x_4;
}
else
{
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_PMF_bernoulli(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PMF_bernoulli___elambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PMF_bernoulli___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_PMF_bernoulli___elambda__1(x_1, x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Probability_ProbabilityMassFunction_Monad(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_ULiftable(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Probability_ProbabilityMassFunction_Constructions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Probability_ProbabilityMassFunction_Monad(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_ULiftable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_WithTop_sub___at_PMF_bernoulli___elambda__1___spec__1___closed__1 = _init_l_WithTop_sub___at_PMF_bernoulli___elambda__1___spec__1___closed__1();
lean_mark_persistent(l_WithTop_sub___at_PMF_bernoulli___elambda__1___spec__1___closed__1);
l_PMF_bernoulli___elambda__1___closed__1 = _init_l_PMF_bernoulli___elambda__1___closed__1();
lean_mark_persistent(l_PMF_bernoulli___elambda__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
