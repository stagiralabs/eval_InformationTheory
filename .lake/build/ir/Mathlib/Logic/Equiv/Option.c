// Lean compiler output
// Module: Mathlib.Logic.Equiv.Option
// Imports: Init Mathlib.Control.EquivFunctor Mathlib.Data.Option.Basic Mathlib.Data.Subtype Mathlib.Logic.Equiv.Defs
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
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_removeNone__aux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionCongr___rarg(lean_object*);
static lean_object* l_Equiv_optionSubtypeNe___rarg___closed__1;
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionCongr___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionCongr___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionCongr___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__2___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionSubtypeNe___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionCongr___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_removeNone___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_removeNone___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_removeNone___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Option_casesOn_x27___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_removeNone(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_removeNone___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionCongr___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionSubtypeNe(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__2___rarg(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionCongr(lean_object*, lean_object*);
static lean_object* l_Equiv_optionSubtype___elambda__1___rarg___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Equiv_optionSubtype(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__2___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_removeNone__aux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_removeNone___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_optionCongr___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_apply_1(x_1, x_5);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Equiv_optionCongr___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_optionCongr___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionCongr___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_apply_1(x_1, x_5);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Equiv_optionCongr___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_optionCongr___elambda__2___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionCongr___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionCongr___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Equiv_optionCongr___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_optionCongr___elambda__2___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_Equiv_optionCongr___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionCongr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_optionCongr___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_removeNone__aux___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_4);
x_5 = lean_apply_1(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_box(0);
x_7 = lean_apply_1(x_4, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_4);
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Equiv_removeNone__aux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_removeNone__aux___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_removeNone___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_removeNone__aux___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_removeNone___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_removeNone___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_removeNone___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_removeNone__aux___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_removeNone___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_removeNone___elambda__2___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_removeNone___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Equiv_removeNone___elambda__2___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Equiv_symm___rarg(x_1);
x_4 = lean_alloc_closure((void*)(l_Equiv_removeNone___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_removeNone(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_removeNone___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Equiv_optionSubtype___elambda__1___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_optionSubtype___elambda__1___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_alloc_closure((void*)(l_Equiv_optionCongr___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Equiv_optionSubtype___elambda__1___rarg___lambda__2___closed__1;
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = l_Option_casesOn_x27___rarg(x_3, x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_4);
x_5 = lean_apply_2(x_1, x_4, x_2);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Equiv_symm___elambda__2___rarg(x_3, x_4);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Equiv_optionSubtype___elambda__1___rarg___lambda__2___boxed), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_closure((void*)(l_Equiv_optionSubtype___elambda__1___rarg___lambda__3), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_optionSubtype___elambda__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__2___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Equiv_symm___elambda__2___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Equiv_optionSubtype___elambda__2___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_optionSubtype___elambda__2___rarg___lambda__2), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Equiv_optionSubtype___elambda__2___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Equiv_optionSubtype___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Equiv_optionSubtype___elambda__2___rarg), 1, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_optionSubtype___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_optionSubtype___elambda__1___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_optionSubtype___elambda__1___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtype___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_optionSubtype___elambda__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_Equiv_optionSubtypeNe___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtypeNe___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Equiv_optionSubtype___rarg(x_1, x_2);
x_4 = l_Equiv_optionSubtypeNe___rarg___closed__1;
x_5 = l_Equiv_symm___elambda__2___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_optionSubtypeNe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_optionSubtypeNe___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_EquivFunctor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Option_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Subtype(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Logic_Equiv_Option(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_EquivFunctor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Option_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Subtype(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Equiv_optionSubtype___elambda__1___rarg___lambda__2___closed__1 = _init_l_Equiv_optionSubtype___elambda__1___rarg___lambda__2___closed__1();
lean_mark_persistent(l_Equiv_optionSubtype___elambda__1___rarg___lambda__2___closed__1);
l_Equiv_optionSubtypeNe___rarg___closed__1 = _init_l_Equiv_optionSubtypeNe___rarg___closed__1();
lean_mark_persistent(l_Equiv_optionSubtypeNe___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
