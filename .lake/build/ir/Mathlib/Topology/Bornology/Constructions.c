// Lean compiler output
// Module: Mathlib.Topology.Bornology.Constructions
// Imports: Init Mathlib.Algebra.Group.TypeTags.Basic Mathlib.Topology.Bornology.Basic
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
LEAN_EXPORT lean_object* l_Bornology_induced___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBornologyOrderDual___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instBornologySubtype___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBornologyAdditive___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_instBornology(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_instBornology___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instBornology___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBornologyMultiplicative(lean_object*);
LEAN_EXPORT lean_object* l_instBornologyOrderDual___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Prod_instBornology(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBornologySubtype(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBornologyMultiplicative___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instBornologyAdditive___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instBornologyMultiplicative___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instBornologyOrderDual(lean_object*);
LEAN_EXPORT lean_object* l_instBornologyAdditive(lean_object*);
LEAN_EXPORT lean_object* l_Bornology_induced(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instBornology(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Prod_instBornology___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Prod_instBornology(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_instBornology(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_instBornology___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_instBornology(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Bornology_induced(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Bornology_induced___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Bornology_induced(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instBornologySubtype(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_instBornologySubtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instBornologySubtype(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instBornologyAdditive___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instBornologyAdditive(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instBornologyAdditive___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instBornologyAdditive___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instBornologyAdditive___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instBornologyMultiplicative___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instBornologyMultiplicative(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instBornologyMultiplicative___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instBornologyMultiplicative___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instBornologyMultiplicative___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instBornologyOrderDual___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instBornologyOrderDual(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instBornologyOrderDual___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instBornologyOrderDual___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instBornologyOrderDual___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_TypeTags_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Bornology_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Bornology_Constructions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_TypeTags_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Bornology_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
