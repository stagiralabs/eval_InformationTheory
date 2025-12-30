// Lean compiler output
// Module: Mathlib.Algebra.Category.ModuleCat.Limits
// Imports: Init Mathlib.Algebra.Category.ModuleCat.Basic Mathlib.Algebra.Category.Grp.Limits Mathlib.Algebra.Colimit.Module
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
LEAN_EXPORT lean_object* l_ModuleCat_instAddCommMonoidElemForallObjCompForgetSections___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_addCommGroupObj___rarg(lean_object*, lean_object*);
lean_object* l_Pi_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_directLimitDiagram___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_instModuleElemForallObjCompForgetSections___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_directLimitDiagram(lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_directLimitDiagram___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_addCommGroupObj___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_instAddCommMonoidElemForallObjCompForgetSections___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_sectionsSubmodule___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_sectionsSubmodule(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_sectionsSubmodule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_instModuleElemForallObjCompForgetSections___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_addCommMonoid___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_module___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_mulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_instAddCommMonoidElemForallObjCompForgetSections(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_sectionsSubmodule___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_moduleObj___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_directLimitDiagram___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_instAddCommMonoidElemForallObjCompForgetSections___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_addCommGroupObj(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_directLimitDiagram___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_moduleObj(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_directLimitDiagram___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_moduleObj___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_sectionsSubmodule___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_instModuleElemForallObjCompForgetSections(lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_addCommGroupObj___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_addCommGroupObj(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ModuleCat_addCommGroupObj___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_addCommGroupObj___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ModuleCat_addCommGroupObj(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_moduleObj___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_moduleObj(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ModuleCat_moduleObj___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_moduleObj___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ModuleCat_moduleObj(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_sectionsSubmodule___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_sectionsSubmodule___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_sectionsSubmodule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ModuleCat_sectionsSubmodule___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_sectionsSubmodule___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ModuleCat_sectionsSubmodule___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_sectionsSubmodule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ModuleCat_sectionsSubmodule(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_instAddCommMonoidElemForallObjCompForgetSections___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_instAddCommMonoidElemForallObjCompForgetSections___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_ModuleCat_sectionsSubmodule___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_addMonoid___rarg(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_ModuleCat_instAddCommMonoidElemForallObjCompForgetSections___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_ModuleCat_sectionsSubmodule___rarg(x_1);
lean_dec(x_1);
x_7 = l_Submodule_addCommMonoid___rarg(x_3, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_instAddCommMonoidElemForallObjCompForgetSections(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ModuleCat_instAddCommMonoidElemForallObjCompForgetSections___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_instAddCommMonoidElemForallObjCompForgetSections___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ModuleCat_instAddCommMonoidElemForallObjCompForgetSections(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_instModuleElemForallObjCompForgetSections___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_6 = lean_alloc_closure((void*)(l_ModuleCat_sectionsSubmodule___rarg___lambda__1), 2, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = l_Pi_addMonoid___rarg(x_6);
lean_inc(x_4);
x_8 = lean_alloc_closure((void*)(l_ModuleCat_instAddCommMonoidElemForallObjCompForgetSections___rarg___lambda__1), 2, 1);
lean_closure_set(x_8, 0, x_4);
x_9 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = l_ModuleCat_sectionsSubmodule___rarg(x_4);
lean_dec(x_4);
x_11 = l_Submodule_module___rarg(x_5, x_7, x_9, x_10);
lean_dec(x_10);
lean_dec(x_7);
return x_11;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_instModuleElemForallObjCompForgetSections(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ModuleCat_instModuleElemForallObjCompForgetSections___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_instModuleElemForallObjCompForgetSections___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ModuleCat_instModuleElemForallObjCompForgetSections___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_directLimitDiagram___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_directLimitDiagram___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_3(x_1, x_2, x_3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_directLimitDiagram___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_alloc_closure((void*)(l_ModuleCat_directLimitDiagram___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_1);
x_10 = lean_alloc_closure((void*)(l_ModuleCat_directLimitDiagram___rarg___lambda__2), 4, 1);
lean_closure_set(x_10, 0, x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_directLimitDiagram(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ModuleCat_directLimitDiagram___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_directLimitDiagram___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ModuleCat_directLimitDiagram___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_directLimitDiagram___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_ModuleCat_directLimitDiagram___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Grp_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Colimit_Module(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Limits(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_ModuleCat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Grp_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Colimit_Module(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
