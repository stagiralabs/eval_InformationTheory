// Lean compiler output
// Module: Mathlib.GroupTheory.GroupAction.FixingSubgroup
// Imports: Init Mathlib.Algebra.Group.Subgroup.Lattice Mathlib.GroupTheory.GroupAction.FixedPoints
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
LEAN_EXPORT lean_object* l_fixingAddSubgroup___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixingAddSubmonoid___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixingSubgroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixingAddSubmonoid___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixingSubmonoid___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixingSubmonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixingAddSubgroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixingAddSubmonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixingSubgroup___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixingAddSubgroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixingSubgroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixingSubmonoid___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixingSubmonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_fixingSubmonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_fixingSubmonoid___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_fixingSubmonoid___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_fixingSubmonoid___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_fixingAddSubmonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_fixingAddSubmonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_fixingAddSubmonoid___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_fixingAddSubmonoid___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_fixingAddSubmonoid___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_fixingSubgroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_fixingSubmonoid___rarg(x_4, x_2, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_fixingSubgroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_fixingSubgroup___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_fixingSubgroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_fixingSubgroup___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_fixingAddSubgroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_fixingAddSubmonoid___rarg(x_4, x_2, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_fixingAddSubgroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_fixingAddSubgroup___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_fixingAddSubgroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_fixingAddSubgroup___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subgroup_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_FixedPoints(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_GroupAction_FixingSubgroup(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subgroup_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_FixedPoints(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
