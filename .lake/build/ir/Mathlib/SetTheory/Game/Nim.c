// Lean compiler output
// Module: Mathlib.SetTheory.Game.Nim
// Imports: Init Mathlib.SetTheory.Game.Birthday Mathlib.SetTheory.Game.Impartial Mathlib.SetTheory.Nimber.Basic
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
LEAN_EXPORT lean_object* l_SetTheory_PGame_rightMovesNimRecOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetTheory_PGame_rightMovesNimRecOn___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_cast(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetTheory_PGame_leftMovesNimRecOn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetTheory_PGame_leftMovesNimRecOn___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
static lean_object* l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__1;
static lean_object* l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__2;
LEAN_EXPORT lean_object* l_SetTheory_PGame_leftMovesNimRecOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SetTheory_PGame_rightMovesNimRecOn___rarg(lean_object*, lean_object*);
lean_object* l_Ordinal_typein(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Ordinal_typein(lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_cast(lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_SetTheory_PGame_leftMovesNimRecOn___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__1;
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__2;
x_6 = l_Equiv_symm___elambda__2___rarg(x_5, x_1);
x_7 = lean_apply_1(x_4, x_6);
x_8 = lean_apply_2(x_2, x_7, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_SetTheory_PGame_leftMovesNimRecOn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SetTheory_PGame_leftMovesNimRecOn___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SetTheory_PGame_leftMovesNimRecOn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SetTheory_PGame_leftMovesNimRecOn(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SetTheory_PGame_rightMovesNimRecOn___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__1;
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__2;
x_6 = l_Equiv_symm___elambda__2___rarg(x_5, x_1);
x_7 = lean_apply_1(x_4, x_6);
x_8 = lean_apply_2(x_2, x_7, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_SetTheory_PGame_rightMovesNimRecOn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SetTheory_PGame_rightMovesNimRecOn___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SetTheory_PGame_rightMovesNimRecOn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SetTheory_PGame_rightMovesNimRecOn(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_SetTheory_Game_Birthday(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_SetTheory_Game_Impartial(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_SetTheory_Nimber_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_SetTheory_Game_Nim(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_SetTheory_Game_Birthday(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_SetTheory_Game_Impartial(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_SetTheory_Nimber_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__1 = _init_l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__1();
lean_mark_persistent(l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__1);
l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__2 = _init_l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__2();
lean_mark_persistent(l_SetTheory_PGame_leftMovesNimRecOn___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
