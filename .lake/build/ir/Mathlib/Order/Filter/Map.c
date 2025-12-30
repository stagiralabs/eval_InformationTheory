// Lean compiler output
// Module: Mathlib.Order.Filter.Map
// Imports: Init Mathlib.Algebra.Group.Basic Mathlib.Algebra.Group.Pi.Basic Mathlib.Control.Basic Mathlib.Data.Set.Lattice Mathlib.Order.Filter.Basic
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
LEAN_EXPORT lean_object* l_Filter_instAlternative___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_monad___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instAlternative___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_kernMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Filter_instAlternative___closed__1;
static lean_object* l_Filter_instAlternative___closed__2;
static lean_object* l_Filter_instAlternative___closed__4;
static lean_object* l_Filter_monad___closed__1;
LEAN_EXPORT lean_object* l_Filter_instAlternative___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Filter_monad;
static lean_object* l_Filter_monad___closed__3;
static lean_object* l_Filter_monad___closed__5;
lean_object* l_Filter_instPure___boxed(lean_object*, lean_object*);
extern lean_object* l_Filter_instBind;
static lean_object* l_Filter_monad___closed__2;
static lean_object* l_Filter_monad___closed__6;
extern lean_object* l_Filter_instFunctor;
LEAN_EXPORT lean_object* l_Filter_monad___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Filter_instAlternative___closed__3;
static lean_object* l_Filter_monad___closed__4;
lean_object* l_Filter_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_kernMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instAlternative;
LEAN_EXPORT lean_object* l_Filter_monad___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
static lean_object* _init_l_Filter_monad___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_map___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Filter_monad___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_monad___lambda__1___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Filter_monad___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Filter_monad___closed__1;
x_2 = l_Filter_monad___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Filter_monad___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_instPure___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Filter_monad___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Filter_monad___closed__3;
x_2 = l_Filter_monad___closed__4;
x_3 = l_Filter_monad___closed__2;
x_4 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_3);
lean_ctor_set(x_4, 4, x_3);
return x_4;
}
}
static lean_object* _init_l_Filter_monad___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Filter_monad___closed__5;
x_2 = l_Filter_instBind;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Filter_monad() {
_start:
{
lean_object* x_1; 
x_1 = l_Filter_monad___closed__6;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Filter_monad___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_monad___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instAlternative___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instAlternative___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
static lean_object* _init_l_Filter_instAlternative___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Filter_instFunctor;
x_2 = l_Filter_monad___closed__4;
x_3 = l_Filter_monad___closed__2;
x_4 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_3);
lean_ctor_set(x_4, 4, x_3);
return x_4;
}
}
static lean_object* _init_l_Filter_instAlternative___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_instAlternative___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Filter_instAlternative___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_instAlternative___lambda__2___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Filter_instAlternative___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Filter_instAlternative___closed__1;
x_2 = l_Filter_instAlternative___closed__2;
x_3 = l_Filter_instAlternative___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Filter_instAlternative() {
_start:
{
lean_object* x_1; 
x_1 = l_Filter_instAlternative___closed__4;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Filter_instAlternative___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_instAlternative___lambda__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_kernMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_kernMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_kernMap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pi_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Filter_Map(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pi_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Filter_monad___closed__1 = _init_l_Filter_monad___closed__1();
lean_mark_persistent(l_Filter_monad___closed__1);
l_Filter_monad___closed__2 = _init_l_Filter_monad___closed__2();
lean_mark_persistent(l_Filter_monad___closed__2);
l_Filter_monad___closed__3 = _init_l_Filter_monad___closed__3();
lean_mark_persistent(l_Filter_monad___closed__3);
l_Filter_monad___closed__4 = _init_l_Filter_monad___closed__4();
lean_mark_persistent(l_Filter_monad___closed__4);
l_Filter_monad___closed__5 = _init_l_Filter_monad___closed__5();
lean_mark_persistent(l_Filter_monad___closed__5);
l_Filter_monad___closed__6 = _init_l_Filter_monad___closed__6();
lean_mark_persistent(l_Filter_monad___closed__6);
l_Filter_monad = _init_l_Filter_monad();
lean_mark_persistent(l_Filter_monad);
l_Filter_instAlternative___closed__1 = _init_l_Filter_instAlternative___closed__1();
lean_mark_persistent(l_Filter_instAlternative___closed__1);
l_Filter_instAlternative___closed__2 = _init_l_Filter_instAlternative___closed__2();
lean_mark_persistent(l_Filter_instAlternative___closed__2);
l_Filter_instAlternative___closed__3 = _init_l_Filter_instAlternative___closed__3();
lean_mark_persistent(l_Filter_instAlternative___closed__3);
l_Filter_instAlternative___closed__4 = _init_l_Filter_instAlternative___closed__4();
lean_mark_persistent(l_Filter_instAlternative___closed__4);
l_Filter_instAlternative = _init_l_Filter_instAlternative();
lean_mark_persistent(l_Filter_instAlternative);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
