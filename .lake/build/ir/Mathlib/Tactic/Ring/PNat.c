// Lean compiler output
// Module: Mathlib.Tactic.Ring.PNat
// Imports: Init Mathlib.Tactic.Ring.Basic Mathlib.Data.PNat.Basic
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
lean_object* l_PNat_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_Ring_instCSLiftPNatNat;
static lean_object* l_Mathlib_Tactic_Ring_instCSLiftPNatNat___closed__1;
static lean_object* _init_l_Mathlib_Tactic_Ring_instCSLiftPNatNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PNat_val___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_Ring_instCSLiftPNatNat() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Tactic_Ring_instCSLiftPNatNat___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Ring_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PNat_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_Ring_PNat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Ring_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PNat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Mathlib_Tactic_Ring_instCSLiftPNatNat___closed__1 = _init_l_Mathlib_Tactic_Ring_instCSLiftPNatNat___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_Ring_instCSLiftPNatNat___closed__1);
l_Mathlib_Tactic_Ring_instCSLiftPNatNat = _init_l_Mathlib_Tactic_Ring_instCSLiftPNatNat();
lean_mark_persistent(l_Mathlib_Tactic_Ring_instCSLiftPNatNat);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
