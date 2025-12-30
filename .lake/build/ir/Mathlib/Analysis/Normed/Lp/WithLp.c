// Lean compiler output
// Module: Mathlib.Analysis.Normed.Lp.WithLp
// Imports: Init Mathlib.Data.ENNReal.Basic Mathlib.RingTheory.Finiteness.Defs
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
LEAN_EXPORT lean_object* l_WithLp_equiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_WithLp_linearEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_equiv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_linearEquiv___elambda__1(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_WithLp_linearEquiv___spec__1___closed__1;
LEAN_EXPORT lean_object* l_WithLp_linearEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instUnique___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instAddCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_linearEquiv___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instDecidableEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithLp_linearEquiv___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instUnique(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instUnique___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_WithLp_linearEquiv___spec__1(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instDecidableEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instModule___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instAddCommGroup___rarg___boxed(lean_object*);
static lean_object* l_WithLp_equiv___closed__1;
LEAN_EXPORT lean_object* l_WithLp_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instAddCommGroup___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instAddCommGroup___rarg(lean_object*);
static lean_object* l_WithLp_linearEquiv___closed__1;
LEAN_EXPORT lean_object* l_WithLp_linearEquiv___elambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_instUnique___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_linearEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithLp_linearEquiv___elambda__1___rarg(lean_object*, lean_object*);
static lean_object* _init_l_WithLp_equiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_WithLp_equiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithLp_equiv___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithLp_equiv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithLp_equiv(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithLp_instUnique___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_WithLp_instUnique(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithLp_instUnique___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithLp_instUnique___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithLp_instUnique___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithLp_instUnique___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithLp_instUnique(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithLp_instDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithLp_instDecidableEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithLp_instDecidableEq___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithLp_instDecidableEq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithLp_instDecidableEq(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithLp_instAddCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_WithLp_instAddCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithLp_instAddCommGroup___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithLp_instAddCommGroup___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithLp_instAddCommGroup___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithLp_instAddCommGroup___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithLp_instAddCommGroup(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithLp_instModule___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_WithLp_instModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_WithLp_instModule___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_WithLp_instModule___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithLp_instModule___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithLp_instModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_WithLp_instModule(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_WithLp_linearEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_symm___elambda__2___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithLp_linearEquiv___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithLp_linearEquiv___elambda__1___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_RingHom_id___at_WithLp_linearEquiv___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_WithLp_linearEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_WithLp_linearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithLp_linearEquiv___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_WithLp_linearEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_WithLp_linearEquiv___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_WithLp_linearEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_WithLp_equiv___closed__1;
x_8 = lean_alloc_closure((void*)(l_WithLp_linearEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = l_WithLp_linearEquiv___closed__1;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_WithLp_linearEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithLp_linearEquiv___elambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_WithLp_linearEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_WithLp_linearEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithLp_linearEquiv___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_WithLp_linearEquiv___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithLp_linearEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_WithLp_linearEquiv(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ENNReal_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Finiteness_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Normed_Lp_WithLp(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ENNReal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Finiteness_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_WithLp_equiv___closed__1 = _init_l_WithLp_equiv___closed__1();
lean_mark_persistent(l_WithLp_equiv___closed__1);
l_RingHom_id___at_WithLp_linearEquiv___spec__1___closed__1 = _init_l_RingHom_id___at_WithLp_linearEquiv___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_WithLp_linearEquiv___spec__1___closed__1);
l_WithLp_linearEquiv___closed__1 = _init_l_WithLp_linearEquiv___closed__1();
lean_mark_persistent(l_WithLp_linearEquiv___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
