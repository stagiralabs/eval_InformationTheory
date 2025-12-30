// Lean compiler output
// Module: Mathlib.CategoryTheory.Galois.IsFundamentalgroup
// Imports: Init Mathlib.CategoryTheory.Galois.Basic Mathlib.CategoryTheory.Galois.Topology Mathlib.CategoryTheory.Galois.Prorepresentability Mathlib.Topology.Algebra.OpenSubgroup
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
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_PreGaloisCategory_toAut___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1(lean_object*);
lean_object* l_FintypeCat_equivEquivIso___elambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_PreGaloisCategory_toAut(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_PreGaloisCategory_toAut___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_DivInvOneMonoid_toInvOneClass___rarg(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_7, x_2);
x_9 = lean_apply_3(x_3, x_4, x_8, x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
lean_inc(x_6);
x_8 = lean_apply_1(x_7, x_6);
lean_inc(x_4);
lean_inc(x_5);
lean_inc(x_6);
x_9 = lean_apply_2(x_4, x_6, x_5);
x_10 = lean_alloc_closure((void*)(l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_10, 0, x_3);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_4);
lean_closure_set(x_10, 3, x_6);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_FintypeCat_equivEquivIso___elambda__2(x_8, x_8, x_11);
lean_dec(x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_apply_1(x_1, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_apply_1(x_1, x_2);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_4);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1___rarg___lambda__1), 3, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1___rarg___lambda__2), 3, 1);
lean_closure_set(x_7, 0, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_PreGaloisCategory_toAut___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l___private_Mathlib_CategoryTheory_Galois_IsFundamentalgroup_0__CategoryTheory_PreGaloisCategory_isoOnObj___rarg), 6, 5);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, x_4);
lean_closure_set(x_8, 3, x_5);
lean_closure_set(x_8, 4, x_7);
x_9 = l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1___rarg(x_1, x_2, x_2, x_8, lean_box(0));
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_PreGaloisCategory_toAut(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_PreGaloisCategory_toAut___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_NatIso_ofComponents___at_CategoryTheory_PreGaloisCategory_toAut___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_PreGaloisCategory_toAut___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_CategoryTheory_PreGaloisCategory_toAut___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Galois_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Galois_Topology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Galois_Prorepresentability(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_OpenSubgroup(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Galois_IsFundamentalgroup(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Galois_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Galois_Topology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Galois_Prorepresentability(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_OpenSubgroup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
