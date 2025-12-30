// Lean compiler output
// Module: Mathlib.CategoryTheory.Sites.Coherent.Equivalence
// Imports: Init Mathlib.CategoryTheory.Sites.Coherent.SheafComparison Mathlib.CategoryTheory.Sites.Equivalence
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
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_sheafCongrPreregular___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Equivalence_sheafCongr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_sheafCongrPrecoherent(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_sheafCongrPreregular(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_sheafCongrPrecoherent___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_sheafCongrPrecoherent___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_box(0);
x_9 = lean_box(0);
x_10 = l_CategoryTheory_Equivalence_sheafCongr___rarg(x_1, x_8, lean_box(0), x_3, x_9, x_7, lean_box(0), x_6, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_sheafCongrPrecoherent(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Equivalence_sheafCongrPrecoherent___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_sheafCongrPreregular___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_box(0);
x_9 = lean_box(0);
x_10 = l_CategoryTheory_Equivalence_sheafCongr___rarg(x_1, x_8, lean_box(0), x_3, x_9, x_7, lean_box(0), x_6, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_sheafCongrPreregular(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Equivalence_sheafCongrPreregular___rarg), 7, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sites_Coherent_SheafComparison(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sites_Equivalence(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Sites_Coherent_Equivalence(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sites_Coherent_SheafComparison(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sites_Equivalence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
