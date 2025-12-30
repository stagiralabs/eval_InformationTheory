// Lean compiler output
// Module: Mathlib.FieldTheory.Galois.Infinite
// Imports: Init Mathlib.FieldTheory.KrullTopology Mathlib.FieldTheory.Galois.GaloisClosure Mathlib.Topology.Algebra.ClosedSubgroup
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
lean_object* l_IntermediateField_fixedField___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_toGaloisInsertion___at_InfiniteGalois_GaloisInsertionIntermediateFieldClosedSubgroup___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_OrderIso_toGaloisInsertion___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_toGaloisInsertion___at_InfiniteGalois_GaloisInsertionIntermediateFieldClosedSubgroup___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_IntermediateFieldEquivClosedSubgroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisInsertionIntermediateFieldClosedSubgroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisInsertionIntermediateFieldClosedSubgroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_IntermediateFieldEquivClosedSubgroup___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_IntermediateFieldEquivClosedSubgroup___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_toGaloisInsertion___at_InfiniteGalois_GaloisInsertionIntermediateFieldClosedSubgroup___spec__1___rarg(lean_object*);
lean_object* l_fixingSubmonoid___at_IntermediateField_fixingSubgroup___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_IntermediateFieldEquivClosedSubgroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IntermediateField_fixedField___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_InfiniteGalois_IntermediateFieldEquivClosedSubgroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_fixingSubmonoid___at_IntermediateField_fixingSubgroup___spec__2___rarg(x_1, lean_box(0), x_2, x_3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_IntermediateFieldEquivClosedSubgroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_InfiniteGalois_IntermediateFieldEquivClosedSubgroup___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_closure((void*)(l_IntermediateField_fixedField___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, x_2);
lean_closure_set(x_6, 3, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_IntermediateFieldEquivClosedSubgroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_InfiniteGalois_IntermediateFieldEquivClosedSubgroup___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_IntermediateFieldEquivClosedSubgroup___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_InfiniteGalois_IntermediateFieldEquivClosedSubgroup___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_toGaloisInsertion___at_InfiniteGalois_GaloisInsertionIntermediateFieldClosedSubgroup___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderIso_toGaloisInsertion___elambda__1___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_toGaloisInsertion___at_InfiniteGalois_GaloisInsertionIntermediateFieldClosedSubgroup___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OrderIso_toGaloisInsertion___at_InfiniteGalois_GaloisInsertionIntermediateFieldClosedSubgroup___spec__1___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisInsertionIntermediateFieldClosedSubgroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_InfiniteGalois_IntermediateFieldEquivClosedSubgroup___rarg(x_1, x_2, x_3, lean_box(0));
x_6 = lean_alloc_closure((void*)(l_OrderIso_toGaloisInsertion___elambda__1___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisInsertionIntermediateFieldClosedSubgroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_InfiniteGalois_GaloisInsertionIntermediateFieldClosedSubgroup___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderIso_toGaloisInsertion___at_InfiniteGalois_GaloisInsertionIntermediateFieldClosedSubgroup___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderIso_toGaloisInsertion___at_InfiniteGalois_GaloisInsertionIntermediateFieldClosedSubgroup___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IntermediateField_fixedField___rarg(x_1, lean_box(0), x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__2___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__3___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_InfiniteGalois_GaloisCoinsertionIntermediateFieldSubgroup___elambda__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_KrullTopology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Galois_GaloisClosure(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_ClosedSubgroup(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_FieldTheory_Galois_Infinite(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_KrullTopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Galois_GaloisClosure(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_ClosedSubgroup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
