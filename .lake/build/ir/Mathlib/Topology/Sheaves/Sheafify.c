// Lean compiler output
// Module: Mathlib.Topology.Sheaves.Sheafify
// Imports: Init Mathlib.Topology.Sheaves.LocalPredicate Mathlib.Topology.Sheaves.Stalks
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
lean_object* l_TopCat_subpresheafToTypes(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Presheaf_Sheafify_isGerm___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Presheaf_Sheafify_isGerm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Presheaf_sheafify(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Presheaf_Sheafify_isLocallyGerm___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Presheaf_sheafify___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Presheaf_Sheafify_isLocallyGerm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Presheaf_Sheafify_isGerm(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopCat_Presheaf_Sheafify_isGerm___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopCat_Presheaf_Sheafify_isGerm(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopCat_Presheaf_Sheafify_isLocallyGerm(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopCat_Presheaf_Sheafify_isLocallyGerm___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopCat_Presheaf_Sheafify_isLocallyGerm(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopCat_Presheaf_sheafify(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_TopCat_subpresheafToTypes(x_1, lean_box(0), x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopCat_Presheaf_sheafify___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopCat_Presheaf_sheafify(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sheaves_LocalPredicate(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sheaves_Stalks(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Sheaves_Sheafify(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sheaves_LocalPredicate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sheaves_Stalks(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
