// Lean compiler output
// Module: Mathlib.NumberTheory.Padics.PadicNorm
// Imports: Init Mathlib.NumberTheory.Padics.PadicVal.Basic
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
lean_object* l_Nat_cast___at_Rat_instOfNat___spec__1(lean_object*);
lean_object* l_DivisionRing_toDivInvMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Rat_instDivisionRing;
lean_object* l_padicValRat(lean_object*, lean_object*);
uint8_t l___private_Batteries_Data_Rat_Basic_0__decEqRat____x40_Batteries_Data_Rat_Basic___hyg_41_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_padicNorm(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
static lean_object* l_padicNorm___closed__1;
static lean_object* _init_l_padicNorm___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_padicNorm(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_padicNorm___closed__1;
x_4 = l___private_Batteries_Data_Rat_Basic_0__decEqRat____x40_Batteries_Data_Rat_Basic___hyg_41_(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_5 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
x_6 = l_padicValRat(x_1, x_2);
lean_dec(x_1);
x_7 = lean_int_neg(x_6);
lean_dec(x_6);
x_8 = l_Rat_instDivisionRing;
x_9 = l_DivisionRing_toDivInvMonoid___elambda__1___rarg(x_8, x_7, x_5);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = l_padicNorm___closed__1;
return x_10;
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_Padics_PadicVal_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_Padics_PadicNorm(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_Padics_PadicVal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_padicNorm___closed__1 = _init_l_padicNorm___closed__1();
lean_mark_persistent(l_padicNorm___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
