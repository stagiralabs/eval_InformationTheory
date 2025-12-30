// Lean compiler output
// Module: Mathlib.Data.Nat.Order.Lemmas
// Imports: Init Mathlib.Data.Nat.Find Mathlib.Data.Set.Basic
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
lean_object* l_Subtype_instLinearOrder___rarg(lean_object*, lean_object*);
static lean_object* l_Nat_Subtype_semilatticeSup___closed__2;
LEAN_EXPORT lean_object* l_Nat_Subtype_semilatticeSup___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Subtype_orderBot(lean_object*);
static lean_object* l_Nat_Subtype_semilatticeSup___closed__1;
LEAN_EXPORT lean_object* l_Nat_Subtype_orderBot___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Subtype_semilatticeSup(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Subtype_semilatticeSup___lambda__1(lean_object*, lean_object*);
static lean_object* l_Nat_Subtype_semilatticeSup___closed__3;
lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Nat_findX___spec__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Nat_instLinearOrder;
LEAN_EXPORT lean_object* l_Nat_Subtype_orderBot___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l___private_Batteries_WF_0__WellFounded_fixC___at_Nat_findX___spec__1___rarg(x_1, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_Subtype_orderBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_Subtype_orderBot___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_Subtype_semilatticeSup___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_le(x_1, x_2);
if (x_3 == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_inc(x_2);
return x_2;
}
}
}
static lean_object* _init_l_Nat_Subtype_semilatticeSup___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instLinearOrder;
x_2 = l_Subtype_instLinearOrder___rarg(x_1, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_Nat_Subtype_semilatticeSup___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_Subtype_semilatticeSup___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_Subtype_semilatticeSup___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Nat_Subtype_semilatticeSup___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Nat_Subtype_semilatticeSup___closed__2;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_Subtype_semilatticeSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_Subtype_semilatticeSup___closed__3;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_Subtype_semilatticeSup___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_Subtype_semilatticeSup___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Find(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Order_Lemmas(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Find(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_Subtype_semilatticeSup___closed__1 = _init_l_Nat_Subtype_semilatticeSup___closed__1();
lean_mark_persistent(l_Nat_Subtype_semilatticeSup___closed__1);
l_Nat_Subtype_semilatticeSup___closed__2 = _init_l_Nat_Subtype_semilatticeSup___closed__2();
lean_mark_persistent(l_Nat_Subtype_semilatticeSup___closed__2);
l_Nat_Subtype_semilatticeSup___closed__3 = _init_l_Nat_Subtype_semilatticeSup___closed__3();
lean_mark_persistent(l_Nat_Subtype_semilatticeSup___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
