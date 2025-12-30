// Lean compiler output
// Module: Mathlib.Algebra.Group.PUnit
// Imports: Init Mathlib.Algebra.Group.Defs Mathlib.Tactic.MinImports
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
LEAN_EXPORT lean_object* l_PUnit_instNeg___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_commGroup___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instDiv__mathlib(lean_object*, lean_object*);
static lean_object* l_PUnit_addCommGroup___closed__1;
LEAN_EXPORT lean_object* l_PUnit_addCommGroup;
static lean_object* l_PUnit_commGroup___closed__4;
static lean_object* l_PUnit_instAdd__mathlib___closed__1;
LEAN_EXPORT lean_object* l_PUnit_commGroup___lambda__1(lean_object*, lean_object*);
static lean_object* l_PUnit_instNeg___closed__1;
LEAN_EXPORT lean_object* l_PUnit_instAdd__mathlib___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instAdd__mathlib___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_commGroup___lambda__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instSub__mathlib___elambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_PUnit_commGroup___closed__1;
LEAN_EXPORT lean_object* l_PUnit_instSub__mathlib___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_commGroup;
static lean_object* l_PUnit_addCommGroup___closed__2;
LEAN_EXPORT lean_object* l_PUnit_instOne;
LEAN_EXPORT lean_object* l_PUnit_instDiv__mathlib___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instInv___boxed(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_commGroup___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_PUnit_commGroup___closed__3;
static lean_object* l_PUnit_commGroup___closed__2;
LEAN_EXPORT lean_object* l_PUnit_instZero;
LEAN_EXPORT lean_object* l_PUnit_instInv(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instNeg___elambda__1___boxed(lean_object*);
static lean_object* l_PUnit_instSub__mathlib___closed__1;
LEAN_EXPORT lean_object* l_PUnit_instMul__mathlib(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instNeg;
LEAN_EXPORT lean_object* l_PUnit_instMul__mathlib___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instAdd__mathlib;
LEAN_EXPORT lean_object* l_PUnit_instSub__mathlib;
LEAN_EXPORT lean_object* l_PUnit_commGroup___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_commGroup___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_PUnit_commGroup___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_commGroup___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_commGroup___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_PUnit_commGroup___closed__1;
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 2, x_1);
return x_3;
}
}
static lean_object* _init_l_PUnit_commGroup___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_commGroup___lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_commGroup___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_PUnit_commGroup___closed__2;
x_2 = l_PUnit_commGroup___closed__3;
x_3 = l_PUnit_commGroup___closed__1;
x_4 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_3);
return x_4;
}
}
static lean_object* _init_l_PUnit_commGroup() {
_start:
{
lean_object* x_1; 
x_1 = l_PUnit_commGroup___closed__4;
return x_1;
}
}
LEAN_EXPORT lean_object* l_PUnit_commGroup___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_commGroup___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_commGroup___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PUnit_commGroup___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_PUnit_addCommGroup___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_PUnit_commGroup___closed__1;
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 2, x_1);
return x_3;
}
}
static lean_object* _init_l_PUnit_addCommGroup___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_PUnit_addCommGroup___closed__1;
x_2 = l_PUnit_commGroup___closed__3;
x_3 = l_PUnit_commGroup___closed__1;
x_4 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_3);
return x_4;
}
}
static lean_object* _init_l_PUnit_addCommGroup() {
_start:
{
lean_object* x_1; 
x_1 = l_PUnit_addCommGroup___closed__2;
return x_1;
}
}
static lean_object* _init_l_PUnit_instOne() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_PUnit_instZero() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PUnit_instMul__mathlib(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_instMul__mathlib___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_instMul__mathlib(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_instAdd__mathlib___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
static lean_object* _init_l_PUnit_instAdd__mathlib___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_instAdd__mathlib___elambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_instAdd__mathlib() {
_start:
{
lean_object* x_1; 
x_1 = l_PUnit_instAdd__mathlib___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_PUnit_instAdd__mathlib___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_instAdd__mathlib___elambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_instDiv__mathlib(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_instDiv__mathlib___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_instDiv__mathlib(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_instSub__mathlib___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
static lean_object* _init_l_PUnit_instSub__mathlib___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_instSub__mathlib___elambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_instSub__mathlib() {
_start:
{
lean_object* x_1; 
x_1 = l_PUnit_instSub__mathlib___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_PUnit_instSub__mathlib___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_instSub__mathlib___elambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_instInv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_instInv___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PUnit_instInv(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_instNeg___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_PUnit_instNeg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_instNeg___elambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_instNeg() {
_start:
{
lean_object* x_1; 
x_1 = l_PUnit_instNeg___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_PUnit_instNeg___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PUnit_instNeg___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_MinImports(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_PUnit(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_MinImports(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_PUnit_commGroup___closed__1 = _init_l_PUnit_commGroup___closed__1();
lean_mark_persistent(l_PUnit_commGroup___closed__1);
l_PUnit_commGroup___closed__2 = _init_l_PUnit_commGroup___closed__2();
lean_mark_persistent(l_PUnit_commGroup___closed__2);
l_PUnit_commGroup___closed__3 = _init_l_PUnit_commGroup___closed__3();
lean_mark_persistent(l_PUnit_commGroup___closed__3);
l_PUnit_commGroup___closed__4 = _init_l_PUnit_commGroup___closed__4();
lean_mark_persistent(l_PUnit_commGroup___closed__4);
l_PUnit_commGroup = _init_l_PUnit_commGroup();
lean_mark_persistent(l_PUnit_commGroup);
l_PUnit_addCommGroup___closed__1 = _init_l_PUnit_addCommGroup___closed__1();
lean_mark_persistent(l_PUnit_addCommGroup___closed__1);
l_PUnit_addCommGroup___closed__2 = _init_l_PUnit_addCommGroup___closed__2();
lean_mark_persistent(l_PUnit_addCommGroup___closed__2);
l_PUnit_addCommGroup = _init_l_PUnit_addCommGroup();
lean_mark_persistent(l_PUnit_addCommGroup);
l_PUnit_instOne = _init_l_PUnit_instOne();
lean_mark_persistent(l_PUnit_instOne);
l_PUnit_instZero = _init_l_PUnit_instZero();
lean_mark_persistent(l_PUnit_instZero);
l_PUnit_instAdd__mathlib___closed__1 = _init_l_PUnit_instAdd__mathlib___closed__1();
lean_mark_persistent(l_PUnit_instAdd__mathlib___closed__1);
l_PUnit_instAdd__mathlib = _init_l_PUnit_instAdd__mathlib();
lean_mark_persistent(l_PUnit_instAdd__mathlib);
l_PUnit_instSub__mathlib___closed__1 = _init_l_PUnit_instSub__mathlib___closed__1();
lean_mark_persistent(l_PUnit_instSub__mathlib___closed__1);
l_PUnit_instSub__mathlib = _init_l_PUnit_instSub__mathlib();
lean_mark_persistent(l_PUnit_instSub__mathlib);
l_PUnit_instNeg___closed__1 = _init_l_PUnit_instNeg___closed__1();
lean_mark_persistent(l_PUnit_instNeg___closed__1);
l_PUnit_instNeg = _init_l_PUnit_instNeg();
lean_mark_persistent(l_PUnit_instNeg);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
