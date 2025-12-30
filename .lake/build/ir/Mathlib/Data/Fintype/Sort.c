// Lean compiler output
// Module: Mathlib.Data.Fintype.Sort
// Imports: Init Mathlib.Data.Finset.Sort Mathlib.Data.Fintype.Basic
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
LEAN_EXPORT lean_object* l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_monoEquivOfFin___rarg___closed__3;
lean_object* l_Equiv_Set_union_x27___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Set_sumCompl___at_finSumEquivOfFinset___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_monoEquivOfFin(lean_object*);
LEAN_EXPORT lean_object* l_finSumEquivOfFinset___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_monoEquivOfFin___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_monoEquivOfFin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Set_sumCompl___at_finSumEquivOfFinset___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_monoEquivOfFin___rarg___closed__2;
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_finSumEquivOfFinset___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_HasCompl_compl____x40_Mathlib_Data_Set_Operations___hyg_13____at_finSumEquivOfFinset___spec__3;
static lean_object* l_monoEquivOfFin___rarg___closed__1;
lean_object* l_Equiv_subtypeEquivProp(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Multiset_decidableMem___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
lean_object* l_Finset_orderIsoOfFin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_Set_union_x27___elambda__2___rarg(lean_object*, lean_object*);
lean_object* l_List_diff___at_Multiset_sub___spec__6___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_finSumEquivOfFinset(lean_object*);
lean_object* l_Equiv_Set_univ(lean_object*);
lean_object* l_Equiv_sumCongr___rarg(lean_object*, lean_object*);
static lean_object* _init_l_monoEquivOfFin___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_subtypeEquivProp(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_monoEquivOfFin___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_Set_univ(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_monoEquivOfFin___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_monoEquivOfFin___rarg___closed__1;
x_2 = l_monoEquivOfFin___rarg___closed__2;
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_monoEquivOfFin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Finset_orderIsoOfFin___rarg(x_2, x_1, x_3, lean_box(0));
x_6 = l_monoEquivOfFin___rarg___closed__3;
x_7 = l_Equiv_trans___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_monoEquivOfFin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_monoEquivOfFin___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_monoEquivOfFin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_monoEquivOfFin___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_HasCompl_compl____x40_Mathlib_Data_Set_Operations___hyg_13____at_finSumEquivOfFinset___spec__3() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT uint8_t l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Multiset_decidableMem___rarg(x_1, x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_Set_union_x27___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_alloc_closure((void*)(l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_closure((void*)(l_Equiv_Set_union_x27___elambda__2___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg___closed__1;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Set_sumCompl___at_finSumEquivOfFinset___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), lean_box(0));
x_4 = l_Equiv_symm___rarg(x_3);
x_5 = l_monoEquivOfFin___rarg___closed__1;
x_6 = l_Equiv_trans___rarg(x_4, x_5);
x_7 = l_monoEquivOfFin___rarg___closed__2;
x_8 = l_Equiv_trans___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Set_sumCompl___at_finSumEquivOfFinset___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Set_sumCompl___at_finSumEquivOfFinset___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_finSumEquivOfFinset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_6);
lean_inc(x_3);
x_9 = l_Finset_orderIsoOfFin___rarg(x_3, x_6, x_4, lean_box(0));
lean_inc(x_6);
lean_inc(x_1);
x_10 = l_List_diff___at_Multiset_sub___spec__6___rarg(x_1, x_2, x_6);
x_11 = l_Finset_orderIsoOfFin___rarg(x_3, x_10, x_5, lean_box(0));
x_12 = l_monoEquivOfFin___rarg___closed__1;
x_13 = l_Equiv_trans___rarg(x_11, x_12);
x_14 = l_Equiv_sumCongr___rarg(x_9, x_13);
x_15 = l_Equiv_Set_sumCompl___at_finSumEquivOfFinset___spec__1___rarg(x_1, x_6);
x_16 = l_Equiv_trans___rarg(x_14, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_finSumEquivOfFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_finSumEquivOfFinset___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_finSumEquivOfFinset___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_finSumEquivOfFinset___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Sort(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Fintype_Sort(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Sort(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_monoEquivOfFin___rarg___closed__1 = _init_l_monoEquivOfFin___rarg___closed__1();
lean_mark_persistent(l_monoEquivOfFin___rarg___closed__1);
l_monoEquivOfFin___rarg___closed__2 = _init_l_monoEquivOfFin___rarg___closed__2();
lean_mark_persistent(l_monoEquivOfFin___rarg___closed__2);
l_monoEquivOfFin___rarg___closed__3 = _init_l_monoEquivOfFin___rarg___closed__3();
lean_mark_persistent(l_monoEquivOfFin___rarg___closed__3);
l_HasCompl_compl____x40_Mathlib_Data_Set_Operations___hyg_13____at_finSumEquivOfFinset___spec__3 = _init_l_HasCompl_compl____x40_Mathlib_Data_Set_Operations___hyg_13____at_finSumEquivOfFinset___spec__3();
l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg___closed__1 = _init_l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg___closed__1();
lean_mark_persistent(l_Equiv_Set_union_x27___at_finSumEquivOfFinset___spec__2___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
