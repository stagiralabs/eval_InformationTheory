// Lean compiler output
// Module: Mathlib.CategoryTheory.Limits.Shapes.ConcreteCategory
// Imports: Init Mathlib.CategoryTheory.Limits.Preserves.Shapes.BinaryProducts Mathlib.CategoryTheory.Limits.Preserves.Shapes.Products Mathlib.CategoryTheory.Limits.ConcreteCategory.Basic Mathlib.CategoryTheory.Limits.Shapes.Types Mathlib.CategoryTheory.Limits.Shapes.Multiequalizer Mathlib.CategoryTheory.Limits.Shapes.Kernels Mathlib.CategoryTheory.ConcreteCategory.EpiMono Mathlib.CategoryTheory.Limits.Constructions.EpiMono
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
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_9);
x_12 = lean_apply_1(x_11, x_9);
lean_inc(x_12);
x_13 = lean_apply_1(x_10, x_12);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_9);
x_15 = lean_apply_1(x_14, x_9);
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
lean_dec(x_2);
x_17 = lean_ctor_get(x_4, 2);
lean_inc(x_17);
lean_dec(x_4);
x_18 = lean_apply_1(x_17, x_9);
lean_inc(x_15);
lean_inc(x_13);
x_19 = lean_apply_3(x_16, x_13, x_15, x_18);
x_20 = lean_apply_1(x_5, x_12);
x_21 = lean_apply_4(x_1, x_13, x_15, x_19, x_20);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__1___rarg), 6, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_apply_1(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__2___rarg___boxed), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
lean_inc(x_6);
x_8 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__2___rarg___boxed), 4, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__1___rarg), 6, 4);
lean_closure_set(x_9, 0, x_4);
lean_closure_set(x_9, 1, x_5);
lean_closure_set(x_9, 2, x_6);
lean_closure_set(x_9, 3, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___elambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_CategoryTheory_Limits_Concrete_multiequalizerEquivAux___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_BinaryProducts(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_Products(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_ConcreteCategory_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Types(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Multiequalizer(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Kernels(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_ConcreteCategory_EpiMono(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Constructions_EpiMono(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_ConcreteCategory(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_BinaryProducts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_Products(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_ConcreteCategory_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Multiequalizer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Kernels(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_ConcreteCategory_EpiMono(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Constructions_EpiMono(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
