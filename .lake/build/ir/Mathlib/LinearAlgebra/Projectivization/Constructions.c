// Lean compiler output
// Module: Mathlib.LinearAlgebra.Projectivization.Constructions
// Imports: Init Mathlib.LinearAlgebra.CrossProduct Mathlib.LinearAlgebra.Matrix.DotProduct Mathlib.LinearAlgebra.Projectivization.Basic
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
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_projectivizationSetoid___at_Projectivization_cross___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Projectivization_cross___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Projectivization_cross___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__3___boxed(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Projectivization_cross___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Projectivization_cross___rarg___lambda__4___closed__2;
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Projectivization_cross(lean_object*);
LEAN_EXPORT lean_object* l_projectivizationSetoid___at_Projectivization_cross___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__3(lean_object*, lean_object*);
uint8_t l_Fintype_decidablePiFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
lean_object* l_List_ofFn___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Projectivization_cross___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Projectivization_cross___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_finRange___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Projectivization_cross___spec__2(lean_object*, lean_object*);
lean_object* l_crossProduct___rarg(lean_object*);
static lean_object* l_Projectivization_cross___rarg___lambda__4___closed__1;
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_projectivizationSetoid___at_Projectivization_cross___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
static lean_object* _init_l_RingHom_id___at_Projectivization_cross___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Projectivization_cross___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Projectivization_cross___spec__2___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Projectivization_cross___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Projectivization_cross___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Quotient_map_u2082___at_Projectivization_cross___spec__3___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Ring_toAddCommGroup___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_Projectivization_cross___rarg___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_finRange___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Projectivization_cross___rarg___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l_Projectivization_cross___rarg___lambda__4___closed__1;
x_3 = l_List_ofFn___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = lean_alloc_closure((void*)(l_Projectivization_cross___rarg___lambda__2___boxed), 4, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_6);
x_7 = l_CommRing_toNonUnitalCommRing___rarg(x_6);
x_8 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_7);
x_9 = l_crossProduct___rarg(x_6);
lean_inc(x_3);
x_10 = lean_apply_2(x_9, x_3, x_4);
x_11 = lean_alloc_closure((void*)(l_Projectivization_cross___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_11, 0, x_8);
x_12 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = l_Projectivization_cross___rarg___lambda__4___closed__2;
lean_inc(x_10);
x_14 = l_Fintype_decidablePiFintype___rarg(x_5, x_13, x_10, x_12);
if (x_14 == 0)
{
lean_dec(x_3);
return x_10;
}
else
{
lean_dec(x_10);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Projectivization_cross___rarg___lambda__4(x_2, x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Projectivization_cross(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Projectivization_cross___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_projectivizationSetoid___at_Projectivization_cross___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_projectivizationSetoid___at_Projectivization_cross___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Projectivization_cross___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Projectivization_cross___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Projectivization_cross___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Quotient_map_u2082___at_Projectivization_cross___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Projectivization_cross___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Projectivization_cross___rarg___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Projectivization_cross___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Projectivization_cross___rarg___lambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_CrossProduct(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_DotProduct(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Projectivization_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Projectivization_Constructions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_CrossProduct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_DotProduct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Projectivization_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Projectivization_cross___spec__2___closed__1 = _init_l_RingHom_id___at_Projectivization_cross___spec__2___closed__1();
lean_mark_persistent(l_RingHom_id___at_Projectivization_cross___spec__2___closed__1);
l_Projectivization_cross___rarg___lambda__4___closed__1 = _init_l_Projectivization_cross___rarg___lambda__4___closed__1();
lean_mark_persistent(l_Projectivization_cross___rarg___lambda__4___closed__1);
l_Projectivization_cross___rarg___lambda__4___closed__2 = _init_l_Projectivization_cross___rarg___lambda__4___closed__2();
lean_mark_persistent(l_Projectivization_cross___rarg___lambda__4___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
