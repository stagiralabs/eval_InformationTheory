// Lean compiler output
// Module: Mathlib.Topology.Instances.RealVectorSpace
// Imports: Init Mathlib.Topology.Algebra.Module.Equiv Mathlib.Topology.Instances.Rat Mathlib.Algebra.Module.Rat
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
LEAN_EXPORT lean_object* l_AddEquiv_toRealLinearEquiv(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_AddMonoidHom_toRealLinearMap___spec__1;
LEAN_EXPORT lean_object* l_AddMonoidHom_toRealLinearMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toRealLinearEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoidHom_instFunLike___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_toRealLinearMap___rarg(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_toRealLinearEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_AddMonoidHom_toRealLinearMap___spec__1___closed__1;
LEAN_EXPORT lean_object* l_AddMonoidHom_toRealLinearMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_AddMonoidHom_toRealLinearMap___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_RingHom_id___at_AddMonoidHom_toRealLinearMap___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_RingHom_id___at_AddMonoidHom_toRealLinearMap___spec__1___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toRealLinearMap___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toRealLinearMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_AddMonoidHom_toRealLinearMap___rarg), 2, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_toRealLinearMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_AddMonoidHom_toRealLinearMap(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toRealLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toRealLinearEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddEquiv_toRealLinearEquiv___rarg___boxed), 13, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_toRealLinearEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_AddEquiv_toRealLinearEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Module_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Rat(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Instances_RealVectorSpace(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Module_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_AddMonoidHom_toRealLinearMap___spec__1___closed__1 = _init_l_RingHom_id___at_AddMonoidHom_toRealLinearMap___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_AddMonoidHom_toRealLinearMap___spec__1___closed__1);
l_RingHom_id___at_AddMonoidHom_toRealLinearMap___spec__1 = _init_l_RingHom_id___at_AddMonoidHom_toRealLinearMap___spec__1();
lean_mark_persistent(l_RingHom_id___at_AddMonoidHom_toRealLinearMap___spec__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
