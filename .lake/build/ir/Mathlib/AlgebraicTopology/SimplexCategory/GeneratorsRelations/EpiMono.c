// Lean compiler output
// Module: Mathlib.AlgebraicTopology.SimplexCategory.GeneratorsRelations.EpiMono
// Imports: Init Mathlib.AlgebraicTopology.SimplexCategory.GeneratorsRelations.Basic
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
LEAN_EXPORT lean_object* l_Nat_cast___at_SimplexCategoryGenRel_splitMono_u03b4___spec__1(lean_object*, lean_object*);
lean_object* l_Fin_lastCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimplexCategoryGenRel_P___u03c3;
LEAN_EXPORT lean_object* l_Nat_cast___at_SimplexCategoryGenRel_splitMono_u03b4___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimplexCategoryGenRel_splitMono_u03b4(lean_object*, lean_object*);
lean_object* l_SimplexCategoryGenRel__u03c3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimplexCategoryGenRel_P___u03b4;
LEAN_EXPORT lean_object* l_SimplexCategoryGenRel_splitEpi_u03c3(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
static lean_object* l_SimplexCategoryGenRel_splitMono_u03b4___closed__1;
lean_object* l_Quiver_Hom_toPath___at_SimplexCategoryGenRel__u03b4___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Quotient_functor___at_SimplexCategoryGenRel__u03b4___spec__1(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_SimplexCategoryGenRel_splitMono_u03b4___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_1, x_3);
x_5 = lean_nat_mod(x_2, x_4);
lean_dec(x_4);
return x_5;
}
}
static lean_object* _init_l_SimplexCategoryGenRel_splitMono_u03b4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_CategoryTheory_Quotient_functor___at_SimplexCategoryGenRel__u03b4___spec__1(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimplexCategoryGenRel_splitMono_u03b4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_1, x_3);
x_5 = l_SimplexCategoryGenRel_splitMono_u03b4___closed__1;
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = l_Nat_cast___at_SimplexCategoryGenRel_splitMono_u03b4___spec__1(x_1, x_1);
lean_inc(x_1);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
lean_inc(x_1);
lean_inc(x_4);
x_9 = l_Quiver_Hom_toPath___at_SimplexCategoryGenRel__u03b4___spec__3(x_4, x_1, x_8);
lean_inc(x_1);
lean_inc(x_4);
x_10 = lean_apply_3(x_6, x_4, x_1, x_9);
x_11 = lean_alloc_closure((void*)(l_SimplexCategoryGenRel__u03c3), 2, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = l_Fin_lastCases(x_4, lean_box(0), x_10, x_11, x_2);
lean_dec(x_10);
lean_dec(x_4);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_SimplexCategoryGenRel_splitMono_u03b4___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_cast___at_SimplexCategoryGenRel_splitMono_u03b4___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimplexCategoryGenRel_splitEpi_u03c3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_1, x_3);
x_5 = l_SimplexCategoryGenRel_splitMono_u03b4___closed__1;
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_inc(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_inc(x_4);
lean_inc(x_1);
x_8 = l_Quiver_Hom_toPath___at_SimplexCategoryGenRel__u03b4___spec__3(x_1, x_4, x_7);
x_9 = lean_apply_3(x_6, x_1, x_4, x_8);
return x_9;
}
}
static lean_object* _init_l_SimplexCategoryGenRel_P___u03c3() {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_SimplexCategoryGenRel_P___u03b4() {
_start:
{
return lean_box(0);
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicTopology_SimplexCategory_GeneratorsRelations_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicTopology_SimplexCategory_GeneratorsRelations_EpiMono(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicTopology_SimplexCategory_GeneratorsRelations_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_SimplexCategoryGenRel_splitMono_u03b4___closed__1 = _init_l_SimplexCategoryGenRel_splitMono_u03b4___closed__1();
lean_mark_persistent(l_SimplexCategoryGenRel_splitMono_u03b4___closed__1);
l_SimplexCategoryGenRel_P___u03c3 = _init_l_SimplexCategoryGenRel_P___u03c3();
l_SimplexCategoryGenRel_P___u03b4 = _init_l_SimplexCategoryGenRel_P___u03b4();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
