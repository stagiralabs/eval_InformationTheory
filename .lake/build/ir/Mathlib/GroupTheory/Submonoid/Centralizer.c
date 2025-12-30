// Lean compiler output
// Module: Mathlib.GroupTheory.Submonoid.Centralizer
// Imports: Init Mathlib.GroupTheory.Subsemigroup.Centralizer Mathlib.GroupTheory.Submonoid.Center
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
LEAN_EXPORT lean_object* l_AddSubmonoid_decidableMemCentralizer___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_centralizer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_closureAddCommMonoidOfComm___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_centralizer___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_closure___at_Submonoid_closureCommMonoidOfComm___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Submonoid_toMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_decidableMemCentralizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_decidableMemCentralizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_closure___at_Submonoid_closureCommMonoidOfComm___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_centralizer(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_AddSubmonoid_decidableMemCentralizer___rarg(uint8_t);
LEAN_EXPORT lean_object* l_AddSubmonoid_centralizer___rarg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Submonoid_decidableMemCentralizer___rarg(uint8_t);
LEAN_EXPORT lean_object* l_Submonoid_closureCommMonoidOfComm(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_closureAddCommMonoidOfComm(lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_closureCommMonoidOfComm___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_centralizer___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_decidableMemCentralizer___rarg___boxed(lean_object*);
lean_object* l_AddSubmonoid_toAddMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_centralizer___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoid_decidableMemCentralizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_decidableMemCentralizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_closure___at_Submonoid_closureCommMonoidOfComm___spec__1(lean_object*);
lean_object* l_AddSubmonoid_instInfSet___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_centralizer___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_centralizer(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submonoid_centralizer___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_centralizer___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submonoid_centralizer___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_centralizer___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_centralizer(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddSubmonoid_centralizer___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_centralizer___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubmonoid_centralizer___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Submonoid_decidableMemCentralizer___rarg(uint8_t x_1) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submonoid_decidableMemCentralizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Submonoid_decidableMemCentralizer___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_decidableMemCentralizer___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Submonoid_decidableMemCentralizer___rarg(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submonoid_decidableMemCentralizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submonoid_decidableMemCentralizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT uint8_t l_AddSubmonoid_decidableMemCentralizer___rarg(uint8_t x_1) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_decidableMemCentralizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddSubmonoid_decidableMemCentralizer___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_decidableMemCentralizer___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_AddSubmonoid_decidableMemCentralizer___rarg(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_decidableMemCentralizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddSubmonoid_decidableMemCentralizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_closure___at_Submonoid_closureCommMonoidOfComm___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_closure___at_Submonoid_closureCommMonoidOfComm___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_closure___at_Submonoid_closureCommMonoidOfComm___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_closureCommMonoidOfComm___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Submonoid_closure___at_Submonoid_closureCommMonoidOfComm___spec__1___rarg(x_1, lean_box(0));
x_5 = l_Submonoid_toMonoid___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submonoid_closureCommMonoidOfComm(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_closureCommMonoidOfComm___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_closure___at_Submonoid_closureCommMonoidOfComm___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submonoid_closure___at_Submonoid_closureCommMonoidOfComm___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_closureAddCommMonoidOfComm___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_AddMonoid_toAddZeroClass___rarg(x_1);
x_5 = l_AddSubmonoid_instInfSet___elambda__1___rarg(x_4, lean_box(0));
lean_dec(x_4);
x_6 = l_AddSubmonoid_toAddMonoid___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoid_closureAddCommMonoidOfComm(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubmonoid_closureAddCommMonoidOfComm___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Subsemigroup_Centralizer(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Submonoid_Center(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Submonoid_Centralizer(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Subsemigroup_Centralizer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Submonoid_Center(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
