// Lean compiler output
// Module: Mathlib.Algebra.Homology.Embedding.RestrictionHomology
// Imports: Init Mathlib.Algebra.Homology.Embedding.Restriction Mathlib.Algebra.Homology.ShortComplex.HomologicalComplex
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
LEAN_EXPORT lean_object* l_HomologicalComplex_restriction_sc_x27Iso___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_ShortComplex_isoMk___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_restriction_sc_x27Iso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_restriction_sc_x27Iso___rarg___boxed(lean_object**);
lean_object* l_HomologicalComplex_restrictionXIso___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HomologicalComplex_restriction___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HomologicalComplex_shortComplexFunctor_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HomologicalComplex_restriction_sc_x27Iso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_inc(x_7);
lean_inc(x_6);
x_20 = l_HomologicalComplex_restriction___rarg(x_1, x_2, lean_box(0), x_4, x_5, x_6, x_7, lean_box(0));
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_5);
lean_inc(x_4);
x_21 = l_HomologicalComplex_shortComplexFunctor_x27___rarg(x_4, x_5, lean_box(0), x_1, x_9, x_10, x_11);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_apply_1(x_22, x_20);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_5);
lean_inc(x_4);
x_24 = l_HomologicalComplex_shortComplexFunctor_x27___rarg(x_4, x_5, lean_box(0), x_2, x_12, x_13, x_14);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
lean_inc(x_6);
x_26 = lean_apply_1(x_25, x_6);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
x_27 = l_HomologicalComplex_restrictionXIso___rarg(x_4, x_5, x_6, x_7, lean_box(0), x_9, x_12, lean_box(0));
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
x_28 = l_HomologicalComplex_restrictionXIso___rarg(x_4, x_5, x_6, x_7, lean_box(0), x_10, x_13, lean_box(0));
lean_inc(x_4);
x_29 = l_HomologicalComplex_restrictionXIso___rarg(x_4, x_5, x_6, x_7, lean_box(0), x_11, x_14, lean_box(0));
x_30 = l_CategoryTheory_ShortComplex_isoMk___rarg(x_4, x_5, x_23, x_26, x_27, x_28, x_29, lean_box(0), lean_box(0));
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_5);
lean_dec(x_4);
return x_30;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_restriction_sc_x27Iso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_HomologicalComplex_restriction_sc_x27Iso___rarg___boxed), 19, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_HomologicalComplex_restriction_sc_x27Iso___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
_start:
{
lean_object* x_20; 
x_20 = l_HomologicalComplex_restriction_sc_x27Iso___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_2);
lean_dec(x_1);
return x_20;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_Embedding_Restriction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_ShortComplex_HomologicalComplex(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Homology_Embedding_RestrictionHomology(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_Embedding_Restriction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_ShortComplex_HomologicalComplex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
