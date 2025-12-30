// Lean compiler output
// Module: Mathlib.Data.Vector.Snoc
// Imports: Init Mathlib.Data.Vector.Basic
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
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn_u2082___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_Vector_inductionOn_u2082___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_Vector_inductionOn___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_revCasesOn___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_revCasesOn___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_snoc___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_snoc___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn_u2082(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn_u2082___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_revCasesOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_revCasesOn___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn_u2082___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_snoc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_revCasesOn___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_snoc___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = l_List_appendTR___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_snoc(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_snoc___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_snoc___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_snoc(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_List_reverse___rarg(x_4);
x_7 = lean_apply_4(x_1, x_2, x_6, x_3, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_List_reverse___rarg(x_2);
x_6 = lean_alloc_closure((void*)(l_List_Vector_revInductionOn___rarg___lambda__1), 5, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = l_List_Vector_inductionOn___rarg(x_1, x_5, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_revInductionOn___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_Vector_revInductionOn___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn_u2082___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_List_reverse___rarg(x_5);
x_9 = l_List_reverse___rarg(x_6);
x_10 = lean_apply_6(x_1, x_2, x_8, x_9, x_3, x_4, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_List_reverse___rarg(x_2);
x_7 = l_List_reverse___rarg(x_3);
x_8 = lean_alloc_closure((void*)(l_List_Vector_revInductionOn_u2082___rarg___lambda__1), 7, 1);
lean_closure_set(x_8, 0, x_5);
x_9 = l_List_Vector_inductionOn_u2082___rarg(x_1, lean_box(0), lean_box(0), x_6, x_7, x_4, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_Vector_revInductionOn_u2082___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Vector_revInductionOn_u2082___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_Vector_revInductionOn_u2082___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_Vector_revCasesOn___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_3(x_1, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_Vector_revCasesOn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_List_Vector_revCasesOn___rarg___lambda__1___boxed), 5, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_List_Vector_revInductionOn___rarg(x_1, x_2, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_Vector_revCasesOn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_revCasesOn___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_revCasesOn___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_Vector_revCasesOn___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_Vector_revCasesOn___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_Vector_revCasesOn___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Vector_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Vector_Snoc(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Vector_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
