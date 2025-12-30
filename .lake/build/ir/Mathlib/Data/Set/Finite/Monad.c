// Lean compiler output
// Module: Mathlib.Data.Set.Finite.Monad
// Imports: Init Mathlib.Data.Finite.Prod Mathlib.Data.Set.Finite.Lattice Mathlib.Data.Set.Functor
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
lean_object* l_Set_fintypeImage___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Set_fintypeBiUnion_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeSeq___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Set_fintypeBiUnion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeBind_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeSeq_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypePure___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypePure(lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeBind_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeSeq_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeSeq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeBind___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeBind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeSeq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeBind___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeBind_x27(lean_object*, lean_object*);
lean_object* l_Set_fintypeSingleton___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeBind___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Set_fintypeBiUnion___rarg(x_1, lean_box(0), lean_box(0), x_3, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeBind(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_fintypeBind___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeBind___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Set_fintypeBind___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeBind_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Set_fintypeBiUnion_x27___rarg(x_1, lean_box(0), lean_box(0), x_3, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeBind_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_fintypeBind_x27___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeBind_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Set_fintypeBind_x27___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Set_fintypePure___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Set_fintypeSingleton___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_fintypePure(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_fintypePure___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeSeq___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_fintypeImage___rarg(x_1, lean_box(0), x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeSeq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Set_fintypeSeq___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = l_Set_fintypeBiUnion_x27___rarg(x_1, lean_box(0), lean_box(0), x_4, lean_box(0), x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeSeq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_fintypeSeq___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeSeq_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Set_fintypeSeq___rarg(x_1, lean_box(0), lean_box(0), x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeSeq_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_fintypeSeq_x27___rarg), 5, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Finite_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Functor(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Set_Finite_Monad(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Finite_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Functor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
