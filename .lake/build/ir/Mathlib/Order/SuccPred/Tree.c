// Lean compiler output
// Module: Mathlib.Order.SuccPred.Tree
// Imports: Init Mathlib.Order.SuccPred.Archimedean Mathlib.Data.Nat.Find Mathlib.Order.Atoms Mathlib.Data.SetLike.Basic
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
lean_object* l_Nat_iterate___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubRootedTree_root___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_IsPredArchimedean_findAtom___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_IsPredArchimedean_findAtom___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_IsPredArchimedean_findAtom___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RootedTree_subtree___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_IsPredArchimedean_findAtom___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_SubRootedTree_root___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubRootedTree_root___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_IsPredArchimedean_findAtom___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsPredArchimedean_findAtom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubRootedTree_root(lean_object*);
LEAN_EXPORT lean_object* l_IsPredArchimedean_findAtom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_IsPredArchimedean_findAtom___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSetLikeSubRootedTree_u03b1(lean_object*);
LEAN_EXPORT lean_object* l_instSetLikeSubRootedTree_u03b1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IsPredArchimedean_findAtom(lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_IsPredArchimedean_findAtom___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_instCoeSortRootedTreeType;
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RootedTree_subtree(lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_IsPredArchimedean_findAtom___spec__2(lean_object*);
lean_object* l_Order_pred___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RootedTree_subtree___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_IsPredArchimedean_findAtom___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RootedTree_subtreeOf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RootedTree_subtree___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_IsPredArchimedean_findAtom___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_5);
lean_inc(x_7);
lean_inc(x_6);
x_9 = l_Nat_iterate___rarg(x_6, x_7, x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = lean_apply_2(x_4, x_9, x_3);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_7, x_12);
lean_dec(x_7);
x_7 = x_13;
x_8 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_IsPredArchimedean_findAtom___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_IsPredArchimedean_findAtom___spec__3___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_IsPredArchimedean_findAtom___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l___private_Batteries_WF_0__WellFounded_fixC___at_IsPredArchimedean_findAtom___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_8, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_IsPredArchimedean_findAtom___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_findX___at_IsPredArchimedean_findAtom___spec__2___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_IsPredArchimedean_findAtom___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l___private_Batteries_WF_0__WellFounded_fixC___at_IsPredArchimedean_findAtom___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_8, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_IsPredArchimedean_findAtom___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_find___at_IsPredArchimedean_findAtom___spec__1___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsPredArchimedean_findAtom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_Order_pred___rarg), 2, 1);
lean_closure_set(x_7, 0, x_2);
x_8 = lean_unsigned_to_nat(0u);
lean_inc(x_7);
lean_inc(x_6);
x_9 = l___private_Batteries_WF_0__WellFounded_fixC___at_IsPredArchimedean_findAtom___spec__3___rarg(x_1, x_2, x_4, x_5, x_6, x_7, x_8, lean_box(0));
lean_dec(x_2);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_9, x_10);
lean_dec(x_9);
x_12 = l_Nat_iterate___rarg(x_7, x_11, x_6);
return x_12;
}
}
LEAN_EXPORT lean_object* l_IsPredArchimedean_findAtom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsPredArchimedean_findAtom___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_IsPredArchimedean_findAtom___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Batteries_WF_0__WellFounded_fixC___at_IsPredArchimedean_findAtom___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_IsPredArchimedean_findAtom___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Nat_findX___at_IsPredArchimedean_findAtom___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_IsPredArchimedean_findAtom___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Nat_find___at_IsPredArchimedean_findAtom___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IsPredArchimedean_findAtom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IsPredArchimedean_findAtom___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
static lean_object* _init_l_instCoeSortRootedTreeType() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_SubRootedTree_root___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SubRootedTree_root(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SubRootedTree_root___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubRootedTree_root___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubRootedTree_root___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SubRootedTree_root___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SubRootedTree_root(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RootedTree_subtree___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RootedTree_subtree(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RootedTree_subtree___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RootedTree_subtree___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RootedTree_subtree___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RootedTree_subtree___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RootedTree_subtree(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instSetLikeSubRootedTree_u03b1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instSetLikeSubRootedTree_u03b1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instSetLikeSubRootedTree_u03b1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RootedTree_subtreeOf(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_IsPredArchimedean_findAtom___rarg(x_5, x_6, lean_box(0), x_7, x_2, x_3);
lean_dec(x_5);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SuccPred_Archimedean(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Find(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Atoms(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_SetLike_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_SuccPred_Tree(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SuccPred_Archimedean(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Find(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Atoms(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_SetLike_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instCoeSortRootedTreeType = _init_l_instCoeSortRootedTreeType();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
