// Lean compiler output
// Module: Mathlib.Data.Tree.RBMap
// Imports: Init Batteries.Data.RBMap.Basic Mathlib.Data.Tree.Basic
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
LEAN_EXPORT lean_object* l_Tree_ofRBNode(lean_object*);
LEAN_EXPORT lean_object* l_Tree_ofRBNode___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Tree_ofRBNode___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Tree_ofRBNode___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
x_6 = l_Tree_ofRBNode___rarg(x_3);
x_7 = l_Tree_ofRBNode___rarg(x_5);
lean_inc(x_4);
x_8 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Tree_ofRBNode(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tree_ofRBNode___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tree_ofRBNode___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Tree_ofRBNode___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_RBMap_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Tree_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Tree_RBMap(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_RBMap_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Tree_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
