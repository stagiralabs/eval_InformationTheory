// Lean compiler output
// Module: Mathlib.Logic.Equiv.Array
// Imports: Init Mathlib.Data.Vector.Basic Mathlib.Logic.Equiv.List
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
LEAN_EXPORT lean_object* l_Equiv_arrayEquivList___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Array_encodable___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Array_encodable___spec__2___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Array_encodable___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_arrayEquivList___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Array_encodable___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Encodable_ofLeftInjection___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_encodable___rarg___closed__1;
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Array_encodable___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Array_encodable___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Array_encodable___spec__1(lean_object*);
lean_object* lean_array_to_list(lean_object*);
static lean_object* l_Encodable_ofLeftInverse___at_Array_encodable___spec__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_Equiv_arrayEquivList___elambda__2(lean_object*);
lean_object* l_List_encodable___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_encodable(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_arrayEquivList(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Array_encodable___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Array_encodable___spec__1___rarg___lambda__1(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Encodable_ofLeftInjection___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_arrayEquivList___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_arrayEquivList___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_arrayEquivList___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_arrayEquivList___elambda__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_arrayEquivList___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_array_to_list(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_arrayEquivList___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_arrayEquivList___elambda__2___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_arrayEquivList(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Equiv_arrayEquivList___elambda__2___rarg), 1, 0);
x_3 = lean_alloc_closure((void*)(l_Equiv_arrayEquivList___elambda__1___rarg), 1, 0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Array_encodable___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_List_encodable___rarg(x_1);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__2___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__1___rarg), 3, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Array_encodable___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___at_Array_encodable___spec__3___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Array_encodable___spec__2___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Encodable_ofLeftInverse___at_Array_encodable___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Encodable_ofLeftInverse___at_Array_encodable___spec__2___rarg___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Array_encodable___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Encodable_ofLeftInverse___at_Array_encodable___spec__2___rarg___closed__1;
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
x_7 = l_Encodable_ofLeftInjection___at_Array_encodable___spec__3___rarg(x_1, x_2, x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Array_encodable___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_ofLeftInverse___at_Array_encodable___spec__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Array_encodable___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Array_encodable___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___at_Array_encodable___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_Encodable_ofLeftInverse___at_Array_encodable___spec__2___rarg(x_1, x_3, x_4, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Array_encodable___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___at_Array_encodable___spec__1___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Array_encodable___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_arrayEquivList(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_encodable___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Array_encodable___rarg___closed__1;
x_3 = l_Encodable_ofEquiv___at_Array_encodable___spec__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_encodable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_encodable___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Vector_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_List(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Logic_Equiv_Array(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Vector_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_List(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Encodable_ofLeftInverse___at_Array_encodable___spec__2___rarg___closed__1 = _init_l_Encodable_ofLeftInverse___at_Array_encodable___spec__2___rarg___closed__1();
lean_mark_persistent(l_Encodable_ofLeftInverse___at_Array_encodable___spec__2___rarg___closed__1);
l_Array_encodable___rarg___closed__1 = _init_l_Array_encodable___rarg___closed__1();
lean_mark_persistent(l_Array_encodable___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
