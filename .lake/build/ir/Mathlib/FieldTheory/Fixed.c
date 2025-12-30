// Lean compiler output
// Module: Mathlib.FieldTheory.Fixed
// Imports: Init Mathlib.Algebra.Polynomial.GroupRingAction Mathlib.Algebra.Ring.Action.Field Mathlib.Algebra.Ring.Action.Invariant Mathlib.FieldTheory.Normal.Defs Mathlib.FieldTheory.Separable Mathlib.LinearAlgebra.Dual Mathlib.LinearAlgebra.FreeModule.Finite.Matrix
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
LEAN_EXPORT lean_object* l_IsInvariantSubfield_toMulSemiringAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FixedPoints_instAlgebraSubtypeMemSubfieldSubfield___rarg(lean_object*, lean_object*);
lean_object* l_Submonoid_copy___at_Subring_mk_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FixedPoints_instAlgebraSubtypeMemSubfieldSubfield___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__3___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FixedBy_subfield___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__5___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subfield_toAlgebra___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FixedBy_subfield___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FixedBy_subfield___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_copy___at_FixedPoints_subfield___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FixedPoints_subfield___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__3___rarg(lean_object*, lean_object*);
lean_object* l_AddSubgroup_instInfSet___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FixedPoints_instAlgebraSubtypeMemSubfieldSubfield(lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FixedBy_subfield(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FixedPoints_subfield___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FixedPoints_subfield(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsInvariantSubfield_toMulSemiringAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_copy___at_FixedPoints_subfield___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsInvariantSubfield_toMulSemiringAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subfield_copy___at_FixedPoints_subfield___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_IsInvariantSubfield_toMulSemiringAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FixedBy_subfield___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_FixedBy_subfield(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_FixedBy_subfield___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FixedBy_subfield___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_FixedBy_subfield___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FixedBy_subfield___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_FixedBy_subfield(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IsInvariantSubfield_toMulSemiringAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsInvariantSubfield_toMulSemiringAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_IsInvariantSubfield_toMulSemiringAction___rarg___boxed), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsInvariantSubfield_toMulSemiringAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IsInvariantSubfield_toMulSemiringAction___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsInvariantSubfield_toMulSemiringAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsInvariantSubfield_toMulSemiringAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_iInf___at_FixedPoints_subfield___spec__2___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_iInf___at_FixedPoints_subfield___spec__3___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Field_toDivisionRing___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Ring_toAddGroupWithOne___rarg(x_6);
x_8 = l_AddGroupWithOne_toAddGroup___rarg(x_7);
lean_dec(x_7);
x_9 = l_AddSubgroup_instInfSet___elambda__1___rarg(x_8, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_iInf___at_FixedPoints_subfield___spec__4___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Field_toDivisionRing___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Ring_toAddGroupWithOne___rarg(x_4);
x_6 = l_AddGroupWithOne_toAddGroup___rarg(x_5);
lean_dec(x_5);
x_7 = l_AddSubgroup_instInfSet___elambda__1___rarg(x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_iInf___at_FixedPoints_subfield___spec__5___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_iInf___at_FixedPoints_subfield___spec__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_iInf___at_FixedPoints_subfield___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_3 = l_Field_toDivisionRing___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_iInf___at_FixedPoints_subfield___spec__1___rarg___lambda__2___boxed), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = l_iInf___at_FixedPoints_subfield___spec__3___rarg(x_1, x_5);
lean_dec(x_5);
lean_dec(x_1);
x_7 = l_Submonoid_copy___at_Subring_mk_x27___spec__1___rarg(x_4, x_6, lean_box(0), lean_box(0));
lean_dec(x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_iInf___at_FixedPoints_subfield___spec__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subfield_copy___at_FixedPoints_subfield___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subfield_copy___at_FixedPoints_subfield___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subfield_copy___at_FixedPoints_subfield___spec__6___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FixedPoints_subfield___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_FixedBy_subfield___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
lean_inc(x_1);
x_4 = l_iInf___at_FixedPoints_subfield___spec__1___rarg(x_1, x_3);
x_5 = l_Subfield_copy___at_FixedPoints_subfield___spec__6___rarg(x_1, x_4, lean_box(0), lean_box(0));
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FixedPoints_subfield(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_FixedPoints_subfield___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_iInf___at_FixedPoints_subfield___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_iInf___at_FixedPoints_subfield___spec__3___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_iInf___at_FixedPoints_subfield___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_iInf___at_FixedPoints_subfield___spec__5___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_iInf___at_FixedPoints_subfield___spec__1___rarg___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_FixedPoints_subfield___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_iInf___at_FixedPoints_subfield___spec__1___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subfield_copy___at_FixedPoints_subfield___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subfield_copy___at_FixedPoints_subfield___spec__6___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FixedPoints_subfield___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_FixedPoints_subfield(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FixedPoints_instAlgebraSubtypeMemSubfieldSubfield___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_3 = l_FixedPoints_subfield___rarg(x_1, x_2);
x_4 = l_Subfield_toAlgebra___rarg(x_1, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FixedPoints_instAlgebraSubtypeMemSubfieldSubfield(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_FixedPoints_instAlgebraSubtypeMemSubfieldSubfield___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FixedPoints_instAlgebraSubtypeMemSubfieldSubfield___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_FixedPoints_instAlgebraSubtypeMemSubfieldSubfield(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_GroupRingAction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Action_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Action_Invariant(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Normal_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Separable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Dual(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FreeModule_Finite_Matrix(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_FieldTheory_Fixed(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_GroupRingAction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Action_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Action_Invariant(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Normal_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Separable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Dual(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FreeModule_Finite_Matrix(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
