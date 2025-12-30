// Lean compiler output
// Module: Mathlib.GroupTheory.Complement
// Imports: Init Mathlib.GroupTheory.Index
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
LEAN_EXPORT lean_object* l_AddSubgroup_instInhabitedLeftTransversal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instInhabitedLeftTransversal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_instInhabitedRightTransversal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instInhabitedRightTransversal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instInhabitedLeftTransversal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instInhabitedRightTransversal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_instInhabitedLeftTransversal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_instInhabitedRightTransversal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instInhabitedLeftTransversal(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Subgroup_instInhabitedLeftTransversal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subgroup_instInhabitedLeftTransversal(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instInhabitedLeftTransversal(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instInhabitedLeftTransversal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubgroup_instInhabitedLeftTransversal(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subgroup_instInhabitedRightTransversal(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Subgroup_instInhabitedRightTransversal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subgroup_instInhabitedRightTransversal(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instInhabitedRightTransversal(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instInhabitedRightTransversal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubgroup_instInhabitedRightTransversal(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Index(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Complement(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Index(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
