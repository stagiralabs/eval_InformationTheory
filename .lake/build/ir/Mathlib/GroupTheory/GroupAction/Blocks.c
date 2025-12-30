// Lean compiler output
// Module: Mathlib.GroupTheory.GroupAction.Blocks
// Imports: Init Mathlib.Algebra.Pointwise.Stabilizer Mathlib.Data.Setoid.Partition Mathlib.GroupTheory.GroupAction.Pointwise Mathlib.GroupTheory.GroupAction.SubMulAction Mathlib.GroupTheory.Index Mathlib.Tactic.IntervalCases
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
static lean_object* l_MulAction_BlockMem_instBoundedOrder___closed__1;
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_MulAction_block__stabilizerOrderIso___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_block__stabilizerOrderIso___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAction_BlockMem_instBoundedOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_block__stabilizerOrderIso___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_MulAction_block__stabilizerOrderIso___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_GroupAction_Blocks_0__MulAction_block__stabilizerOrderIso_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso_match__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_block__stabilizerOrderIso___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_BlockMem_instBoundedOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAction_stabilizerAddSubmonoid___at_AddAction_block__stabilizerOrderIso___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_block__stabilizerOrderIso___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_block__stabilizerOrderIso(lean_object*);
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso_match__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAction_stabilizerAddSubmonoid___at_AddAction_block__stabilizerOrderIso___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso_match__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_MulAction_block__stabilizerOrderIso___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_AddAction_stabilizer___at_AddAction_block__stabilizerOrderIso___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_BlockMem_instBoundedOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso_match__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAction_stabilizerAddSubmonoid___at_AddAction_block__stabilizerOrderIso___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_MulAction_block__stabilizerOrderIso___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_MulAction_block__stabilizerOrderIso___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_block__stabilizerOrderIso___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAction_BlockMem_instBoundedOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAction_stabilizer___at_AddAction_block__stabilizerOrderIso___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_MulAction_block__stabilizerOrderIso___spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_GroupAction_Blocks_0__MulAction_block__stabilizerOrderIso_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso_match__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_GroupAction_Blocks_0__MulAction_block__stabilizerOrderIso_match__1_splitter___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddAction_stabilizer___at_AddAction_block__stabilizerOrderIso___spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_GroupAction_Blocks_0__MulAction_block__stabilizerOrderIso_match__1_splitter___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_apply_3(x_1, lean_box(0), lean_box(0), lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_GroupAction_Blocks_0__MulAction_block__stabilizerOrderIso_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l___private_Mathlib_GroupTheory_GroupAction_Blocks_0__MulAction_block__stabilizerOrderIso_match__1_splitter___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_GroupAction_Blocks_0__MulAction_block__stabilizerOrderIso_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Mathlib_GroupTheory_GroupAction_Blocks_0__MulAction_block__stabilizerOrderIso_match__1_splitter(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_MulAction_block__stabilizerOrderIso___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_MulAction_block__stabilizerOrderIso___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulAction_stabilizerSubmonoid___at_MulAction_block__stabilizerOrderIso___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_MulAction_block__stabilizerOrderIso___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulAction_stabilizerSubmonoid___at_MulAction_block__stabilizerOrderIso___spec__2___rarg(x_1, lean_box(0), x_3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_MulAction_block__stabilizerOrderIso___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulAction_stabilizer___at_MulAction_block__stabilizerOrderIso___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulAction_block__stabilizerOrderIso___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulAction_stabilizerSubmonoid___at_MulAction_block__stabilizerOrderIso___spec__2___rarg(x_1, lean_box(0), x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAction_block__stabilizerOrderIso___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_MulAction_block__stabilizerOrderIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_MulAction_block__stabilizerOrderIso___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_closure((void*)(l_MulAction_block__stabilizerOrderIso___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulAction_block__stabilizerOrderIso(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MulAction_block__stabilizerOrderIso___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizerSubmonoid___at_MulAction_block__stabilizerOrderIso___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulAction_stabilizerSubmonoid___at_MulAction_block__stabilizerOrderIso___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulAction_stabilizer___at_MulAction_block__stabilizerOrderIso___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulAction_stabilizer___at_MulAction_block__stabilizerOrderIso___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulAction_block__stabilizerOrderIso___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulAction_block__stabilizerOrderIso___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAction_block__stabilizerOrderIso___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MulAction_block__stabilizerOrderIso___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso_match__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_apply_3(x_1, lean_box(0), lean_box(0), lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_AddAction_block__stabilizerOrderIso_match__1___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddAction_block__stabilizerOrderIso_match__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_2, x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso_match__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddAction_block__stabilizerOrderIso_match__2___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso_match__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddAction_block__stabilizerOrderIso_match__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddAction_stabilizerAddSubmonoid___at_AddAction_block__stabilizerOrderIso___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddAction_stabilizerAddSubmonoid___at_AddAction_block__stabilizerOrderIso___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddAction_stabilizerAddSubmonoid___at_AddAction_block__stabilizerOrderIso___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddAction_stabilizer___at_AddAction_block__stabilizerOrderIso___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddAction_stabilizerAddSubmonoid___at_AddAction_block__stabilizerOrderIso___spec__2___rarg(x_1, lean_box(0), x_3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddAction_stabilizer___at_AddAction_block__stabilizerOrderIso___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddAction_stabilizer___at_AddAction_block__stabilizerOrderIso___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddAction_stabilizerAddSubmonoid___at_AddAction_block__stabilizerOrderIso___spec__2___rarg(x_1, lean_box(0), x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_AddAction_block__stabilizerOrderIso___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_closure((void*)(l_MulAction_block__stabilizerOrderIso___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddAction_block__stabilizerOrderIso___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddAction_stabilizerAddSubmonoid___at_AddAction_block__stabilizerOrderIso___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddAction_stabilizerAddSubmonoid___at_AddAction_block__stabilizerOrderIso___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddAction_stabilizer___at_AddAction_block__stabilizerOrderIso___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddAction_stabilizer___at_AddAction_block__stabilizerOrderIso___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddAction_block__stabilizerOrderIso___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddAction_block__stabilizerOrderIso___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_MulAction_BlockMem_instBoundedOrder___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1, 0, lean_box(0));
lean_ctor_set(x_1, 1, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulAction_BlockMem_instBoundedOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulAction_BlockMem_instBoundedOrder___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulAction_BlockMem_instBoundedOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulAction_BlockMem_instBoundedOrder(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddAction_BlockMem_instBoundedOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulAction_BlockMem_instBoundedOrder___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddAction_BlockMem_instBoundedOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AddAction_BlockMem_instBoundedOrder(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Pointwise_Stabilizer(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Setoid_Partition(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_Pointwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_SubMulAction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Index(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_IntervalCases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_GroupAction_Blocks(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Pointwise_Stabilizer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Setoid_Partition(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_Pointwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_SubMulAction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Index(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_IntervalCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MulAction_BlockMem_instBoundedOrder___closed__1 = _init_l_MulAction_BlockMem_instBoundedOrder___closed__1();
lean_mark_persistent(l_MulAction_BlockMem_instBoundedOrder___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
