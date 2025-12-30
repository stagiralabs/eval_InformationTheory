// Lean compiler output
// Module: Mathlib.Algebra.Group.Subgroup.Finite
// Imports: Init Mathlib.Algebra.Group.Subgroup.Basic Mathlib.Algebra.Group.Submonoid.BigOperators Mathlib.Data.Finite.Card Mathlib.Data.Set.Finite.Range
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
LEAN_EXPORT lean_object* l_AddSubgroup_instFintypeSubtypeMemOfDecidablePred___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_fintypeRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_fintypeBot(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_decidableMemRange___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_fintypeRange___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instFintypeSubtypeMemOfDecidablePred___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PLift_fintype___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_decidableMemRange___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_fintypeRange___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_decidableMemRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_instFintypeSubtypeMemOfDecidablePred___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_decidableMemRange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_AddMonoidHom_decidableMemRange___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_fintypeMrange___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_fintypeMrange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_fintypeBot___rarg(lean_object*);
lean_object* l_AddMonoidHom_instFunLike___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_fintypeRange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_fintypeMrange___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_fintypeBot(lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instFintypeSubtypeMemOfDecidablePred___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_fintypeRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_decidableMemRange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_fintypeBot___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_fintypeMrange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_fintypeRange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_fintypeBot___rarg___boxed(lean_object*);
lean_object* l_Set_fintypeRange___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Finset_decidableExistsAndFinset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instFintypeSubtypeMemOfDecidablePred(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_fintypeMrange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_MonoidHom_decidableMemRange___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_decidableMemRange___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_fintypeMrange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_fintypeBot___rarg(lean_object*);
lean_object* l_Subtype_fintype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroup_instFintypeSubtypeMemOfDecidablePred(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_decidableMemRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subgroup_instFintypeSubtypeMemOfDecidablePred___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subtype_fintype___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subgroup_instFintypeSubtypeMemOfDecidablePred(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subgroup_instFintypeSubtypeMemOfDecidablePred___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subgroup_instFintypeSubtypeMemOfDecidablePred___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subgroup_instFintypeSubtypeMemOfDecidablePred(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instFintypeSubtypeMemOfDecidablePred___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subtype_fintype___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instFintypeSubtypeMemOfDecidablePred(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddSubgroup_instFintypeSubtypeMemOfDecidablePred___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_instFintypeSubtypeMemOfDecidablePred___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddSubgroup_instFintypeSubtypeMemOfDecidablePred(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subgroup_fintypeBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_2, 1);
x_4 = lean_box(0);
lean_inc(x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subgroup_fintypeBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subgroup_fintypeBot___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subgroup_fintypeBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subgroup_fintypeBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_fintypeBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_2, 1);
x_4 = lean_box(0);
lean_inc(x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_fintypeBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddSubgroup_fintypeBot___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubgroup_fintypeBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubgroup_fintypeBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_decidableMemRange___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_apply_2(x_2, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT uint8_t l_MonoidHom_decidableMemRange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_decidableMemRange___rarg___lambda__1), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
lean_closure_set(x_5, 2, x_4);
x_6 = l_Finset_decidableExistsAndFinset___rarg(x_2, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_decidableMemRange(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_decidableMemRange___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_decidableMemRange___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_MonoidHom_decidableMemRange___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_decidableMemRange___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_decidableMemRange(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT uint8_t l_AddMonoidHom_decidableMemRange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_decidableMemRange___rarg___lambda__1), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
lean_closure_set(x_5, 2, x_4);
x_6 = l_Finset_decidableExistsAndFinset___rarg(x_2, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_decidableMemRange(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddMonoidHom_decidableMemRange___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_decidableMemRange___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_AddMonoidHom_decidableMemRange___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_decidableMemRange___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_decidableMemRange(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_fintypeMrange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_PLift_fintype___rarg(x_1);
x_5 = l_Set_fintypeRange___rarg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_fintypeMrange(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_fintypeMrange___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_fintypeMrange___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_fintypeMrange(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_fintypeMrange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_PLift_fintype___rarg(x_1);
x_6 = l_Set_fintypeRange___rarg(x_2, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_fintypeMrange(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddMonoidHom_fintypeMrange___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_fintypeMrange___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_fintypeMrange(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_fintypeRange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_PLift_fintype___rarg(x_1);
x_5 = l_Set_fintypeRange___rarg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_fintypeRange(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_fintypeRange___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_fintypeRange___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_fintypeRange(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_fintypeRange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_PLift_fintype___rarg(x_1);
x_6 = l_Set_fintypeRange___rarg(x_2, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_fintypeRange(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AddMonoidHom_fintypeRange___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_fintypeRange___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddMonoidHom_fintypeRange(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subgroup_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_BigOperators(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Finite_Range(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Subgroup_Finite(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subgroup_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Card(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Finite_Range(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
