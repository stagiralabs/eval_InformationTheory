// Lean compiler output
// Module: Mathlib.Control.Traversable.Basic
// Imports: Init Mathlib.Data.Option.Defs Mathlib.Control.Functor Batteries.Data.List.Basic Mathlib.Control.Basic
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
LEAN_EXPORT lean_object* l_Sum_traverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_List_instFunctor;
static lean_object* l_instTraversableId___closed__2;
LEAN_EXPORT lean_object* l_ApplicativeTransformation_instCoeFunForallForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ApplicativeTransformation_instInhabited(lean_object*, lean_object*);
static lean_object* l_sequence___rarg___closed__1;
LEAN_EXPORT lean_object* l_instTraversableId___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_instTraversableSum___closed__1;
static lean_object* l_instTraversableOption___closed__1;
LEAN_EXPORT lean_object* l_instTraversableOption;
LEAN_EXPORT lean_object* l_ApplicativeTransformation_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instFunctorOption;
lean_object* l_Option_traverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_sequence___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ApplicativeTransformation_idTransformation___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instTraversableId___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ApplicativeTransformation_idTransformation___elambda__1___rarg___boxed(lean_object*);
static lean_object* l_instTraversableSum___closed__2;
LEAN_EXPORT lean_object* l_ApplicativeTransformation_instCoeFunForallForall(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_traverse(lean_object*, lean_object*);
static lean_object* l_instTraversableList___closed__1;
LEAN_EXPORT lean_object* l_ApplicativeTransformation_instCoeFunForallForall___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ApplicativeTransformation_comp___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ApplicativeTransformation_comp(lean_object*);
static lean_object* l_ApplicativeTransformation_instInhabited___closed__1;
LEAN_EXPORT lean_object* l_instTraversableList;
LEAN_EXPORT lean_object* l_sequence(lean_object*, lean_object*, lean_object*);
static lean_object* l_instTraversableList___closed__2;
lean_object* l_List_traverse___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
static lean_object* l_instTraversableOption___closed__2;
extern lean_object* l_Id_instMonad;
static lean_object* l_Sum_traverse___rarg___closed__1;
LEAN_EXPORT lean_object* l_ApplicativeTransformation_comp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ApplicativeTransformation_idTransformation(lean_object*, lean_object*);
static lean_object* l_instTraversableSum___closed__3;
LEAN_EXPORT lean_object* l_instTraversableId;
LEAN_EXPORT lean_object* l_ApplicativeTransformation_comp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instTraversableOption___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instTraversableList___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_instTraversableId___closed__1;
LEAN_EXPORT lean_object* l_Sum_traverse___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_ApplicativeTransformation_idTransformation___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ApplicativeTransformation_comp___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Sum_instMonad__mathlib(lean_object*);
LEAN_EXPORT lean_object* l_ApplicativeTransformation_instInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instTraversableSum(lean_object*);
LEAN_EXPORT lean_object* l_ApplicativeTransformation_idTransformation___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ApplicativeTransformation_instCoeFunForallForall___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_instCoeFunForallForall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ApplicativeTransformation_instCoeFunForallForall___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_instCoeFunForallForall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ApplicativeTransformation_instCoeFunForallForall(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_idTransformation___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_idTransformation___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ApplicativeTransformation_idTransformation___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_idTransformation(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ApplicativeTransformation_idTransformation___elambda__1), 2, 1);
lean_closure_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_idTransformation___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ApplicativeTransformation_idTransformation___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_idTransformation___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ApplicativeTransformation_idTransformation(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_ApplicativeTransformation_instInhabited___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ApplicativeTransformation_idTransformation___elambda__1), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ApplicativeTransformation_instInhabited___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_instInhabited___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ApplicativeTransformation_instInhabited(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_comp___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_2(x_2, lean_box(0), x_4);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_comp___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_ApplicativeTransformation_comp___elambda__1___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_comp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_ApplicativeTransformation_comp___elambda__1___rarg), 4, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_comp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ApplicativeTransformation_comp___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_comp___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_ApplicativeTransformation_comp___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ApplicativeTransformation_comp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_ApplicativeTransformation_comp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
static lean_object* _init_l_sequence___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_sequence___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_sequence___rarg___closed__1;
x_6 = lean_apply_6(x_4, lean_box(0), x_1, lean_box(0), lean_box(0), x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_sequence(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_sequence___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instTraversableId___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_1(x_5, x_6);
return x_7;
}
}
static lean_object* _init_l_instTraversableId___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instTraversableId___lambda__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_instTraversableId___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Id_instMonad;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = l_instTraversableId___closed__1;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
static lean_object* _init_l_instTraversableId() {
_start:
{
lean_object* x_1; 
x_1 = l_instTraversableId___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_instTraversableId___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_instTraversableId___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_instTraversableOption___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Option_traverse___rarg(x_2, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
static lean_object* _init_l_instTraversableOption___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instTraversableOption___lambda__1), 6, 0);
return x_1;
}
}
static lean_object* _init_l_instTraversableOption___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_instFunctorOption;
x_2 = l_instTraversableOption___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_instTraversableOption() {
_start:
{
lean_object* x_1; 
x_1 = l_instTraversableOption___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_instTraversableList___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_traverse___rarg(x_2, x_5, x_6);
return x_7;
}
}
static lean_object* _init_l_instTraversableList___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instTraversableList___lambda__1), 6, 0);
return x_1;
}
}
static lean_object* _init_l_instTraversableList___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_List_instFunctor;
x_2 = l_instTraversableList___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_instTraversableList() {
_start:
{
lean_object* x_1; 
x_1 = l_instTraversableList___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Sum_traverse___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Sum_traverse___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Sum_traverse___rarg___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Sum_traverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_7, lean_box(0), x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_9);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_apply_1(x_4, x_13);
x_17 = l_Sum_traverse___rarg___closed__1;
x_18 = lean_apply_4(x_15, lean_box(0), lean_box(0), x_17, x_16);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Sum_traverse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Sum_traverse___rarg), 5, 0);
return x_3;
}
}
static lean_object* _init_l_instTraversableSum___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Sum_instMonad__mathlib(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_instTraversableSum___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Sum_traverse), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_instTraversableSum___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_instTraversableSum___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = l_instTraversableSum___closed__2;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instTraversableSum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instTraversableSum___closed__3;
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Option_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Functor(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_List_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Control_Traversable_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Option_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Functor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_List_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ApplicativeTransformation_instInhabited___closed__1 = _init_l_ApplicativeTransformation_instInhabited___closed__1();
lean_mark_persistent(l_ApplicativeTransformation_instInhabited___closed__1);
l_sequence___rarg___closed__1 = _init_l_sequence___rarg___closed__1();
lean_mark_persistent(l_sequence___rarg___closed__1);
l_instTraversableId___closed__1 = _init_l_instTraversableId___closed__1();
lean_mark_persistent(l_instTraversableId___closed__1);
l_instTraversableId___closed__2 = _init_l_instTraversableId___closed__2();
lean_mark_persistent(l_instTraversableId___closed__2);
l_instTraversableId = _init_l_instTraversableId();
lean_mark_persistent(l_instTraversableId);
l_instTraversableOption___closed__1 = _init_l_instTraversableOption___closed__1();
lean_mark_persistent(l_instTraversableOption___closed__1);
l_instTraversableOption___closed__2 = _init_l_instTraversableOption___closed__2();
lean_mark_persistent(l_instTraversableOption___closed__2);
l_instTraversableOption = _init_l_instTraversableOption();
lean_mark_persistent(l_instTraversableOption);
l_instTraversableList___closed__1 = _init_l_instTraversableList___closed__1();
lean_mark_persistent(l_instTraversableList___closed__1);
l_instTraversableList___closed__2 = _init_l_instTraversableList___closed__2();
lean_mark_persistent(l_instTraversableList___closed__2);
l_instTraversableList = _init_l_instTraversableList();
lean_mark_persistent(l_instTraversableList);
l_Sum_traverse___rarg___closed__1 = _init_l_Sum_traverse___rarg___closed__1();
lean_mark_persistent(l_Sum_traverse___rarg___closed__1);
l_instTraversableSum___closed__1 = _init_l_instTraversableSum___closed__1();
lean_mark_persistent(l_instTraversableSum___closed__1);
l_instTraversableSum___closed__2 = _init_l_instTraversableSum___closed__2();
lean_mark_persistent(l_instTraversableSum___closed__2);
l_instTraversableSum___closed__3 = _init_l_instTraversableSum___closed__3();
lean_mark_persistent(l_instTraversableSum___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
