// Lean compiler output
// Module: Mathlib.Data.Set.Functor
// Imports: Init Mathlib.Data.Set.Lattice Mathlib.Data.Set.Defs Mathlib.Control.Basic Mathlib.Data.Set.Notation
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
static lean_object* l_Set_monad___closed__2;
static lean_object* l_Set_monad___closed__1;
LEAN_EXPORT lean_object* l_Set_instAlternative;
static lean_object* l_Set_instAlternative___closed__1;
LEAN_EXPORT lean_object* l_instMonadSetM;
LEAN_EXPORT lean_object* l_Set_monad;
static lean_object* _init_l_Set_monad___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1, 0, lean_box(0));
lean_ctor_set(x_1, 1, lean_box(0));
x_2 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, lean_box(0));
lean_ctor_set(x_2, 2, lean_box(0));
lean_ctor_set(x_2, 3, lean_box(0));
lean_ctor_set(x_2, 4, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_Set_monad___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Set_monad___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_Set_monad() {
_start:
{
lean_object* x_1; 
x_1 = l_Set_monad___closed__2;
return x_1;
}
}
static lean_object* _init_l_Set_instAlternative___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Set_monad;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, lean_box(0));
lean_ctor_set(x_3, 2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Set_instAlternative() {
_start:
{
lean_object* x_1; 
x_1 = l_Set_instAlternative___closed__1;
return x_1;
}
}
static lean_object* _init_l_instMonadSetM() {
_start:
{
lean_object* x_1; 
x_1 = l_Set_monad;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Notation(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Set_Functor(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Set_monad___closed__1 = _init_l_Set_monad___closed__1();
lean_mark_persistent(l_Set_monad___closed__1);
l_Set_monad___closed__2 = _init_l_Set_monad___closed__2();
lean_mark_persistent(l_Set_monad___closed__2);
l_Set_monad = _init_l_Set_monad();
lean_mark_persistent(l_Set_monad);
l_Set_instAlternative___closed__1 = _init_l_Set_instAlternative___closed__1();
lean_mark_persistent(l_Set_instAlternative___closed__1);
l_Set_instAlternative = _init_l_Set_instAlternative();
lean_mark_persistent(l_Set_instAlternative);
l_instMonadSetM = _init_l_instMonadSetM();
lean_mark_persistent(l_instMonadSetM);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
