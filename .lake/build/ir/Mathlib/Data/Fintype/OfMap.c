// Lean compiler output
// Module: Mathlib.Data.Fintype.OfMap
// Imports: Init Mathlib.Data.Fintype.Defs Mathlib.Data.Finset.Image
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
LEAN_EXPORT lean_object* l_Fintype_ofBijective___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofMultiset(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Finset_image___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofSubsingleton(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofSurjective(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_Fintype_ofEquiv___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofSubsingleton___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofIsEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofMultiset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofList___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_instPEmpty;
LEAN_EXPORT lean_object* l_Fintype_ofSurjective___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_Fintype_ofEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_instEmpty;
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___rarg(lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofMultiset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofMultiset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_ofMultiset___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofList___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_ofList___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_map___rarg(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fintype_ofBijective___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofSurjective___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_image___rarg(x_1, x_3, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofSurjective(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fintype_ofSurjective___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_Fintype_ofEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_map___rarg(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofBijective___at_Fintype_ofEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fintype_ofBijective___at_Fintype_ofEquiv___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Fintype_ofEquiv___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Multiset_map___rarg(x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Fintype_ofEquiv___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofSubsingleton___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofSubsingleton(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_ofSubsingleton___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofIsEmpty(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
static lean_object* _init_l_Fintype_instEmpty() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Fintype_instPEmpty() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Image(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Fintype_OfMap(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Image(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Fintype_instEmpty = _init_l_Fintype_instEmpty();
lean_mark_persistent(l_Fintype_instEmpty);
l_Fintype_instPEmpty = _init_l_Fintype_instPEmpty();
lean_mark_persistent(l_Fintype_instPEmpty);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
