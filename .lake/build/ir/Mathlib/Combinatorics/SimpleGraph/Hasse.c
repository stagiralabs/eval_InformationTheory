// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Hasse
// Imports: Init Mathlib.Combinatorics.SimpleGraph.Prod Mathlib.Data.Fin.SuccPred Mathlib.Data.Nat.SuccPred Mathlib.Order.SuccPred.Relation Mathlib.Tactic.FinCases
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
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_hasse___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_hasse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_hasseDualIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_hasseDualIso___boxed(lean_object*, lean_object*);
static lean_object* l_SimpleGraph_hasseDualIso___closed__1;
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_hasse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_hasse___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_hasse(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_SimpleGraph_hasseDualIso___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_hasseDualIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_hasseDualIso___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_hasseDualIso___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_hasseDualIso(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SimpleGraph_pathGraph(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_SuccPred(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_SuccPred(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SuccPred_Relation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FinCases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Hasse(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_SuccPred(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_SuccPred(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SuccPred_Relation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FinCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_SimpleGraph_hasseDualIso___closed__1 = _init_l_SimpleGraph_hasseDualIso___closed__1();
lean_mark_persistent(l_SimpleGraph_hasseDualIso___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
