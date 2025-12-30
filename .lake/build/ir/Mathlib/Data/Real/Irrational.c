// Lean compiler output
// Module: Mathlib.Data.Real.Irrational
// Imports: Init Mathlib.Algebra.Algebra.Rat Mathlib.Data.Nat.Prime.Int Mathlib.Data.Rat.Sqrt Mathlib.Data.Real.Sqrt Mathlib.RingTheory.Algebraic.Basic Mathlib.Tactic.IntervalCases
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
static lean_object* l_instDecidableIrrationalSqrtCastReal__2___closed__1;
LEAN_EXPORT lean_object* l_instDecidableIrrationalSqrtCastReal___boxed(lean_object*);
uint8_t l_Rat_instDecidableLe(lean_object*, lean_object*);
lean_object* l_Nat_cast___at_Rat_instOfNat___spec__1(lean_object*);
LEAN_EXPORT uint8_t l_instDecidableIrrationalSqrtCastReal(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableIrrationalSqrtCastReal__2(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
lean_object* lean_nat_to_int(lean_object*);
uint8_t l_Nat_instDecidablePredIsSquare(lean_object*);
uint8_t l_Int_instDecidablePredIsSquare(lean_object*);
static lean_object* l_instDecidableIrrationalSqrtCastReal__1___closed__1;
LEAN_EXPORT uint8_t l_instDecidableIrrationalSqrtOfNatReal(lean_object*, lean_object*);
uint8_t l_Rat_instDecidablePredIsSquare(lean_object*);
LEAN_EXPORT lean_object* l_instDecidableIrrationalSqrtOfNatReal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableIrrationalSqrtCastReal__2___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instDecidableIrrationalSqrtCastReal__1(lean_object*);
LEAN_EXPORT lean_object* l_instDecidableIrrationalSqrtCastReal__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instDecidableIrrationalSqrtOfNatReal(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = l_Nat_instDecidablePredIsSquare(x_1);
x_4 = l_instDecidableNot___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instDecidableIrrationalSqrtOfNatReal___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_instDecidableIrrationalSqrtOfNatReal(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_instDecidableIrrationalSqrtCastReal(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; 
x_2 = l_Nat_instDecidablePredIsSquare(x_1);
x_3 = l_instDecidableNot___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDecidableIrrationalSqrtCastReal___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_instDecidableIrrationalSqrtCastReal(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_instDecidableIrrationalSqrtCastReal__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_instDecidableIrrationalSqrtCastReal__1(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; 
x_2 = l_Int_instDecidablePredIsSquare(x_1);
x_3 = l_instDecidableNot___rarg(x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_instDecidableIrrationalSqrtCastReal__1___closed__1;
x_6 = lean_int_dec_le(x_5, x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_instDecidableIrrationalSqrtCastReal__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_instDecidableIrrationalSqrtCastReal__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_instDecidableIrrationalSqrtCastReal__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_instDecidableIrrationalSqrtCastReal__2(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; 
x_2 = l_Rat_instDecidablePredIsSquare(x_1);
x_3 = l_instDecidableNot___rarg(x_2);
if (x_3 == 0)
{
uint8_t x_4; 
lean_dec(x_1);
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_instDecidableIrrationalSqrtCastReal__2___closed__1;
x_6 = l_Rat_instDecidableLe(x_5, x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_instDecidableIrrationalSqrtCastReal__2___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_instDecidableIrrationalSqrtCastReal__2(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Prime_Int(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_Sqrt(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Real_Sqrt(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Algebraic_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_IntervalCases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Real_Irrational(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Prime_Int(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_Sqrt(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Real_Sqrt(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Algebraic_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_IntervalCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instDecidableIrrationalSqrtCastReal__1___closed__1 = _init_l_instDecidableIrrationalSqrtCastReal__1___closed__1();
lean_mark_persistent(l_instDecidableIrrationalSqrtCastReal__1___closed__1);
l_instDecidableIrrationalSqrtCastReal__2___closed__1 = _init_l_instDecidableIrrationalSqrtCastReal__2___closed__1();
lean_mark_persistent(l_instDecidableIrrationalSqrtCastReal__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
