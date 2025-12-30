// Lean compiler output
// Module: Mathlib.Analysis.Convex.SimplicialComplex.Basic
// Imports: Init Mathlib.Analysis.Convex.Hull Mathlib.LinearAlgebra.AffineSpace.Independent
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
static lean_object* l_Geometry_SimplicialComplex_instSemilatticeInf___rarg___closed__1;
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instSemilatticeInf___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instMin___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_ofErase___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instOrderBot___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instMin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instInhabited___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instInhabited___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_hasBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instMembershipFinset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instSemilatticeInf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_ofErase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instSemilatticeInf___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_hasBot___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_ofErase___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_hasBot___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instSemilatticeInf___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instOrderBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_ofSubcomplex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_ofSubcomplex___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instOrderBot___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_ofSubcomplex___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instMembershipFinset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instMin(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instMembershipFinset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instMembershipFinset___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Geometry_SimplicialComplex_instMembershipFinset(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_ofErase___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_ofErase(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Geometry_SimplicialComplex_ofErase___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_ofErase___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Geometry_SimplicialComplex_ofErase___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_ofSubcomplex___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_ofSubcomplex(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Geometry_SimplicialComplex_ofSubcomplex___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_ofSubcomplex___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Geometry_SimplicialComplex_ofSubcomplex___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instMin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instMin(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Geometry_SimplicialComplex_instMin___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instMin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Geometry_SimplicialComplex_instMin___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instSemilatticeInf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
static lean_object* _init_l_Geometry_SimplicialComplex_instSemilatticeInf___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instSemilatticeInf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Geometry_SimplicialComplex_instSemilatticeInf___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_Geometry_SimplicialComplex_instSemilatticeInf___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instSemilatticeInf(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Geometry_SimplicialComplex_instSemilatticeInf___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instSemilatticeInf___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Geometry_SimplicialComplex_instSemilatticeInf___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_hasBot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_hasBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Geometry_SimplicialComplex_hasBot___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_hasBot___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Geometry_SimplicialComplex_hasBot___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instOrderBot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instOrderBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Geometry_SimplicialComplex_instOrderBot___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instOrderBot___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Geometry_SimplicialComplex_instOrderBot___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instInhabited___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Geometry_SimplicialComplex_instInhabited___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Geometry_SimplicialComplex_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Geometry_SimplicialComplex_instInhabited___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Convex_Hull(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_AffineSpace_Independent(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Convex_SimplicialComplex_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Convex_Hull(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_AffineSpace_Independent(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Geometry_SimplicialComplex_instSemilatticeInf___rarg___closed__1 = _init_l_Geometry_SimplicialComplex_instSemilatticeInf___rarg___closed__1();
lean_mark_persistent(l_Geometry_SimplicialComplex_instSemilatticeInf___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
