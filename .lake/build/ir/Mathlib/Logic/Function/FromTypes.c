// Lean compiler output
// Module: Mathlib.Logic.Function.FromTypes
// Imports: Init Mathlib.Data.Fin.VecNotation
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
static lean_object* l_Function_fromTypes__zero__equiv___closed__1;
LEAN_EXPORT lean_object* l_Function_fromTypes__zero__equiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_fromTypes__nil__equiv(lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_const___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_fromTypes__succ__equiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_const___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_inhabited(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_fromTypes__cons__equiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_fromTypes__cons__equiv(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_const___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_fromTypes__succ__equiv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_const(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_Function_FromTypes_inhabited___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Function_fromTypes__zero__equiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Function_fromTypes__zero__equiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Function_fromTypes__zero__equiv___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_fromTypes__nil__equiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Function_fromTypes__zero__equiv___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Function_fromTypes__succ__equiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Function_fromTypes__zero__equiv___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_fromTypes__succ__equiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Function_fromTypes__succ__equiv(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_fromTypes__cons__equiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Function_fromTypes__zero__equiv___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_fromTypes__cons__equiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Function_fromTypes__cons__equiv(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_const___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Function_FromTypes_const(x_1, lean_box(0), lean_box(0), x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_const(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
x_9 = lean_alloc_closure((void*)(l_Function_FromTypes_const___lambda__1___boxed), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_4);
return x_9;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_const___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Function_FromTypes_const___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_const___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Function_FromTypes_const(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_inhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Function_FromTypes_const(x_1, lean_box(0), lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_FromTypes_inhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Function_FromTypes_inhabited(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_VecNotation(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Logic_Function_FromTypes(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_VecNotation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Function_fromTypes__zero__equiv___closed__1 = _init_l_Function_fromTypes__zero__equiv___closed__1();
lean_mark_persistent(l_Function_fromTypes__zero__equiv___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
