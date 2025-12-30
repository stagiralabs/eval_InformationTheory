// Lean compiler output
// Module: Mathlib.GroupTheory.Subsemigroup.Centralizer
// Imports: Init Mathlib.Algebra.Group.Center Mathlib.Algebra.Group.Subsemigroup.Basic Mathlib.GroupTheory.Subsemigroup.Center
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
LEAN_EXPORT lean_object* l_AddSubsemigroup_closureAddCommSemigroupOfComm___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_AddMemClass_add___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_decidableMemCentralizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_centralizer___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_decidableMemCentralizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_centralizer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_centralizer___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_decidableMemCentralizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Subsemigroup_decidableMemCentralizer___rarg(uint8_t);
LEAN_EXPORT lean_object* l_AddSubsemigroup_centralizer(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_AddSubsemigroup_decidableMemCentralizer___rarg(uint8_t);
LEAN_EXPORT lean_object* l_Subsemigroup_centralizer___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_closureAddCommSemigroupOfComm(lean_object*);
lean_object* l_MulMemClass_mul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_closureCommSemigroupOfComm(lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_decidableMemCentralizer___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_closureCommSemigroupOfComm___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubsemigroup_centralizer___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_decidableMemCentralizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_decidableMemCentralizer___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Subsemigroup_centralizer___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_centralizer(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subsemigroup_centralizer___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_centralizer___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subsemigroup_centralizer___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_centralizer___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_centralizer(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubsemigroup_centralizer___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_centralizer___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubsemigroup_centralizer___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Subsemigroup_decidableMemCentralizer___rarg(uint8_t x_1) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_decidableMemCentralizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Subsemigroup_decidableMemCentralizer___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_decidableMemCentralizer___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Subsemigroup_decidableMemCentralizer___rarg(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_decidableMemCentralizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subsemigroup_decidableMemCentralizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT uint8_t l_AddSubsemigroup_decidableMemCentralizer___rarg(uint8_t x_1) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_decidableMemCentralizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddSubsemigroup_decidableMemCentralizer___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_decidableMemCentralizer___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_AddSubsemigroup_decidableMemCentralizer___rarg(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_decidableMemCentralizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubsemigroup_decidableMemCentralizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_closureCommSemigroupOfComm___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
x_6 = lean_alloc_closure((void*)(l_MulMemClass_mul___rarg___boxed), 6, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, lean_box(0));
lean_closure_set(x_6, 3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subsemigroup_closureCommSemigroupOfComm(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemigroup_closureCommSemigroupOfComm___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_closureAddCommSemigroupOfComm___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
x_6 = lean_alloc_closure((void*)(l_AddMemClass_add___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubsemigroup_closureAddCommSemigroupOfComm(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubsemigroup_closureAddCommSemigroupOfComm___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Center(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subsemigroup_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Subsemigroup_Center(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Subsemigroup_Centralizer(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Center(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subsemigroup_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Subsemigroup_Center(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
