// Lean compiler output
// Module: Mathlib.AlgebraicGeometry.Spec
// Imports: Init Mathlib.Geometry.RingedSpace.LocallyRingedSpace Mathlib.AlgebraicGeometry.StructureSheaf Mathlib.RingTheory.Localization.LocalizationLocalization Mathlib.Topology.Sheaves.SheafCondition.Sites Mathlib.Topology.Sheaves.Functors Mathlib.Algebra.Module.LocalizedModule.Basic
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
lean_object* l_AlgebraicGeometry_structurePresheafInCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_topObj(lean_object*);
static lean_object* l_AlgebraicGeometry_Spec_toTop___closed__4;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_locallyRingedSpaceObj(lean_object*);
extern lean_object* l_CommRingCat_instCategory;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_topMap(lean_object*, lean_object*, lean_object*);
static lean_object* l_AlgebraicGeometry_toSpec_u0393___closed__1;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_toSpec_u0393(lean_object*);
lean_object* l_AlgebraicGeometry_StructureSheaf_toOpen___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_toTop___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_topObj___boxed(lean_object*);
static lean_object* l_AlgebraicGeometry_Spec_toTop___closed__2;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_toTop;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_toTop___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_PrimeSpectrum_comap___at_AlgebraicGeometry_Spec_topMap___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_AlgebraicGeometry_Spec_toTop___closed__3;
lean_object* l_CategoryTheory_Category_opposite___rarg(lean_object*);
lean_object* l_PrimeSpectrum_comap___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_TopologicalSpace_Opens_instCompleteLattice___rarg(lean_object*);
static lean_object* l_AlgebraicGeometry_Spec_toTop___closed__1;
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_sheafedSpaceObj(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_toTop___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_topObj(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_topObj___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgebraicGeometry_Spec_topObj(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PrimeSpectrum_comap___at_AlgebraicGeometry_Spec_topMap___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l_PrimeSpectrum_comap___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_topMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PrimeSpectrum_comap___at_AlgebraicGeometry_Spec_topMap___spec__1(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_toTop___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_toTop___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PrimeSpectrum_comap___at_AlgebraicGeometry_Spec_topMap___spec__1(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_AlgebraicGeometry_Spec_toTop___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CommRingCat_instCategory;
x_2 = l_CategoryTheory_Category_opposite___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_AlgebraicGeometry_Spec_toTop___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AlgebraicGeometry_Spec_toTop___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_AlgebraicGeometry_Spec_toTop___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AlgebraicGeometry_Spec_toTop___lambda__2), 3, 0);
return x_1;
}
}
static lean_object* _init_l_AlgebraicGeometry_Spec_toTop___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AlgebraicGeometry_Spec_toTop___closed__2;
x_2 = l_AlgebraicGeometry_Spec_toTop___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_AlgebraicGeometry_Spec_toTop() {
_start:
{
lean_object* x_1; 
x_1 = l_AlgebraicGeometry_Spec_toTop___closed__4;
return x_1;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_toTop___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgebraicGeometry_Spec_toTop___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_sheafedSpaceObj(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = l_AlgebraicGeometry_structurePresheafInCommRing___rarg(x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_Spec_locallyRingedSpaceObj(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgebraicGeometry_Spec_sheafedSpaceObj(x_1);
return x_2;
}
}
static lean_object* _init_l_AlgebraicGeometry_toSpec_u0393___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_TopologicalSpace_Opens_instCompleteLattice___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicGeometry_toSpec_u0393(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_AlgebraicGeometry_toSpec_u0393___closed__1;
x_3 = lean_ctor_get(x_2, 3);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_AlgebraicGeometry_StructureSheaf_toOpen___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_RingedSpace_LocallyRingedSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicGeometry_StructureSheaf(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_LocalizationLocalization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sheaves_SheafCondition_Sites(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sheaves_Functors(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_LocalizedModule_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicGeometry_Spec(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_RingedSpace_LocallyRingedSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicGeometry_StructureSheaf(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_LocalizationLocalization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sheaves_SheafCondition_Sites(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sheaves_Functors(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_LocalizedModule_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AlgebraicGeometry_Spec_toTop___closed__1 = _init_l_AlgebraicGeometry_Spec_toTop___closed__1();
lean_mark_persistent(l_AlgebraicGeometry_Spec_toTop___closed__1);
l_AlgebraicGeometry_Spec_toTop___closed__2 = _init_l_AlgebraicGeometry_Spec_toTop___closed__2();
lean_mark_persistent(l_AlgebraicGeometry_Spec_toTop___closed__2);
l_AlgebraicGeometry_Spec_toTop___closed__3 = _init_l_AlgebraicGeometry_Spec_toTop___closed__3();
lean_mark_persistent(l_AlgebraicGeometry_Spec_toTop___closed__3);
l_AlgebraicGeometry_Spec_toTop___closed__4 = _init_l_AlgebraicGeometry_Spec_toTop___closed__4();
lean_mark_persistent(l_AlgebraicGeometry_Spec_toTop___closed__4);
l_AlgebraicGeometry_Spec_toTop = _init_l_AlgebraicGeometry_Spec_toTop();
lean_mark_persistent(l_AlgebraicGeometry_Spec_toTop);
l_AlgebraicGeometry_toSpec_u0393___closed__1 = _init_l_AlgebraicGeometry_toSpec_u0393___closed__1();
lean_mark_persistent(l_AlgebraicGeometry_toSpec_u0393___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
