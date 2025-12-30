// Lean compiler output
// Module: Mathlib.Topology.Sheaves.SheafOfFunctions
// Imports: Init Mathlib.Topology.Sheaves.PresheafOfFunctions Mathlib.Topology.Sheaves.SheafCondition.UniqueGluing
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
LEAN_EXPORT lean_object* l_TopCat_sheafToTypes(lean_object*, lean_object*);
lean_object* l_TopCat_presheafToTypes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_sheafToType___boxed(lean_object*, lean_object*);
lean_object* l_TopCat_presheafToType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_sheafToType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_sheafToTypes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_sheafToTypes(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopCat_presheafToTypes(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopCat_sheafToTypes___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopCat_sheafToTypes(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopCat_sheafToType(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopCat_presheafToType(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopCat_sheafToType___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TopCat_sheafToType(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sheaves_PresheafOfFunctions(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sheaves_SheafCondition_UniqueGluing(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Sheaves_SheafOfFunctions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sheaves_PresheafOfFunctions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sheaves_SheafCondition_UniqueGluing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
