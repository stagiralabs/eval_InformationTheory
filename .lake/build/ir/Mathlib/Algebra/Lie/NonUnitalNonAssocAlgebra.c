// Lean compiler output
// Module: Mathlib.Algebra.Lie.NonUnitalNonAssocAlgebra
// Imports: Init Mathlib.Algebra.Algebra.NonUnitalHom Mathlib.Algebra.Lie.Basic
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
LEAN_EXPORT lean_object* l_LieAlgebra_instLieRingCommutatorRing(lean_object*);
LEAN_EXPORT lean_object* l_LieHom_toNonUnitalAlgHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_instInhabitedCommutatorRing___rarg(lean_object*);
lean_object* l_lieRingSelfModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_LieHom_toNonUnitalAlgHom___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_instLieRingCommutatorRing___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_instCommutatorRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_instInhabitedCommutatorRing___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_instCommutatorRing(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_toNonUnitalAlgHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_instLieRingCommutatorRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_instCommutatorRing___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_toNonUnitalAlgHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_LieHom_toNonUnitalAlgHom___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_LieHom_toNonUnitalAlgHom___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_instCommutatorRing___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalNonAssocRingCommutatorRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_LieHom_toNonUnitalAlgHom___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_instInhabitedCommutatorRing(lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalNonAssocRingCommutatorRing(lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalNonAssocRingCommutatorRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_lieRingSelfModule___rarg(x_1);
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_3);
return x_1;
}
else
{
lean_object* x_7; 
lean_dec(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_instNonUnitalNonAssocRingCommutatorRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instNonUnitalNonAssocRingCommutatorRing___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_instInhabitedCommutatorRing___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_instInhabitedCommutatorRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieAlgebra_instInhabitedCommutatorRing___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_instInhabitedCommutatorRing___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LieAlgebra_instInhabitedCommutatorRing___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_instLieRingCommutatorRing___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_instLieRingCommutatorRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieAlgebra_instLieRingCommutatorRing___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_instLieRingCommutatorRing___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LieAlgebra_instLieRingCommutatorRing___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_instCommutatorRing___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_instCommutatorRing(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LieAlgebra_instCommutatorRing___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_instCommutatorRing___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LieAlgebra_instCommutatorRing___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_instCommutatorRing___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LieAlgebra_instCommutatorRing(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_LieHom_toNonUnitalAlgHom___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_LieHom_toNonUnitalAlgHom___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_LieHom_toNonUnitalAlgHom___spec__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieHom_toNonUnitalAlgHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieHom_toNonUnitalAlgHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LieHom_toNonUnitalAlgHom___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_LieHom_toNonUnitalAlgHom___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_LieHom_toNonUnitalAlgHom___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_LieHom_toNonUnitalAlgHom___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_LieHom_toNonUnitalAlgHom___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieHom_toNonUnitalAlgHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieHom_toNonUnitalAlgHom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_NonUnitalHom(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Lie_NonUnitalNonAssocAlgebra(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_NonUnitalHom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
