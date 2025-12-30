// Lean compiler output
// Module: Mathlib.Tactic.FunProp
// Imports: Init Mathlib.Tactic.FunProp.Attr Mathlib.Tactic.FunProp.Core Mathlib.Tactic.FunProp.Decl Mathlib.Tactic.FunProp.Elab Mathlib.Tactic.FunProp.FunctionData Mathlib.Tactic.FunProp.Mor Mathlib.Lean.Meta.RefinedDiscrTree Mathlib.Tactic.FunProp.StateList Mathlib.Tactic.FunProp.Theorems Mathlib.Tactic.FunProp.ToBatteries Mathlib.Tactic.FunProp.Types
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
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FunProp_Attr(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FunProp_Core(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FunProp_Decl(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FunProp_Elab(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FunProp_FunctionData(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FunProp_Mor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Lean_Meta_RefinedDiscrTree(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FunProp_StateList(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FunProp_Theorems(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FunProp_ToBatteries(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FunProp_Types(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_FunProp(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FunProp_Attr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FunProp_Core(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FunProp_Decl(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FunProp_Elab(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FunProp_FunctionData(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FunProp_Mor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Lean_Meta_RefinedDiscrTree(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FunProp_StateList(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FunProp_Theorems(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FunProp_ToBatteries(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FunProp_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
