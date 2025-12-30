// Lean compiler output
// Module: Mathlib.Data.Finset.Grade
// Imports: Init Mathlib.Data.Set.Finite.Basic Mathlib.Order.Atoms Mathlib.Order.Grade Mathlib.Order.Nat
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
static lean_object* l_Multiset_instGradeMinOrder___closed__1;
lean_object* l_Multiset_card___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instGradeMinOrder__multiset(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instGradeMinOrder__multiset___rarg(lean_object*);
static lean_object* l_Finset_instGradeMinOrder__nat___closed__1;
lean_object* l_Finset_card___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instGradeMinOrder(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instGradeMinOrder__multiset___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instGradeMinOrder__nat(lean_object*);
static lean_object* _init_l_Multiset_instGradeMinOrder___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_card___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_instGradeMinOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Multiset_instGradeMinOrder___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_instGradeMinOrder__multiset___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_instGradeMinOrder__multiset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_instGradeMinOrder__multiset___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_instGradeMinOrder__multiset___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_instGradeMinOrder__multiset___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Finset_instGradeMinOrder__nat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_card___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_instGradeMinOrder__nat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_instGradeMinOrder__nat___closed__1;
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Finite_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Atoms(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Grade(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Nat(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Grade(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Finite_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Atoms(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Grade(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_instGradeMinOrder___closed__1 = _init_l_Multiset_instGradeMinOrder___closed__1();
lean_mark_persistent(l_Multiset_instGradeMinOrder___closed__1);
l_Finset_instGradeMinOrder__nat___closed__1 = _init_l_Finset_instGradeMinOrder__nat___closed__1();
lean_mark_persistent(l_Finset_instGradeMinOrder__nat___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
