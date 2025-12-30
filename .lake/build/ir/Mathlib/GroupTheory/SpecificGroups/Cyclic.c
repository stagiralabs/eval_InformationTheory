// Lean compiler output
// Module: Mathlib.GroupTheory.SpecificGroups.Cyclic
// Imports: Init Mathlib.Data.Nat.Totient Mathlib.Data.ZMod.Aut Mathlib.Data.ZMod.QuotientGroup Mathlib.GroupTheory.Exponent Mathlib.GroupTheory.Subgroup.Simple Mathlib.Tactic.Group
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
LEAN_EXPORT lean_object* l_addCommGroupOfAddCyclicCenterQuotient___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addCommGroupOfAddCyclicCenterQuotient___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addCommGroupOfAddCyclicCenterQuotient(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsAddCyclic_addCommGroup___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsCyclic_commGroup___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsAddCyclic_addCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_IsCyclic_commGroup(lean_object*);
LEAN_EXPORT lean_object* l_IsCyclic_commGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_commGroupOfCyclicCenterQuotient___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_commGroupOfCyclicCenterQuotient(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_commGroupOfCyclicCenterQuotient___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsAddCyclic_addCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsCyclic_commGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IsCyclic_commGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsCyclic_commGroup___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsCyclic_commGroup___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsCyclic_commGroup___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsAddCyclic_addCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IsAddCyclic_addCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsAddCyclic_addCommGroup___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsAddCyclic_addCommGroup___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsAddCyclic_addCommGroup___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_commGroupOfCyclicCenterQuotient___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_commGroupOfCyclicCenterQuotient(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_commGroupOfCyclicCenterQuotient___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_commGroupOfCyclicCenterQuotient___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_commGroupOfCyclicCenterQuotient___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_addCommGroupOfAddCyclicCenterQuotient___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_addCommGroupOfAddCyclicCenterQuotient(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_addCommGroupOfAddCyclicCenterQuotient___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addCommGroupOfAddCyclicCenterQuotient___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_addCommGroupOfAddCyclicCenterQuotient___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Totient(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_Aut(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_QuotientGroup(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Exponent(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Subgroup_Simple(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Group(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_SpecificGroups_Cyclic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Totient(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_Aut(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_QuotientGroup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Exponent(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Subgroup_Simple(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Group(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
