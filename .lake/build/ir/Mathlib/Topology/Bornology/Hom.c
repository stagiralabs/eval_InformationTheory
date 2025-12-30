// Lean compiler output
// Module: Mathlib.Topology.Bornology.Hom
// Imports: Init Mathlib.Topology.Bornology.Basic
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
LEAN_EXPORT lean_object* l_LocallyBoundedMap_id___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_ofMapBounded___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_instFunLike(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_instFunLike___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_copy___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_comp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_comp___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMapClass_toLocallyBoundedMap___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LocallyBoundedMap_instInhabited___closed__1;
LEAN_EXPORT lean_object* l_LocallyBoundedMapClass_toLocallyBoundedMap___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeTCLocallyBoundedMapOfLocallyBoundedMapClass___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_id___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMapClass_toLocallyBoundedMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_comp___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_ofMapBounded___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_id___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_ofMapBounded(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeTCLocallyBoundedMapOfLocallyBoundedMapClass___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_id___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_instInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_instFunLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMapClass_toLocallyBoundedMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_copy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_ofMapBounded___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeTCLocallyBoundedMapOfLocallyBoundedMapClass(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_id(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMapClass_toLocallyBoundedMap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_copy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMap_copy___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LocallyBoundedMapClass_toLocallyBoundedMap___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_2, x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMapClass_toLocallyBoundedMap___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LocallyBoundedMapClass_toLocallyBoundedMap___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMapClass_toLocallyBoundedMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_LocallyBoundedMapClass_toLocallyBoundedMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMapClass_toLocallyBoundedMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LocallyBoundedMapClass_toLocallyBoundedMap___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMapClass_toLocallyBoundedMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LocallyBoundedMapClass_toLocallyBoundedMap___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instCoeTCLocallyBoundedMapOfLocallyBoundedMapClass___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_1(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instCoeTCLocallyBoundedMapOfLocallyBoundedMapClass(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instCoeTCLocallyBoundedMapOfLocallyBoundedMapClass___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instCoeTCLocallyBoundedMapOfLocallyBoundedMapClass___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_instCoeTCLocallyBoundedMapOfLocallyBoundedMapClass___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_instFunLike___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_instFunLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LocallyBoundedMap_instFunLike___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_instFunLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LocallyBoundedMap_instFunLike(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_copy___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_copy(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_LocallyBoundedMap_copy___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_copy___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LocallyBoundedMap_copy___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_copy___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LocallyBoundedMap_copy(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_ofMapBounded___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_ofMapBounded(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LocallyBoundedMap_ofMapBounded___rarg___boxed), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_ofMapBounded___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LocallyBoundedMap_ofMapBounded___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_ofMapBounded___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LocallyBoundedMap_ofMapBounded(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_id___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_id___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LocallyBoundedMap_id___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_id(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LocallyBoundedMap_id___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_id___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LocallyBoundedMap_id___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_id___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LocallyBoundedMap_id(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_LocallyBoundedMap_instInhabited___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_LocallyBoundedMap_id___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LocallyBoundedMap_instInhabited___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_instInhabited___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LocallyBoundedMap_instInhabited(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_comp___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_comp___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LocallyBoundedMap_comp___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_comp___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LocallyBoundedMap_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_comp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LocallyBoundedMap_comp___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LocallyBoundedMap_comp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LocallyBoundedMap_comp(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Bornology_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Bornology_Hom(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Bornology_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LocallyBoundedMap_instInhabited___closed__1 = _init_l_LocallyBoundedMap_instInhabited___closed__1();
lean_mark_persistent(l_LocallyBoundedMap_instInhabited___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
