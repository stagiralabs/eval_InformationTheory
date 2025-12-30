// Lean compiler output
// Module: Mathlib.Data.Set.Insert
// Imports: Init Mathlib.Data.Set.Basic Mathlib.Data.One.Defs
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Set_Insert_0__Option_elim_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_uniqueSingleton___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableSingleton___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableSingleton___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_uniqueSingleton___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Set_uniqueSingleton(lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableSingleton(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Set_Insert_0__Option_elim_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption(lean_object*);
LEAN_EXPORT uint8_t l_Set_decidableSingleton___rarg(uint8_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Set_Insert_0__Option_elim_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_4, x_7, x_2, x_3);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Set_Insert_0__Option_elim_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Set_Insert_0__Option_elim_match__1_splitter___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_subtypeInsertEquivOption___elambda__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_4);
x_5 = lean_apply_2(x_1, x_4, x_3);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_subtypeInsertEquivOption___elambda__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_Set_subtypeInsertEquivOption___elambda__2___rarg), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_closure((void*)(l_Set_subtypeInsertEquivOption___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_6, 0, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_subtypeInsertEquivOption___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_subtypeInsertEquivOption___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_subtypeInsertEquivOption___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_uniqueSingleton___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Set_uniqueSingleton(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_uniqueSingleton___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_uniqueSingleton___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Set_uniqueSingleton___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Set_decidableSingleton___rarg(uint8_t x_1) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_Set_decidableSingleton(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Set_decidableSingleton___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_decidableSingleton___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Set_decidableSingleton___rarg(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_decidableSingleton___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_decidableSingleton(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_One_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Set_Insert(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_One_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
